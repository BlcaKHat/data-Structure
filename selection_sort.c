#include<stdio.h>

void SelectionSort(int array[], int length)  {
    //Assuming first element is smallest.
    //check if array[0] > array[right]: if true-> swap it.
    //int minimum=0;
    int temp=0;
    for(int i = 0;i<length;i++) {
        //minimum=array[0];
        for(int j =0;j<length;j++)    {
            if(array[i] > array[j] ) {
                temp= array[i];
                array[i]= array[j];
                array[j]=temp; 
            }
        }
    }

    for(int i =0;i<length;i++)  {
        printf("%d\t",array[i]);
    }
}
int main()  {
    int array[]={4,5,3,2,7,6,9,8,1};
    int length = sizeof(array)/sizeof(array[0]);

    SelectionSort(array,length);
    
}