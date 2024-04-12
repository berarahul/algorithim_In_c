
#include<stdio.h>

  towerofhanoi(int disk,int source,int helper,int dest){
     
        if(disk==1){

            
        printf("move disk %d from rod %d to rod %d\n", disk, source, dest);
            return;
        }
        towerofhanoi(disk-1,source,dest,helper);
        printf("move disk %d from rod %d to rod %d\n", disk, source, dest);
        towerofhanoi(disk - 1, helper, source, dest);
  }
int main(){
printf("Wellcome to Tower of Hanoi problem\n");
printf("Please enter the number of Disk\n");
int disk;
scanf("%d",&disk);
int source=1;
int helper=2;
int dest=3;
towerofhanoi(disk,source,helper,dest);
return 0;
}