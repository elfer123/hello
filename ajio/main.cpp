#include <iostream>

using namespace std;

int main()
{{


    //ejercicio 1
    cout<<"ejercicio 1 :"<<endl;
    int edad;
    cout<<"ingresa tu edad :"<<endl;
    cin>>edad;
    if(edad>0 and edad<18){
        cout<<"tienes :"<<edad<<" años y eres menor de edad"<<endl;
    }else{

        cout<<"tienes :"<<edad<<" años y eres mayor de edad"<<endl;
    }
    //Ejercicio2

    cout<<"ejercicio 2 :"<<endl;
    int limite,i=0;
    cout<<"Escriba un numero limite, por favor: "<<endl;
    cin>>limite;
    cout<<i;
    while(i<limite){
        i++;
        cout<<","<<i;
    }


    //Ejercicio3
    {
    int n1;
    int n2;
    int n3;
    int mayor;
    int menor;
    int prom;
    cout<<"ingresa a :"<<endl;
    cin>>n1;
    cout<<"ingresa b :"<<endl;
    cin>>n2;
    cout<<"ingresa c :"<<endl;
    cin>>n3;
    mayor=(n1>n2)?n1:n2 and (n2>n3)? n2:n3;
    menor=(n1<n2)?n1:n2 and (n2<n3)? n2:n3;
    cout<<"el mayor es :" <<mayor<<endl;
    cout<<"el menor es :" <<menor<<endl;
    prom=(n1+n2+n3)/3;
    cout<<"el promedio es :"<<prom<<endl;
        cout<<"ejercicio 9"<<endl;
}
    //Ejercicio 4
    cout<<"ejercicio 4 :"<<endl;
    int a;
    int b;

    cout<<"ingresa a :"<<endl,
    cin>>a;
    cout<<"ingresa b :"<<endl;
    cin>>b;
    !(a%2)?cout<<a<<" es multiplo de 2 y ":cout<<a<<" no es multiplo de 2 "<<endl;
    !(b%2)?cout<<b<<" es multiplo de 2  ":cout<<b<<" no es multiplo de 2"<<endl;
    (a*a==b)?cout<<"el cuadrado de :"<<a<<"es "<<b:cout<<"el cuadrado de "<<a<<"no es "<<b;
    return 0;
//Ejercicio5
    cout<<"ejericio 5 :"<<endl;
    int p=0,q,r;
    cout<<"ingresa el numero :"<<endl;
    cin>>r;
    for (q=1;q<(r+1);q++){
        if(r%q==0){
            p++;
        }
    }
    if (p!=2){
        cout<<"no es primo "<<endl;
    }
    else{
        cout<<"si es primo"<<endl;
    }
}
//Ejercicio6
    cout<<"ejercicio 6 :"<<endl;
    int g,h=2;
    cout<<"Ingrese el numero: "<<endl;
    cin>>g;
    while(h<=g){
        if(h==2||h==3|h==4||h==5||h==6||h==7){
            cout<<h<<",";
        }
        if(h%2!=0&&h%3!=0&&h%4!=0&&h%5!=0&&h%6!=0&&h%7!=0){
            cout<<h<<",";
        }
        h=h+1;
        }


  //Ejercicio7
    cout<<"ejercicio 7 :"<<endl;
    int m,z,k=10000,res;
    cout<<"Ingrese un numero de 5 digitos: "<<endl;
    cin>>m;
    while(k>=0){

        z=m/k;
        cout<<z<<"  ";
        m=m%k;
        k=k/10;

    }
    //ejercicio 8
    cout<<"ejercicio 8"<<endl;
    //ejericio 9
 int year,p,q,r;
    cout<<"ingresa el año"<<endl;
    cin>>year;
    p=year%4;
    q=year%100;
    r=400;
    if(!p &&(q||!r)){
        cout<<year<<" es bisiesto  "<<endl;
    }else {
        cout<<year<< "no es bisiesto "<<endl;}
    //ejercicio 10
    cout<<"ejercicio 10 :"<<endl;
    int numer1=1;
    int anterior=0;
    int aux;
    for(int x=0;x<20;x++){
        cout<<numer1<<endl;
        aux=numer1;
        numer1+=anterior;
        anterior=aux;
    }


    return 0;
}


con funciones xd 
#include <iostream>
#include <string>
using namespace std;
void num(int);
void numeros(int,int,int);
void edad(int);
void numero(int,int);
int main()
{
    numero(10,45);
    /*edad(250);

    numeros(3,4,5);
    num(3);*/
}

void edad(int edad){

    if(edad>0 and edad<18){
        cout<<"tienes :"<<edad<<" años y eres menor de edad"<<endl;}
    if(edad>18 and edad<105){
        cout<<"tienes :"<<edad<<" años y eres mayor de edad"<<endl;
    }else{
        cout<<"alien pendejo"<<endl;
                                    }}
void numero(int a,int b){
    !(a%2)?cout<<a<<" es multiplo de 2 y ":cout<<a<<" no es multiplo de 2 "<<endl;
    !(b%2)?cout<<b<<" es multiplo de 2  ":cout<<b<<" no es multiplo de 2"<<endl;
    (a*a==b)?cout<<"el cuadrado de :"<<a<<"es "<<b:cout<<"el cuadrado de "<<a<<"no es "<<b;
}
void numeros(int n1,int n2,int n3   ){
    int prom;
    int mayor;
    int menor;
    mayor=(n1>n2)?n1:n2 and (n2>n3)? n2:n3;
    menor=(n1<n2)?n1:n2 and (n2<n3)? n2:n3;
    cout<<"el mayor es :" <<mayor<<endl;
    cout<<"el menor es :" <<menor<<endl;
    prom=(n1+n2+n3)/3;
    cout<<"el promedio es :"<<prom<<endl;
}
void num(int x){
    for(int c=0;c<x;c++){
        cout<<c<<",";
    }
    cout<<x<<endl;
}
bool esprim(int m){
    if(n>1)
        return False;
    for(int i=2;i<n,i++)
        if("diferemte"de(n%i))
            return False;
    return True;
}
/*clase #include <iostream>

using namespace std;
bool sprim(int);
//void numeros(float,float,float);
void esp(int m);
//int suce(int,int);
//
int main(){

    esp(6);
    return 0;


    }
bool esprim(int m)
{
    if(m>1){
        return False;
    }
    for(int i=2;i<m,i++){
        if(!(m%i))
            {
            return False;
            }}
    return True;

}
void bla(int m){
    int c=0;
    int i=2;
    while(c<m){
        if(esprim(i)){
                cout<<i<<endl;
        c++;}}
        i++;
    }

