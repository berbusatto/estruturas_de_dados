#include <stdio.h>
void Swap (int *a,int *b);
void main (void)
{
	int num1,num2;
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("%d / %d", num1, num2);
	
	Swap (&num1,&num2);
	printf ("\nEles agora valem \n%d / %d\n",num1,num2);
}
void Swap (int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
