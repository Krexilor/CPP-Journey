/* Question 8: Count occurrences
    Given an array and a target number, count how many times the target appears.
    Unlike Question 6, you must examine the entire array.
*/

#include <iostream>

int main() {
    int arr[10] = {23, 34, 45, 34, 23, 34, 65, 76, 76, 23};
    int count = 0, num;

    std::cout << "Array: ";
    for (int n : arr) {
        std::cout << n << " ";
    }

    std::cout << "\nEnter number to count occurrence: ";
    std::cin >> num;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    std::cout << "\nOccurrence of " << num << ": " << count << "\n";

    return 0;
}
