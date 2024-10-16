//el codigo hace una operacion de formula general
//primero soluciona la parte que esta dentro de la raiz cuadrada la cual seria
// b² - 4ac
// despues solucionar la raiz cuadrada
// y al final solucionar b+- (la raiz cuadreada)/2a


#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()  {
    double a,b,c,x1,x2,total;
    double b2=0, ac2=0, raiz=0, a2=0;
    cout<<"Digite los valores de a, b y c en ese orden";
    cin>>a>>b>>c;
    b2=b*b;
    ac2= ((4*a)*c);
    raiz= sqrt(b2 - ac2);
    a2= 2*a;
    x1= (-b + raiz)/a2;
    x2= (-b - raiz)/a2;
    cout<<endl;
    cout<<"x1= "<<x1;
    cout<<endl;
    cout<<"x2= "<<x2;

    return 0;
}
