/* Question 12: Sum of Numbers from 1 to N
Calculate 1 + 2 + 3 + ... + N using a loop.
*/

#include <iostream>

int main() {
    int n, calc = 0;

    std::cout << "Enter the number: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Enter number greater then 1.\n";
    }
    else {
        for (int i = 1; i <= n; i++) {
            calc += i;
        }
        std::cout << "Sum of numbers from 1 to " << n << " is " << calc << "\n";
    }
    
    return 0;
}
