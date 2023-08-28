// Write a C++ class called "Student" that has three private member variables: "name", "age", and "gender". The class should have a constructor that initializes these member variables and a public member function called "displayInfo" that prints out the student's name, age, and gender.
// Copy code
// class Student {
//   private:
//     string name;
//     int age;
//     string gender;

//   public:
//     Student(string name, int age, string gender) {
//       this->name = name;
//       this->age = age;
//       this->gender = gender;
//     }

//     void displayInfo() {
//       cout << "Name: " << name << endl;
//       cout << "Age: " << age << endl;
//       cout << "Gender: " << gender << endl;
//     }
// };
// Write a C++ class called "Rectangle" that has two private member variables: "length" and "width". The class should have a constructor that initializes these member variables and public member functions called "getArea" and "getPerimeter" that return the rectangle's area and perimeter, respectively.
// Copy code
// class Rectangle {
//   private:
//     int length;
//     int width;

//   public:
//     Rectangle(int length, int width) {
//       this->length = length;
//       this->width = width;
//     }

//     int getArea() {
//       return length * width;
//     }

//     int getPerimeter() {
//       return 2 * (length + width);
//     }
// };
// Write a C++ class called "Car" that has a private member variable called "speed" and a public member function called "accelerate" that increases the speed by 10 every time it is called. The class should also have a public member function called "getSpeed" that returns the current speed of the car.
// Copy code
// class Car {
//   private:
//     int speed;

//   public:
//     Car() {
//       speed = 0;
//     }

//     void accelerate() {
//       speed += 10;
//     }

//     int getSpeed() {
//       return speed;
//     }


//  Write a C++ program to check whether a given number is prime or not.

// Copy code
// #include <iostream>
// using namespace std;

// bool isPrime(int num)
// {
//     if (num <= 1)
//     {
//         return false;
//     }
//     for (int i = 2; i <= num / 2; i++)
//     {
//         if (num % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (isPrime(num))
//     {
//         cout << num << " is a prime number." << endl;
//     }
//     else
//     {
//         cout << num << " is not a prime number." << endl;
//     }
//     return 0;
// }