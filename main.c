#include<stdio.h>

int main( int argc, char* argv[]){
	int i;
	printf("the number of argument is: %d\n",argc);
	for(i=1;i<argc+1;i++){
		printf("the %d argument numbers is %s\n",i,argv[i]);
		}

}
