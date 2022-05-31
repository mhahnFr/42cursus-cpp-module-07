//
// Created by Manuel Hahn on 5/31/22.
//

#ifndef EX02_ARRAY_H
#define EX02_ARRAY_H

#include <stdexcept>
#include <string>

template<typename T> class Array {
public:
    Array(): fill(0) {
        content = new T[0];
    }

    explicit Array(unsigned int size): fill(size) {
        content = new T[fill];
    }

    Array(const Array<T> & other): fill(other.size()) {
        content = new T[fill];
        for (int i = 0; i < fill; ++i) {
            content[i] = other[i];
        }
    }

    ~Array() {
        delete[] content;
    }

    unsigned int size() const {
        return fill;
    }

    T & operator[](unsigned int idx) const {
        if (idx < 0 || idx >= size()) {
            throw std::out_of_range("Index " + std::to_string(idx) + " out of range for size " + std::to_string(idx));
        }
        return content[idx];
    }

    Array & operator=(const Array<T> & other) {
        if (this != &other) {
            fill = other.size();
            delete[] content;
            content = new T[fill];
            for (unsigned int i = 0; i < fill; ++i) {
                content[i] = other[i];
            }
        }
        return *this;
    }

private:
    unsigned int fill;
    T * content;
};

#endif //EX02_ARRAY_H
