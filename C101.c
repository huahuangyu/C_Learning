// C101.c
// 有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

#include <stdio.h>
int main()
{
    int i,j,k,a[100],n = 0;
    for( i = 1; i <= 4; i++){
        for( j = 1; j <= 4; j++){
            for ( k = 1; k <= 4; k++){
                if (i != j && i != k && j != k)
                {
                    a[n] = i * 100 + j * 10 + k;
                    n++;
                }
                
            }
        }
    }
    printf("能组成%d个无重复数字的三位数\n",n);
    printf("分别是：");
    for ( i = 0; i < n; i++)
    {
        /* code */
        printf("%d", a[i]);
        printf("\t");
    }
    return 0;
}