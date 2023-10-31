#include<stdio.h>
int main()
{
	int temp,n,i,j;
	printf("enter n");
	scanf("%d",&n);
	printf("enter the array element");
	int a[n];
	for(i=0;i<n;i++)
	{
	scanf("%d", &a[i]);
	}
 for(i=0;i<n/2;i++){
 	c=a[2*i];
 	a[2*i]=a[2*i+1];
 	a[2*i+1]=c;
 }
 for(i=0;i<n;i++){
 	printf("%d ",a[i]);
 }
 return 0;
}
