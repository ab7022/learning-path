//binomial co-efficient
#include <stdio.h>
#include <conio.h>
int binom(int n,int r){
    if(r==0|| r==n)
    {
    return 1;
    } 
    else
    {
        return binom(n-1,r)+binom(n-1,r-1);
    }
    
}
void main(){
    int n,r;
    printf("enter n & r");
    scanf("%d%d",&n,&r);
    printf("binomial co-efficint of %d and %d is %d",n,r,binom(n,r));
    getch();
}