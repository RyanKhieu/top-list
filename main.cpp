#include <iostream>
#include <string>

int main() {
    int listSize;
    std::cout << "How many items should your list have?" << std::endl;
    std::cin >> listSize;
    std::cin.ignore();
    std::string list[listSize];
    for (int i = 0; i < listSize; i++) {
        std::cout << "Enter item " << i + 1 << ": ";
        std::getline(std::cin, list[i]);
    }
    std::cout << "Your list is: " << std::endl;
    for (int i = 0; i < listSize; i++) {
        std::cout << i + 1 << ". " << list[i] << std::endl;
    }
    std::cout << std::endl;
    return 0;
}