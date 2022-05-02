#include <iostream>
#include "lib.h"
using namespace std;
int main() {
int n;
float valori[100];
cin>>n;
for(int i=0;i<n;i++)
{
 cin>>valori[i];
}
cout<<massimo(valori,n);
    return 0;
}
