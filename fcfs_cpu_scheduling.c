#include<stdio.h>

typedef struct {
	int processid;
	int arrivaltime;
	int bursttime;
	int completiontime;
}Process;

void FCFS(Process P[],int n){
	int currenttime=0,i;
	float sumTAT=0,sumWT=0;
	int TAT[n];
	int WT[n];
	for(i=0;i<n;i++){
		int starttime=(currenttime>P[i].arrivaltime)?currenttime:P[i].arrivaltime;
		P[i].completiontime=starttime+P[i].bursttime;
		currenttime=P[i].completiontime;
		TAT[i] = P[i].completiontime - P[i].arrivaltime;
		WT[i] = TAT[i] - P[i].bursttime;
		sumTAT = sumTAT + TAT[i];
		sumWT = sumWT + WT[i];
		printf("Process : %d Arrival Time = %d, Burst Time = %d, Completion Time = %d, Turn-Around Time = %d , Waiting Time = %d\n",P[i].processid,P[i].arrivaltime,P[i].bursttime,P[i].completiontime,TAT[i],WT[i]);
	}
	
	float avgTAT,avgWT;
	
	avgTAT = sumTAT / n;
	avgWT = sumWT / n;
	
	printf("Average TURN AROUND TIME USING FCFS : %f",avgTAT); 
	printf("Average WAITING TIME USING FCFS : %f",avgWT);
	
}

int main(){
	int n,i;
	printf("Enter the number of processes: ");
    scanf("%d", &n);

    Process P[n];
    for(i=0;i<n;i++){
    	P[i].processid = i + 1;
        printf("Enter arrival time for Process %d: ", i + 1);
        scanf("%d", &P[i].arrivaltime);
        printf("Enter burst time for Process %d: ", i + 1);
        scanf("%d", &P[i].bursttime);
	}
	
	printf("\nFirst Come First Serve (FCFS) Scheduling:\n");
	FCFS(P,n);
    
	return 0;
}
