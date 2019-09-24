open ReactNative;

[@react.component]
[@bs.module "react-native-elements"]
external make:
  (
    ~containerStyle: Style.t=?,
    ~placeholderStyle: Style.t=?,
    ~_PlaceholderContent: React.element=?,
    ~_ImageComponent: React.element=?,
    // TODO: Also receives all React Native Image props
    unit
  ) =>
  React.element = 
  "Image";
