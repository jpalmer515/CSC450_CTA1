#include <iostream>

int main() {

    std::string firstName;
    std::string lastName;
    std::string address;
    std::string city;
    int zipCode;

    std::cout << "Enter first name: ";
    std::cin >> firstName;
    while (!(std::cin >> firstName)) {
        std::cin.clear();
        std::cin.ignore(100, '\n');
        std::cout << "Please enter a valid first name: ";
        std::cin >> firstName;
    }

    std::cout << "Enter last name: ";
    std::cin >> lastName;

    std::cout << "Enter address: ";
    std::cin >> address;

    std::cout << "Enter city: ";
    std::cin >> city;

    std::cout << "Enter zip code: ";
    std::cin >> zipCode;

    std::cout << "1. First Name: " << firstName << "\n";
    std::cout << "2. Last Name: " << lastName << "\n";
    std::cout << "3. Address: " << address << "\n";
    std::cout << "4. City: " << city << "\n";
    std::cout << "5. Zip Code: " << zipCode << "\n";
}
