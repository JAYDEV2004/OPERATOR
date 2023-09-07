#include<Stdio.h>
int main()
{
	int x,y,z,(x_y);
	printf("ENTER THE 1st VALUE = ");
	scanf("%d",&x);
	printf("ENTER THE 2nd VALUE = ");
	scanf("%d",&y);
	printf("ENTER THE 3rd VALUE = ");
	scanf("%d",&z);
	(x_y)=(x*x)+(y*y)+(z*z)+(2*(x*y)+(y*z)+(z*x));
	
	printf("\n answer is(x+y)^2 this formula = %d",(x_y));
		
	
}