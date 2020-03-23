open! Big;
open! Operators;

let decimal = big(2.6);

Js.log(decimal);
Js.log(decimal->toFixed(2));
Js.log(decimal->plus(big(13.3)));
Js.log(decimal->times(big(2.)));

Js.log(big(2.5) +. big(2.5));

Js.log(big(201.57512) $. 2);