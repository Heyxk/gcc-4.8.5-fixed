/* { dg-do compile } */
/* { dg-options "-mavx2 -O2" } */
/* { dg-final { scan-assembler "vpbroadcastd\[ \\t\]+\[^\n\]*%ymm\[0-9\]" } } */

#include <immintrin.h>

__m128i x;
__m256i y;

void extern
avx2_test (void)
{
  y = _mm256_broadcastd_epi32 (x);
}
