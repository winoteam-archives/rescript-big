open Jest;
open Big;
open! Big.Operators;

describe("Big.js bindings from ReasonML / Ocaml", () => {
  open Expect;
  open! Expect.Operators;

  test("big(2.0) is just equals to float(2.0)", () => {
    expect(2.0->big->float_of_big) === 2.0
  });

  test("should correctly add values", () => {
    expect((2.0->big +. 5.2->big +. 0.3->big)->float_of_big) === 7.5
  });

  test("should correctly multiply values", () => {
    expect(2.0->big *. 3.0->big) == 6.0->big
  });

  test("should correctly multiply values and precise response", () => {
    expect((2020.2065->big *. 3.0->big $. 2)->float_of_string->big)
    == 6060.62->big
  });

  test("should correctly divide values", () => {
    expect(4.2->big /. 2.0->big) == 2.1->big
  });

  test("should do substract and return correct value", () => {
    expect(2.2->big -. 0.2->big) == 2.0->big
  });

  test("should correctly round decimal value", () => {
    expect(79.116666666666658755->big @. 4) == 79.1167->big
  });

  test("should compare w/ ==", () => {
    expect(79.11->big ==. 79.10->big) === false
  });

  test("should compare w/ ===", () => {
    expect(79.11->big ===. 79.10->big) === false
  });

  test("should compare w/ >", () => {
    expect(79.11->big >. 79.10->big) === true
  });

  test("should compare w/ >=", () => {
    expect(79.11->big >=. 79.11->big) === true
  });

  test("should compare w/ >=", () => {
    expect(79.11->big >=. 79.12->big) === false
  });

  test("should compare w/ <", () => {
    expect(79.11->big <. 79.12->big) === true
  });

  test("should compare w/ <=", () => {
    expect(79.11->big <=. 79.12->big) === true
  });
});
