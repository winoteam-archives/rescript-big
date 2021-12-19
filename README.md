# rescript-big

[![Actions Status](https://github.com/winoteam/rescript-big/workflows/rescript-big-test-suite/badge.svg)](https://github.com/winoteam/rescript-big/actions)

🎡 Zero-cost bindings to [Big.js](https://github.com/MikeMcl/big.js/) library.

In this version only these methods are supported: `toFixed`, `plus`, `minus`, `div`, `times`, `valueOf`, `round`, `eq`, `gt`, `gte`, `lt` and `lte`

It also have some converters and shortcuts for converting an existing value or making a Big value, such as: `fromFloat`, `fromInt`, `toFloat`, `toInt` and `big` (the principal constructor) which is just and alias of `fromFloat` function

It's accompanied with an `Operators` module which override some operators like `+.`, `*.`, `/.` and `-.`

## ⚡️ Requirements

- A solid environement with [Node js](https://nodejs.org/en/)

## 📦 Installation

Using npm:

```bash
npm install rescript-big
```

Using yarn:

```bash
yarn add rescript-big
```

## 💻 How to use

Module name is `Big` !

It can be opened this way:

```rescript
open Big

open! Big.Operators
```

And be initialized this way

```rescript
let decimal = big(2020.2065) // OR: 2020.2065->big
```

Fix an output

```rescript
Js.log(decimal->toFixed(2))
// -> string(2020.21)
```

Use the operators

```rescript
Js.log(big(0.1) +. big(0.2))
// -> big(0.3)

Js.log(big(2.5) *. big(0.))
// -> big(0)

Js.log(big(4.2) /. big(2.0))
// -> big(2.1)

Js.log(big(4.2) -. big(4.0))
// -> big(0.2)

Js.log((2.0->big +. 5.2->big +. 0.3->big)->toFloat)
// -> float(7.5)
```

## 🕺 Contribute

### 🚀 Want to hack on functions? Follow the next instructions

1. Fork this repository to your own GitHub account and then clone it to your local device
2. Install dependencies using Yarn: `yarn`
3. Ensure that the tests are passing using `yarn test`
4. Send a pull request 🙌

Remember to add tests for your change if possible.

## 👋 Questions

If you have any questions, feel free to open an issue. Please check the [Big.js docs](https://github.com/MikeMcl/big.js/) before submitting an issue.
