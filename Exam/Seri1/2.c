#include <stdio.h>

#define SIZE  20
float  calculateAvg(float *x);
int main()
{
	float x[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		printf("\nEnter number (%d) => ", (i+1));
		scanf("%f", &x[i]);
	}
    float avg = calculateAvg(x);
	printf("\nAvrage is %f\n", avg);
    int count = 0;
	for (int i = 0; i < SIZE; i++)
	{
    	if ( (x[i] - avg) <= 1 && (x[i] - avg)>=-1)
		{
			count++;
		}
	}
	printf("Number of elements that distance less than 1 is : %d\n", count);
	return 0;
}

float  calculateAvg(float *x){
    float sum = 0;
    for(int i=0; i< SIZE ; i++, x++){
        sum+= *x;
    }
    return (float) sum / SIZE;
}