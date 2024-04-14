#pragma once

#include "./types.h"

/* Power evaluation */
// Float
f64 powerF64(const f64 number, const f64 expoent);
f32 powerF32(const f32 number, const f32 expoent);

// Integer
i64 powerI64(const i64 number, const i64 expoent);
i32 powerI32(const i32 number, const i32 expoent);


/* Square root evaluation */
// Float
f64 squareRootF64(f64 number);
f32 squareRootF32(f32 number);

// Integer
i32 squareRootI32(i32 number);


/* Factorial evaluation */
// Integer
i32 factorialI32(const i32 value);

