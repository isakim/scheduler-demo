#include <stdio.h>

int main() {
  int a[5];
  int n, i, tarefa;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for(i=1; i<(n+1); i++){

    tarefa=0;
   
    if((i%a[0])==0){
	printf("0");
	tarefa=1;
    }
    if((i%a[1])==0){
        printf("1");
	tarefa=1;
    }
    if((i%a[2])==0){
        printf("2");
	tarefa=1;
    }
    if((i%a[3])==0){
        printf("3");
	tarefa=1;    
    }
    if((i%a[4])==0){
        printf("4");
	tarefa=1;
    }

    if(!tarefa) {
	printf("-");
    }

    
    printf("\n");
}
  
  return 0;
}
