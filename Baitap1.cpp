#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (b==0) return a;         // base case
    return gcd(b, a % b);       // Thuật toán Euclid tìm ước chung lớn nhất
    }

void rutgon (int x, int y) {
    int a = gcd(x, y); //tìm ước chung lớn nhất
    x /= a;
    y /= a; //rút gọn bằng cách chia tử và mẫu cho ước chung lớn nhất
    cout << x << "/" << y; //xuất kết quả
}

int main() {
    int x, y;
    cin >> x >> y; //x là tử, y là mẫu
    r(x, y); //gọi hàm rút gọn và xuất kết quả
    return 0;
}
