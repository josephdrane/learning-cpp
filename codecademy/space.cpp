#include <iostream>

int main() {
  double earth_weight, dest_weight;
  int planet;

  std::cout << "Enter Earth Weight: ";
  std::cin >> earth_weight;

  std::cout << "Which Planet?\n";
  std::cout << "1 - Venus\n";
  std::cout << "2 - Mars\n";
  std::cout << "3 - Jupiter\n";
  std::cout << "4 - Saturn\n";
  std::cout << "5 - Uranus\n";
  std::cout << "Planet Number: ";
  std::cin >> planet;

  switch (planet) {
    case 1 :
      dest_weight = earth_weight * 0.78;
      std::cout << "Venus Weight: " << dest_weight << "\n";
      break;
    case 2 :
      dest_weight = earth_weight * 0.39;
      std::cout << "Mars Weight: " << dest_weight << "\n";
      break;
    case 3 :
      dest_weight = earth_weight * 2.65;
      std::cout << "Jupiter Weight: " << dest_weight << "\n";
      break;
    case 4 :
      dest_weight = earth_weight * 1.17;
      std::cout << "Saturn Weight: " << dest_weight << "\n";
      break;
    case 5 :
      dest_weight = earth_weight * 1.05;
      std::cout << "Uranus Weight: " << dest_weight << "\n";
      break;
    default :
        std::cout << "Unknown\n";
        break;
  }
}