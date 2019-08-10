#include <iostream>
using namespace std;
int main() {
    int X,P,add=0;
    float k;
    cin>>X>>P;
    while(k>0)
    {
        k=(float)P/100*X;        
        add+=X;
        X=X-k;
    }
    cout<<add<<endl;
}
