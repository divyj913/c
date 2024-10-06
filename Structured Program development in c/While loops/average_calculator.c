#include<stdio.h>
int main(){
    int total;
    int grade;
    int counter;
    int average;
    total = 0;
    counter =1;
    while (counter <=10){
        printf("enter the grade of %dst student",counter);
        scanf("%d",&grade);
        counter = counter+1;
        total = total+grade;
    }
    average = total/10;

    printf("The average of the class of students is %d\n",average);

    return 0;
}

