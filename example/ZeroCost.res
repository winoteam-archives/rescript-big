// Initialization
let a = 201.57512->Big.fromFloat
let b = 1.->Big.fromFloat

// Fix
let c = a->Big.plus(b)

// Operators
Js.log(c->Big.toFixed(2))
