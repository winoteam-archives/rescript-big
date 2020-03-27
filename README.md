# re-big

Reason + BuckleScript bindings for [Big.js](https://github.com/MikeMcl/big.js/).

In this version only `toFixed`, `plus`, `times` and `valueOf` are supported.

We add `toFloat` function to convert a `big` to `float`.

It's accompanied with an `Operators` module which override some operators like `+.`, `*.` and bind another one `$.` to method `toFixed(int)`.

# Installation

Using npm:

```bash
npm install @wino/re-big
```

Using yarn:

```bash
yarn add @wino/re-big
```

# Usage

Module name is `Big` !

It can be opened this way:

```reasonml
open Big;

open! Big.Operators;
```

Initialize a new big instance.

```js
let decimal = big(2020.2065);

let decimal = 2020.2065->big;
```

Fix an output

```reasonml
Js.log(decimal $. 2); // output -> 2020.21
```

Use the operators

```reasonml
Js.log(big(0.1) +. big(0.2)); // output -> 0.3

Js.log(big(2.5) *. big(0.)); // output -> 0

Js.log((2.0->big +. 5.2->big +. 0.3->big)->toFloat) // output -> 7.5
```

# Features

#### The `plus` binding

```reasonml
toFixed: (t, int) => string
```

#### The `times` binding

```reasonml
times: (t, t) => t
```

#### The `valueOf` binding

```reasonml
valueOf: t => string
```

#### The `toFixed` binding

```reasonml
toFixed: (t, int) => string
```
