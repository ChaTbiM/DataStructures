#include <stdio.h>
#include <stdlib.h>
int main (){
    int T; 
    printf("Enter Number of test cases ( arrays ): ");
    scanf("%d",&T);
    int res[T];
    for(int i = 0 ; i < T ; i++){
        int N, max;  
        printf("enter number of elements : "); 
        scanf("%d",&N);
        int arr[N]; 
        for(int j = 0 ; j < N ; j++){
            int number;
            scanf("%d", &number);
            arr[j] = number;
        }

        max= arr[0];
        for(int j = 1 ; j < N ; j++){
            if(arr[j] > max){
                max = arr[j];
            }
        }   
        res[i]= max;
    }  
    printf("Output: \n ");
    for ( int k = 0 ; k < T ; k++){
        printf("%d \n", res[k]);
    }
    return 0 ;
}