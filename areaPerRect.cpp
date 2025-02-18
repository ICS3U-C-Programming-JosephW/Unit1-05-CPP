// Copyright (c) 2025. Joseph Wondimagnehu. All rights reserved.
//
// Created by: Joseph Wondimagnehu
// Date: Feb. 18, 2025
// This program calculates the area and perimeter of any rectangle.

#include <iostream>
using std::cout;
using std::endl;

/* A function stating the area and perimeter of a rectangle. 
This returns nothing, so it is a void type. */
void calcAreaPerimeter(float l, float w) {
    cout << "If a rectangle has the dimensions: \n";
    cout << l << "cm x " << w << "cm \n\n";
    cout << "The area is: " << (l * w) << "cm^2 \n";
    cout << "The perimeter is: " << (2 * (l + w)) << "cm \n";
}

int main() {
    // Call this function with an example 13cm x 12cm rectangle.
    calcAreaPerimeter(13, 12);
}
