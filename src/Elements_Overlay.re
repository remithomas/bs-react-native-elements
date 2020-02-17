open ReactNative;

[@react.component]
[@bs.module "react-native-elements"]
external make:
  (
    ~borderRadius: int=?,
    ~children: React.element=?,
    ~containerStyle: Style.t=?,
    ~fullScreen: bool=?,
  //   ~height: [@bs.unwrap] [
  //   | `Str(string)
  //   | `Int(int)
  // ],
    ~isVisible: bool=?,
    ~overlayBackgroundColor: Color.t=?,
    ~onBackdropPress: Event.pressEvent => unit=?,
    ~overlayStyle: Style.t=?,
    // ~width
    // ~windowBackgroundColor
    unit
  ) =>
  React.element = 
  "Overlay";
