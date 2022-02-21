#include <stdio.h>

int cycle_len(int x) {
    int cycle = 1;
    while(x != 1)
    {
        if(x%2 == 0){
            x = x / 2;
        }else {
            x =x * 3 + 1;
        }
        cycle++;
    }
    return cycle;
}
int main(){
    int n, i, j;
    scanf("%d", &n);
    for(int k = 0;k < n;k++){
        scanf("%d%d", &i, &j);
        int max = 0;
        for(int y=i; y <= j ; y++){
            int lenth = cycle_len(y);
            if(lenth > max){
                max = lenth;
            }
        }
        printf("%d %d %d\n", i, j, max);
    }
}
