import {
  plus,
  big,
  float_of_big,
  times,
  toFixed,
  valueOf,
} from "./../src/Big.gen";

describe("Big.js bindings from ReasonML / Ocaml - Typescript support", () => {
  test("big(2.0) is just equals to float(2.0)", () => {
    expect(float_of_big(big(2.0))).toStrictEqual(2.0);
  });

  test("big(2.0) is just equals to float(2.0)", () => {
    expect(plus(big(2.0), big(3.0))).toStrictEqual(big(5.0));
  });

  test("big(2.0) + big(5.2) + big(0.3) should be equals to float(7.5)", () => {
    expect(
      float_of_big(plus(plus(big(2.0), big(5.2)), big(0.3)))
    ).toStrictEqual(7.5);
  });

  test("big(2.0) * big(3.0) should be equals to big(6.0)", () => {
    expect(times(big(3.0), big(2.0))).toStrictEqual(big(6.0));
  });

  test("big(2020.2065) * big(3.0) $ 2 should be equals to big(6060.62)", () => {
    expect(toFixed(times(big(2020.2065), big(3.0)), 2)).toStrictEqual(
      valueOf(big(6060.62))
    );
  });
});
