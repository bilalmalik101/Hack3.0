#include<stdio.h>
int main(){
    // declaring variables
    float monthlydata,useddata,averagedatauseddaily,dailydataused,remainingdatauseddaily,dataexceeding,remainingdata;
    int days,remainingdays;
    //getting input from user
    printf("Enter your monthly data package:");
    scanf("%f",&monthlydata);
    printf("How many days you used data:");
    scanf("%i",&days);
    printf("How much Gb of your data you used:");
    scanf("%f",&useddata);
    remainingdays=30-days;
    remainingdata=monthlydata-useddata;
    dailydataused=useddata/days;
   if(remainingdata!=0){
    //declare variables to find how much you over used from your daily data
    remainingdata=remainingdata/remainingdays;
     float exceedDailyUsed=dailydataused-averagedatauseddaily;
     dataexceeding=30*dailydataused;
);
     printf("To stay below your data plan, use no more than %f GB/day\n", remainingPackage); printf("________________________________________\n");
     printf("%i days used, %i days remaining\n",days,remainingDays);
     printf("Average daily use: %f GB/day\n",dailydataused);
     printf("You are EXCEEDING your average daily use ( %f GB/day)\n",exceedDailyUsed);
     printf("Continuing this high usage, you'll exceed your data plan by %f GB\n",dataexceeding
     } else if(useddata==0){
     averagedatauseddaily=monthlydata/30;
     printf("_____________________________________________\n");
     printf("%i days used, %i days remaining\n",days,remainingDays);
     printf("Average daily use: %f GB/day\n",dailydataused);
     printf("You are at or below your average daily use (%f GB/day)\n",averagedatauseddaily);
     printf("You can use up to %f GB/day and stay below your data plan limit\n",remainingdatauseddaily);
     }
}