open Big;
open! Operators;

// Initialize a new big instance
let decimal = big(2.6);

// Use the operators
Js.log(decimal);
Js.log(decimal->toFixed(2));
Js.log(decimal->plus(big(13.3)));
Js.log(decimal->times(big(2.)));
Js.log(big(0.1) +. big(0.2));
Js.log(big(2.5) *. big(2.5));

// Fix an ouput
Js.log(big(201.57512) $. 2);