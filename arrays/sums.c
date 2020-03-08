#include <stdio.h>
#include <stdlib.h>
int main (){
    int T; 

    printf("Enter Number of test cases ( arrays ): ");
    scanf("%d",&T);

    int res[T];

    for(int i = 0 ; i < T ; i++){
        int N, sum;
        sum = 0; 
        
        printf("enter number of elements : "); 
        scanf("%d",&N);
        
        for(int j = 0 ; j < N ; j++){
            int number;
            scanf("%d", &number);
            sum += number;
        }
        res[i]= sum;
    }  
    
    printf("Output: \n ");
    
    for ( int k = 0 ; k < T ; k++){
        printf("%d \n", res[k]);
    }

    return 0 ;
}