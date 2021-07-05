//write a program to read and display n numbers using array

#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void main(){
    int arr[MAX],i,RandNo;
    for(i=0;i<MAX;i++){
        RandNo = rand() % MAX;
        arr[i] = RandNo;
    }
    printf("\n The contents of the array are \n");
    for(i=0;i<MAX;i++){
        printf("\t %d",arr[i]);
    }

}
