#include <stdio.h>
int main() {
   
   int n, arr[1001], m, i, t;
   scanf("%d", &n);
   for(i=0; i<n; i++){
      scanf("%d", &t);
      arr[t]=1;
   }
   scanf("%d", &m);
   for(i=0; i<m; i++){
      scanf("%d",&t);
      if(arr[t] == 1) printf("1 ");
      else printf("0 ");
   }
   return 0;
}
