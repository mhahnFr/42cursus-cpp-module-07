//
// Created by Manuel Hahn on 5/31/22.
//

#include "iter.h"

int main() {
    int iArr[5] = {5, 4, 3, 2, 1};
    iter(iArr, 5, iterFunc<int>);

    std::string strs[5] = {
            "Hello",
            ",",
            "World",
            "!",
            ":D"
    };
    iter(strs, 5, iterFunc<std::string>);
	char cArr[5] = { 'q', 'w', 'e', 'r', 't' };
	iter(cArr, 5, ( void(*)(char))toupper);
}
