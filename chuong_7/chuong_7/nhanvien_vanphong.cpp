#include "nhanvien_vanphong.h"
#include <iostream>
using namespace std;
nhanvien_vanphong::nhanvien_vanphong(const string& hoTen, const string& ngaySinh, double luongCoBan, int soNgayLamViec, double troCap)
    : nhanvien(hoTen, ngaySinh, luongCoBan), soNgayLamViec(soNgayLamViec), troCap(troCap) {}

double nhanvien_vanphong::tinhluong() const {
    return get_luong() + soNgayLamViec * 200000 + troCap;
}
void nhanvien_vanphong::nhap_thong_tin() {
    nhanvien::nhap_thong_tin();
    cout << "Nhap so ngay lam viec: ";
    cin >> soNgayLamViec;
    cout << "Nhap tro cap: ";
    cin >> troCap;

}
void nhanvien_vanphong::xuat_thong_tin() const {
    nhanvien::xuat_thong_tin();
    std::cout << "So ngay lam viec: " << soNgayLamViec << "\nTro cap: " << troCap << "\nLuong: " << tinhluong() << std::endl;
}
