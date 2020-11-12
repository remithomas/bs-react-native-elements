open ReactNative;

[@react.component] [@bs.module "react-native-elements"]
external make:
  (
    ~buttonStyle: Style.t=?,
    ~containerStyle: Style.t=?,
    ~disabled: bool=?,
    ~disabledStyle: Style.t=?,
    ~disabledTitleStyle: Style.t=?,
    // icon
    ~iconContainerStyle: Style.t=?,
    ~iconRight: bool=?,
    // linearGradientProps
    ~loading: bool=?,
    // loadingProps
    ~loadingStyle: Style.t=?,
    ~onPress: unit => unit=?,
    ~raised: bool=?,
    ~title: string=?,
    // titleProps
    ~titleStyle: Style.t=?,
    ~type_: [ | `solid | `clear | `outline]=?,
    ~_TouchableComponent: React.element=?,
    ~_ViewComponent: React.element=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Button";
