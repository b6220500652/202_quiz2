#include<stdio.h>
int main()
{
	int n,x,y,c=0,d=0,i,palin;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		palin=i;
		while(palin!=0)
		{
			x=palin%10;
			y=y*10+x;
			palin=palin/10;
		}
		if(palin==y)
		{
			c++;
		}
		else
		{
			d++;
		}
	}
	printf("%d",c);
	
}
