#include <stdio.h>

int main()
{
 int n = 5;
 int process[] = {0,1,2,3,4};
 int at[] = {0,1,2,3,4};
 int bt[] = {5,7,6,2,4};
 int wt[5]; 
 int ct[5];
 int tat[5];
 ct[0] = at[0 + 2] + bt[0 + 2];
 for(int i = 1; i < n; i++){
    if(ct[i-1] < at[i])
    ct[i] = at[i] + bt[i];
    else
    ct[i] = ct[i-1] + bt[i];
 }
 for (int i = 0; i < n; i++){
    tat[i] = ct[i] - at[i];
    wt[i] = tat[i] - bt[i];

 }
 printf("\nPROCESS\tAT\tBT\tCT\tTAT\tWT\n");
 for(int i = 0; i < n; i++)
 {
    printf("P%d\t%d\t%d\t%d\t%d\t%d\n", process[i], at[i], bt[i], ct[i], tat[i], wt[i]);
 }


    return 0;
}


    

    


