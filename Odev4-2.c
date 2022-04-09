#include <stdio.h>
#include <conio.h>
#include <math.h>
void islemSec(int);
double kokAl(double a, double n);
int main(){
	int secim;
	printf("Lutfen yapmak istedigimiz islem numarasini giriniz(1-3):  ");
	scanf("%d", &secim);
	islemSec(secim);
	getch();
	return 0;
}
	void islemSec(int islemSec){
		double x;
		double n;
		switch(islemSec){
			case 1:
				printf("Islem yapmak istediginiz x degerini giriniz");
				scanf("%lf",&x);
				x=12*pow(x,6.0)+kokAl(6.0*pow(x,2.0),2);
				printf("Islemin sonucu %lf",x);
				getch();
				break;
			case 2:
				printf("Islem yapmak istediginiz x degerini giriniz");
				scanf("%lf",&x);
				//iþlem
				x=sin(pow(x,4.0))+kokAl(M_E,5);
				printf("Islemin sonucu %lf",x);	
				getch();
				break;
			case 3:
				printf("Islem yapmak istediginiz x degerini giriniz");
				scanf("%lf",&x);
				//iþlem
				x=kokAl(pow(M_PI,4),3)-4*(pow(cos(x),3.0));
				printf("Islemin sonucu %lf",x);
				getch();
				break;
		}
		}
	double kokAl(double x, double n){
		x=pow(x,1.0/n);
		return x;
	}
		
