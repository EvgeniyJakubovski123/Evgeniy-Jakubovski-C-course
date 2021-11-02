#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout <<"Enter n -";
    cin>>n;
    int *a=new int[n];
    double *a_d=new double[n];
    const char* finput="fileinput";
    const char* foutput="filee_output";
    for (int i=0;i<n;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    ifstream file_l(finput);
    int i=0;
    while(!file_l.eof()){
        if(file_l>>a_d[i]){
            cout<<"file["<<i<<"]"<<a_d[i]<<endl;
        }
        i++;
        
        if(i>=n) break;
    }
    file_l.close();
    if(i<n){
        cout<<"no data";
    }
}
