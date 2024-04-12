#include <stdio.h>
#include <math.h>

void towerOfHanoi(int disk, int source, int helper, int dest)
{
    if (disk == 1)
    {
        printf("move disk %d from rod %d to rod %d\n", disk, source, dest);
        return;
    }

    towerOfHanoi(disk - 1, source, dest, helper);
    printf("move disk %d from rod %d to rod %d\n", disk, source, dest);
    towerOfHanoi(disk - 1, helper, source, dest);
}

int main()
{
    printf("Welcome to Tower Of Hanoi Problem:\n");

    printf("Please enter the number of disks: ");
    int disk;
    scanf("%d", &disk);

    int source = 1; // Assuming rods are labeled 1, 2, 3
    int helper = 2;
    int destination = 3;

    towerOfHanoi(disk, source, helper, destination);

    return 0; // Cast the result of pow to an integer
}
