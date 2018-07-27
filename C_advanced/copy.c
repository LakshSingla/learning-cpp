#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFSIZE 4096

const char* HELP = "USAGE: copy ARG1 ARG2\n"
					"ARG1: File to be copied\n"
					"ARG1: File to which is to be copied\n";

int main (int argc, char *argv[]) {
	int fd1, fd2, n;
	char buf[BUFSIZE];
	if(argc != 3) {
		printf("%s", HELP);	
		exit(-1);
	}

	if((fd1) = open(argv[1], O_RDONLY, 0) == -1) printf("Unable to read file %s", argv[1]);
	if((fd2) = creat(argv[2], 0666) == -1) printf("Unable to create file %s", argv[2]);

	else{
		while((n = read(fd1, buf, BUFSIZE)) > 0)
			if(write(fd2, buf, n) != n )
				printf("Write error on file %s", argv[2]);
	}
	
	return 0;

}
