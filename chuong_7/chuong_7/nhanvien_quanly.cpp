#include "nhanvien_quanly.h"
#include <iostream>
using namespace std;
nhanvien_quanly::nhanvien_quanly(const string& hoTen, const string& ngaySinh, double luongCoBan, double heSoChucVu, double thuong)
    : nhanvien(hoTen, ngaySinh, luongCoBan), heSoChucVu(heSoChucVu), thuong(thuong) {}

double nhanvien_quanly::tinhluong() const {
    return get_luong() * heSoChucVu + thuong;
}
void nhanvien_quanly::nhap_thong_tin() {
    nhanvien::nhap_thong_tin();
    cout << "Nhap he so chuc vu: ";
    cin >> heSoChucVu;
    cout << "Nhap thuong: ";
    cin >> thuong;
}

void nhanvien_quanly::xuat_thong_tin() const {
    nhanvien::xuat_thong_tin();
    std::cout << "He so chuc vu: " << heSoChucVu << "\nThuong: " << thuong << "\nLuong: " << tinhluong() << std::endl;
}