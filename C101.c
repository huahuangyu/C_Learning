// C101.c
// ��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�

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
    printf("�����%d�����ظ����ֵ���λ��\n",n);
    printf("�ֱ��ǣ�");
    for ( i = 0; i < n; i++)
    {
        /* code */
        printf("%d", a[i]);
        printf("\t");
    }
    return 0;
}