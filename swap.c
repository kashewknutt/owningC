#include<stdio.h>

int main(){
    int a,b,temp;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d\n", &b);
    temp = b;
    b = a;
    a = temp;
    printf("The 1st number is %d", a);
    printf("\nThe 2nd number is %d", b);
}
