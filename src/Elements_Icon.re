open ReactNative;

[@react.component] [@bs.module "react-native-elements"]
external make:
  (
    ~brand: bool=?,
    ~color: Color.t=?,
    ~containerStyle: Style.t=?,
    ~disabled: bool=?,
    ~disabledStyle: Style.t=?,
    ~iconStyle: Style.t=?,
    // iconProps
    ~name: string,
    ~onPress: Event.pressEvent => unit=?,
    ~onLongPress: Event.pressEvent => unit=?,
    ~raised: bool=?,
    ~reverse: bool=?,
    ~reverseColor: Color.t=?,
    ~size: int=?,
    ~solid: bool=?,
    ~_type: [@bs.string "type"] [
              | `material
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
            ],
    ~underlayColor: Color.t=?,
    ~_Component: React.element=?,
    unit
  ) =>
  React.element =
  "Icon";
