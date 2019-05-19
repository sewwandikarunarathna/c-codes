#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,ar[100],N,M,dif,step,temp;
	printf("enter the size of array: ");
	scanf("%d",&N);
	printf("enter an integer: ");
	scanf("%d",&M);
	dif=N-M;
	printf("difference=%d\n",dif);
	printf("enter the values for array:\n ");
	for( i=0;i<N;i++){
	    scanf("%d",&ar[i]);
	}

	
	for(step=0;step<N-1;step++){
		for(i=0;i<N-1-step;i++){
			if(ar[i]>ar[i+1]){
				temp=ar[i];
				ar[i]=ar[i+1];
				ar[i+1]=temp;
			}
		}
	}
	printf("Sorted array:\n");
	for(i=0;i<N;i++){
		printf("%d ",ar[i]);
	}
	int maxSum=0,minSum=0;
	for( i=M;i<N;i++){
			maxSum=maxSum+ar[i];
		}
		for( i=0;i<N-M;i++){
				minSum=minSum+ar[i];
			}
	printf("\nmaxsum is: %d\n",maxSum);
		printf("minsum is: %d\n",minSum);
		
		int D=maxSum-minSum;
		printf("Differance of maxsum and minsum= %d",D);
	return 0;
}