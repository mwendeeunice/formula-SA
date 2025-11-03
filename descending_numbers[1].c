/*Name: Eunice Mwende
	Reg:CT100/G/26231/25
	*/
#include <stdio.h>

void for_loop_descending_numbers() {
    printf("--- 1. For Loop: Numbers 100 down to 50 ---\n");
    
    // i starts at 100, continues as long as i >= 50, and decreases by 1 in each step
    for (int i = 100; i >= 50; i--) {
        printf("%d\n", i);
    }
}