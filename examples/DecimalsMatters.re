open ReBig;
open! ReBig.Operators;

// Initialize a new big instance
let decimal = big(201.57512);

// Fix an output
Js.log(decimal);
Js.log(decimal $. 2);

// Use the operators
Js.log(big(0.1) +. big(0.2));
Js.log(big(2.5) *. big(0.));