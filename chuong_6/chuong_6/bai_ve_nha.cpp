#include <iostream>
#include <vector>
#include "laptrinhvien.h"
#include "KiemChungVien.h"
#include "nhanvien.h"

using namespace std;

void nhapDanhSachNhanVien(vector<nhanvien*>& ds) {
    int soLuong, loaiNV;
    cout << "Nhap so luong nhan vien: ";
    cin >> soLuong;
    for (int i = 0; i < soLuong; ++i) {
        cout << "Chon loai nhan vien (1 - Lap trinh vien, 2 - Kiem chung vien): ";
        cin >> loaiNV;
        nhanvien* nv = nullptr;

        if (loaiNV == 1) {
            nv = new laptrinhvien();
        }
        else if (loaiNV == 2) {
            nv = new KiemChungVien();
        }

        if (nv) {
            nv->nhap_thong_tin_nhan_vien();
            ds.push_back(nv);
        }
    }
}

void xuatDanhSachNhanVien(const vector<nhanvien*>& ds) {
    for (const auto& nv : ds) {
        nv->xuat_thong_tin_nhan_vien();
    }
}

void lietKeNhanVienLuongThapHonTrungBinh(const vector<nhanvien*>& ds) {
    double tongLuong = 0;
    for (const auto& nv : ds) {
        tongLuong += nv->tinhluong();
    }
    double luongTB = tongLuong / ds.size();

    cout << "Danh sach nhan vien co luong thap hon trung binh:\n";
    for (const auto& nv : ds) {
        if (nv->tinhluong() < luongTB) {
            nv->xuat_thong_tin_nhan_vien();
        }
    }
}

int main() {
    vector<nhanvien*> danhSachNhanVien;

    nhapDanhSachNhanVien(danhSachNhanVien);
    cout << "\nDanh sach nhan vien:\n";
    xuatDanhSachNhanVien(danhSachNhanVien);
    cout << "\nDanh sach nhan vien co luong thap hon trung binh:\n";
    lietKeNhanVienLuongThapHonTrungBinh(danhSachNhanVien);

    // Giải phóng bộ nhớ của các đối tượng
    for (auto& nv : danhSachNhanVien) {
        delete nv;
    }

    return 0;
}