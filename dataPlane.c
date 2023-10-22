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
    remainingdata=remainingdata/remainingdays;
     float exceedDailyUsed=dailydataused-averagedatauseddaily;
     dataexceeding=30*dailydataused;

}