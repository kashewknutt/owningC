#include<stdio.h>
int factorial=1;

int fact(number){
    if(number==0){
        return 1;
    }
    if(number>1){
        factorial = number*fact(number-1);
    }
    return factorial;
}

int main(){
    int num,result;
    printf("Enter a number");
    scanf("%d",&num);

    result = fact(num);
    printf("%d",result);
}
