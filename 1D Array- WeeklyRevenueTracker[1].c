/* 
Name:Eunice
Reg No:CT100/G/26231/25
Date:28th october 2025
*/

# include<stdio.h>

int main(){
    float revenue[7];
    float total_revenue=0.0;
    float average_revenue;
    
    printf("Enter the revenue for each day of the week:\n");
    for(int i=0;i<7;i++){
        printf("Day%d: ",i+1);
        scanf("%f", &revenue[i]);
        total_revenue+=revenue[i];
    }
    
    average_revenue=total_revenue/7.0;
    
    printf("\nTotal weekly revenue:&%.2f\n",total_revenue);
    printf("Average daily revenue:&%.2f\n",average_revenue);
    
    return 0;
}