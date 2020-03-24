module Big = {
  type t;

  [@bs.send] external toFixed: (t, int) => string = "toFixed";
  let toFixed = (decimal: t, dp: int) => {
    toFixed(decimal, dp);
  };

  [@bs.send] external plus: (t, t) => t = "plus";
  let plus = (decimalA, decimalB) => {
    plus(decimalA, decimalB);
  };

  [@bs.send] external times: (t, t) => t = "times";
  let times = (decimalA, decimalB) => {
    times(decimalA, decimalB);
  };

  [@bs.send] external valueOf: t => string = "valueOf";
  let toFloat = decimal => {
    float_of_string(valueOf(decimal));
  };
};

[@bs.module] external make: float => Big.t = "big.js";
let big = make;

let toFixed = Big.toFixed;
let plus = Big.plus;
let times = Big.times;
let toFloat = Big.toFloat;

module Operators = {
  let (+.) = (a: Big.t, b: Big.t) => a->Big.plus(b);
  let ( *. ) = (a: Big.t, b: Big.t) => a->Big.times(b);
  let ($.) = (a: Big.t, b: int) => a->Big.toFixed(b);
};