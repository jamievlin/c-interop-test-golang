#include "c_component.h"

uint32_t fibonacci(uint32_t const n)
{
    if (n == 0)
    {
        return 0;
    }

    uint32_t prev = 0;
    uint32_t ret = 1;

    uint32_t tmp;

    // invariant: beginning of each iteration, ret=F(i), prev=F(i-1)
    for (uint32_t i=1; i<n; ++i)
    {
        tmp = ret;
        ret = ret + prev;
        prev = tmp;
    }

    return ret;
}