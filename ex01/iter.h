//
// Created by Manuel Hahn on 5/31/22.
//

#ifndef EX01_ITER_H
#define EX01_ITER_H

#include <iostream>

/*
 * This is an example iteration function.
 */
template<typename T>
void iterFunc(T t) {
    std::cout << t << std::endl;
}

template<typename T>
void iter(T * array, unsigned long size, void iterFunc(T)) {
    for (unsigned long i = 0; i < size; ++i) {
        iterFunc(array[i]);
    }
}

#endif //EX01_ITER_H
