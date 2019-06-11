#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char arr[20], max;
	int k, pivot=0, arrSize,i,j;
	scanf("%d",arr);
	arrSize= strlen(arr);
	scanf("%d",&k);
	max= arr[0];
	for(i=1;i<arrSize;i++){
		if(arr[i]<max)	pivot=i;
	}
	while(k>0){
		 i=0;
		 while(arr[i]==-1 && i<pivot)	i++;
		 if(i==pivot)	break;
		 else{
		 		j=i;	i++;
				while(i<pivot){
						if(arr[i]<arr[j])	j=i;	
				}
				arr[j]=-1;
				k--;
		 }
	}
	while(k>0){
		 i=pivot+1;
		 while(arr[i]==-1 && i<arrSize)	i++;
		 if(i==arrSize)	break;
		 else{
		 		j=i;	i++;
				while(i<arrSize){
						if(arr[i]<arr[j])	j=i;	
				}
				arr[j]=-1;
				k--;
		 }
	}
	for(i=0;i<arrSize;i++)
		if(arr[i]!=-1)
			printf("%c",arr[i]);
	return 0;
}
