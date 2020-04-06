[@genType]
type t;

[@bs.send] external toFixed: (t, int) => string = "toFixed";
[@genType]
let toFixed = (a, dp) => toFixed(a, dp);

[@bs.send] external plus: (t, t) => t = "plus";
[@genType]
let plus = (a, b) => plus(a, b);

[@bs.send] external times: (t, t) => t = "times";
[@genType]
let times = (a, b) => times(a, b);

[@bs.send] external valueOf: t => string = "valueOf";
[@genType]
let valueOf = a => valueOf(a);

[@bs.module "big.js"] external make: float => t = "Big";

[@genType]
let big_of_float = make;

[@genType]
let big = big_of_float;

[@genType] [@bs.module "big.js"] external make: int => t = "Big";

[@genType]
let big_of_int = make;

[@genType]
let float_of_big = decimal => {
  float_of_string(valueOf(decimal));
};

[@genType]
let int_of_big = decimal => {
  int_of_string(valueOf(decimal));
};

module Operators = {
  let (+.) = (a: t, b: t) => a->plus(b);
  let ( *. ) = (a: t, b: t) => a->times(b);
  let ($.) = (a: t, b: int) => a->toFixed(b);
};