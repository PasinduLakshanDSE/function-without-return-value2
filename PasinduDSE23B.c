#include<stdio.h>

void addition(int num1,int num2){
	int total=num1+num2;
	printf("Total:%d\n",total);
	
	
}

void main(){
	
	
	int x,y;
	printf("Enter the number:");
	scanf("%d",&x);
	printf("Enter thr number:");
	scanf("%d",&y);
	addition(x,y);
	
}