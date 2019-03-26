#include <iostream>
#include <math.h>
using namespace std;

int prime(int a[],int n){
    int h=0,l=0;
    for(int i=0;i<n;i++){
        for(int j=2;j<=trunc(sqrt(a[i]));j++){
            if(a[i]%j==0){
                h++;
            }

        }
        if(h>=1){
            cout << l;
            l++;
        }
        h=0;
    }
    return l;
}
int main(){
    int n,h=0;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    h=prime(a,n);
    if(h>=2){
        cout << "TIDAK LAYAK";
    }else{
        cout << "LAYAK";
    }
}
