#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()  {
    // se pone las variables
    double a,b,c,x1,x2,total;
    double b2=0, ac2=0, raiz=0, a2=0;
    cout<<"Digite los valores de a, b y c en ese orden";
    cin>>a>>b>>c;
    //se soluciona la parte de b elevada a la 2 adentro de la raiz
    b2=b*b;
    //solucionar la parte - 4ac
    ac2= ((4*a)*c);
    //solucion a la raiz cuadrada
    raiz= sqrt(b2 - ac2);
    //solucion a 2a
    a2= 2*a;
    // solucion a b+- raiz
    x1= (-b + raiz)/a2;
    x2= (-b - raiz)/a2;
    // se pone las respuestas de x1 x2
    cout<<endl;
    cout<<"x1= "<<x1;
    cout<<endl;
    cout<<"x2= "<<x2;

    return 0;
}
