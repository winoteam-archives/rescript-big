# re-big

[![Actions Status](https://github.com/winoteam/re-big/workflows/re-big-test-suite/badge.svg)](https://github.com/winoteam/re-big/actions)

🎡Reason + BuckleScript bindings for [Big.js](https://github.com/MikeMcl/big.js/).

In this version only `toFixed`, `plus`, `times` and `valueOf` are supported.

We add `toFloat` function to convert a `big` to `float`.

It's accompanied with an `Operators` module which override some operators like `+.`, `*.` and bind another one `$.` to method `toFixed(int)`.

# ⚡️ Requirements

- A solid environement with [Node js](https://nodejs.org/en/)

# 📦 Installation

Using npm:

```bash
npm install @wino/re-big
```

Using yarn:

```bash
yarn add @wino/re-big
```

# 💻 How to use

Module name is `Big` !

It can be opened this way:

```reason
open Big;

open! Big.Operators;
```

And be initialized this way

```reason
let decimal = big(2020.2065);

/* or */ let decimal = 2020.2065->big;
```

Fix an output

```reason
Js.log(decimal $. 2); // output -> 2020.21
```

Use the operators

```reason
Js.log(big(0.1) +. big(0.2)); // output -> 0.3

Js.log(big(2.5) *. big(0.)); // output -> 0

Js.log(big(4.2) /. big(2.0)); // output -> 2.1

Js.log(big(4.2) -. big(4.0)); // output -> 0.2

Js.log((2.0->big +. 5.2->big +. 0.3->big)->toFloat) // output -> 7.5
```

# 🌈 Features

#### The `plus` binding

```reason
toFixed: (t, int) => string
```

#### The `times` binding

```reason
times: (t, t) => t
```

#### The `minus` binding

```reason
minus: (t, t) => t
```

#### The `div` binding

```reason
div: (t, t) => t
```

#### The `valueOf` binding

```reason
valueOf: t => string
```

#### The `toFixed` binding

```reason
toFixed: (t, int) => string
```

#### `big_of_int`

```reason
Js.log(12->big_of_int);
```

#### `int_of_big`

```reason
Js.log(12.->big->big_of_int);
```

#### `float_of_big`

```reason
Js.log(big(12.)->float_of_big);
```

# 🕺 Contribute

**Want to hack on functions? Follow the next instructions: 🚀**

1. Fork this repository to your own GitHub account and then clone it to your local device
2. Install dependencies using Yarn: yarn
3. Ensure that the tests are passing using yarn test
4. Send a pull request 🙌

Remember to add tests for your change if possible.

# 👋 Questions

If you have any questions, feel free to open an issue. Please check the [Big.js docs](https://github.com/MikeMcl/big.js/) before submitting an issue.
