#include<stdio.h>
int main()
{
	int k,c,n,i,j;
	printf("enter n");
	scanf("%d",&n);
	printf("enter the array element");
	int a[n];
	for(i=0;i<n;i++)
	{
	scanf("%d", &a[i]);
	}
	printf("enter k:");
	scanf("%d",&k);
	  for(i=0;i<n;i++){
	  	for(j=i+1;j<n;j++){
	  		c=a[j];
	  		a[j]=a[j+1];
	  		a[j+1]=c;
		  }
	  }
	  printf("%d smallest element is%d ",k,a[k-1]);
	  printf("%d largest element is %d ",k,a[n-k]);
}
