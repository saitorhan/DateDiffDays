#include <cstdlib>
#include <iostream>
#include <stdlib.h>
using namespace std;
 
int main(void) 
{ 
 int ds , df, dr, ms, mf, mr, ys, yf, yr, total_days, dsc, msc, ysc; 
 char ans; 
 cout << “Iki Tarih Arasinda Kalan Gun Sayisini Hesapliyoruz” << endl; 
 new_date: 
 cout << “Baslama Tarihini Giriniz: GG AA YYYY” << endl; 
 cin >> ds >> ms >> ys ; 
 while (!(( ds <= 31 && ms == 1 )||( ds <= 28 && ms == 2 )||( ds <= 31 && ms == 3 )||( ds <= 30 && ms == 4 )|| // Ay-Gun 
 ( ds <= 31 && ms == 5 )||( ds <= 30 && ms == 6 )||( ds <= 31 && ms == 7 )||( ds <= 31 && ms == 8 )|| // tutarlýlýðý 
 ( ds <= 30 && ms == 9 )||( ds <= 31 && ms == 10 )||( ds <= 30 && ms == 11 )||( ds <= 31 && ms == 12 ) // sorgulama satýrlarý 
 ||(ds <= 29 && ms == 2 && ys % 4 ==0))) // þubat ayý Özel Durumu 
 {cout << “Baslama Tarihini Gecersiz Girdiniz. Lutfen Tekrar Giriniz: GG AA YYYY” << endl; 
 cin >> ds >> ms >> ys ; 
 } 
 cout << “Bitis Tarihini Giriniz: GG AA YYYY” << endl; 
 cin >> df >> mf >> yf; 
 while (!(( df <= 31 && mf == 1 )||( df <= 28 && mf == 2 )||( df <= 31 && mf == 3 )||( df <= 30 && mf == 4 )|| // Ay-Gun 
 ( df <= 31 && mf == 5 )||( df <= 30 && mf == 6 )||( df <= 31 && mf == 7 )||( df <= 31 && mf == 8 )|| // tutarlýlýðý 
 ( df <= 30 && mf == 9 )||( df <= 31 && mf == 10 )||( df <= 30 && mf == 11 )||( df <= 31 && mf == 12 ) // sorgulama satýrlarý 
 ||(df <= 29 && mf == 2 && yf % 4 ==0))) // þubat ayý Özel Durumu 
  
 { 
 cout << “Bitis Tarihini Gecersiz Girdiniz. Lutfen Tekrar Giriniz: GG AA YYYY” << endl; 
 cin >> df >> mf >> yf ; 
 } 
 dsc = df, msc = mf, ysc = yf; 
 if (df – ds < 0) { // Tarih Çýkarma Ýþlemi Ba?langýcý 
 df = df + 30; 
 mf = mf – 1; 
 dr = df -ds; } 
 else { dr = df – ds ; } 
 if (mf – ms < 0) { 
 mf = mf + 12; 
 yf = yf – 1; 
 mr = mf – ms; } 
 else { mr = mf – ms; } 
 yr = yf – ys; 
 total_days = 365*yr + 30*mr + dr; 
 cout << ds <<“.” << ms << “.” << ys << ” Tarihi Ile ” << dsc << “.” << msc << “.” << ysc << ” Tarihi Arasinda ” << total_days << ” Gun Vardir.” << endl; 
 cout << “( ” << yr << ” YIL ” << mr << ” AY ” << dr << ” GUN)” << endl; 
 system(“PAUSE”); 
 switch_ans: 
 cout << “Yeni Sorgulama Yapmak Icin N’ye, Cikmak Icin E’ye Basin.”; 
 cin >> ans; 
 switch (ans) { 
 case ‘N||n’ : goto new_date; 
 break; 
 case ‘E||e’ : return EXIT_SUCCESS; 
 break; 
 default : cout << “Yanlis Tusa Bastiniz. Tekrar Deneyiniz.” << endl; 
 goto switch_ans; 
 } 
 system(“PAUSE”); 
 return EXIT_SUCCESS; 
}