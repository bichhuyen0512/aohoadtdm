#include <iostream>

using namespace std;

int main() {
    int chieuDai, chieuRong, dienTich;

    cout << "Nhap chieu dai: ";
    cin >> chieuDai;

    cout << "Nhap chieu rong: ";
    cin >> chieuRong;

    dienTich = chieuDai * chieuRong;

    cout << "Dien tich hinh chu nhat la: " << dienTich << endl;

    return 0;
}