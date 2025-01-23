
#include <stdlib.h>
#include <stdbool.h>

struct st {
  bool flag;
  int *f; 
} typedef st;

int* foo ( struct st *p){ 
  int *q;
  if (p -> flag ) q = malloc (1);
  else q = p ->f;
  return q ;
}

int main () {	
  struct st p; int *q;
  // p.flag = false;
  p.f = malloc (1) ;
  q = foo (& p);
  free(q);
  // if (p.flag) free(q);}
  free (p.f) ;
}
