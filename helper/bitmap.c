#include <stdio.h>
#include <stdint.h>
int main(){
    
    FILE* fp = fopen("map.txt", "rt");
    int row = 16, col = 16;
    int on;
    for (int i = 0; i < row; i++){
        int16_t bitMap = 0;
        for (int j = 0; j < col; j++){
            fscanf(fp, "%d", &on);
            if (on){
                bitMap += ((int16_t) 1) << j;
            }
        }
        printf("%hd\n", bitMap);
    }
    fclose(fp);
    return 0;
}