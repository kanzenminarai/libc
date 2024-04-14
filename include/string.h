#pragma once

#include "./types.h"

/* String convertion */
// Integer
i32 stringToInteger(str string);


/* String size  */
u32 stringLength(str string);


/* String comparison  */
i32 stringCompare(str target, str source);


/* String copy */
str stringCopy(str target, str source);
str stringCopySize(str target, str source, u32 size);
