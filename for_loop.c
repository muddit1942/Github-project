#include <stdio.h>

int main()
{
    // this is pure for loop program
    // int i,j;
    // for(i=0,j=0; i<3,j<5;i++,j++){
    //     printf("%d %d\n",i,j);
    // }
    // return 0;

    // 2.) this is when expression2 is optional
    // int i=0,j=0;
    // for(;j<3,i<5;i++,j++){
    //     printf("%d %d\n",i,j);
    // }
    // return 0;

    //3.) this is when expression3 is optional
    int i,j;
    for(i=0,j=0;i<3,j<5;){
        printf("%d %d\n",i,j);
        i++;j++;
    }
    return 0;
}