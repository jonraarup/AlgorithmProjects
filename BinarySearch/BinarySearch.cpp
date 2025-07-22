// A simple function to demonstrate the Binary Search Algorithm  
#include <array>  
#include <iostream>  
  
const std::array<int, 10> simpleList = {1,2,3,4,5,6,7,8,9,10};  
  
int searchFunction(std::array<int, 10>const & list, const int searchValue){  
  
    static int low = 0;  
    static int high = simpleList.size() - 1;  
  
    if (low > high) {  
        return -1;  
    }
    // Mid constant
    const int mid = low + (high - low) / 2;  
      
    if (list[mid] == searchValue) {  
        return mid;  
    } if (list[mid] > searchValue){  
        high = mid - 1;  
        return searchFunction(list, searchValue);  
    } low = mid + 1;  
    return searchFunction(list, searchValue);  
}  
  
int main() {  
      
    std::cout << "Binary Search Algorithm\n";  
    std::cout << "Please enter a number to search for: ";  
    int userInput;  
      
    std::cin >> userInput;  
    std::cout << searchFunction(simpleList, userInput);  
      
    return 0;  
}