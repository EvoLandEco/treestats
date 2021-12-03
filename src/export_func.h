#ifndef EXPORT_FUNC_H
#define EXPORT_FUNC_H

#include <stddef.h>
#include "sackin.h"

#if (defined(_WIN32) || defined(__WIN32__)) && !defined(__LCC__)
# ifdef EMP_BUILD_STANDALONE_CPP
#   define STATS_EXTERN(T) extern "C" __declspec(dllexport) T
# else
#   define STATS_EXTERN(T) extern "C" T
# endif
#else
# define STATS_EXTERN(T) extern "C" T
#endif


typedef size_t (*treestats_sackin)(const std::vector< std::vector< float >>&);


#endif
