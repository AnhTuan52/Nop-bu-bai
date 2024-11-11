#include "laptrinhvien.h"
#include<iostream>
using namespace std;

laptrinhvien::laptrinhvien() : nhanvien(), gioOT(0) {}

// Khởi tạo với tham số
laptrinhvien::laptrinhvien(string ma, string ten, int tuoi, string sdt, string email, double luongCB, int gioOT)
    : nhanvien(ma, ten, tuoi, sdt, email, luongCB), gioOT(gioOT) {}

// tinh luong
double laptrinhvien::tinhluong() const {
    return (getluong()  + gioOT * 200000);
}
//nhap thong tin lap trinh vien
void laptrinhvien::nhap_thong_tin_nhan_vien() {
   nhanvien::nhap_thong_tin_nhan_vien();
    cout << "Nhap so gio OT: ";
    cin >> gioOT;
}
// xuat thong tin lap trinh
void laptrinhvien::xuat_thong_tin_nhan_vien() const {
    nhanvien::xuat_thong_tin_nhan_vien();
    cout << ", Gio OT: " << gioOT << ", Luong: " << tinhluong() << endl;
}