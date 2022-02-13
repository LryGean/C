#include <stdio.h>
int main()
{
	int i,j,t;
	int a[3];
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3-1;j++)
		{
			if(a[j]>a[j+1])
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
		}
	}
	printf("%d",a[i]);
	return 0;
}