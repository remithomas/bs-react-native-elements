open ReactNative;

[@react.component]
[@bs.module "react-native-elements"]
external make:
  (
    ~style: Style.t,
    unit
  ) =>
  React.element = 
  "Divider";
