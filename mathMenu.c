# include <stdio.h>
void main()
{
 char o;
 float num1,num2;
 printf("Select an operator either + or - or * or / \n");
 scanf("%c",&o);
 printf("Enter two operands: ");
 scanf("%f%f",&num1,&num2);
 switch(o) {
 case '+':
 printf("%f + %f = %f",num1, num2, num1+num2);
 break;
 case '-':
 printf("\n%.1f - %.1f = %.1f",num1, num2, num1-num2);
 break;
 case '*':
 printf("\n%.1f * %.1f = %.1f",num1, num2, num1*num2);
 break;
 case '/':
 printf("\n%.1f / %.1f = %.1f",num1, num2, num1/num2);
 break;
 default:
 /* If operator is other than +, -, * or /, error message is shown */
 printf("\nError! operator is not correct");
 break;
 }
}
