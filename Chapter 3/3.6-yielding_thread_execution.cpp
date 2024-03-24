#include <iostream>
#include <random>
#include <string>
#include <syncstream>
#include <thread>

namespace {
std::osyncstream sync_out(std::cout);
int val = 0;
std::mutex mtx;
}

int main() {
    auto work = [&](const std::string& name) {
        while (true) {
            bool work_to_do = rand() % 2;
            if (work_to_do) {
                // Do some work: Active wait for 3 second
                sync_out << name << ": working" << std::endl;

                std::lock_guard<std::mutex> lock(mtx);
                for (auto start = std::chrono::steady_clock::now(), now = start; now < start + std::chrono::seconds{3};
                     now = std::chrono::steady_clock::now()) {
                }
            } else {
                // Let other threads do some work
                sync_out << name << ": yielding" << std::endl;
                std::this_thread::yield();
            }
        }
    };

    std::jthread t1(work, "t1");
    std::jthread t2(work, "t2");

    sync_out << "Exit main thread" << std::endl;

    return 0;
}