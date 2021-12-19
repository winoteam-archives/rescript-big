open! Big.Operators

// Initialization
let a = 201.57512->Big.fromFloat
let b = 1.->Big.fromFloat

// Fix
Js.log(a->Big.toFixed(2))

// Operators
Js.log(a *. b)
