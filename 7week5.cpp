#include<stdio.h>
 int main()
 {
 int i,n,j=0,c;
 printf("enter the n");
 scanf("%d",&n);
 printf("enter the element");
 int a[n];
 for(i=0;i<n;i++){
  scanf("%d",&a[i]);		
 }
 for(i=0;i<n/2;i++){
 	c=a[i];
 	a[i]=a[n-i-1];
 	a[n-i-1]=c;
 }
 for(i=0;i<n;i++){
 	printf("%d",a[i]);
 }
 return 0;
}
