#pragma once

#include <stdint.h>

#if defined(C_COMPONENT_EXPORT)
#define C_COMPONENT_DLL __declspec(dllexport)
#elif defined(C_COMPONENT_NODLL)
#define C_COMPONENT_DLL
#else
#define C_COMPONENT_DLL __declspec(dllimport)
#endif

uint32_t C_COMPONENT_DLL fibonacci(uint32_t n);