#include <stdio.h>
#include <unistd.h>
#include <signal.h>
void sig_handler(int sig){
printf("Inside the handler function\n");
}
int main(){
signal(SIGINT, sig_handler);
for (int i=1; ; i++){
printf("%d: Inside the main function\n");
sleep(1);
}
return 0;
}

