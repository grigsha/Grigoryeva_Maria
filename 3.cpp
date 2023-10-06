#include <iostream>
#include <random>
using namespace std;
int main()
{
    int a[5];
    int ans = 1;
    int m = 1;
    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
       a[i]= rand()%41 - 20;
       m *= a[i];
       if (m > ans) {
        ans = m;
       }
    }
    
    for (int i = 0; i < 5; i++){
        cout<<a[i]<<endl;
    }
    cout<<ans<<endl;
    return 0;
}