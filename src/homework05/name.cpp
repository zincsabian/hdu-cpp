#include <iostream>
#include <string>

int main() {
    std::string firstName, lastName, birthYear;
    
    std::cout << "Enter your first name: ";
    std::cin >> firstName;

    std::cout << "Enter your last name: ";
    std::cin >> lastName;

    std::cout << "Enter your birth year: ";
    std::cin >> birthYear;

    char firstInitial = firstName[0];
    std::string salutation = std::string("Dear ") + firstInitial + ". " + lastName + ",\n";
    std::string message = "Thank you for your message! We appreciate the wonderful " +
                          std::to_string(2022 - std::stoi(birthYear)) + " years for your growing up. " +
                          "We will reply soon.\nBest wishes.";

    std::cout << salutation << message << std::endl;

    return 0;
}
