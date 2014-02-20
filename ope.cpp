#include <iosteam>

#define MAX_N 100000

struct tree 
{
  int v;
  tree * r;
  tree * l;
}

tree[MAX_N] drzewa;

parametry aktualizujParametry(const int n, const int T, const int x)
{
        parametry p;
        p.i = 1 + ((x + T)*(x + T)*(x + T)) % n;
        p.j = p.i + (((x + T)*(x + T)*(x + T)) % (n - p.i + 1));
        p.c = ((x + T)*(x + T)*(x + T)) % 10;
        p.i0 = 1 + (((x + 1 + T)*(x + 1 + T)*(x + 1 + T)) % n);
        p.t = (x + 1234567) % (T + 1);
        return p;
}


int main ()
{
  int n;
  cin >> n;
  
}
