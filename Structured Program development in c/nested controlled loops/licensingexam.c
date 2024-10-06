#include <stdio.h>
int main(){
    int pass = 0;
    int fail = 0;
    int counter = 1;
    int result;
        while (counter<=10){
            printf("enter result: 1 for pass: 2 for fail: ");
            scanf("%d",&result);
            counter = counter +1;
                if (result == 1){
                    pass = pass+1;
                }
                else{
                    fail = fail+1;
                }
        }
    printf("Total passed : %d\n",pass);
    printf("Total failed : %d\n",fail);
        if (pass>8){
            printf("Bonus for the teacher");
        }
        return 0;

}
