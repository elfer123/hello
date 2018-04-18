#include <iostream>

using namespace std;
int esprimo(int);
int bits(int , int );
int numeroperfecto();
double potencia(int , int );
int intercambio(int,int);
int main()
{
    cout << "la potencia de 2 elevado a 5 es  : "<<endl;
    cout<<potencia(2,5)<<endl;
    cout<<"los numeros perfectos son :"<<endl;
    cout<<numeroperfecto()<<endl;
    esprimo(5);
    cout<<"el intercambio es :"<<endl;
    intercambio(3,5);
    cout<<"el intercambio con bits es :"<<endl;
    bits(1,2);
    return 0;
}
double potencia(int base, int exponente)
{
 if (exponente==0)
     return 1;
 else
     return base*(potencia(base,exponente-1));
}

int numeroperfecto()
{
    int n=1,x=1,s=0;
    while(n<=1000)
    {
        while(x<=(n/2))
        {
            if(n%x==0)
                s=s+x;
                x=x+1;
        }
        if(n==s)
            cout<<n<<", Es perfecto"<<endl;
        n=n+1;
        x=1;s=0;
    }
     return 0;
}
int esprimo(int num){


    int divisor = 1, divisores = 0;

    do{
    if(num % divisor == 0){
        divisores++;
    }
    divisor++;
    }while(divisor <= num);
    if(divisores == 2){
    cout<<"El numero "<<num<<" es PRIMO."<<endl;
    }else{
    cout<<"El numero "<<num<<" NO es PRIMO."<<endl;
    }
    return 0;

}
int intercambio(int a,int b){
    cout<<"a : ";
    cout<<a<<endl;
    cout<<"b : ";
    cout<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<","<<b<<endl;
}
int bits(int a , int b){
    cout<<a<<","<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" , "<<b<<endl;

}
