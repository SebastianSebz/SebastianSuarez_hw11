#include <iostream>
using namespace std;

//se inicializan las contastes y las funciones

double G, M, xpunto(double x, double v), vpunto(double x, double v);

//se definen las funciones vpunto y xpunto correspondientes

double vpunto(double x, double v){
	return -G*M/(x*x);}

double xpunto(double x, double v){
	return v;}

int main(){

// se da valor a las contstantes y se inicializan los otros valores, inlcuyendo los del runge-kutta
	
M = 1000;
G=10;
double m, x= 100, v =0, dt= 100.0/2000000.0;

double xf=0.01*x, t = 0, kx1, kx2, kx3, kx4, kv1, kv2, kv3, kv4;
int Nmax=2000000, i = 0;

// se utiliza runge-kutta para hallar los valores
	
while(x>xf && i<Nmax){

	kx1 =x punto(x,v);
	kv1 = vpunto(x,v);
	kx2 = xpunto(x+kx1*dt/2, v+kv1*dt/2);
	kv2 = vpunto(x+kx1*dt/2, v+kv1*dt/2);
	kx3 = xpunto(x+kx2*dt/2, v+kv2*dt/2);
	kv3 = vpunto(x+kx2*dt/2, v+kv2*dt/2);
	kx4 = xpunto(x+kx3*dt, v+kv3*dt);
	kv4 = vpunto(x+kx3*dt, v+kv3*dt);
	
	t= t + dt;
	x= x + dt*(kx1+2*kx2+2*kx3+kx4)/6;
	v= v + dt*(kv1+2*kv2+2*kv3+kv4)/6;
	cout << x << " " << v << " " << t< < " " << endl;
	i++;}

return 0;}

