#include<stdio.h>
#include<stdlib.h>

int main(){
 	long long int num;
	scanf("%d",&num);
	if(num==0)	printf("Zero");
	else if(num<0)	printf("Negative");
	else if(num>0) printf("Positive");
  return 0;
}
