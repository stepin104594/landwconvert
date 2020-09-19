#include<stdio.h>
int NUM,N,WEI,W,SEL;
float DISTANCE,METERS,WEIGHT,GRAMS;
void convertsit(int SEL){
void millitocenti(float METERS,float DISTANCE){
METERS=DISTANCE/10;
    printf("\n %f MILLIMETERS IS %f CENTIMETERS\n",DISTANCE,METERS);
}
void millitometer(float METERS,float DISTANCE){
METERS=DISTANCE/1000;
    printf("\n %f MILLIMETERS IS %f METERS\n",DISTANCE,METERS);
}

if(SEL == 1){
        printf("SELECTED LENGTH CONVERSION");
printf("SELECT MEASURING METRICS");
printf("\n 1. MILLIMETERS\n");
printf("\n 2. CENTIMETERS\n");
printf("ENTER CHOICE HERE :");
scanf("%d",&NUM);
if(NUM == 1) {
    printf("SELECT CONVERSION");
    printf("\n 1. MILLIMETERS TO CENTIMETERS\n");
    printf("\n 2. MILLIMETERS TO METERS\n");
    printf("ENTER CHOICE HERE :");
    scanf("%d",&N);
    switch(N)
    {
    case 1 : printf("\n SELETED MILLIMETERS TO CENTIMETERS\n");
    break;
    case 2 : printf("\n SELETED MILLIMETERS TO METERS\n");
    break;
    default : printf("YOU HAVE ENTERED WRONG CHOICE !!!");
    }
    printf("ENTER WEIGHT HERE :");
    scanf("%f",&DISTANCE);
    switch(N)
    {
    case 1 : millitocenti(METERS,DISTANCE);
    break;
    case 2 : millitometer(METERS,DISTANCE);
    break;
    }
    }

else {
    printf("YOU HAVE ENTERED WRONG CHOICE !!!");
}
}

}
