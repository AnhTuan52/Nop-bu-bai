#include <bits/bits-stdc++.h>
#include "nhanvien_vanphong.h"
#include "nhanvien_sanxuat.h"
#include "nhanvien_quanly.h"

using namespace std;

void nhapDanhSachNhanVien(vector<unique_ptr<nhanvien>>& ds) {
    int soLuong, loaiNV;
    cout << "Nhap so luong nhan vien: ";
    cin >> soLuong;
    cin.ignore();

    for (int i = 0; i < soLuong; ++i) {
        cout << "Chon loai nhan vien (1 - Van Phong, 2 - San Xuat, 3 - Quan Ly): ";
        cin >> loaiNV;
        cin.ignore();

        unique_ptr<nhanvien> nv;

        switch (loaiNV) {
        case 1:
            nv = make_unique<nhanvien_vanphong>("", "", 0, 0, 0);
            break;
        case 2:
            nv = make_unique<nhanvien_sanxuat>("", "", 0, 0);
            break;
        case 3:
            nv = make_unique<nhanvien_quanly>("", "", 0, 0, 0);
            break;
        default:
            cout << "Loai nhan vien khong hop le! Vui long chon lai.\n";
            --i; // Lùi lại chỉ số để nhập lại cho nhân viên này
            continue;
        }

        nv->nhap_thong_tin();
        ds.push_back(move(nv));
    }
}

void xuatDanhSachNhanVien(const vector<unique_ptr<nhanvien>>& ds) {
    cout << "\nDanh sach nhan vien:\n";
    for (const auto& nv : ds) {
        nv->xuat_thong_tin();
        cout << "====================\n";
    }
}

void lietKeNhanVienLuongThapHonTrungBinh(const vector<unique_ptr<nhanvien>>& ds) {
    double tongLuong = 0;
    for (const auto& nv : ds) {
        tongLuong += nv->tinhluong();
    }

    double luongTB = ds.empty() ? 0 : tongLuong / ds.size();
    cout << "Luong trung binh: " << luongTB << endl;

    cout << "\nDanh sach nhan vien co luong thap hon trung binh:\n";
    for (const auto& nv : ds) {
        if (nv->tinhluong() < luongTB) {
            nv->xuat_thong_tin();
            cout << endl;
        }
    }
}

int main() {
    vector<unique_ptr<nhanvien>> danhSachNhanVien;

    nhapDanhSachNhanVien(danhSachNhanVien);
    xuatDanhSachNhanVien(danhSachNhanVien);
    lietKeNhanVienLuongThapHonTrungBinh(danhSachNhanVien);

    return 0;
}
