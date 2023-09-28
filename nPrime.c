#include<stdio.h>

int main(){
    int n,i=2,temp=2;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for(int j=1;j<=n;j++){
        printf("%d ", i++);
        while(i%temp!=0){
            temp++
        }
        if(temp==i){
            continue;
        }
    }
}
