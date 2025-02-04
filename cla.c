#include<stdio.h>
int main(int argc, char *argv[]){
	printf("the value of argc is %d\n",argc);
	int i;
	for(i=0;i<argc;i++){
		printf("arguements at index %d is %s\n",i,argv[i]);
	}
	return 0;
}
