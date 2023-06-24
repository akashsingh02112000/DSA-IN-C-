/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

int removeElement(std::vector<int>& nums, int val) {
    int k = 0; // Count of elements not equal to val

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main() {
    std::vector<int> nums = {3, 2, 2, 3}; // Example input array
    int val = 3; // Value to be removed

    int k = removeElement(nums, val);

    std::cout << "Number of elements not equal to " << val << ": " << k << std::endl;
    std::cout << "Modified array: ";
    for (int i = 0; i < k; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
