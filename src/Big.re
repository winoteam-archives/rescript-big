type t;

[@bs.send] external toFixed: (t, int) => string = "toFixed";

[@bs.send] external plus: (t, t) => t = "plus";

[@bs.send] external times: (t, t) => t = "times";

[@bs.send] external valueOf: t => string = "valueOf";

let toFloat = decimal => {
  float_of_string(valueOf(decimal));
};

[@bs.module "big.js"] external make: float => t = "Big";
let big = make;

module Operators = {
  let (+.) = (a: t, b: t) => a->plus(b);
  let ( *. ) = (a: t, b: t) => a->times(b);
  let ($.) = (a: t, b: int) => a->toFixed(b);
};