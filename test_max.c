#include <stdio.h>
 int max(int a[],int n)
 {
 int max=0;
 for(int i=0;i<n;i++)
  {
  if(a[i]>max)
  	max=a[i];
  }
  return max;
 }
