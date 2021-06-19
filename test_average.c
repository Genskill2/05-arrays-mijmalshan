#include <stdio.h>
#include <assert.h>


float average(int a[],int n)
{
float sum=0;
for(int i=0;i<n;i++)
 {
 sum=sum+a[i];
 }
return sum/n;
}
