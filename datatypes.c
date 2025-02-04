#include<stdio.h>
int main(){
	int x=1;
	char y='c';
	float z= 0.12;
	//Address and value of integer
	printf("The value of x is: %d\n",x);
	printf("The address of x is: %d\n",&x);
	//Address and value of character
	printf("The value of y is: %c\n",y);
	printf("The address of y is: %c\n",&y);
	//Addressand value of float
	printf("The value of z is: %f\n",z);
	printf("The address of z is: %f/\n",&z);
	return 0;
}
