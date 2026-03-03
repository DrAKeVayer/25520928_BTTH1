#include <iostream>

using namespace std;

void nextday(int d, int m, int y) {
    d++;
    int daylimit;

    bool leap;
    if (y % 100 == 0 && y % 400 != 0) leap = false;
    else if (y % 4 == 0) leap = true; //xác định năm nhuận hay không


    if (m == 2 && leap) daylimit = 29;
    else if (m == 2 && !leap) daylimit = 28;
    else if (m == 4 || m == 6 || m == 9 || m == 11) daylimit = 30;
    else daylimit = 31; //tìm số ngày tối đa của tháng hiện tại

    if (d > daylimit) {
        m++;
        d = 1; //nếu "lố ngày" thì thêm 1 tháng, ngày về 1

        if (m > 12) {
            y++;
            m = 1; //nếu "lố tháng" thì thêm 1 năm, tháng về 1
        }
    }

    cout << d << "/" << m << "/" << y; //xuất kết quả
}

int main() {
    int d, m, y;
    cin >> d >> m >> y;
    nextday(d, m ,y);

    return 0;

}
