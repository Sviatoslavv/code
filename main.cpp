#include <iostream>
#include<stdio.h>
#include <fstream>
#include<cstdio>
#include <string.h>
#include <cmath>
using namespace std;
int main()
{ double j[5],i1,i2;
    int k,k1;
    k=0;k1=0;i2=0;
    ifstream in("text.txt");
    ofstream out("text1.txt");
    if (!in) {cout<<"Error file no found"; exit(1);}
    while (!in.eof()){
        in>>j[k];
        k++;
    }
    
    for(int i=0;i<=k-1;i++){
        i1=j[i]*log2(j[i]);
        i2=i2+i1;}
    i2=-i2;
    cout<<i2<<" byte ";
    out<<i2<<" byte ";
    
    
}

