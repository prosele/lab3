#include <iostream>
using namespace std;
int res(int i, int n, int *mass, int sum1, int sum2) {
    if (i==n) {
        return abs(sum1-sum2);
    }
    return min(res(i+1,n,mass,sum1+mass[i],sum2),res(i+1,n,mass,sum1,sum2+mass[i]));
}
int main() {
    int n;
    cin >> n;
    int mass[n];
    for (int i=0;i<n;i++) {
        int x;
        cin >> x;
        mass[i]=x;
    }
    cout << res(0,n,mass,0,0);
    
}
