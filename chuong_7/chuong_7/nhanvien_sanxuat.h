#pragma once

#include "Nhanvien.h"

class nhanvien_sanxuat : public nhanvien {
private:
    int soSanPham;

public:
    nhanvien_sanxuat(const string& hoTen, const string& ngaySinh, double luongCoBan, int soSanPham);
    double tinhluong() const override;
    void nhap_thong_tin() override;
    void xuat_thong_tin() const override;
};




