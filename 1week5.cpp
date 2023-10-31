#include<stdio.h>
int main()
{
     int n,i,max,min,sum=0;
	 printf("enter n");
	 scanf("%d",&n);
	 printf("enter the element");
	 int a[n];
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }    

max=a[0];
for(i=0;i<n;i++){
	if(a[i]>max)
	{
		max=a[i];
	}
}

min=a[0];
for(i=0;i<n;i++){
	if(a[i]<min)
	{
		min=a[i];
	}
}
   for(i=0;i<n;i++){
   	sum=+a[i];
   }
   printf("max is %d" ,max);
   printf("\n");
   printf("min is %d", min);




return 0;
}
