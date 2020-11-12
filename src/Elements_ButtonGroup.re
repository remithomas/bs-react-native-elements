open ReactNative;
open Core;

type btn = StrOrNode.t;

[@react.component] [@bs.module "react-native-elements"]
external make:
  (
    ~buttonStyle: Style.t=?,
    ~buttonContainerStyle: Style.t=?,
    ~buttons: array(btn)=?,
    ~_Component: React.element=?,
    ~containerStyle: Style.t=?,
    ~disabled: bool=?,
    ~disabledStyle: Style.t=?,
    ~disabledTextStyle: Style.t=?,
    ~disabledSelectedStyle: Style.t=?,
    ~disabledSelectedTextStyle: Style.t=?,
    ~innerBorderStyle: Style.t=?,
    ~onPress: unit => unit=?,
    ~selectMultiple: bool=?,
    ~selectedButtonStyle: Style.t=?,
    ~selectedIndex: int=?,
    ~selectedIndexes: array(int)=?,
    ~selectedTextStyle: Style.t=?,
    ~textStyle: Style.t=?,
    ~underlayColor: Color.t=?,
    ~vertical: bool=?
  ) =>
  React.element =
  "ButtonGroup";
