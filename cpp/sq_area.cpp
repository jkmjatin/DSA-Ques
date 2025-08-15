#include<iostream>

int main(int argc, char const *argv[])
{
    int a, area;
    
    std::cout << "Enter side of the square: ", std::cin >> a;
    area = a*a;
    std::cout << "Area of the square = " << area << " unit sq.";

    return 0;
}
