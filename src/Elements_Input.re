open ReactNative;

[@react.component] [@bs.module "react-native-elements"]
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
