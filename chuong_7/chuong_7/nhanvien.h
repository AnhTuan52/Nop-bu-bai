#pragma once
#include<iostream>
using namespace std;
class nhanvien
{private:
	string hoten;
	string ngaysinh;
	double luongCB;
public:
	nhanvien(const std::string& hoten, const std::string& ngaysinh, double luongCB);
	virtual ~nhanvien() = default;

	virtual double tinhluong() const;
	virtual void nhap_thong_tin();
	virtual void xuat_thong_tin() const;
	string get_hoten() const;
	double get_luong() const;
};

