#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <pthread.h>
#include <fcntl.h>
int main(int argc, char *argv[]){
int fd; char lu;
off_t offset =0;
struct stat statFD;
stat(argv[1], &statFD);
int c=1;
fd = open(argv[1],O_RDONLY);
while(lseek(fd, offset, SEEK_SET) < statFD.st_size){
if (read(fd,&lu,1) != -1){
if (lu == '\0' || c<=3){
if (lu == '\n'){
c++;}
}else{
write(1,&lu,1);

}

}
offset++;
}
}
