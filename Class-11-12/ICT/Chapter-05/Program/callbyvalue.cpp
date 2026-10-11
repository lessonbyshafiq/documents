#include<stdio.h>
void change(int x){
	x = 100;
	printf("The value of x =%d",x);
}

int main(){
	int x = 10;
	change(x);
	printf("The value main x = %d",x);
	return 0;
}
