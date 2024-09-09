// This program calculates and displays total tax, state tax, and county tax for a specifc year
#include <iostream>

int main(){
  int totalSales = 95000;
  const double stateTaxRate = 0.04;
  const double countyTaxRate = 0.02;

  int stateTax = totalSales * stateTaxRate;
  int countyTax = totalSales * countyTaxRate;
  int totalTax = stateTax + countyTax;

