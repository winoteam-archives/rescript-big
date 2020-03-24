open Jest;
open ReBig;
open! ReBig.Operators;

describe("ReBig - Big.js bindings from ReasonML / Ocaml", () => {
  open Expect;
  open! Expect.Operators;

  test("big(2.0) is just equals to float(2.0)", () => {
    expect(2.0->big->toFloat) === 2.0
  });

  test("big(2.0) +. big(5.2) +. big(0.3) should be equals to float(7.5)", () => {
    expect((2.0->big +. 5.2->big +. 0.3->big)->toFloat) === 7.5
  });

  test("big(2.0) *. big(3.0) should be equals to big(6.0)", () => {
    expect(2.0->big *. 3.0->big) == 6.0->big
  });

  test("big(2020.2065) *. big(3.0) $. 2 should be equals to big(6060.62)", () => {
    expect((2020.2065->big *. 3.0->big $. 2)->float_of_string->big)
    == 6060.62->big
  });
});