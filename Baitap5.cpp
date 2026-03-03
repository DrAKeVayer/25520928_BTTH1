#include <iostream>
#include <string>

using namespace std;

struct HS{
    string name;
    double diemtoan;
    double diemvan;
};

void input(HS &hs) {
    getline (cin >> ws, hs.name); //nhập tên có khoảng trắng trên 1 dòng
    cin >> hs.diemtoan >> hs.diemvan; //nhập điểm
}

void dtb(HS hs) {
    cout << "Ten hoc sinh: " << hs.name << '\n';
    cout << "Diem toan: " << hs.diemtoan << '\n';
    cout << "Diem van: " << hs.diemvan << '\n';
    cout << "Diem Trung binh: " << (hs.diemtoan + hs.diemvan) / 2; //xuất mọi thông số
}

int main() {
    HS hs;
    input(hs);
    dtb(hs);

    return 0;
}
