#include <iostream>
#include <cmath>
using namespace std;

const double Pi = 3.1416;
double distance(double x1, double y1, double x2, double y2);
double radius(double x1, double y1, double x2, double y2);
double circumference(double R);
double area(double R);

int main()
{
    double x1, y1, x2, y2;
    cout << "Masukkan koordinat titik pusat lingkaran (x1 y1) : " ;
    cin >> x1 >> y1;
    cout << "Masukkan koordinat titik pada garis lingkaran (x2 y2) : " ;
    cin >> x2 >> y2;
    double R = radius(x1, y1, x2, y2);
    double D = 2*R;
    double K = circumference(R);
    double L = area(R);
    cout << "Lingkaran dengan titik pusat (" << x1 << "," << y1 << ")" << endl;
    cout << "dan melalui titik (" << x2 << "," << y2 << ")" << endl;
    cout << "Jari-jari : " << R << endl;
    cout << "Diameter  : " << D << endl;
    cout << "Keliling  : " << K << endl;
    cout << "Luas      : " << L;
    return 0;
}

double distance(double x1, double y1, double x2, double y2)
{
    double jarak = sqrt(pow((x2-x1), 2) + pow ((y2-y1), 2));
    return jarak;
}

double radius(double x1, double y1, double x2, double y2)
{
    double Jarijari = distance(x1, y1, x2, y2);
    return Jarijari;
}

double circumference(double R)
{
    double keliling = 2*Pi*R;
    return keliling;
}

double area(double R)
{
    double luas = Pi*pow(R, 2);
    return luas;
}
