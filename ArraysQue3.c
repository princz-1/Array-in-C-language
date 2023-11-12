//Write a function to reverse an arrays ?
#include <stdio.h>
void reverse(int arr[],int n);
void printArr(int arr[], int n);
int main(void) {
int arr[] = {1,2,3,4,5,6,7,8,9,10};
  reverse(arr,9);
  printArr(arr,9);
  return 0;
}


void printArr(int arr[], int n){
  for(int i=0; i<n; i++){
    printf("%d\t",arr[i]);
  }
  printf("\n");
}


void reverse(int arr[], int n){
  for(int i=0; i<n/2; i++){
    int firstVal = arr[i];
    int secondVal = arr[n-i-1];
    arr[i] = secondVal;
    arr[n-i-1] = firstVal;
    
  }
}
