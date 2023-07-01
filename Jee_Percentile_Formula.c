#include <stdio.h>
int main()
{
     int rank, totalcandidates;
     double percentile1, percentile2, percentile;
     printf("Enter the RANK:\t");
     scanf("%d",&rank);
     printf("Enter the Total number of candidates:\t");
     scanf("%d",&totalcandidates);
     percentile1=totalcandidates-rank;
     percentile2=percentile1/totalcandidates;
     percentile=percentile2*100;
     printf("%f is your percentile\n",percentile);
     return 0;


}