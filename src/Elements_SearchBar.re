open ReactNative;

[@bs.deriving abstract]
type cancelButtonProps = {
  [@bs.optional]
  testID: string,
};

[@bs.obj]
external makeCancelButtonProps: (~testID: string=?, unit) => cancelButtonProps;

[@react.component] [@bs.module "react-native-elements"]
external make:
  (
    ~platform: [@bs.string] [ | `default | `ios | `android]=?,
    // clearIcon
    // searchIcon
    // cancelIcon (platform="android" only)
    ~containerStyle: Style.t=?,
    ~inputContainerStyle: Style.t=?,
    ~inputStyle: Style.t=?,
    ~leftIconContainerStyle: Style.t=?,
    ~rightIconContainerStyle: Style.t=?,
    ~lightTheme: bool=?, // (platform="default" only)
    // loadingProps
    ~onChangeText: string => unit=?,
    ~onClear: unit => unit=?,
    ~placeholder: string=?,
    ~placeholderTextColor: Color.t=?,
    ~round: bool=?, // (platform="default" only)
    ~showCancel: bool=?, // (platform="ios" only)
    ~showLoading: bool=?,
    ~underlineColorAndroid: Color.t=?,
    ~cancelButtonTitle: string=?,
    // cancelButtonProps
    ~buttonStyle: Style.t=?,
    ~buttonTextStyle: Style.t=?,
    ~color: Color.t=?,
    ~disabled: bool=?,
    ~buttonDisabledStyle: Style.t=?,
    ~buttonDisabledTextStyle: Style.t=?,
    ~value: string=?,
    ~cancelButtonProps: cancelButtonProps=?
  ) =>
  React.element =
  "SearchBar";
