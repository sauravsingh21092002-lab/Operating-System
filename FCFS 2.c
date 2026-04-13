#include <stdio.h>

int main() {
    int n = 5;
    int pid[] = {0,  1,  2,  3,  4};
    int at[]  = {0,  0,  0,  0,  0};  
    int bt[]  = {5,  7,  6,  8,  5};  
    int io[]  = {2,  2,  3,  1,  2};  

    int ct[n], tat[n], wt[n];
    int time = 0;


    for (int i = 0; i < n; i++) {
        time += bt[i] + io[i];  // CPU burst + I/O wait
        ct[i] = time;
    }

    float total_tat = 0, total_wt = 0;
    printf("\nPID  AT  BT  IO  CT  TAT  WT\n");
    printf("--------------------------------\n");

    for (int i = 0; i < n; i++) {
        tat[i] = ct[i] - at[i];      
        wt[i]  = tat[i] - bt[i] - io[i];
        total_tat += tat[i];
        total_wt  += wt[i];
        printf(" P%d  %2d  %2d  %2d  %2d  %3d  %2d\n",
               pid[i], at[i], bt[i], io[i], ct[i], tat[i], wt[i]);
    }

    printf("\nAverage TAT = %.2f\n", total_tat / n);
    printf("Average WT  = %.2f\n", total_wt  / n);
    return 0;
}