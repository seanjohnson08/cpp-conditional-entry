#include "addtwonumbers.h"
#include <iostream>

int addTwoNumbers(int a, int b) {
    return a + b;
}

#ifdef MAIN
#if MAIN == ADDTWONUMBERS
int main() {
    std::cout << "Calling main from addtwonumbers.cpp " << addTwoNumbers(2, 3) << std::endl;
    return 0;
}
#endif
#endif