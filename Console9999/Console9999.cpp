#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the multiplication table (n): ";
    cin >> n;

    // 打印乘法表的表頭
    cout << "   ";
    for (int i = 1; i <= n; i++) {
        cout << i << "\t";
    }
    cout << endl;

    // 打印乘法表的每一行
    for (int i = 1; i <= n; i++) {
        cout << i << " | "; // 打印行標籤
        for (int j = 1; j <= n; j++) {
            cout << i * j << "\t"; // 計算並打印乘積
        }
        cout << endl;
    }

    return 0;
}
