#include <iostream>
#include <vector>
using namespace std;

int main() {
    int fib[1000], a, b, swap, s2;
    vector<int> res;
    int resarr[1000];
    int count = 0;
    fib[0] = 1;
    fib[1] = 1;
    for(int n=2; n<1000; n++) {
        fib[n] = fib[n-1] + fib[n-2];
    }
    cin>>a>>b;
    if(a > b) {
        swap=a;
        s2=b;
        a=s2;
        b=swap;
    }
    for(int i=0; i<1000; i++) {
        if(a <= fib[i] && fib[i] <=b) {
            count++;
            res.push_back(fib[i]);
        }
    }
    if(count > 1) {
    cout<<"Between "<<a<<" and "<<b<<",there are "<<count<<" fibbonaci numbers!"<<endl;
    cout<<"The fibbonaci numbers between "<<a<<" and "<<b<<" are: ";
    }
    if(count == 1) {
    cout<<"Between "<<a<<" and "<<b<<",there is "<<count<<" fibbonaci number!";
    cout<<"The fibbonaci number between "<<a<<" and "<<b<<" is: ";
    }
    for(int j=0; j<count; j++) {
        resarr[j] = res.at(j);
        cout<<resarr[j]<<" ";
    }
    return 0;
}
