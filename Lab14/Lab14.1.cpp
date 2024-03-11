#include <stdio.h>

int KnapsackBT(int *w, int *v, int n, int wx, int i, int *x) {
    if (i == n || wx == 0) {
        return 0;
    }

   
    if (w[i] <= wx) {
        
        int with_i = v[i] + KnapsackBT(w, v, n, wx - w[i], i + 1, x);
        int without_i = KnapsackBT(w, v, n, wx, i + 1, x + 1);

        
        if (with_i >= without_i) {
            *x = 1; 
            return with_i;
        } else {
            *x = 0; 
            return without_i;
        }
    } else {
        
        return KnapsackBT(w, v, n, wx, i + 1, x + 1);
    }
}

int main() {
  int n = 5, wx = 11;
  int w[5] = {1, 2, 5, 6, 7};
  int v[5] = {1, 6, 18, 22, 28};
  int *x = new int[n];

  int vx = KnapsackBT(w, v, n, wx, 0, x);

  printf("Value = %d \n", vx);
  for (int i = 0; i < n; i++)
    printf("%d ", x[i]);

  
  return 0;
}

