#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float l, w, r, a, b, c, side;
    float area, perimeter;

    printf("Choose shape:\n");
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Triangle\n");
    printf("4. Cube\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1: // Rectangle
            printf("Enter length and width: ");
            scanf("%f %f", &l, &w);
            area = l * w;
            perimeter = 2 * (l + w);
            printf("Rectangle Area = %.2f, Perimeter = %.2f\n", area, perimeter);
            break;

        case 2: // Circle
            printf("Enter radius: ");
            scanf("%f", &r);
            area = M_PI * r * r;
            perimeter = 2 * M_PI * r;
            printf("Circle Area = %.2f, Circumference = %.2f\n", area, perimeter);
            break;

        case 3: // Triangle
            printf("Enter three sides: ");
            scanf("%f %f %f", &a, &b, &c);
            perimeter = a + b + c;
            float s = perimeter / 2; // semi-perimeter
            area = sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
            printf("Triangle Area = %.2f, Perimeter = %.2f\n", area, perimeter);
            break;

        case 4: // Cube
            printf("Enter side length: ");
            scanf("%f", &side);
            area = 6 * side * side; // surface area
            perimeter = 12 * side;  // total edge length
            printf("Cube Surface Area = %.2f, Total Edge Length = %.2f\n", area, perimeter);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
