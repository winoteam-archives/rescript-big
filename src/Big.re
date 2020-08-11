[@genType]
type t;

[@bs.send] external toFixed: (t, int) => string = "toFixed";
[@genType]
let toFixed = (a, dp) => toFixed(a, dp);

[@bs.send] external plus: (t, t) => t = "plus";
[@genType]
let plus = (a, b) => plus(a, b);

[@bs.send] external minus: (t, t) => t = "minus";
[@genType]
let minus = (a, b) => minus(a, b);

[@bs.send] external div: (t, t) => t = "div";
[@genType]
let div = (a, b) => div(a, b);

[@bs.send] external times: (t, t) => t = "times";
[@genType]
let times = (a, b) => times(a, b);

[@bs.send] external valueOf: t => string = "valueOf";
[@genType]
let valueOf = a => valueOf(a);

[@bs.send] external round: (t, int, int) => t = "round";
[@genType]
let round = (a, dp) => round(a, dp, 1); // 1, here represent Big.RM (default value) -> ROUND_HALF_UP

[@bs.send] external eq: (t, t) => bool = "eq";
[@genType]
let eq = (a, b) => eq(a, b);

[@bs.send] external gt: (t, t) => bool = "gt";
[@genType]
let gt = (a, b) => gt(a, b);

[@bs.send] external gte: (t, t) => bool = "gte";
[@genType]
let gte = (a, b) => gte(a, b);

[@bs.send] external lt: (t, t) => bool = "lt";
[@genType]
let lt = (a, b) => lt(a, b);

[@bs.send] external lte: (t, t) => bool = "lte";
[@genType]
let lte = (a, b) => lte(a, b);

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
  let (-.) = (a: t, b: t) => a->minus(b);
  let (/.) = (a: t, b: t) => a->div(b);
  let ($.) = (a: t, b: int) => a->toFixed(b);
  let (@.) = (a: t, b: int) => a->round(b);
  let (==.) = (a: t, b: t) => a->eq(b);
  let (===.) = (a: t, b: t) => a->eq(b);
  let (>.) = (a: t, b: t) => a->gt(b);
  let (>=.) = (a: t, b: t) => a->gte(b);
  let (<.) = (a: t, b: t) => a->lt(b);
  let (<=.) = (a: t, b: t) => a->lte(b);
};
