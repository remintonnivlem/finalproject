#include <iostream>

int main() {
    int age = 20;
    std::cout << "Your current age is: " << age << std::endl;

    if (age >= 18) {
        std::cout << "You are an adult." << std::endl;
    } else {
        std::cout << "You are a minor." << std::endl;
    }

    return 0;
}
