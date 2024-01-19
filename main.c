#include <stdio.h>

int policz(int a, int b) {
    return a + b;
}

int main() {
    printf("Hello, World!\n");
    int x = policz(2,3);
    printf("W pierwszym branchu 2+3 = %d ",x);
    return 0;
}
