#include<stdio.h>
  
  
  
long long F[]={1ll,1ll,2ll,6ll,24ll,120ll,720ll,5040ll,40320ll,362880ll,3628800ll,
               39916800ll,479001600ll,6227020800ll,87178291200ll};
  
void Doi(int *x,int n,int m,long long k)
{
    if(n==0) return;
    int p=int(k/F[n-1]);
    int i,d=0;
    for(i=1;i<=m;i++)
    if(x[i]==0)
    {
        d++;
        if(d==p+1) break;
    }
    x[i]=1;
    printf("%d ",i);
    Doi(x,n-1,m,k%F[n-1]);
}
  
long long Nguoc(int *x,int n)
{
    int y[20];
    for(int i=1;i<=n;i++) y[i]=0;
    long long k=0;
    for(int i=1;i<=n;i++)
    {
        int d=0;
        for(int j=1;j<=x[i];j++)
        if(y[j]==0) d++;
        k=k+(d-1)*F[n-i];
        y[x[i]]=1;
    }
    return k+1;
}
typedef struct test
{
    int n,q;
    long long k;
}TTT ;
  
int main()
{
    int T=0;
    int x[20];
    TTT A[30000];
    do
    {
        T++;
        scanf("%d",&A[T].n);
        if(A[T].n==0) break;
        scanf("%d",&A[T].q);
        if(A[T].q==1)
        {
            for(long i=1;i<=A[T].n;i++)
            {
                scanf("%d",&x[i]);
            }
            A[T].k=Nguoc(x,A[T].n);
        }
        else
        {
            scanf("%lld",&A[T].k);
        }
    }while(1);
    for(int i=1;i<T;i++)
    {
        if(A[i].q==1) printf("%lld\n",A[i].k);
        else
        {
            for(int j=1;j<=A[i].n;j++) x[j]=0;
            Doi(x,A[i].n,A[i].n,A[i].k-1);
            printf("\n");
        }
    }
   //getch();
}
