/*
Problem Statement:

Given a vector of integers, write a program that does the following:

Finds the maximum element in the vector.
Finds the minimum element in the vector.
Finds the average of all elements in the vector.
Prints the elements of the vector in reverse order.
Answer:
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {3, 7, 1, 9, 4, 6, 2, 8, 5};

    // Find the maximum element in the vector
    int max = *std::max_element(numbers.begin(), numbers.end());
    std::cout << "The maximum element is: " << max << std::endl;

    // Find the minimum element in the vector
    int min = *std::min_element(numbers.begin(), numbers.end());
    std::cout << "The minimum element is: " << min << std::endl;

    // Find the average of all elements in the vector
    int sum = 0;
    for (int number : numbers) {
        sum += number;
    }
    double avg = (double)sum / numbers.size();
    std::cout << "The average of all elements is: " << avg << std::endl;

    // Print the elements of the vector in reverse order
    std::cout << "Elements of the vector in reverse order: ";
    for (int i = numbers.size() - 1; i >= 0; i--) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
