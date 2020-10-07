#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,j,num;
  int var=1;
  scanf("%d",&num);
  for(i=0;i<num;i++){
    for(j=0;j<num;j++){
        printf("%d   ",var);
        var++;
      }
    printf("\n");
  }

  return 0;
}
