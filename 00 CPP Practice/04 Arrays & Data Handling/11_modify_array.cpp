/* Question 11: Modify an array through a function
    Write doubleElements(int arr[], int size) to multiply every element by two. 
    Call it and print the array before and after the function call. 
    Explain why the original array changes even though you didn't pass each integer by reference.
*/

#include <iostream>

// An array parameter provides access to the original array's elements.
// The function can modify those elements, so the changes are visible in main().

void doubleElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;

    std::cout << "Array before: ";
    for (int x : arr) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    doubleElements(arr, size);

    std::cout << "Array after: ";
    for (int x : arr) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    return 0;
}
