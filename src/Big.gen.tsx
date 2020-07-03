/* TypeScript file generated from Big.re by genType. */
/* eslint-disable import/first */


// tslint:disable-next-line:no-var-requires
const Curry = require('bs-platform/lib/es6/curry.js');

// tslint:disable-next-line:no-var-requires
const BigBS = require('./Big.bs');

// tslint:disable-next-line:max-classes-per-file 
// tslint:disable-next-line:class-name
export abstract class t { protected opaque!: any }; /* simulate opaque types */

export const toFixed: (a:t, dp:number) => string = function (Arg1: any, Arg2: any) {
  const result = Curry._2(BigBS.toFixed, Arg1, Arg2);
  return result
};

export const plus: (a:t, b:t) => t = function (Arg1: any, Arg2: any) {
  const result = Curry._2(BigBS.plus, Arg1, Arg2);
  return result
};

export const minus: (a:t, b:t) => t = function (Arg1: any, Arg2: any) {
  const result = Curry._2(BigBS.minus, Arg1, Arg2);
  return result
};

export const div: (a:t, b:t) => t = function (Arg1: any, Arg2: any) {
  const result = Curry._2(BigBS.div, Arg1, Arg2);
  return result
};

export const times: (a:t, b:t) => t = function (Arg1: any, Arg2: any) {
  const result = Curry._2(BigBS.times, Arg1, Arg2);
  return result
};

export const valueOf: (a:t) => string = BigBS.valueOf;

export const round: (a:t, dp:number) => t = function (Arg1: any, Arg2: any) {
  const result = Curry._2(BigBS.round, Arg1, Arg2);
  return result
};

export const big_of_float: (_1:number) => t = BigBS.big_of_float;

export const big: (_1:number) => t = BigBS.big;

export const big_of_int: (_1:number) => t = BigBS.big_of_int;

export const float_of_big: (decimal:t) => number = BigBS.float_of_big;

export const int_of_big: (decimal:t) => number = BigBS.int_of_big;
