#include <string.h>

char *strncpy(char *restrict d : itype(restrict _Nt_array_ptr<char>) count(n),
              const char *restrict s,
              size_t n)
  : itype(_Nt_array_ptr<char>) count(n)
{
	__stpncpy(d, s, n);
	return d;
}
