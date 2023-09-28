#include<stdio.h>
void main()
{
    int i,j,k;
    printf("Enter three no.\n");
    scanf("%d%d%d",&i,&j,&k);
    int re=(i>j)?((i>k)?i:k):((j>k)?j:k);
    printf("greatest number=%d",re);
}
