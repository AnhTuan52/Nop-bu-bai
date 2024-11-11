#include "nhanvien.h"

class KiemChungVien : public nhanvien {
private:
    int soLoi;

public:
    KiemChungVien();
    KiemChungVien(string ma, string ten, int tuoi, string sdt, string email, double luongCB, int soLoi);
    double tinhluong() const override;
    void xuat_thong_tin_nhan_vien() const override;
    void nhap_thong_tin_nhan_vien() override;  // Ghi đè phương thức nhập thông tin
};