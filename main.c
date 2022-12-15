#include <stdio.h>
//求最大公因數
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int temp;
    if (num1 >= num2) {//choose the smaller
        temp = num2;
    }
    else {
        temp = num1;
    }
    int ans;
    for (int i=temp; i>0; i--) {
        int mod1, mod2;
        mod1 = num1 % i;
        mod2 = num2 % i;
        if (mod1 == 0 && mod2 == 0) {
            ans = i;
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}
