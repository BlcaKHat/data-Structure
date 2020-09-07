#include<stdio.h>
#include<stdlib.h>

int malloc_call();
int main()  {
    malloc_Call();
    printf("I'm main");
}

int malloc_Call()   {
    /* trying malloc */
    int* ptr;
    int n,i;
    printf("i am malloc");
    printf("enter the number of elements \n");
    scanf("%d",&n);
    if (n > 1)
    {
           ptr = (int*)malloc(n * sizeof(int)); 
        if(ptr == NULL) {
            printf("memory not allocated");
        }
        else
        {
            printf("memory created successfully");
            for ( i = 0; i < n; i++)
                printf("\n%d\t",ptr[i]);
            {
                /* code */
            }
            
        }
        
    }


}