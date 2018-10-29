#include <stdio.h>
void mul(long long unsigned int F[2][2],long long unsigned int M[2][2]);
void p(long long unsigned int F[2][2],long long unsigned int n);
long long unsigned int fib(long long unsigned int n)
{
    long long unsigned int F[2][2] = {{1,1},{1,0}};
    if (n == 0)
        return 0;
    p(F, n-1);
    return F[0][0];
}
void mult(long long unsigned int F[2][2],long long unsigned int M[2][2])
{
    long long unsigned int x = F[0][0]*M[0][0] + F[0][1]*M[1][0];
    long long unsigned int y = F[0][0]*M[0][1] + F[0][1]*M[1][1];
    long long unsigned int z = F[1][0]*M[0][0] + F[1][1]*M[1][0];
    long long unsigned int w = F[1][0]*M[0][1] + F[1][1]*M[1][1];
    
    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}
void p(long long unsigned int F[2][2], long long unsigned int n)
{
    long long unsigned int i;
    long long unsigned int M[2][2] = {{1,1},{1,0}};
    for (i = 2; i <= n; i++)
        mult(F, M);
}
int main()
{
    long long unsigned int n ,i;
    printf("Enter any Number: ");
    scanf("%llu",&n);
    i=1;
    while(i<=n){
        printf("%lluth Fibonacci Number %llu ",i, fib(i));
        printf("\n");
        i++;
        
    }
    getchar();
    return 0;
}
