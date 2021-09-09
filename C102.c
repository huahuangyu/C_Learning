// C102.c
/*
企业发放的奖金根据利润提成。利润i低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元部分的按照10%提成，高于10万元的部分，可提成7.5%；
20万元到40万之间时，高于20万元的部分，可提成5%；
40万元到60万之间时高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%，高于100万元时，超过100万元的部分按1%提成，
从键盘输入当月利润i，求应发放奖金总数？
*/ 

# include <stdio.h>
int main()
{
    double i, prize;
    printf("请输入当月利润i:");
    scanf("%lf",&i);
    i = i / 10000;
    if(i < 10){
        prize = i * 0.1;
    }
    else if (i <= 20)
    {
        prize = 10 * 0.1 + (i - 10) * 0.075;
    }
    else if (i <= 40)
    {
        prize = 10 * 0.1 + 10 * 0.075 + (i - 20) * 0.05;
    }
    else if (i <= 60)
    {
        prize = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + (i - 40) * 0.03;
    }
    else if (i <= 100){
        prize = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + (i - 60) * 0.015;
    }
    else{
        prize = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + 40 * 0.015 + (i - 100) * 0.01;
    }
    printf("应发奖金%.2f元", prize * 10000);
    return 0;
}