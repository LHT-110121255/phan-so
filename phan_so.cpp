#include <stdio.h>
#include <windows.h>
#include <math.h>

typedef struct phan_so
{
    int tu;
    int mau;
}phan_so;

void Nhap(phan_so &p);
void Xuat(phan_so p);
int UCLN(int a, int b);
phan_so RutGon(phan_so p);
phan_so CongPS(phan_so P1, phan_so p2);
phan_so TruPS(phan_so P1, phan_so p2);
phan_so NhanPS(phan_so P1, phan_so p2);
phan_so ChiaPS(phan_so P1, phan_so p2);

int main()
{
    system("cls");
    phan_so p, p1, p2;
    Nhap(p1);
    Nhap(p2);
    printf("Chon phep tinh 2 phan so: ");
    // char lc; scanf("%c", &lc);
    
}

void Nhap(phan_so &p)
{
    printf("Nhap tu"); scanf("%d", &p.tu);
    printf("Nhap mau"); scanf("%d", &p.mau);
}
void Xuat(phan_so p)
{
    printf("\n%d/%d", p.tu, p.mau);
}
int UCLN(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while( a* b != 0)
    {
        (a > b) ? (a%= b) : (b %= a);
    }
    return a + b;
}
phan_so RutGon(phan_so p)
{
    phan_so c;
    c.tu = p.tu / UCLN(p.tu, p.mau);
    c.mau = p.mau / UCLN(p.tu, p.mau);
    return c;
}

phan_so CongPS(phan_so p1, phan_so p2)
{
    phan_so p;
    if(p1.mau == p2.mau)
    {
        p.tu = p1.tu + p2.tu;
        p.mau = p1.mau;
    } else
    {
        p.tu = p1.tu*p2.mau + p2.tu*p1.mau;
        p.mau = p1.mau * p2.mau;
    }
    return RutGon(p);
}
phan_so TruPS(phan_so P1, phan_so p2)
{
    phan_so p;
    if(p1.mau == p2.mau)
    {
        p.tu = p1.tu - p2.tu;
        p.mau = p1.mau;
    } else
    {
        p.tu = p1.tu*p2.mau - p2.tu*p1.mau;
        p.mau = p1.mau * p2.mau;
    }
    return RutGon(p);
}
phan_so NhanPS(phan_so P1, phan_so p2)
{
    phan_so p;
        p.tu = p1.tu*p2.tu;
        p.mau = p1.mau*p2.mau;
    return RutGon(p);
}
phan_so ChiaPS(phan_so P1, phan_so p2)
{
    phan_so p;
    p.tu = p1.tu * p2.mau;
    p.mau = p1.mau * p2.tu;
    return RutGon(p);
}