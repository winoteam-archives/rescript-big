# rescript-big

[![Actions Status](https://github.com/winoteam/rescript-big/workflows/rescript-big-test-suite/badge.svg)](https://github.com/winoteam/rescript-big/actions)

🎡 ReScript bindings for [Big.js](https://github.com/MikeMcl/big.js/).

In this version only `toFixed`, `plus`, `times` and `valueOf` are supported.

We add `toFloat` function to convert a `big` to `float`.

It's accompanied with an `Operators` module which override some operators like `+.`, `*.`, `/.` and `-.`

## ⚡️ Requirements

- A solid environement with [Node js](https://nodejs.org/en/)

## 📦 Installation

Using npm:

```bash
npm install @wino/rescript-big
```

Using yarn:

```bash
yarn add @wino/rescript-big
```

## 💻 How to use

Module name is `Big` !

It can be opened this way:

```rei
open Big;

open! Big.Operators;
```

And be initialized this way

```rei
let decimal = big(2020.2065);

/* or */ let decimal = 2020.2065->big;
```

Fix an output

```rei
Js.log(decimal $. 2); // output -> 2020.21
```

Use the operators

```rei
Js.log(big(0.1) +. big(0.2)); // output -> 0.3

Js.log(big(2.5) *. big(0.)); // output -> 0

Js.log(big(4.2) /. big(2.0)); // output -> 2.1

Js.log(big(4.2) -. big(4.0)); // output -> 0.2

Js.log((2.0->big +. 5.2->big +. 0.3->big)->toFloat) // output -> 7.5
```

## 🌈 Features

### The `plus` binding

```rei
plus: (t, int) => string
```

### The `times` binding

```rei
times: (t, t) => t
```

### The `minus` binding

```rei
minus: (t, t) => t
```

### The `div` binding

```rei
div: (t, t) => t
```

### The `valueOf` binding

```rei
valueOf: t => string
```

### The `toFixed` binding

```rei
toFixed: (t, int) => string
```

### `big_of_int`

```rei
Js.log(12->big_of_int);
```

### `int_of_big`

```rei
Js.log(12.->big->big_of_int);
```

### `float_of_big`

```rei
Js.log(big(12.)->float_of_big);
```

## 🕺 Contribute

### 🚀 Want to hack on functions? Follow the next instructions

1. Fork this repository to your own GitHub account and then clone it to your local device
2. Install dependencies using Yarn: yarn
3. Ensure that the tests are passing using yarn test
4. Send a pull request 🙌

Remember to add tests for your change if possible.

## 👋 Questions

If you have any questions, feel free to open an issue. Please check the [Big.js docs](https://github.com/MikeMcl/big.js/) before submitting an issue.
