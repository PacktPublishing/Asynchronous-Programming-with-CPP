#include <boost/asio.hpp>
#include <boost/asio/dispatch.hpp>
#include <iostream>

int main() {
    boost::asio::io_context io_context;

    boost::asio::post( io_context, [] { std::cout << "This will always run asynchronously.\n"; });

    boost::asio::dispatch(io_context, [] { std::cout << "This might run immediately or be queued.\n"; });

    io_context.run();
    return 0;
}
