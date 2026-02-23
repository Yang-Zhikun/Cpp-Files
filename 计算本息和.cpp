#include<stdio.h>
using namespace std;
int main() {
    // 用户一年期定期存款金额
    float origin;
    // 按照百分比格式表示的一年期定期存款年利率(无百分号)
    float rate;

    printf("请输入一年期定期存款金额：");
    scanf("%f", &origin);
    printf("请输入一年期定期存款年利率(无百分号)：");
    scanf("%f", &rate);

    printf("一年期满后本金与利息总额：%.2f\n", origin * rate / 100 + origin);
    return 0;
}