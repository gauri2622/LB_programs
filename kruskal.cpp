#include <iostream>
#include <vector>


int binarySearch(const std::vector<int>& arr, int target, int low, int high) {
    if (low > high) {
      
        return -1;
    }

 
    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
       
        return mid;
    } else if (arr[mid] > target) {
       
        return binarySearch(arr, target, low, mid - 1);
    } else {
        
        return binarySearch(arr, target, mid + 1, high);
    }
}

int main() {
   
    std::vector<int> sortedArray = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 7;

    int result = binarySearch(sortedArray, target, 0, sortedArray.size() - 1);

    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}

