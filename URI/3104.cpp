#include <bits/stdc++.h>
 
using namespace std;
 
// Lo primero que hace es hacer una descomposicion del numero en el string s 
// Por ejemplo si fuera 123, lo primero que haria   (0*10 +1) % b
// En la segunda iteración seria (1*10 + 2) % b
// y en la ultima seria (12*10 + 3)%b
int f(string s, int b)
{

    int sum=0;
    for(char x: s)
    {
        // se obtiene el ultimo valor del string s, y es aumentado a 10*sum, pero antes es modulado por b
        // impidiendo que pase el maximo tamaño de un int
        sum=(sum*10+ (x-'0'))%b;
    }
    return sum;
} 
 
 
int main() {
    string s;
    int b;
    cin>>s>>b;
    cout<<f(s,b)<<endl;
 
    return 0;
}