#include<stdio.h>

char rastlince;
int main () {
    int n, n0=0, a, travca=0, rema=0, b=0;
    scanf("%d", &n);
    scanf("%d", &a);
    for (int i = 0; i < a+1; i++) {
        scanf("%c", &rastlince);
        if (rastlince== '|') {
            if (travca == 3) {
                travca = 0;
            }else{
                travca += 1;
                n0+=1;
            }
        }else{  
            travca = 0; 
            if (rastlince == 'R') {
                rema = 1;
                n0 += 1;
            }
            if (rastlince == 'M') {
                if (rema == 1) {
                }else{
                    n0+=1;
                }
            }
        }
        if (n0 ==n) {
            break;
        }
        b++;
    }
    printf("%d\n", b);
    return 0;
}