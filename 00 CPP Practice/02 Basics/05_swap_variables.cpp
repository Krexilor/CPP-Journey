/* Question 5: Swap Variables
Store two values, swap them, and print the values before and after swapping. Try solving it using a third variable first.
*/

#include <iostream>

int main() {
    int val1 = 2;
    int val2 = 3;
    int tempVal;

    std::cout << "Values before swapping\n";
    std::cout << "Val 1: " << val1 << "\nVal 2: " << val2 << "\n\n";

    tempVal = val1;      // Assign value 1 to temp variable
    val1 = val2;         // Change value 1 to value 2 with assignment
    val2 = tempVal;      // Change value 2 with temp variable with assignment

    std::cout << "Values after swapping\n";
    std::cout << "Val 1: " << val1 << "\nVal 2: " << val2 << "\n\n";

    return 0;
}
