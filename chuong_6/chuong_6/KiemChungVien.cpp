#include "KiemChungVien.h"


KiemChungVien::KiemChungVien() : nhanvien(), soLoi(0) {}


KiemChungVien::KiemChungVien(string ma, string ten, int tuoi, string sdt, string email, double luongCB, int soLoi)
    : nhanvien(ma, ten, tuoi, sdt, email, luongCB), soLoi(soLoi) {}

// Tính lương cho kiểm chứng viên
double KiemChungVien::tinhluong() const {
    return getluong() + soLoi * 50000;
}

// Nhập thông tin kiểm chứng viên
void KiemChungVien::nhap_thong_tin_nhan_vien() {
    nhanvien::nhap_thong_tin_nhan_vien();
    cout << "Nhap so loi phat hien: ";
    cin >> soLoi;
}

// Xuất thông tin kiểm chứng viên
void KiemChungVien::xuat_thong_tin_nhan_vien() const {
    nhanvien::xuat_thong_tin_nhan_vien();
    cout << ", So loi: " << soLoi << ", Luong: " << tinhluong() << endl;
}