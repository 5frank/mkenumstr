

#ifndef ENUMSTR_INCLUDE_H_
#define ENUMSTR_INCLUDE_H_
#include <stdint.h>
#include <stdbool.h>

#include <mkenumstr.h>
#include "../testdefs.h"

#ifndef MKENUMSTR_COMPILE
#error "undef wtf?"
#endif


//MKENUMSTR_FUNC(enumstr_myenum0, enum testenum_negjmp_e);

MKENUMSTR_FUNC(enumstr_myenum1, int,
  .find="testenum_negjmp_e", .exclude="_LAST");

#if 0

MKENUMSTR_FUNC(enumstr_myenum3, int, "^syserr_*",
    .name_excl = "^_",
    .name_strip = "^syserr_",
    .defs_merge = true
);
#endif

#endif /* ENUMSTR_INCLUDE_H_ */
