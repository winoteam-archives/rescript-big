// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var BigJs = require("big.js");
var Caml_format = require("bs-platform/lib/js/caml_format.js");

function toFixed(a, dp) {
  return a.toFixed(dp);
}

function plus(a, b) {
  return a.plus(b);
}

function minus(a, b) {
  return a.minus(b);
}

function div(a, b) {
  return a.div(b);
}

function times(a, b) {
  return a.times(b);
}

function valueOf(a) {
  return a.valueOf();
}

function big_of_float(prim) {
  return BigJs.Big(prim);
}

function big_of_int(prim) {
  return BigJs.Big(prim);
}

function float_of_big(decimal) {
  return Caml_format.caml_float_of_string(decimal.valueOf());
}

function int_of_big(decimal) {
  return Caml_format.caml_int_of_string(decimal.valueOf());
}

function $plus$dot(a, b) {
  return a.plus(b);
}

function $star$dot(a, b) {
  return a.times(b);
}

function $neg$dot(a, b) {
  return a.minus(b);
}

function $slash$dot(a, b) {
  return a.div(b);
}

function $$dot(a, b) {
  return a.toFixed(b);
}

var Operators = {
  $plus$dot: $plus$dot,
  $star$dot: $star$dot,
  $neg$dot: $neg$dot,
  $slash$dot: $slash$dot,
  $$dot: $$dot
};

var big = big_of_float;

exports.toFixed = toFixed;
exports.plus = plus;
exports.minus = minus;
exports.div = div;
exports.times = times;
exports.valueOf = valueOf;
exports.big_of_float = big_of_float;
exports.big = big;
exports.big_of_int = big_of_int;
exports.float_of_big = float_of_big;
exports.int_of_big = int_of_big;
exports.Operators = Operators;
/* big.js Not a pure module */