type t;
[@bs.new] external big: float => t = "Big";

[@bs.send] external toFixed: (t, int) => string = "toFixed";

[@bs.send] external plus: (t, t) => t = "plus";

[@bs.send] external times: (t, t) => t = "times";