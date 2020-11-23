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
  [@bs.scope "ListItem"]
  [@bs.module "react-native-elements"]
  external make: (~children: React.element=?) => React.element = "ButtonGroup";
};

module CheckBox = {
  [@react.component]
  [@bs.scope "ListItem"]
  [@bs.module "react-native-elements"]
  external make: (~children: React.element=?) => React.element = "Checkbox";
};

module Chevron = {
  [@react.component]
  [@bs.scope "ListItem"]
  [@bs.module "react-native-elements"]
  // from Elements_Icon
  external make:
    (
      ~brand: bool=?,
      ~color: Color.t=?,
      ~containerStyle: Style.t=?,
      ~disabled: bool=?,
      ~disabledStyle: Style.t=?,
      ~iconStyle: Style.t=?,
      // iconProps
      ~name: string=?,
      ~onPress: Event.pressEvent => unit=?,
      ~onLongPress: Event.pressEvent => unit=?,
      ~raised: bool=?,
      ~reverse: bool=?,
      ~reverseColor: Color.t=?,
      ~size: int=?,
      ~solid: bool=?,
      ~_type: [@bs.string "type"] [
                | `material
                | [@bs.as "material"] `material
                | [@bs.as "material-community"] `materialCommunity
                | [@bs.as "font-awesome"] `fontAwesome
                | [@bs.as "font-awesome-5"] `fontAwesome5
                | [@bs.as "octicon"] `octicon
                | [@bs.as "ionicon"] `ionicon
                | [@bs.as "foundation"] `foundation
                | [@bs.as "evilicon"] `evilicon
                | [@bs.as "simple-line-icon"] `simpleLineIcon
                | [@bs.as "zocial"] `zocial
                | [@bs.as "entypo"] `entypo
                | [@bs.as "feather"] `feather
                | [@bs.as "antdesign"] `antdesign
                | [@bs.as "fontisto"] `fontisto
              ]
                =?,
      ~underlayColor: Color.t=?,
      ~_Component: React.element=?,
      unit
    ) =>
    React.element =
    "Chevron";
};

module Content = {
  [@react.component]
  [@bs.scope "ListItem"]
  [@bs.module "react-native-elements"]
  external make: (~children: React.element=?) => React.element = "Content";
};

module Input = {
  [@react.component]
  [@bs.scope "ListItem"]
  [@bs.module "react-native-elements"]
  external make:
    (
      ~containerStyle: Style.t=?,
      ~disabled: bool=?,
      ~disabledInputStyle: Style.t=?,
      ~inputContainerStyle: Style.t=?,
      ~errorMessage: string=?,
      ~errorStyle: Style.t=?,
      // errorProps
      // inputStyle: Style.t=?,
      // label
      // labelStyle: Style.t=?,
      // labelProps
      // leftIcon
      // leftIconContainerStyle: Style.t=?,
      ~placeholder: string=?,
      // rightIcon
      ~rightIconContainerStyle: Style.t=?,
      ~renderErrorMessage: bool=?,
      ~_InputComponent: React.element=?,
      unit
    ) =>
    React.element =
    "Input";
};

module Subtitle = {
  [@react.component]
  [@bs.scope "ListItem"]
  [@bs.module "react-native-elements"]
  external make:
    (
      ~h1: bool=?,
      ~h1Style: Style.t=?,
      ~h2: bool=?,
      ~h2Style: Style.t=?,
      ~h3: bool=?,
      ~h3Style: Style.t=?,
      ~h4: bool=?,
      ~h4Style: Style.t=?,
      ~style: Style.t=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Subtitle";
};

module Title = {
  [@react.component]
  [@bs.scope "ListItem"]
  [@bs.module "react-native-elements"]
  external make:
    (
      ~h1: bool=?,
      ~h1Style: Style.t=?,
      ~h2: bool=?,
      ~h2Style: Style.t=?,
      ~h3: bool=?,
      ~h3Style: Style.t=?,
      ~h4: bool=?,
      ~h4Style: Style.t=?,
      ~style: Style.t=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Title";
};
