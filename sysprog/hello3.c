#include<string.h>
#include<fcntl.h>
#include<stdio.h>

int main()
{
	char* str = "Hello world\n";

	int fd=open("./hello.txt", O_CREAT|O_RDWR);
	printf("%d\n",fd);
	write(fd,str,strlen(str));
	close(fd);

	return 0; 
}

