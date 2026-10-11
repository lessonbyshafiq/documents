#include<stdio.h>
int main(){
	
	int num,org,rev=0,rem;
	printf("Enter any number:\n");
	scanf("%d",&num);
	org = num;
	while(num>0){
		rem = num%10;
		rev = rev*10+rem;
		num = num/10;
	}
	
	if(org==rev){
		printf("The number is Palindrom.");
	}
	else{
		printf("The number is not Palindrom.");
	}
	return 0;
}
