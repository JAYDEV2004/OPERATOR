#include<Stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h;
	printf("ENTER THE 1st VALUE = ");
	scanf("%d",&a);
	printf("ENTER THE 2nd VALUE = ");
	scanf("%d",&b);
	printf("ENTER THE 2nd VALUE = ");
	scanf("%d",&c);
	
	d=a*a*a;
	e=b*b*b;
	f=c*c*c;
	g=3*a*a*b+3*a*b*b-3*b*b*c-(3*b*c*c)+(3*a*c*c)-(3*a*a*c)+(6*a*b*c);
	h=d-e-f-g;
	
	printf("\n answer is(x-y-z)^3 this formula = %d",h);

}