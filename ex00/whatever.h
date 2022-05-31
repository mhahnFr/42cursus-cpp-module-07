//
// Created by Manuel Hahn on 5/30/22.
//

#ifndef EX00_WHATEVER_H
#define EX00_WHATEVER_H

template<typename T>
void swap(T & first, T & second) {
    T tmp = first;
    first = second;
    second = tmp;
}

template<typename T>
const T & min(const T & first, const T & second) {
    return second <= first ? second : first;
}

template<typename T>
const T & max(const T & first, const T & second) {
    return second >= first ? second : first;
}

#endif //EX00_WHATEVER_H
