open Big
open! Big.Operators

// Initialize a new big instance
let decimal = 201.57512->big

// Fix an output
Js.log(decimal)
Js.log(decimal->toFixed(2))

// Use the operators
Js.log(0.1->big +. 0.2->big)
Js.log(2.5->big *. 0.->big)
