#include<stdio.h>
int main(){
	
	int num1,num2,x,gcd,m,lcm;
	
	printf("Enter two number:\n");
	scanf("%d%d",&num1,&num2);

	if(num1<num2){
		x = num1;
	}
	else{
		x = num2;
	}
    			
	while(x>=1){
		if(num1%x==0 && num2%x==0){
			gcd=x;
			break;
		}
		x--;
	}
	
	m=num1*num2;
	lcm = m/gcd;
	
	printf("GCD is %d\n",gcd);
	printf("LCM is %d\n",lcm);
	
	return 0;
}
