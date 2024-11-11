#include "nhanvien.h"
#include<iostream>
using namespace std;

nhanvien::nhanvien() : maNV(""), hoTen(""), tuoi(0), sdt(""), email(""), luongCoBan(0) {}

nhanvien::nhanvien(string ma, string ten, int tuoi, string sdt, string email, double luongCB) {
	maNV=ma;
	hoTen=ten;
	this->tuoi = tuoi;
	this->sdt = sdt;
	this->email = email;
	this->luongCoBan = luongCB;
}
double nhanvien::getluong() const {
    return luongCoBan;
}
void nhanvien::nhap_thong_tin_nhan_vien() {
    cout << "Nhap ma nhan vien: ";
    cin >> maNV;
    cout << "Nhap ho ten: ";
    cin.ignore();
    getline(cin, hoTen);
    cout << "Nhap tuoi: ";
    cin >> tuoi;
    cout << "Nhap so dien thoai: ";
    cin >> sdt;
    cout << "Nhap email: ";
    cin >> email;
    cout << "Nhap luong co ban: ";
    cin >> luongCoBan;
}
void nhanvien:: xuat_thong_tin_nhan_vien () const {
    cout << "Ma NV: " << maNV << ", Ho Ten: " << hoTen << ", Tuoi: " << tuoi
        << ", SDT: " << sdt << ", Email: " << email << ", Luong co ban: " << luongCoBan;
}