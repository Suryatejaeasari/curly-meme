#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
int main(int argc, char *argv[]){
int fd, c=1;
char lu;
fd = open(argv[1], O_RDONLY);
off_t offset = 0;
struct stat statFd;
stat(argv[1], &statFd);
printf("%d",c);
while(lseek(fd,offset,SEEK_SET)<statFd.st_size){
if (read(fd,&lu,1)!=0){
printf("%c",lu);
offset++;

if(lu == '\n'){
printf("%d", ++c);
}

}
else{
close(fd);
}
}
}
