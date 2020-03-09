#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int i,T;
    
    i = 0;
    char results[10][1000] = {
        "","","","","","","","","","" };

    printf("Enter Number OF use cases :");
    scanf("%d",&T);

    for(int j = 0; j < T ; j ++){
        int N;

        printf("enter number of elements >= 1 && <= 10 ");
        scanf("%d",&N);
        
        char temp[10][1000] = {
        "","","","","","","","","","" };

        // Read all strings in each TEst Case and fill it in temp 
        for(int k = 0; k < N; k++){
            char str[1000];
            scanf("%s",str);
            // strcpy( *temp[k],str);
            strcpy( (*(temp+k)+0) ,str);    
        }       
        
       // find the longest string in an array of strings
       int maxLength= 0;  
       int maxLengthIndex= 0; 
       int k ;
       for(k = 0; k < N ;k++){
           int kk = 0;
           while( temp[k][kk] != '\0' ){
                kk++;
           }
            if(kk > maxLength){
                maxLength = kk;
                maxLengthIndex = k;
            }   
       }
        
        strcpy(results[j], temp[maxLengthIndex]); // copy each longest string of test case to results array
    }

    printf("Output \n");
    while( *(results[i]) != '\0'){
        printf("string is : %s \n" , results[i]);
        i++;
    }    

    return 0;
}
