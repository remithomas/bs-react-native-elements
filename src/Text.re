open ReactNative;

[@react.component]
[@bs.module "react-native-elements"]
external make:
  (
    ~h1: bool=?,
    ~h1Style: Style.t,
    ~h2: bool=?,
    ~h2Style: Style.t,
    ~h3: bool=?,
    ~h3Style: Style.t,
    ~h4: bool=?,
    ~h4Style: Style.t,
    unit
  ) =>
  React.element = 
  "Text";
