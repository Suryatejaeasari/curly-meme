#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
int main(int argc, char *argv[]){
int fd1, fd2, n;
char *f1,*f2,buf;
f1 = argv[1];
f2 = argv[2];
fd1 = open(f1, O_RDONLY,0777);
fd2 = creat(f2,0777);
while((n=read(fd1,&buf,1))!=0){
write(fd2,&buf,1);
}
remove(f1);
close(fd1);
close(fd2);
return 0;
}
