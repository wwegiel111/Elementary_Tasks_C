#include <stdio.h>

int main(void) {
    int choice;
    double area;

    printf("Choose a shape to calculate its area:\n");
    printf("1) Circle\n");
    printf("2) Rectangle\n");
    printf("3) Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    if(choice == 1){
        double radius;
        printf("Enter the radius of the circle: ");
        scanf("%lf", &radius);
        area = 3.14159265358979323846 * radius * radius;
        printf("The area of the circle is %.2lf\n", area);
    } else if(choice == 2){
        double length, width;
        printf("Enter the length of the rectangle: ");
        scanf("%lf", &length);
        printf("Enter the width of the rectangle: ");
        scanf("%lf", &width);
        area = length * width;
        printf("The area of the rectangle is %.2lf\n", area);
    } else if(choice == 3){
        double base, height;
        printf("Enter the base of the triangle: ");
        scanf("%lf", &base);
        printf("Enter the height of the triangle: ");
        scanf("%lf", &height);
        area = 0.5 * base * height;
        printf("The area of the triangle is %.2lf\n", area);
    } else {
        printf("Invalid choice.\n");
    }
    return 0;
}