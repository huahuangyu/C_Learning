// C104.c
// ����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ���

# include <stdio.h>
int main()
{
    int year, month, day, num = 0;
    printf("�������꣺");
    scanf("%d", &year);
    printf("�������£�");
    scanf("%d", &month);
    printf("�������գ�");
    scanf("%d", &day);

    switch (month)
    {
    case 1:
        num = 0;
        break;
    
    case 2:
        num = 31;
        break;
    
    case 3:
        num = 31 + 28;
        break;
    
    case 4:
        num = 31 + 28 + 31;
        break;

    case 5:
        num = 31 + 28 + 31 + 30;
        break;
    
    case 6:
        num = 31 + 28 + 31 + 30 + 31;
        break;
    
    case 7:
        num = 31 + 28 + 31 + 30 + 31 + 30;
        break;
    
    case 8:
        num = 31 + 28 + 31 + 30 + 31 + 30 + 31;
        break;

    case 9:
        num = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
        break; 

    case 10:
        num = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
        break; 

    case 11:
        num = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
        break; 

    case 12:
        num = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
        break; 

    default:
        break;
    }

    num = num + day;
    if (year % 4 ==0 & year % 100 != 0 || year % 400 == 0)
    {
        if (month > 2)
        {
            num ++;
        }
    }
    printf("%d��%d��%d������һ��ĵ�%d��", year, month, day, num);
    return 0;
}