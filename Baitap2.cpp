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

void sosanh (int t1, int m1,int t2,int m2) {
    int l = lcm(m1, m2); //tìm mẫu số chung = bội chung nhỏ nhất của 2 mẫu
    int hs1 = l/m1;
    int hs2 = l/m2; //hệ số quy đồng từng phân số
    int t1q = t1;
    int t2q = t2;
    int m1q = m1;
    int m2q = m2; //đặt tử mẫu riêng để quy đồng (mục đích để in ra kết quả là phân số ban đầu)
    t1q *= hs1; m1q *= hs1;
    t2q *= hs2; m2q *= hs2; //nhân tử và mẫu cho hệ số tương ứng để quy đồng mẫu

    if (t1 > t2) cout << t1 << "/" << m1;
    else if (t1 < t2) cout << t2 << "/" << m2;
    else cout << "Hai phan so bang nhau"; //xuất kết quả tương ứng
}

int main() {
    int t1, m1, t2, m2;
    cin >> t1 >> m1 >> t2 >> m2; //nhập tử và mẫu của lần lượt 2 phân số
    sosanh(t1, m1, t2, m2);

    return 0;
}
