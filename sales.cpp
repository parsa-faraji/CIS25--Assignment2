// This program calculates and displays total tax, state tax, and county tax for a specifc year
#include <iostream>

int main(){
  int totalSales = 95000;
  const double stateTaxRate = 0.04;
  const double countyTaxRate = 0.02;

  int stateTax = totalSales * stateTaxRate;
  int countyTax = totalSales * countyTaxRate;
  int totalTax = stateTax + countyTax;

  std::cout << "You have earned $" << totalSales << " in total" << std::endl;
  std::cout << "You owe $" << stateTax << " in state tax" << std::endl;
  std::cout << "You owe $" << countyTax << " in county tax" << std::endl;
  std::cout << "In total, you owe $" << totalTax << "in tax" << std::endl;

  return 0;

}

