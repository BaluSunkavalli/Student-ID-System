#include <stdio.h>
#include <time.h>

void benchmarkLookup()
{
    clock_t start,end;

    start=clock();

    for(int i=0;i<1000000;i++)
    {
        int x=i*i;
    }

    end=clock();

    double time=(double)(end-start)/CLOCKS_PER_SEC;

    printf("Benchmark time: %f seconds\n",time);
}