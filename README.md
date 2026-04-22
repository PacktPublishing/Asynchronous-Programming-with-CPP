# Asynchronous Programming with C++

<a href="https://www.packtpub.com/en-in/product/asynchronous-programming-with-c-9781835884256"><img src="https://content.packt.com/_/image/original/B22219/cover_image.jpg" alt="Shipping & Fee Details" height="256px" align="right"></a>

This is the code repository for [Asynchronous Programming with C++](https://www.packtpub.com/en-in/product/asynchronous-programming-with-c-9781835884256), published by Packt.

**Build blazing-fast software with multithreading and asynchronous programming for ultimate efficiency**

## What is this book about?
As hardware advancements continue to accelerate, bringing greater memory capacity and more CPU cores, software must evolve to adapt to efficiently use all available resources and reduce idle CPU cycles. 
In this book, two seasoned software engineers with about five decades of combined experience will teach you how to implement concurrent and asynchronous solutions in C++.

* Explore the different parallel paradigms and know when to apply them
* Acquire deep knowledge of thread management and safety mechanisms
* Understand asynchronous programming in C++, including coroutines
* Leverage network asynchronous programming by using Boost.Asio and Boost.Cobalt
* Add proven performance and optimization techniques to your toolbox
* Find out how to test and debug asynchronous software

If you feel this book is for you, get your [copy](https://www.amazon.com/Asynchronous-Programming-blazing-fast-multithreading-asynchronous/dp/1835884245/) today!

<a href="https://www.packtpub.com/?utm_source=github&utm_medium=banner&utm_campaign=GitHubBanner"><img src="https://raw.githubusercontent.com/PacktPublishing/GitHub/master/GitHub.png" 
alt="https://www.packtpub.com/" border="5" /></a>

## Instructions and Navigations
All of the code is organized into folders. For example, Chapter02.

The code will look like the following:
```
#include <iostream>
#include <thread>

int main() {
     std::thread t1([]() {
          for (int i = 0; i < 100; ++i) {
               std::cout << "1 " << "2 " << "3 " << "4 "
                         << std::endl;
          }
     });
```
**Following is what you need for this book:**
This book is for developers who have some experience using C++, regardless of their professional field. If you want to improve your C++ skills and learn how to develop high-performance software using the latest modern C++ features, this book is for you.

With the following software and hardware list you can run all code files present in the book (Chapters 3-13).

### Software and Hardware List

| Chapter  | Software required                   | OS required                        |
| -------- | ------------------------------------| -----------------------------------|
| 3-13| C++20 and C++23| Linux (tested in Ubuntu 24.04)|
| 3-13| GCC 14.2| macOS (tested in macOS Sonoma 14.x)|
| 3-13| Clang 18| Windows 11|
| 3-13| Boost 1.86|   |
| 3-13| GDB 15.1|     |

### Related products
* Mastering Go - Third Edition [[Packt]](https://www.packtpub.com/en-in/product/mastering-go-third-edition-9781801073011) [[Amazon]](https://www.amazon.in/dp/1801079315)

* Go Programming - From Beginner to Professional - Second Edition [[Packt]](https://www.packtpub.com/en-in/product/go-programming-from-beginner-to-professional-9781803246307) [[Amazon]]()

## Get to Know the Authors
**Javier Reguera-Salgado** is a seasoned software engineer with 19+ years of experience, specializing in high-performance computing, real-time data processing, and communication protocols.
Skilled in C++, Python, and a variety of other programming languages and technologies, his work spans low-latency distributed systems, mobile apps, web solutions, and enterprise products. He has contributed to research centers, start-ups, blue-chip companies, and quantitative investment firms in Spain and the UK.
Javier holds a PhD cum laude in high-performance computing from the University of Vigo, Spain.

**Juan Antonio Rufes** is a software engineer with 30 years of experience, specializing in low-level and systems programming, primarily in C, C++, 0x86 assembly, and Python.
His expertise includes Windows and Linux optimization, Windows kernel drivers for antivirus and encryption, TCP/IP protocol analysis, and low-latency financial systems such as smart order routing and FPGA-based trading systems. He has worked with software companies, investment banks, and hedge funds.
Juan holds an MSc in electrical engineering from the Polytechnic University of Valencia, Spain.


