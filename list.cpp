// Copyright (c) 2020 Ahmad El-khawaldeh All rights reserved.
//
// Created by: Ahmad El-khawaldeh
// Created on: DEC 2021
// This program uses an array


#include <iostream>
using namespace std;

int main() {
    srand((unsigned) time(0));
    int random, sum;
    int total[10];
    // finding 10 random numbers
    for (int number = 0; number< 10; number++) {
        random = (rand() % 100) + 1;
        cout <<"The random number is: "<< random << endl;
        // adding it to array
        total[number] = random;
        // finding sum of all random numbers
        sum+=total[number];
    }
    // finding average
    int avg = sum/10;
    // printing result
    cout << endl << "The average is: " << avg;
}
