#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i,N, inputType,data;
    printf("Enter the input type:\n");
    printf("1. Random\n");
    printf("2. Manual\n");

    scanf("%d",&inputType);

    printf("Enter the number of elements:\n");
    scanf("%d",&N);

    int array[N];
    int maxValue = 100;
    inputType = 1;

    switch (inputType)
    {
    case 1 :
        for(i = 0; i < N; i++){
            data = rand() % maxValue - 50;
            array[i] = data;
        }
        break;
    case 2:
    printf("Keyboard input:\n");
        for(i = 0; i < N; i++){
            scanf("%d",&data);
            array[i] = data;
        }
        break;
    case 3:
        
        break;
    }

//bubble sort array
    int temp;
    for(i = 0; i < N; i++){
        for(int j = 0; j < N - 1; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < N; i++){
        printf("%d ",array[i]);
    }
    return 0;
}