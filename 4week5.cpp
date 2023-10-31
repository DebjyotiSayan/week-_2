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
 printf("enter k");
 scanf("%d",&c);
 for(i=0;i<n;i++){
 	if(a[i]==c){
 		j++;
	 }
 }
 printf("occurance of %d is %d",c,j);
 

 }
