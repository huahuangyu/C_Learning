// C104.c
// 输入某年某月某日，判断这一天是这一年的第几天

# include <stdio.h>
int main()
{
    int year, month, day, num = 0;
    printf("请输入年：");
    scanf("%d", &year);
    printf("请输入月：");
    scanf("%d", &month);
    printf("请输入日：");
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
    printf("%d年%d月%d日是这一年的第%d天", year, month, day, num);
    return 0;
}