#pragma once
#include "NhanVien.h"

class nhanvien_vanphong : public nhanvien {
private:
    int soNgayLamViec;
    double troCap;

public:
    nhanvien_vanphong(const string& hoTen, const string& ngaySinh, double luongCoBan, int soNgayLamViec, double troCap);
    double tinhluong() const override;
    void nhap_thong_tin() override;
    void xuat_thong_tin() const override;
};


