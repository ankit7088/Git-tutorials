#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
vector<bool> isPrime(N, 1);
vector<int> lp(N),hp(N);

int main()
{

    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        {
            lp[i]=hp[i]=i;
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j]=false;
                hp[j]=i;
                if(lp[j]==0)
                lp[j]=i;
            }
        }
    }
    // for(int i=0;i<100;i++){
    //     cout<<i<<" "<<lp[i]<<" "<<hp[i]<<endl;
    // }
    int num; 
    cin>>num;
    vector<int> primeFactors;
    while(num>1){
        int primeFactor=hp[num];
        while(num%primeFactor==0){
            num/=primeFactor;
            primeFactors.push_back(primeFactor);
        }
    }

    for(int factor:primeFactors){
        cout<<factor<<" "; 
    }
    /*
    divisors find Code--->>>
    vector<int> divisors[N];

    for(int i=0;i<N;i++){
        for(int j=i;j<N;j+=i){
            divisors[j].push_back(i);
        }
    }

    */

    return 0;
}