open Jest
open Big
open! Big.Operators

describe("Big.js bindings from ReScript", () => {
  open Expect
  open! Expect.Operators

  test("big(2.0) is just equals to float(2.0)", () => expect(2.0->big->Big.toFloat) === 2.0)

  test("should correctly add values", () =>
    expect((2.0->big +. 5.2->big +. 0.3->big)->Big.toFloat) === 7.5
  )

  test("should correctly multiply values", () => expect(2.0->big *. 3.0->big) == 6.0->big)

  test("should correctly multiply values and precise response", () =>
    expect((2020.2065->big *. 3.0->big)->toFixed(2)->float_of_string->big) == 6060.62->big
  )

  test("should correctly divide values", () => expect(4.2->big /. 2.0->big) == 2.1->big)

  test("should do substract and return correct value", () =>
    expect(2.2->big -. 0.2->big) == 2.0->big
  )

  test("should correctly round decimal value", () =>
    expect(79.116666666666658755->big->round(4)) == 79.1167->big
  )

  test("should compare with eq", () => expect(79.11->big->eq(79.10->big)) === false)

  test("should compare with eq", () => expect(0.->big->eq(0.0000000000001->big)) === false)

  test("should compare with eq after round", () =>
    expect(0.->big->eq(0.0000000000001->big->round(1))) === true
  )

  test("should compare with gt", () => expect(79.11->big->gt(79.10->big)) === true)

  test("should compare with gt", () => expect(79.11->big->gt(79.11->big)) === false)

  test("should compare with gte", () => expect(79.11->big->gte(79.11->big)) === true)

  test("should compare with gte", () => expect(79.11->big->gte(79.12->big)) === false)

  test("should compare with lt", () => expect(79.11->big->lt(79.12->big)) === true)

  test("should compare with lt", () => expect(79.11->big->lt(79.11->big)) === false)

  test("should compare with lte", () => expect(79.11->big->lte(79.12->big)) === true)

  test("should compare with lte", () => expect(79.11->big->lte(79.0001->big)) === false)

  test("should return the string value of a big number", () =>
    expect(79.11->big->valueOf) === "79.11"
  )

  test("should return the int value of a big number", () => expect(79.->big->toInt) === 79)

  test("should return the float value of a big number", () => expect(79.11->big->toFloat) === 79.11)

  test("should return the big value of an integer", () => expect(79->fromInt) == 79.->big)

  test("should return the big value of a float", () => expect(79.99->fromFloat) == 79.99->big)
})
