#include<stdio.h>
int main()
{
	int no,a,b=1,c=0;
	printf("enter the number which fibonacii series have to make");
	scanf("%d" ,&no);
	for(int i=1;i<=no;i++){
	   printf("%d ",c);
	   a=b;
	   b=c;
	   c=a+b;	
		
		
	}
	
	

	
	
	
	
	
	
	return 0;
}
