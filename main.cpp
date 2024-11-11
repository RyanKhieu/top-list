#include <iostream>
#include <string>

std::string category[5] = {"Movies", "TV Shows", "Songs", "Youtubers", "Video Games"};

int main() {
    int listSize;
    std::cout << "What category would you like to make a list for?" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << i + 1 << ". " << category[i] << std::endl;
    }
    int categoryChoice;
    std::cin >> categoryChoice;
    std::cout << "How many items should your list have?" << std::endl;
    std::cin >> listSize;
    std::cin.ignore();
    std::string list[listSize];
    for (int i = 0; i < listSize; i++) {
        std::cout << "Enter item " << i + 1 << ": ";
        std::getline(std::cin, list[i]);
    }
    std::cout << "Your list of the top " << listSize << " " << category[categoryChoice-1] << ": " << std::endl;
    for (int i = 0; i < listSize; i++) {
        std::cout << i + 1 << ". " << list[i] << std::endl;
    }
    return 0;
}