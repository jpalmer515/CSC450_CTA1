#include <iostream>
#include <limits>

int main() {

    std::string firstName;
    std::string lastName;
    std::string address;
    std::string city;
    int zipCode;

    while (true) {
        std::cout << "Enter first name: ";
        std::cin >> firstName;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Wrong inputs type. Please enter a valid first name. ";
        }

        std::cout << "Enter last name: ";
        std::cin >> lastName;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Wrong inputs type. Please enter a valid last name. ";
        }

        std::cout << "Enter address: ";
        std::cin >> address;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Wrong inputs type. Please enter a valid address. ";
        }

        std::cout << "Enter city: ";
        std::cin >> city;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Wrong inputs type. Please enter a valid city. ";
        }

        std::cout << "Enter zip code: ";
        std::cin >> zipCode;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Wrong inputs type. Please enter a valid zip code using only numbers. ";
        }

        std::cout << "1. First Name: " << firstName << "\n";
        std::cout << "2. Last Name: " << lastName << "\n";
        std::cout << "3. Address: " << address << "\n";
        std::cout << "4. City: " << city << "\n";
        std::cout << "5. Zip Code: " << zipCode << "\n";
        return 0;
    }
}
