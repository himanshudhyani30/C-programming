#include<stdio.h>
#include<string.h>
int main(){
	int i;
	char msg[20]="helloworld";
	FILE *fp= fopen("demo.txt","w");
	for(i=0;i<=strlen(msg);i++){
		fputc(msg[i],fp);
	}
	fclose(fp);
}
