#include <iostream>

const long long int d = 1000000007;

using namespace std;
int ucln(int a, int b)  {
    while(b!=0){
        int r = a%b; a=b; b=r;
    }
    return a;
}
int GCD(int a[], int n){
    int ans = a[0];
    for(int i=1; i<n; i++){
        ans = ucln(ans,a[i]);
    }
    return(ans);
}
long long tich(int A[], int n){
    long long product=1;
    for(int i=0; i<n; i++){
        product = ((product%d)*(A[i]%d))%d;
    }
    return product;
}
long long Luythua(int A[],  int n){
    long long ans = tich(A,n);
    int k = GCD(A, n);
    for(int i=1; i<k; i++){
        ans = (ans*ans)%d;
    }
    return ans;
}
int main(){
    int a[100], t, n;cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++) cin>>a[i];
        cout << Luythua(a,n) << endl;
    }
}
