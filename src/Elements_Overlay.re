open ReactNative;

type case =
  | Number(int)
  | String(string);

[@react.component]
[@bs.module "react-native-elements"]
external make:
  (
    ~borderRadius: int=?,
    ~children: React.element=?,
    ~containerStyle: Style.t=?,
    ~fullScreen: bool=?,
    ~height: case=?,
    ~isVisible: bool=?,
    ~overlayBackgroundColor: Color.t=?,
    ~onBackdropPress: Event.pressEvent => unit=?,
    ~overlayStyle: Style.t=?,
    ~width: case=?,
    ~windowBackgroundColor: Color.t=?,
    // ============== modal props
    ~ref: ReactNative.NativeElement.ref=?,
    ~animationType: [@bs.string] [ | `none | `slide | `fade]=?,
    ~hardwareAccelerated: bool=?,
    ~onDismiss: unit => unit=?,
    ~onOrientationChange: Event.syntheticEvent({
                            .
                            "orientation": Modal.OrientationChange.t,
                          }) =>
                          unit
                            =?,
    ~onRequestClose: unit => unit=?,
    ~onShow: unit => unit=?,
    ~presentationStyle: [@bs.string] [
                          | `fullScreen
                          | `pageSheet
                          | `formSheet
                          | `overFullScreen
                        ]
                          =?,
    ~supportedOrientations: array(Modal.Orientation.t)=?,
    ~transparent: bool=?,
    unit
  ) =>
  React.element = 
  "Overlay";
