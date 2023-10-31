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
	for(int i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("the shorted array are ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
}
	return 0;
}
