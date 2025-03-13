#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

void calculateArea() {
    int choice;
    printf("\nSelect a figure:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter choice: ");
    scanf("%d", &choice);#include <stdio.h>
    #include <math.h>

    #define PI 3.14159265358979323846

    void calculateArea() {
        int choice;
        printf("\nSelect a figure:\n");
        printf("1. Circle\n");
        printf("2. Rectangle\n");
        printf("3. Triangle\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            double radius;
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            double area = PI * radius * radius;
            printf("Area of circle: %.2lf\n", area);
        } else if (choice == 2) {
            double width, height;
            printf("Enter the width: ");
            scanf("%lf", &width);
            printf("Enter the height: ");
            scanf("%lf", &height);
            double area = width * height;
            printf("Area of rectangle: %.2lf\n", area);
        } else if (choice == 3) {
            double base, height;
            printf("Enter the base: ");
            scanf("%lf", &base);
            printf("Enter the height: ");
            scanf("%lf", &height);
            double area = 0.5 * base * height;
            printf("Area of triangle: %.2lf\n", area);
        } else {
            printf("Invalid selection.\n");
        }
    }

    int main() {
        calculateArea();
        return 0;
    }

    if (choice == 1) {
        double radius;
        printf("Enter the radius: ");
        scanf("%lf", &radius);
        double area = PI * radius * radius;
        printf("Area of circle: %.2lf\n", area);
    } else if (choice == 2) {
        double width, height;
        printf("Enter the width: ");
        scanf("%lf", &width);
        printf("Enter the height: ");
        scanf("%lf", &height);
        double area = width * height;
        printf("Area of rectangle: %.2lf\n", area);
    } else if (choice == 3) {
        double base, height;
        printf("Enter the base: ");
        scanf("%lf", &base);
        printf("Enter the height: ");
        scanf("%lf", &height);
        double area = 0.5 * base * height;
        printf("Area of triangle: %.2lf\n", area);
    } else {
        printf("Invalid selection.\n");
    }
}