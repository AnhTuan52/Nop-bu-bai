#pragma once
#include<iostream>
#include"nhanvien.h"
using namespace std;

class laptrinhvien: public nhanvien
{private:
	int gioOT;

public:
	laptrinhvien();
	laptrinhvien(string ma, string ten, int tuoi, string sdt, string email, double luongCB, int gioOT);

	double tinhluong () const override;
	void xuat_thong_tin_nhan_vien () const override;
	void nhap_thong_tin_nhan_vien () override;

};

