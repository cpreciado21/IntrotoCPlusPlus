/*
 Project 1
 Name: Claudia Preciado
 Project Name: Area of a Circle
 Class: Dr. Horia Popp MW
 Compiler: XCode
 Date: 10/12/16
 */

#include <iostream>
#define PI 3.14159265

float AreaOfACircle(float radius);

int main () //had to specify type
{
    float area, radius;
    
    std::cout << "Please enter the radius of your circle: \n ";
    std::cin >> radius;
    area = AreaOfACircle(radius);
    std::cout << "\nCircle with radius " << radius << " has area " << area << std::endl;
}

float AreaOfACircle(float radius)
{
    
    return PI*radius*radius;
    
}
