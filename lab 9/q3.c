#include<stdio.h>
int prime(int n);
int main ()
{
	int n;
	printf ("enter an number:");
	scanf("%d",&n);
	prime(n);
	return 0;
}

int prime(int n){
 int i,count=0;
 for (i=1;i<=n;i++)
 {
 	if(n%i==0)
 	count++;
	 }	
	 if (count==2)
	 printf("number is prime");
	 else 
	 printf("number is not prime");
}