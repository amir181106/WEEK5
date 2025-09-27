#include <stdio.h>

int main() {
    int a, b, c;
    int x, y, z;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Sabse badi side ko x banate hain
    if (a >= b && a >= c) {
        x = a; y = b; z = c;
    } else if (b >= a && b >= c) {
        x = b; y = a; z = c;
    } else {
        x = c; y = a; z = b;
    }

    if (x >= y + z) {
        printf("Not a triangle\n");
    } 
    else if (x * x == y * y + z * z) {
        printf("Right angled triangle\n");
    } 
    else if (x * x > y * y + z * z) {
        printf("Obtuse angled triangle\n");
    } 
    else {
        printf("Acute angled triangle\n");
    }

    return 0;
}
