/* TypeScript file generated from Big.re by genType. */
/* eslint-disable import/first */


// tslint:disable-next-line:no-var-requires
const Curry = require('bs-platform/lib/es6/curry.js');

// tslint:disable-next-line:no-var-requires
const BigBS = require('./Big.bs');

// tslint:disable-next-line:interface-over-type-literal
export type t = number;

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

export const eq: (a:t, b:t) => boolean = function (Arg1: any, Arg2: any) {
  const result = Curry._2(BigBS.eq, Arg1, Arg2);
  return result
};

export const gt: (a:t, b:t) => boolean = function (Arg1: any, Arg2: any) {
  const result = Curry._2(BigBS.gt, Arg1, Arg2);
  return result
};

export const gte: (a:t, b:t) => boolean = function (Arg1: any, Arg2: any) {
  const result = Curry._2(BigBS.gte, Arg1, Arg2);
  return result
};

export const lt: (a:t, b:t) => boolean = function (Arg1: any, Arg2: any) {
  const result = Curry._2(BigBS.lt, Arg1, Arg2);
  return result
};

export const lte: (a:t, b:t) => boolean = function (Arg1: any, Arg2: any) {
  const result = Curry._2(BigBS.lte, Arg1, Arg2);
  return result
};

/** 
 * Converters
  */
export const fromFloat: (_1:number) => t = BigBS.fromFloat;

export const big: (_1:number) => t = BigBS.big;

export const fromInt: (_1:number) => t = BigBS.fromInt;

export const toFloat: (decimal:t) => number = BigBS.toFloat;

export const toInt: (decimal:t) => number = BigBS.toInt;
