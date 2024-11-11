#pragma once
#include <iostream>
#include "nhanvien.h"
class nhanvien_quanly :public nhanvien{
private:
    double heSoChucVu;
    double thuong;

public:
    nhanvien_quanly(const string& hoTen, const string& ngaySinh, double luongCoBan, double heSoChucVu, double thuong);
    double tinhluong() const override;
    void nhap_thong_tin() override;
    void xuat_thong_tin() const override;
};
