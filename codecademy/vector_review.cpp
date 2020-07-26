#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers_vector(6);
    numbers_vector.push_back(2);
    numbers_vector.push_back(4);
    numbers_vector.push_back(3);
    numbers_vector.push_back(6);
    numbers_vector.push_back(1);
    numbers_vector.push_back(9);

    int sum_of_even_numbers = 0;
    int prod_of_odd_numbers = 0;

    // sum of even loop numbers
    for (int i = 0; i < numbers_vector.size(); i++) {
        int even_test = numbers_vector[i] % 2;
        bool is_even = even_test == 0;
        if (is_even) {
            sum_of_even_numbers = sum_of_even_numbers + numbers_vector[i];
        }
    }
    std::cout << "Sum Of Even: " << sum_of_even_numbers << "\n";

    // product of odd numbers
    for (int i = 0; i < numbers_vector.size(); i++) {
        int odd_test = numbers_vector[i] % 2;
        bool is_odd = odd_test == 1;
        if (numbers_vector[i] == 0) {
            prod_of_odd_numbers = 1;
        }
        else if (is_odd) {
            prod_of_odd_numbers = prod_of_odd_numbers * numbers_vector[i];
        }
    }
    std::cout << "Product of Odd Numbers: " << prod_of_odd_numbers << "\n";

}