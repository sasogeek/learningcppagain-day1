#include <iostream>
#include <string>


int main() {
    std::string my_string {"hello world\n"};
    std::cout << my_string;
    int x;
    int y;
    int z;
    std::cout << "Enter 3 numbers: ";
    std::cin >> x;
    std::cin.clear();
    std::cin >> y;
    std::cin.clear();
    std::cin >> z;
    std::cout << "x = " << x << "\n";
    std::cout << "y = " << y << "\n";
    std::cout << "z = " << z << "\n";
    return 0;
}
