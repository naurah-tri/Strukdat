#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() 
{
    int *dynamicarray=(int*)malloc(5 *sizeof(int));
    
    for(int i=0; i<5; ++i){
      dynamicarray[i] = i + 1;
    }
    
    for (int i=0; i<5; ++i){
      printf("%d",dynamicarray[i]);
    }
    
    free (dynamicarray);
    return 0;
}