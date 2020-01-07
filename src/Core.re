type node = React.element;

type jsUnsafe;

external stringToJs: string => jsUnsafe = "%identity";
external booleanToJs: bool => jsUnsafe = "%identity";
external nodeToJs: node => jsUnsafe = "%identity";
external propsToJs: 'a => jsUnsafe = "%identity";

module StrOrNode = {  
  type t = [ | `String(string) | `Node(node)];

  let encode = value => switch (value) {
    | `String(s) => stringToJs(s)
    | `Node(n) => nodeToJs(n)
  }

  let encodeOpt = Belt.Option.map(_, encode);
  let encodeValue = value => 
    switch(value |> encodeOpt) {
      | None => nodeToJs(React.null)
      | Some(r) => r
    }
}

module BoolOrNode = {  
  type t = [ | `Boolean(bool) | `Node(node)];

  let encode = value => switch (value) {
    | `Boolean(s) => booleanToJs(s)
    | `Node(n) => nodeToJs(n)
  }

  let encodeOpt = Belt.Option.map(_, encode);
  let encodeValue = value => 
    switch(value |> encodeOpt) {
      | None => nodeToJs(React.null)
      | Some(r) => r
    }
}

module PropsOrNode = {
  // type props;
  type t('props) = [ | `Props('props) | `Node(node)];

  let encode = value => switch (value) {
    | `Props(p) => propsToJs(p)
    | `Node(n) => nodeToJs(n)
  }

  let encodeOpt = Belt.Option.map(_, encode);
  let encodeValue = value => 
    switch(value |> encodeOpt) {
      | None => nodeToJs(React.null)
      | Some(r) => r
    }
}
