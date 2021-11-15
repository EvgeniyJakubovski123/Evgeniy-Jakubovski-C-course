#ifndef __RATIONAL__
#define __RATIONAL__

#include <iostream>

class Rational{
    private:
    int nom;
    unsigned denom;
    
    public:
    Rational(){
        nom=1;
        denom=1U;
    }
    Rational(int x,unsigned y):nom(x),denom(y){
        reduce();
    }
    
    void show();
    int input();
    
    int setNom(int x){
        nom=x;
        return 0;
    }
    int setDenom(unsigned y){
        if(y!=0){
            denom=y;
            return 0;
        }
        return -1;
        
        
    }
    
    Rational add(const Rational& x);
    Rational mult(const Rational& x);
    
    bool less(const Rational& x){
        return (nom*.denom<denom*x.nom);
    }
    static unsigned gcd(unsigned x,unsigned y);
    double compare(double z){
        return fabs(z-nom/denom);
    }
    private:
    void reduce();
};
#endif 






