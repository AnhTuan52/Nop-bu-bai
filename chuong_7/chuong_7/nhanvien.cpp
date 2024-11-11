#include "nhanvien.h"
#include <iostream>
#include<bits/bits-stdc++.h>
using namespace std;

nhanvien::nhanvien(const string& hoten, const string& ngaysinh, double luongCB)
    : hoten(hoten), ngaysinh(ngaysinh), luongCB(luongCB) {}

void nhanvien::nhap_thong_tin() {
    cout << "Nhap ho va ten ";
    cin.ignore();
    getline(cin, hoten);
    cout << "Nhap ngay sinh ";
    cin.ignore();
    getline(cin, ngaysinh);
    cout << "Nhap luong co ban ";

    cin.ignore();
    cin >> luongCB;

}
void nhanvien::xuat_thong_tin() const {
   cout << "Ho ten: " << hoten << "\nNgay sinh: " << ngaysinh << "\nLuong co ban: " << luongCB << endl;
}

string nhanvien::get_hoten() const {
    return hoten;
}
double nhanvien::get_luong() const {
    return luongCB;
}
double nhanvien::tinhluong() const {
    return 0;
}