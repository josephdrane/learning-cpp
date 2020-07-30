#include <iostream>

int main() {
  // My dog's age
  int dog_age = 8;
  int early_years = 21;
  int later_years = (dog_age - 2) * 4;
  int human_years = early_years + later_years;

  std::cout << early_years << " + " << later_years << "\n";
  
  std::cout << "My name is Rover! Ruff ruff, I am " << human_years << " years old in human years.\n";

  return 0;
}