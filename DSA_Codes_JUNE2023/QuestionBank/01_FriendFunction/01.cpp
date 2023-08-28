// Question 1:
// Define a class Rectangle with private attributes length and width. Create a friend function named calculateArea that calculates the area of the rectangle.

// #include <iostream>

// class Rectangle {
// private:
//     double length;
//     double width;

// public:
//     void setDimensions(double l, double w) {
//         length = l;
//         width = w;
//     }

//     friend double calculateArea(const Rectangle& r);
// };

// double calculateArea(const Rectangle& r) {
//     return r.length * r.width;
// }

// int main() {
//     Rectangle rect;
//     double length, width;

//     std::cout << "Enter length: ";
//     std::cin >> length;

//     std::cout << "Enter width: ";
//     std::cin >> width;

//     rect.setDimensions(length, width);
//     double area = calculateArea(rect);

//     std::cout << "Area: " << area << std::endl;

//     return 0;
// }

//--------------------------------------------------------------------------------------