type t;

[@bs.new] external big: float => t = "Big";
[@bs.send] external toFixed: (t, int) => string = "toFixed";
[@bs.send] external plus: (t, t) => t = "plus";
[@bs.send] external times: (t, t) => t = "times";

module Operators = {
  let (+.) = (a: t, b: t) => a->plus(b);
  let ( *. ) = (a: t, b: t) => a->times(b);
  let ($.) = (a: t, b: int) => a->toFixed(b);
};