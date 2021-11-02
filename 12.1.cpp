#include <iostream>
#include <cmath>
#include <cfloat>


using namespace std;
double func(double x,double y){
    if (fabs(x)<0){
        if(fabs(y-(int)y)<DBL_EPSILON){
            return INFINITY;
        }
        
    }
    else if (x<DBL_EPSILON){
        if(y>0){
            return INFINITY;
        }
            
        
    }
    return pow(x,y);
}
int main()
{
    double x,y,z;
    cin>>x;
    cin>>y;
    z=pow(x,y);
    cout<<z<<", "<<scientific<<z<<endl;
    z=func(x,y);
    cout<<z<<", "<<scientific<<z<<endl;
    
    
}
