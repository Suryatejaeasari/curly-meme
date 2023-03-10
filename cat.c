#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <pthread.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
int main(int argc, char *argv[]){
int fd,n; char buf;
fd = open(argv[1],O_RDONLY);
printf("Content from %s is \n", argv[1]);
while((n=read(fd,&buf,1))!=0){
write(1,&buf,1);
}
return 0;
}
