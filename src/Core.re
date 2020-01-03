type node = React.element;

type jsUnsafe;

external stringToJs: string => jsUnsafe = "%identity";
external nodeToJs: node => jsUnsafe = "%identity";

module StrOrNode = {  
  type t = [ | `String(string) | `Node(node)];

  let encode = value => switch (value) {
    | `String(s) => stringToJs(s)
    | `Node(n) => nodeToJs(n)
  }

  let encodeOpt = Belt.Option.map(_, encode);
}

/* module StrOrNode = {
    type t;

    type arg =
        | Str(string)
        | Node(ReasonReact.reactElement);

    let encode: arg => t = 
        fun
        | Str(v) => Obj.magic(v)
        | Node(v) => Obj.magic(v);
a
    let encodeOpt = Belt.Option.map(_, encode);
}; */