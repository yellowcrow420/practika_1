#include <stdio.h>

int main() {
  float C_temp;
  printf("Input temperature in Celsius: ");
  scanf("%f", &C_temp);
  printf("C = %.0f; F = %.2f", C_temp, (C_temp * 9 / 5) + 32);
  return 0;
}
