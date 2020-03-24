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
};

[@bs.module] external make: float => Big.t = "big.js";
let big = make;

module Operators = {
  let (+.) = (a: Big.t, b: Big.t) => a->Big.plus(b);
  let ( *. ) = (a: Big.t, b: Big.t) => a->Big.times(b);
  let ($.) = (a: Big.t, b: int) => a->Big.toFixed(b);
};