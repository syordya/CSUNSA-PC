#include <bits/stdc++.h>

#define MAXN 1001000

using namespace std;

bool vis[MAXN + 10];

int main(void){
    int q, n;
    
    // lectura de casos de prueba
    cin >> q;

    while(q--)
    {
    	// reseteo a 0 o false el array vis(visitados)
        memset(vis, 0, sizeof(vis));

        cin >> n;

        // vector que guardará data
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        // marcado de puntos que no pueden ser maximo valor
        for(int i = 0, num; i < n; i++){
            num = v[i];
            // Iteración hasta el maximo, marcando lo que no se puede usar
            while(num <= MAXN){
                vis[num] = true;
                num += num;
            }
        }

        // Seguimos marcando los valores que no pueden ser maximo, considerando los que ya han sido marcado
        for(int i = 0; i < n; i++){
            for(int j = 1; j <= MAXN; j++)
            {
            	// si ya esta marcado el valor lo sumamos, con los valores de v[i]
                if(vis[j]){
                    if(v[i] + j > MAXN) break;
                    else vis[v[i] + j] = true;
                }
            }
        }


        int ans = -1;
        bool flag = true;
        // busqueda de entre los valores no marcados, para decidir cual es la maxima suma
        for(int i = 1; i <= MAXN; i++)
        {
        	// En caso de que sea ilimitado o mayor a 10000000, salimos del bucle.
            if(!vis[i] && i > 1000000)
            {

                flag = false;
                break;
            }
            else if(!vis[i])
            {
            	// si no esta visitado y no es mayor al valor maximo(10000000), sacamos el maximo
                ans = max(ans, i);
            }
        }
        // si era ilimitado, se bota -1, caso contrario el maximo valor posible
        if(flag) cout << ans << endl;
        else cout << -1 << endl;
    }

    return 0;
}