#include<stdio.h>
int two_d();
int main() {
    int i=0;
    int array[5];
    for (i=0;i<5;i++)   {
        array[i]=i;
        printf("%d\n",array[i]);
    }
    two_d();
    return 0;
}

int two_d() {
    int two_d[2][3];
    for(int i=0; i<2; i++) {
        for (int j = 0; j <3; j++)
        {
            two_d[i][j]= i;
            two_d[j][i]= j;
            printf("%d %d \t",two_d[i][j],two_d[j][i]);
            /* code */
        }
        printf("\n");
        
    }
    printf("\n\n i'm two_d\n\n");
}

