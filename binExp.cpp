// const long long int M=1e18+10;
/*
binary expontiation

int binExp(int a,int b){
    int ans=0;
    while(b>0){
        if(b&1){
            ans=(ans*a)%M;
        }
        a=(a*a)%M;
        b>>=1;
    }
}
*/
/*
binary Multiplication code

int binMultiply(long long int a,long long int b){
    int ans=0;
    while(b>0){
        if(b&1){
            ans=(ans + a)%M;
        }
        a=(a + a)%M;
        b>>=1;
    }
}

*/
