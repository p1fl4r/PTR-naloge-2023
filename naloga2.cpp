#include<stdio.h>

int main(){
    for(int i = 0; i <= 10000; i+=45){
        printf("%3d. %4d porciji prvi kuhar in %4d porcij drugi kuhar (%d*5 + %d*9 = 10000)\n", i/45+1, (10000-i)/5, i/9, (10000-i)/5, i/9);
    }
    return 0;
}