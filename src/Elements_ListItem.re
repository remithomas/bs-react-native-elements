open ReactNative;
open Core;

[@bs.deriving abstract]
type jsProps = {
  .
  // "containerStyle": Js.nullable(Style.t),
  // "contentContainerStyle": Js.nullable(Style.t),
  // "rightContentContainerStyle": Js.nullable(Style.t),
  // "chevron": jsUnsafe,
  // "checkmark": jsUnsafe,
  // "onPress": Js.nullable(unit => unit),
  // "onLongPress": Js.nullable(unit => unit),
  // "title": jsUnsafe,
  // "titleStyle": Js.nullable(Style.t),
  // "subtitle": jsUnsafe,
  // "subtitleStyle": Js.nullable(Style.t),
  // "rightTitle": jsUnsafe,
  // "rightSubtitle": jsUnsafe,
  // "leftAvatar": jsUnsafe,
  // "rightAvatar": jsUnsafe,
  // "leftElement": Js.nullable(React.element),
  // "rightElement": Js.nullable(React.element),
  // /* switch, */
  // /* input, */
  // /* buttonGroup, */
  // /* checkBox, */
  // /* badge, */
  // "disabled": Js.nullable(bool),
  // "disabledStyle": Js.nullable(Style.t),
  // "topDivider": Js.nullable(bool),
  // "bottomDivider": Js.nullable(bool),
  // /* _ViewComponent: React.element=?, */
  // /* pad: int=?, */
  "_Component": jsUnsafe,
  "containerStyle": Js.nullable(Style.t),
  "onPress": Js.nullable(unit => unit),
  "onLongPress": Js.nullable(unit => unit),
  "disabled": Js.nullable(bool),
  "disabledStyle": Js.nullable(Style.t),
  "topDivider": Js.nullable(bool),
  "bottomDivider": Js.nullable(bool),
  "_ViewComponent": jsUnsafe,
  "pad": Js.nullable(int),
};

[@react.component] [@bs.module "react-native-elements"]
external make:
  (
    ~_Component: React.element=?,
    ~containerStyle: Style.t=?,
    ~onPress: unit => unit=?,
    ~onLongPress: unit => unit=?,
    ~disabled: bool=?,
    ~disabledStyle: Style.t=?,
    ~topDivider: bool=?,
    ~bottomDivider: bool=?,
    ~_ViewComponent: React.element=?,
    ~pad: int=?,
    ~children: React.element=?
  ) =>
  React.element =
  "ListItem";

module ButtonGroup = {
  [@react.component]
  [@bs.scope "ButtonGroup"]
  [@bs.module "react-native-elements"]
  external make: (~children: React.element=?) => React.element = "ButtonGroup";
};

module CheckBox = {
  [@react.component]
  [@bs.scope "Checkbox"]
  [@bs.module "react-native-elements"]
  external make: (~children: React.element=?) => React.element = "Checkbox";
};

module Chevron = {
  [@react.component] [@bs.scope "Chevron"] [@bs.module "react-native-elements"]
  external make: (~children: React.element=?) => React.element = "Chevron";
};

module Content = {
  [@react.component] [@bs.scope "Content"] [@bs.module "react-native-elements"]
  external make: (~children: React.element=?) => React.element = "Content";
};

module Input = {
  [@react.component] [@bs.scope "Input"] [@bs.module "react-native-elements"]
  external make: (~children: React.element=?) => React.element = "Input";
};

module Subtitle = {
  [@react.component]
  [@bs.scope "Subtitle"]
  [@bs.module "react-native-elements"]
  external make: (~children: React.element=?) => React.element = "Subtitle";
};

module Title = {
  [@react.component] [@bs.scope "Title"] [@bs.module "react-native-elements"]
  external make: (~children: React.element=?) => React.element = "Title";
};
