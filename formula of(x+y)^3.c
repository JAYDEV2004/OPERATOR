#include<Stdio.h>
int main()
{
	int x,y,z;
	printf("ENTER THE 1st VALUE = ");
	scanf("%d",&x);
	printf("ENTER THE 2nd VALUE = ");
	scanf("%d",&y);
	
	z=(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);
	
	printf("\n answer of this formula (x+y)^3 = %d",z);
		
	
}