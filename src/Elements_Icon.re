open ReactNative;

[@bs.deriving abstract]
type jsProps = {
  .
  "size": Js.nullable(int),
  "color": Js.nullable(Color.t),
  "iconStyle": Js.nullable(Style.t),
  "_Component": Js.nullable(React.element),
  "size": Js.nullable(int),
  "disabled": Js.nullable(bool),
  "disabledStyle": Js.nullable(Style.t),
  "onPress": Js.nullable(Event.pressEvent => unit),
  "onLongPress": Js.nullable(Event.pressEvent => unit),
  "underlayColor": Js.nullable(Color.t),
  "reverse": Js.nullable(bool),
  "raised": Js.nullable(bool),
  "containerStyle": Js.nullable(Style.t),
  "reverseColor": Js.nullable(Color.t),
};

[@react.component] [@bs.module "react-native-elements"]
external make:
  (
    ~name: string,
    ~_type: [@bs.string "type"] [
              | `material
              | [@bs.as "material"] `material
              | [@bs.as "material-community"] `materialCommunity
              | [@bs.as "font-awesome"] `fontAwesome
              | [@bs.as "octicon"] `octicon
              | [@bs.as "ionicon"] `ionicon
              | [@bs.as "foundation"] `foundation
              | [@bs.as "evilicon"] `evilicon
              | [@bs.as "simple-line-icon"] `simpleLineIcon
              | [@bs.as "zocial"] `zocial
              | [@bs.as "entypo"] `entypo
              | [@bs.as "feather"] `feather
              | [@bs.as "antdesign"] `antdesign
            ],
    ~size: int=?,
    ~color: Color.t=?,
    ~iconStyle: Style.t=?,
    ~_Component: React.element=?,
    ~disabled: bool=?,
    ~disabledStyle: Style.t=?,
    ~onPress: Event.pressEvent => unit=?,
    ~onLongPress: Event.pressEvent => unit=?,
    ~underlayColor: Color.t=?,
    ~reverse: bool=?,
    ~raised: bool=?,
    ~containerStyle: Style.t=?,
    ~reverseColor: Color.t=?,
    unit
  ) =>
  React.element =
  "Icon";
