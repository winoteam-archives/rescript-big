open Big;

let (+.) = (a: t, b: t) => a->plus(b);

let ( *. ) = (a: t, b: t) => a->times(b);

let ($.) = (a: t, b: int) => a->toFixed(b);