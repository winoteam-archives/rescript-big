open Jest
open Big
open! Big.Operators

describe("Big.js bindings from ReasonML / Ocaml", () => {
  open Expect
  open! Expect.Operators

  test("big(2.0) is just equals to float(2.0)", () => expect(2.0->big->Big.toFloat) === 2.0)

  test("should correctly add values", () =>
    expect(2.0->big->plus(5.2->big->plus(0.3->big))->Big.toFloat) === 7.5
  )

  test("should correctly multiply values", () => expect(2.0->big->times(3.0->big)) == 6.0->big)

  test("should correctly multiply values and precise response", () =>
    expect(2020.2065->big->times(3.0->big)->toFixed(2)->float_of_string->big) == 6060.62->big
  )

  test("should correctly divide values", () => expect(4.2->big->div(2.0->big)) == 2.1->big)

  test("should do substract and return correct value", () =>
    expect(2.2->big->minus(0.2->big)) == 2.0->big
  )

  test("should correctly round decimal value", () =>
    expect(79.116666666666658755->big->round(4)) == 79.1167->big
  )

  test("should compare w/ eq", () => expect(79.11->big->eq(79.10->big)) === false)

  test("should compare w/ eq", () => expect(0.->big->eq(0.0000000000001->big)) === false)

  test("should compare w/ eq after round", () =>
    expect(0.->big->eq(0.0000000000001->big->round(1))) === true
  )

  test("should compare w/ gt", () => expect(79.11->big->gt(79.10->big)) === true)

  test("should compare w/ gt", () => expect(79.11->big->gt(79.11->big)) === false)

  test("should compare w/ gte", () => expect(79.11->big->gte(79.11->big)) === true)

  test("should compare w/ gte", () => expect(79.11->big->gte(79.12->big)) === false)

  test("should compare w/ lt", () => expect(79.11->big->lt(79.12->big)) === true)

  test("should compare w/ lt", () => expect(79.11->big->lt(79.11->big)) === false)

  test("should compare w/ lte", () => expect(79.11->big->lte(79.12->big)) === true)

  test("should compare w/ lte", () => expect(79.11->big->lte(79.0001->big)) === false)
})
