#include <iostream>

#include <ctime>

#include <vector>

int main() {
    srand(time(NULL));
    const std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVQXYZabcdefghijklmnopqrstuvwxyz";
    const std::string numbers = "123456789";
    const std::string symbols = "!@#$%^&*()<>?:";

    std::string password;

    int num;

    std::string final = "";

    char response;

    int length;

    std::cout << "Do you want your password to have characters? (y/n): ";
    std::cin >> response;
    (response == 'y') ? (final += alphabet) : final += "";

    std::cout << "Do you want your password to have numbers? (y/n): ";
    std::cin >> response;
    (response == 'y') ? (final += numbers) : final += "";

    std::cout << "Do you want your password to have symbols? (y/n): ";
    std::cin >> response;

    std::cout << "How long do you want your password to be? (y/n): ";
    std::cin >> length;

    (response == 'y') ? (final += symbols) : final += "";

    std::cout << "How many passwords would you like to generate? (y/n): ";
    std::cin >> num;

    std::vector <std::string> passList;

    for (int j = 1; j <= num; j++) {

        for (int i = 0; i < length; i++) {
            int randNum;

            randNum = std::rand() % final.length();

            password += final[randNum];

            if (password.length() == length) {
                passList.push_back(password);
                password = "";
            }
        }

    }
    int j = 1;
    for (auto a : passList) {

        std::cout << j << ": " << a << "\n";
        j++;
    }

}
