#include<iostream>
using namespace std;
int main() {
    cout << "请输入10个整数：\n";
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        sum += num;
    }
    cout << "这10个整数的和是：" << sum << endl;
    // system("pause");
    return 0;
}