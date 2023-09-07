#include<Stdio.h>
int main()
{
	int x,y,z;
	printf("ENTER THE 1st VALUE = ");
	scanf("%d",&x);
	printf("ENTER THE 2nd VALUE = ");
	scanf("%d",&y);
	
	
	z=(x*x*x)-(y*y*y)-(3*x*x*y)+(3*x*y*y);
	
	printf("\n answer is(x+y)^2 this formula = %d",z);
		
	return 0;
}