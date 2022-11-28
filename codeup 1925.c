# include <stdio.h>


int p(int a,int b)
{
   if(b == 0 || b == a)
      return 1;
   
   return p(a-1,b-1) + p(a-1,b);
}

int main()
{
   int n,r;
   scanf("%d %d",&n,&r);
   
   printf("%d",p(n,r));
   
   return 0;
}
