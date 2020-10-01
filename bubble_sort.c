#include<stdio.h>


void bubbleSort(int data[], int length) {
        int temp = 0;
        for(int i =0; i <length-1;i++)    {
            for (int j = i+1; j < length; j++)
            {
                if(data[i] > data[j])
                {
                      temp = data[i];
                      data[i]= data[j];
                      data[j]=temp;  
                }

            }
                   
        }
        for(int i = 0; i< length; i++)  {
            printf("%d \t",data[i]);
        }
}

int main()  {
    int data[] ={5,6,3,2,7,1,4,9,};
    int length = sizeof(data)/sizeof(data[0]);
    bubbleSort(data, length);
}