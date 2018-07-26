#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <xmmintrin.h>

int main (void) {
	
	__m128 v = _mm_set1_ps(4);

	printf("%d\n", v);

	return 0;
}
