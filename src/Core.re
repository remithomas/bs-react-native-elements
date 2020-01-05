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
  let encodeValue = value => 
    switch(value |> encodeOpt) {
      | None => stringToJs("")
      | Some(r) => r
    }
}
