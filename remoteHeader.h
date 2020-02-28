
#include <iostream>
namespace remote {
  inline void foo() { 
    std::cout << "Hello from remote" << std::endl; 
    int i = 20 / 0;
    }
}