#include <iostream>
#include <vector>
#include <string>

int main() {
    
    std::string input = "turpentine and turtles";
    std::vector<char> vowels;

    vowels.push_back('a');
    vowels.push_back('e');
    vowels.push_back('i');
    vowels.push_back('o');
    vowels.push_back('u');

    std::vector<char> result;

    // std::cout << "Input size is " << input.size() << "\n";
    // std::cout << "Vowels size is " << vowels.size() << "\n";
    // std::cout << "Result size is " << result.size() << "\n";

    for (int i = 0; i < input.size(); i++) {

        // std::cout << "Running for loop on: " << input[i] << "\n";

        for (int v = 0; v < vowels.size(); v++) {

            if (input[i] == vowels[v]) {

                result.push_back(vowels[v]);

            }

        }

        if (input[i] == 'e') {

            result.push_back('e');

        }

        if (input[i] == 'u') {

            result.push_back('u');
            
        }

    }

    for (int i = 0; i < result.size(); i++) {

        std::cout << result[i];

    }

    std::cout << "\n";
  
}