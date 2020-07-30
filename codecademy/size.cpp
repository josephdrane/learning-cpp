#include <iostream>
#include <vector>

int main() {
    // std::vector<std::string> grocery;
    std::vector<std::string> grocery = {"Milk", "Eggs"};
    
    // Add more 
    grocery.push_back("Broccoli");
    grocery.push_back("Ribeye");
    grocery.push_back("Cookies");
    grocery.push_back("Bacon");

    // output size
    std::cout << grocery.size() << "\n";  
  
}