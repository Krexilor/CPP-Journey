/* Question 4: Temperature Converter
Convert a temperature from Celsius to Fahrenheit.
Formula: F = (9/5)C + 32
*/

#include <iostream>

int main() {
    float F, C;

    std::cout << "Enter temperature in celsius: ";
    std::cin >> C;

    F = ((9.0f / 5.0f) * C) + 32;

    std::cout << "\n" << C << " celsius is equal to " << F << " fehrenheit";

    return 0;
}
