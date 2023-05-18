
#include <bits/stdc++.h>
using namespace std;

int findmax(int a[] , int ni , int k){
        sort(&a[0] , &a[ni]);
        int i = ni-1;
        while(true){
            while( k != 1){
                if(a[i] == a[i-1])
                    i -= 2;
                else
                    i--;
                if(a[i] != a[i+1])
                    k++;
            }
        }
        return a[i];

    }

int main()
{
    int a[] = { 2,3,4,5,6,7,7 };
    int ni = sizeof(a) / sizeof(a[0]), k = 2;
 
    // Function call
    cout << "K'th smallest element is "
         << findmax(a, ni, k);
    return 0;
}
