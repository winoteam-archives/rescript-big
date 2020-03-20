open! Big;

let decimal = big(2.6);

Js.log(decimal);
Js.log(decimal->toFixed(2));
Js.log(decimal->plus(13.3));
Js.log(decimal->times(big(2.)));