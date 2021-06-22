# rescript-big

[![Actions Status](https://github.com/winoteam/rescript-big/workflows/rescript-big-test-suite/badge.svg)](https://github.com/winoteam/rescript-big/actions)

🎡 ReScript bindings for [Big.js](https://github.com/MikeMcl/big.js/).

In this version only these methods are supported: `toFixed`, `plus`, `minus`, `div`, `times`, `valueOf`, `round`, `eq`, `gt`, `gte`, `lt` and `lte`

It also have some converters and shortcuts for converting an existing value or making a Big value, such as: `fromFloat`, `fromInt`, `toFloat`, `toInt` and `big` (the principal constructor) which is just and alias of `fromFloat` function

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
open Big

open! Big.Operators
```

And be initialized this way

```rei
let decimal = big(2020.2065) // OR: 2020.2065->big
```

Fix an output

```rei
Js.log(decimal->toFixed(2))
// -> string(2020.21)
```

Use the operators

```rei
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

## 🌈 Features

### The `toFixed` binding

```rei
toFixed: (t, int) => string

Js.log(2020.2065->big->toFixed(2))
// -> string(2020.20)
```

### The `plus` binding

```rei
plus: (t, t) => t

Js.log(1.1->big->plus(2.2->big)) // OR: 1.1->big +. 2.2->big
// -> big(3.3)
```

### The `minus` binding

```rei
minus: (t, t) => t

Js.log(3.3->big->minus(2.2->big)) // OR: 3.3->big -. 2.2->big
// -> big(1.1)
```

### The `div` binding

```rei
div: (t, t) => t

Js.log(3.3->big->div(1.1->big)) // OR: 3.3->big /. 1.1->big
// -> big(3.3)
```

### The `times` binding

```rei
times: (t, t) => t

Js.log(3.3->big->times(1.1->big)) // OR: 3.3->big *. 1.1->big
// -> big(3.3)
```

### The `valueOf` binding

```rei
valueOf: t => string

Js.log(79.11->big->valueOf)
// -> string(79.11)
```

### The `round` binding

```rei
round: (t, int) => t

Js.log(2065.2065->big->round(2))
// -> string(2065.21)
```

### The `eq` binding

```rei
eq: (t, t) => bool

Js.log(79.11->big->eq(79.10->big))
// -> bool(false)
```

### The `gt` binding

```rei
gt: (t, t) => bool

Js.log(79.11->big->gt(79.10->big))
// -> bool(true)
```

### The `gte` binding

```rei
gte: (t, t) => bool

Js.log(79.11->big->gte(79.12->big))
// -> bool(false)
```

### The `lt` binding

```rei
lt: (t, t) => bool

Js.log(79.11->big->lt(79.11->big))
// -> bool(false)
```

### The `lte` binding

```rei
lte: (t, t) => bool

Js.log(79.11->big->lte(79.11->big))
// -> bool(true)
```

### `fromFloat`

```rei
fromFloat: float => t

Js.log(12.99->fromFloat)
// -> big(12.99)
```

### `fromInt`

```rei
fromInt: int => t

Js.log(12->fromInt)
// -> big(12)
```

### `toFloat`

```rei
toFloat: t => float

Js.log(12.->big->toFloat)
// -> float(12.0)
```

### `toInt`

```rei
toInt: t => int

Js.log(12.->big->toInt)
// -> int(12)
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
