/* Question 6: Use a const reference
    Write printFullName(const std::string& name) to print a person's name without copying the string or modifying the original.
    Call the function with a string variable. Add a comment explaining why const std::string& is appropriate here.
*/

#include <string>
#include <iostream>

void printFullName(const std::string& name) {
    std::cout << "Your name is " << name << "\n";
}

int main() {
    std::string name;

    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);

    printFullName(name);

    /*
        const std::string& avoid copying the string and prevents
        this function from modifying the original string.
    */

    return 0;
}
