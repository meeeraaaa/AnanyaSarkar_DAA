    #include <stdio.h>
   int main()
   {
        int t;
        scanf("%d",&t) ;
      int a[100];
      int i, j, n, temp,swaps=0,comp=0;
      while(t--){scanf("%d",&n) ;
      for (i = 0; i < n; i++)
      scanf("%d",&a[i]) ;

/*Sort*/
      for (i = 1; i < n; i++) {
      j = i;
      comp++;
      while ((j > 0) && (a[j - 1] > a[j])) 
      {
            if(a[j-1]>a[j]){
            comp++;
        }
        temp = a[j - 1];
        a[j - 1] = a[j];
        a[j] = temp;
        j--;
        swaps++;
    }
}
/* Print */
        for (i = 0; i < n; i++)
          printf("%d \n", a[i]);
          printf("\n comparisions  = %d",comp);
      printf("\nswaps = %d",swaps);
      
      
      }
      return 0;
 } 