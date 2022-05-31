//
// Created by Manuel Hahn on 5/31/22.
//

#include "Array.h"
#include <iostream>

int main() {
    Array<int> iArr(5);
    for (unsigned int i = 0; i < 5; ++i) {
        iArr[i] = (int) i;
    }
    Array<int> iArr2;
    iArr2 = iArr;
    unsigned int i;
    for (i = 0; i< 5; ++i) {
        iArr2[i] = (int) (i*i);
    }
    while (i --> 0) {
        std::cout << "iArr[" << i << "] = " << iArr[i]
                  << "; iArr2[" << i << "] = " << iArr2[i]
                  << std::endl;
    }
    Array<std::string> strArr(5);
    try {
        for (i = 0; i <= strArr.size(); ++i) {
            strArr[i] = "Just another string";
        }
    } catch (std::out_of_range &ex) {
        std::cerr << ex.what() << std::endl;
    }
    while (i --> 0) {
        std::cout << "strArr[" << i << "] = " << strArr[i] << std::endl;
    }
}
