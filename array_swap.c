#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

  srand( time(NULL));
  
  int i;
  int arr[10];

  for ( i = 0 ; i < 10 ; i++){
    arr[i] = rand();
  }

  arr[9] = 0;

  for ( i = 0 ; i < 10 ; i++){
    printf("arr[%d]: %d\n", i, arr[i]); //prints out each element of arr
  }

  //========== second array ==============//
  
  int *p;
  int arr2d2[10]; //r2d2 lol

  for ( i = 9 ; i >= 0 ; i--){
    p = &arr[i];
    arr2d2[ 9 - i ] = *p;  //reverses arr
  }

  printf("Reverse:\n");
  
  for ( i = 0 ; i < 10 ; i++ ){
    printf("arr2d2[%d]: %d\n", i, arr2d2[i]); //prints out elements of arr2d2
  } 

}
