#include <stdio.h>

int main(){
    int total;
    int counter;
    float average;
    total = 0;
    counter = 0;
    int grade;

    printf("Enter grade '-1' for exit:\n ");
    scanf("%d", &grade);

    while(grade!=-1){
        counter = counter + 1 ;
        total = grade + total;
        printf("Enter grade '-1' for exit:\n ");
        scanf("%d", &grade);
    }

    if (counter!=0){
        average = (float)grade/total;
        printf("Total average of class is %.2f\n", average);
    }
    else{
        printf("No grades were entered");
    }

        return 0;
}
