#include "c_component.h"

#include <stdio.h>
#include <assert.h>

int main(int argc, char* argv[])
{
    assert(fibonacci(10) == 55);
    printf("Pass!\n");

    return 0;
}