#include<stdio.h>
int main()
{
	int n,x,y,c=0,i,palin;
	scanf("%d",&n);
	palin=n;
	while(n!=0)
	{
			x=n%10;
			y=y*10+x;
			n=n/10;
	}
	if(palin==y)
		{
		 printf("palin");
			
		}
	
}
