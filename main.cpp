/*<aside>
💡 **Q1.** Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

**Example:**
Input: nums = [2,7,11,15], target = 9
Output0 [0,1]
*/


</aside>
#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    std::vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (numMap.find(complement) != numMap.end()) {
            result.push_back(numMap[complement]);
            result.push_back(i);
            break;
        }

        numMap[nums[i]] = i;
    }

    return result;
}

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> indices = twoSum(nums, target);

    if (indices.size() == 2) {
        std::cout << "Indices: " << indices[0] << ", " << indices[1] << std::endl;
    } else {
        std::cout << "No two elements in the array add up to the target." << std::endl;
    }

    return 0;
}
