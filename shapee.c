#include <stdio.h>
#include <math.h>

#define PI 3.14159

void calculateRectangle() {
    double length, width, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area of Rectangle: %.2lf\n", area);
    printf("Perimeter of Rectangle: %.2lf\n", perimeter);
}

void calculateCircle() {
    double radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of Circle: %.2lf\n", area);
    printf("Circumference of Circle: %.2lf\n", circumference);
}

void calculateTriangle() {
    double base, height, side1, side2, area, perimeter;

    printf("Enter the base of the triangle: ");
    scanf("%lf", &base);
    printf("Enter the height of the triangle: ");
    scanf("%lf", &height);
    printf("Enter the lengths of the other two sides: ");
    scanf("%lf %lf", &side1, &side2);

    area = 0.5 * base * height;
    perimeter = base + side1 + side2;

    printf("Area of Triangle: %.2lf\n", area);
    printf("Perimeter of Triangle: %.2lf\n", perimeter);
}

void calculateCube() {
    double side, surfaceArea, volume;

    printf("Enter the side length of the cube: ");
    scanf("%lf", &side);

    surfaceArea = 6 * side * side;
    volume = side * side * side;

    printf("Surface Area of Cube: %.2lf\n", surfaceArea);
    printf("Volume of Cube: %.2lf\n", volume);
}

int main() {
    int choice;

    printf("Choose a shape to calculate:\n");
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Triangle\n");
    printf("4. Cube\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            calculateRectangle();
            break;
         case 2:
            calculateCircle();
            break;
        case 3:
            calculateTriangle();
            break;
        case 4:
            calculateCube();
            break;
        default:
            printf("Invalid choice! Please select a number between 1 and 4.\n");
            break;
    }

    return 0;
}   