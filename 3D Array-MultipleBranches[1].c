/*
Name;Eunice 
Reg No:CT100/G/26231/25
Date:28th October 2025
*/

#include<stdio.h>

int main(){
    int chain[3][5][10];
    int total_occupied_rooms=0;
    
    srand(time(NULL));
    
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            for(int k=0;k<10;k++){
                chain[i][j][k]=rand()%2;
                if(chain [i][j][k]==1){
                   total_occupied_rooms++;
                }
            }
        }
    }
    
    printf("Total number of occupied rooms across all branches:%d\n",total_occupied_rooms);
    
    return 0;
}
    