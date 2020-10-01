#include<stdio.h>

void insertionSort(int data[], int length)  {
    int key = 0;
    int temp =0;
    for(int i =1;i<length;i++)  {
        key = data[i]; // 3
        int j = i-1;
        // 4,3,1 
        while (key < data[j] && j>= 0)
        {
            //3,3,1
            data[j+1] = data[j];
            --j;
        }
        //3,4,1
        data[j+1] = key;
        
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d \t",data[i]);

        /* code */
    }
    
}

int main()  {
    int data[] = {6,5,4,3,7,2,1};
    int length = sizeof(data)/sizeof(data[0]);
    insertionSort(data, length);
}