@genType
type t

// Returns a string representing the value of this Big number
// in normal notation to a fixed number of &dp decimal places.
@send
external toFixed: (t, int) => string = "toFixed"

@genType
let toFixed = (a, dp) => toFixed(a, dp)

// Returns a Big number whose value is
// the addition of 2 Big numbers, &a and &b
@send
external plus: (t, t) => t = "plus"

@genType
let plus = (a, b) => plus(a, b)

// Returns a Big number whose value is the
// substraction of 2 Big numbers, &a and &b
@send
external minus: (t, t) => t = "minus"

@genType
let minus = (a, b) => minus(a, b)

// Returns a Big number whose
// value is the division of &a by &b
@send
external div: (t, t) => t = "div"

@genType
let div = (a, b) => div(a, b)

// Returns a Big number whose value is &a &b-times
@send
external times: (t, t) => t = "times"

@genType
let times = (a, b) => times(a, b)

// As toString except the minus sign is included for negative zero
@send
external valueOf: t => string = "valueOf"

@genType
let valueOf = a => valueOf(a)

// Returns a Big number whose value is the value of this Big number
// rounded using rounding mode rm to a maximum of dp decimal
// places, or, if dp is negative, rounded to an integer
// which is a multiple of 10**-dp.
@send
external round: (t, int, int) => t = "round"

// 1, here represent Big.RM (default value) -> ROUND_HALF_UP
@genType
let round = (a, dp) => round(a, dp, 1)

// Returns true if the value of &a equals
// the value of &b, otherwise returns false
@send
external eq: (t, t) => bool = "eq"

@genType
let eq = (a, b) => eq(a, b)

// Returns true if the value of &a greater
// than the value of &b, otherwise returns false
@send
external gt: (t, t) => bool = "gt"

@genType
let gt = (a, b) => gt(a, b)

// Returns true if the value of &a greater than
// or equal the value of &b, otherwise returns false
@send
external gte: (t, t) => bool = "gte"

@genType
let gte = (a, b) => gte(a, b)

// Returns true if the value of &a is less than
// the value of &b, otherwise returns false.
@send
external lt: (t, t) => bool = "lt"

@genType
let lt = (a, b) => lt(a, b)

// Returns true if the value of &a is less than
// or equal the value of &b, otherwise returns false.
@send
external lte: (t, t) => bool = "lte"

@genType
let lte = (a, b) => lte(a, b)

// Converters
// Big number constructor from a float
@genType @module("big.js")
external makeFromFloat: float => t = "Big"

// Big number constructor from an int
@genType @module("big.js")
external makeFromInt: int => t = "Big"

@genType
let fromFloat = makeFromFloat

// Just an alias of Big.fromFloat
@genType
let big = fromFloat

// Converts int to Big
@genType
let fromInt = makeFromInt

// Converts a Big number to a float
@genType
let toFloat = decimal => float_of_string(valueOf(decimal))

// Converts a Big number to an int
@genType
let toInt = decimal => int_of_string(valueOf(decimal))

module Operators = {
  let \"+." = (a: t, b: t) => a->plus(b)
  let \"*." = (a: t, b: t) => a->times(b)
  let \"-." = (a: t, b: t) => a->minus(b)
  let \"/." = (a: t, b: t) => a->div(b)
}
