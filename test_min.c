#include <stdio.h>
#include <assert.h>


int min(int a[],int n)
{
int min=a[0];
for(int i=0;i<n;i++)
{
if(a[i]<min)
	min=a[i];
}
return min;
}
