
#include "nhanvien_sanxuat.h"
#include <iostream>

nhanvien_sanxuat::nhanvien_sanxuat(const string& hoTen, const string& ngaySinh, double luongCoBan, int soSanPham)
    : nhanvien(hoTen, ngaySinh, luongCoBan), soSanPham(soSanPham) {}

double nhanvien_sanxuat::tinhluong() const {
    return get_luong() + soSanPham * 2000;
}

void nhanvien_sanxuat::nhap_thong_tin() {
    nhanvien::nhap_thong_tin();
    std::cout << "Nhap so san pham: ";
    std::cin >> soSanPham;
}

void nhanvien_sanxuat::xuat_thong_tin() const {
    nhanvien::xuat_thong_tin();
    cout << "So san pham: " << soSanPham << "\nLuong: " << tinhluong() << std::endl;
}
