#include <iostream>

bool divisible_by(int number, int divided_by) {
    int test = number % divided_by;
    if (test == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {

  // Brain explodes here:

  for (int i = 1; i <= 100; i++) {

      bool is_divisible_three = divisible_by(i, 3);
      bool is_divisible_five = divisible_by(i, 5);

      if (is_divisible_three && is_divisible_five) {
          std::cout << "FizzBuzz\n";
      }
      else if (is_divisible_three) {
          std::cout << "Fizz\n";
      }
      else if (is_divisible_five) {
          std::cout << "FizzBuzz\n";
      }
      else {
        std::cout << i << "\n";
      }

  }

}