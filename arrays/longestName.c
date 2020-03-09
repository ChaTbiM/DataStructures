#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    // int i,T;
    
    // i = 0;
    // char results[10][1000] = {
    //     "","","","","","","","","","" };

    // printf("Enter Number OF use cases :");
    // scanf("%d",&T);
    
    // // int arr[T];


    // for(int j = 0; j < T ; j ++){
    //     int N;

    //     printf("enter number of elements >= 1 && <= 10 ");
    //     scanf("%d",&N);
        
    //     char temp[10][1000] = {
    //     "","","","","","","","","","" };

    //     char* tempP = temp[0];  

    //     // Read all strings in each TEst Case and fill it in temp 
    //     for(int k = 0; k < N; k++){
    //         char str[1000];
    //         scanf("%s",str);
    //         // strcpy( *temp[k],str);
    //         strcpy( (*(temp+k)+0) ,str);    
    //     }

       
        
    //     // look for the largest string in temp and save it to results array
    //         // 1 loop through each string
    //         // 2 loop through each caracter untill '\0'
    //             // 3 record the longest string by index and then SAVE IT to RESULTS
    //    int maxLength= 0;
    //    int maxLengthIndex= 0;
    //     int k ;
    //    for(k = 0; k < N ;k++){
    //        int kk = 0;
    //        while( temp[k][kk] != '\0' ){
    //             kk++;
    //        }
    //         if(kk > maxLength){
    //             maxLength = kk;
    //             maxLengthIndex = k;
    //         }   
    //    }
        
    //     strcpy(results[j], temp[maxLengthIndex]);
    // }

    // printf("Output \n");
    
    // i = 0;
    // while( *(results[i]) != '\0'){
    //     printf("string is : %s \n" , results[i]);
    //     i++;
    // }

    char str[50];
    printf("enter string");

    scanf("%s",str);

    printf("length of string %d",strlen(str));

    return 0;
}
