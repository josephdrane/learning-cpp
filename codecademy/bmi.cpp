#include <iostream>

int main() {
    /*
    * BMI = weight in kg / height in meters squared
    * lbs to kg: 
    * Convert 5 lb to kilograms: 5 lb × 0.45359237 = 2.268 kg
    * The length in meters is equal to the inches multiplied by 0.0254.
    */
  
    double height, weight, bmi;

    // Ask user for their height
    std::cout << "Type in your height (inches): ";
    std::cin >> height;

    // Now ask the user for their weight and calculate BMI
    std::cout << "Type in your weight (pounds): ";
    std::cin >> weight;

    double kg = weight * 0.45359237;
    double meters = height * 0.0254;
    
    bmi = kg / (meters * meters);
    std::cout << "BMI = " << bmi << "\n";

    return 0;

}