// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved

// Created by Jonathan Pasco-Arnone
// Created on January 2021
// This program reverses an array (made to only work with integers)

#include <iostream>
#include <array>

template<size_t N>
std::array<int, N> reversingArray(std::array<int, N> array) {
    // this function reverses an array

    std::array<int, 5> reversedArray;
    int loopCounter = 4;  // can't use len in this so I will have to just use 5
    int oppositeLoopCounter = 0;

    while (loopCounter != -1) {
        reversedArray[oppositeLoopCounter] = array[loopCounter];
        loopCounter--;
        oppositeLoopCounter++;
    }
    return reversedArray;
}

main() {
    // This functions obtains inputs from the user and puts them into an array

    std::array<int, 5> array;
    std::array<int, 5> reversedArray;
    int x = 2;
    std::string array_digit_1_str;
    std::string array_digit_2_str;
    std::string array_digit_3_str;
    std::string array_digit_4_str;
    std::string array_digit_5_str;
    int array_digit_1;
    int array_digit_2;
    int array_digit_3;
    int array_digit_4;
    int array_digit_5;

    std::cout << "" << std::endl;
    std::cout << "Input 1: ";
    std::cin >> array_digit_1_str;

    std::cout << "" << std::endl;
    std::cout << "Input 2: ";
    std::cin >> array_digit_2_str;

    std::cout << "" << std::endl;
    std::cout << "Input 3: ";
    std::cin >> array_digit_3_str;

    std::cout << "" << std::endl;
    std::cout << "Input 4: ";
    std::cin >> array_digit_4_str;

    std::cout << "" << std::endl;
    std::cout << "Input 5: ";
    std::cin >> array_digit_5_str;

    try {
        array_digit_1 = std::stoi(array_digit_1_str);
        array_digit_2 = std::stoi(array_digit_2_str);
        array_digit_3 = std::stoi(array_digit_3_str);
        array_digit_4 = std::stoi(array_digit_4_str);
        array_digit_5 = std::stoi(array_digit_5_str);

        array[0] = array_digit_1;
        array[1] = array_digit_2;
        array[2] = array_digit_3;
        array[3] = array_digit_4;
        array[4] = array_digit_5;

        reversedArray = reversingArray(array);
        std::cout << "" << std::endl;
        std::cout << "The array in reverse is ";
        for (int loopCounter = 0; loopCounter < 5; loopCounter++) {
            std::cout << reversedArray[loopCounter] << " ";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input, Try Again";
        std::cout << "" << std::endl;
    }
}

/* NOTE

I am aware that I did this program in a poorly organized and long way.
My future programs will not be as unfortunately planned.
Even though the program is not made in an easy fashion, it still works great.

*/
