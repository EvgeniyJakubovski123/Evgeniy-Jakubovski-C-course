#pragma once
#include <cstddef>
typedef PTYPE double
/*
  P(x)=a0*x^n+a1*x^n-1+....+a_n
**/

class Poly{
    size_t n;
    PTYPE* a;//aray of n+1
    
    public:
    Poly(){n=0;a=nullptr;}
    Poly(size_t n_);
    Poly(size_t n_,PTYPE*arr);
    
    Poly(const Poly p){
        n=p.n;
        a = new PTYPE[n+1];
        for(int i=0;i<n+1;i++){
            a[i]=p.a[i];
        }
    }
    
    ~Poly(){
        delete[] a;
    }
    
    Poly operator =(const Poly& p){
        n=p.n;
        if(a) delete[] a;
        a = new PTYPE[n+1];
        for(int i=0;i<n+1;i++){
            a[i]=p.a[i];
        }
        return *this;
    }
    
    void setPoly(size_t n_,PTYPE*arr);
    void setCoef(size_t k,PTYPE a);//set k coeff
    void show();
    PTYPE value(PTYPE x);
    
    friend int inputFromFole(const char* fname,Poly& p);
    
    friend int outputTOFile(const char* fname,const Poly& p );
};
#endif


