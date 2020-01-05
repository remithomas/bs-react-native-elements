open ReactNative;

[@react.component] [@bs.module "react-native-elements"]
external make :
  (
    ~name: string,
    ~_type: [@bs.string "type"]
            [
              | `material
              [@bs.as "material"] | `material
              [@bs.as "material-community"] | `materialCommunity
              [@bs.as "font-awesome"] | `fontAwesome
              [@bs.as "octicon"] | `octicon
              [@bs.as "ionicon"] | `ionicon
              [@bs.as "foundation"] | `foundation
              [@bs.as "evilicon"] | `evilicon
              [@bs.as "simple-line-icon"] | `simpleLineIcon
              [@bs.as "zocial"] | `zocial
              [@bs.as "entypo"] | `entypo
              [@bs.as "feather"] | `feather
              [@bs.as "antdesign"] | `antdesign
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
