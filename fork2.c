#include <stdio.h>
#include <unistd.h>
#define MAX_COUNT 200
int main(){
	int pid;
	printf("parent procces pid = %d, ppid = %d\n", getpid(), getppid());
	pid = fork();
	if (pid!=0){
		for(int i=1; i<=MAX_COUNT;i++){
			printf("parent procces pid = %d, count = %d\n", getpid(), i);
			sleep(1);
		}
	}else{
		for(int j=1;j<= MAX_COUNT; j++){
			printf("child procces pid = %d, count = %d\n", getpid(), j);
			sleep(1);
		}
	}
	printf("\n pid %d terminates\n", getpid());
	return 0;
}
