#include <stdio.h>

int main() {
int x;
printf("Input number: ");
scanf("%d", &x);
int pow = x > 0 && (x & (x - 1)) == 0;
printf("%d", pow);
return 0;
}
