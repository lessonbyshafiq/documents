#include<stdio.h>
#include<math.h>
int main(){
	int num, i, is_prime=1;
	printf("Enter any number:\n");
	scanf("%d",&num);
	if(num<=1){
		is_prime=0;		
	}
	else{
		for(i=2;i<=sqrt(num);i++){
			if(num%i==0){
				is_prime=0;
				break;
			}
		}
	}
	
	
	if(is_prime==0){
		printf("%d is not prime number",num);
	}
	else{
		printf("%d is prime number",num);
	}
	return 0;
}
