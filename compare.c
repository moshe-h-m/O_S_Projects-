#include<unistd.h>
#include<string.h>
#include<stdio.h>
#include<sys/fcntl.h>
#include<errno.h>

#define NUM 10

/*this program chack bitwin to given files end return 0
if thomething werong oepend end 1 if the to files isn't
aquel and 2 if the files is equal*/

int main(int argc,char* argv[]){
	
	int fd1;
	int fd2;
	int outF1;
	int outF2;
	char* buf1[NUM+1];
	char* buf2[NUM+1];
	
	memset(buf1,0,NUM+1);
	memset(buf2,0,NUM+1);
	fd1=open(argv[1],O_RDONLY);
	if(fd1<0){
		//perror("after open f1");
		//exit(-1);
		return 0;
	}
	fd2=open(argv[2],O_RDONLY);
	if(fd2<0){
		/*perror("after open f2");
		exit(-1);*/
		return 0;
	}
//	printf("%s\n",argv[1]);
//	printf("%s\n",argv[2]);
//		printf("buf1: %s; buf2: %s;\n\n",buf1[0],buf2[0]);	
	do{
		
		outF1=read(fd1,buf1,1);
		outF2=read(fd2,buf2,1);
		if(outF1<0||outF2<0)
			return 0;
//		printf("ouf1: %d; of2: %d;\n\n",outF1,outF2);
		if((buf1[0])!=(buf2[0]))
			return 1;
	}
	while((outF1!=0) && (outF2!=0));
	if((outF1==0)&&(outF2==0))
		return 2;
	else
		return 1;
}
