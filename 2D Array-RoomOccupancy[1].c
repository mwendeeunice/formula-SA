/*
Name:Eunice
Reg No:CT100/G/26231/25
Date:28th October 2025
*/

#include<stdio.h>

int main(){
    int occupancy[5][10];
    int occupied_rooms,vacant_rooms;
    
    srand(time(NULL));
    
    printf("Room Occupancy Data(1=occupied,0=vacant:\n");
    for(int i=0;i<5;i++){
        occupied_rooms=0;
        vacant_rooms=0;
        for(int j=0;j<10;j++){
            occupancy[i][j]=rand()%2;
            if(occupancy[i][j]==1){
               occupied_rooms++;
            }else{
                vacant_rooms++;
            }
        }
        printf("Floor %d:OccupiedRooms=%d,VacantRooms=%d\n",i+1,occupied_rooms,vacant_rooms);
    }
    
    return 0;
}