#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (b==0) return a;         // base case
    return gcd(b, a % b);       // Thuật toán Euclid tìm ước chung lớn nhất
}

int lcm(int a, int b) {
    int lcm = (a*b)/gcd(a, b);  // Công thức tính bội chung nhỏ nhất dựa trên ước chung lớn nhất
    return lcm;
}

void congVAtru (int t1, int m1,int t2,int m2) {
    int l = lcm(m1, m2); //tìm mẫu số chung = bội chung nhỏ nhất của 2 mẫu
    int hs1 = l/m1;
    int hs2 = l/m2; //hệ số quy đồng từng phân số
    t1 *= hs1; m1 *= hs1;
    t2 *= hs2; m2 *= hs2; //nhân tử và mẫu cho hệ số tương ứng để quy đồng mẫu
    cout << t1+t2 << "/" << l << '\n'; //cộng 2 tử và xuất kết quả
    cout << t1-t2 << "/" << l << '\n'; //tương tự với trừ
}
void nhanVAchia (int t1, int m1,int t2,int m2) {
    cout << t1*t2 << "/" << m1*m2 << '\n'; //tử nhân tử mẫu nhân mẫu
    cout << t1*m2 << "/" << m1*t2; //tử này nhân mẫu kia (phép chia, nhân nghịch đảo)
}

int main() {
    int t1, m1, t2, m2;
    cin >> t1 >> m1 >> t2 >> m2; //nhập tử và mẫu của lần lượt 2 phân số
    congVAtru(t1, m1, t2, m2);
    nhanVAchia(t1, m1, t2, m2);

    return 0;
}
