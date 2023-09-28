#include<stdio.h>
#include<math.h>

int main(){
    int rectL,rectB,cirR,cylR,cylL;
    float cirArea,cylArea;
    printf("Enter the length of rectangle: ");
    scanf("%d", &rectL);
    printf("Enter the breadth of rectangle: ");
    scanf("%d", &rectB);
    printf("The are of rectangle is %d", rectL*rectB);
    printf("Enter the radius of the circle: ");
    scanf("%d", &cirR);
    cirArea = M_PI*cirR*cirR;
    printf("The area of the circle is %u", cirArea);
    printf("Enter the radius of the cylinder: ");
    scanf("%d", &cylR);
    printf("Enter the length of the cylinder: ");
    scanf("%d", &cylL);
    cylArea = 2*M_PI*cylR*(cylL+cylR);
    printf("The surface area of the cylinder is %u", cylArea);

}
