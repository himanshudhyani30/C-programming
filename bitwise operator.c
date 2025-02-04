#include<stdio.h>
int main(){
	int a,b;
	printf("enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	printf("bitwise AND: %d\n",a&b);
	printf("bitwise OR: %d\n",a|b);
	printf("left shift: %d\n",a<<3);
	printf("right shift: %d\n",b>>3);
	printf("bitwise compliment of a: %d\n",~a);
	printf("bitwise compliment of b: %d\n",~b);
	return 0;
}
