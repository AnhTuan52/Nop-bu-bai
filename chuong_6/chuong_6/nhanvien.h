#pragma once
#include<bits/bits-stdc++.h>
using namespace std;

class nhanvien
{
private:
    string maNV;
    string hoTen;
    int tuoi;
    string sdt;
    string email;
    double luongCoBan;
public:
   nhanvien();
   nhanvien(string ma, string ten, int tuoi, string sdt, string email, double luongCB);
   double getluong() const;
   virtual double tinhluong() const
   {
       return 0;
   }
   virtual void nhap_thong_tin_nhan_vien();
   virtual void xuat_thong_tin_nhan_vien() const;
};

