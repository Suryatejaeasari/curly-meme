#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <pthread.h>
#include <string.h>
#include <unistd.h>
int main(int argc, char *argv[]){
int fd1, fd2;
char buf[600];
fd1 = open(argv[1],O_RDWR);
fd2 = open(argv[2],O_RDWR);
read(fd1,buf,sizeof(buf));
write(fd2,buf,sizeof(buf));
close(fd1);
close(fd2);
return 0;
}
