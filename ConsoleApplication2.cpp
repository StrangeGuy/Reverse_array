// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::string arr [20];
    std::string tmp{};
    for (int i = 0; i < 19; i++) {
        std::cin >> arr[i];
    }
    std::cout << std::endl;

    for (int i = 0, j = 19 ; i < j; i++, j--) {
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }

    for (std::string s : arr) {
        std::cout << s << '\t';
    }
    
}

