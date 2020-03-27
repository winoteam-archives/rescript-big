type t;

[@bs.send] external toFixed: (t, int) => string = "toFixed";

[@bs.send] external plus: (t, t) => t = "plus";

[@bs.send] external times: (t, t) => t = "times";

[@bs.send] external valueOf: t => string = "valueOf";

[@bs.module "big.js"] external make: float => t = "Big";
let big_of_float = make;
let big = big_of_float;

[@bs.module "big.js"] external make: int => t = "Big";
let big_of_int = make;

let float_of_big = decimal => {
  float_of_string(valueOf(decimal));
};

let int_of_big = decimal => {
  int_of_string(valueOf(decimal));
};

module Operators = {
  let (+.) = (a: t, b: t) => a->plus(b);
  let ( *. ) = (a: t, b: t) => a->times(b);
  let ($.) = (a: t, b: int) => a->toFixed(b);
};