open ReactNative;

type case =
  | Number(int)
  | String(string);

module OrientationChangeEvent = {
  type payload = {orientation: Modal.orientationChange};

  include Event.SyntheticEvent({
    type _payload = payload;
  });
};

[@react.component] [@bs.module "react-native-elements"]
external make:
  (
    ~backdropStyle: Style.t=?,
    ~children: React.element=?,
    ~fullScreen: bool=?,
    ~isVisible: bool=?,
    ~onBackdropPress: Event.pressEvent => unit=?,
    ~overlayStyle: Style.t=?,
    ~_ModalComponent: React.element=?,
    // ============== modal props
    ~ref: ReactNative.NativeElement.ref=?,
    ~animationType: [ | `none | `slide | `fade]=?,
    ~hardwareAccelerated: bool=?,
    ~onDismiss: unit => unit=?,
    ~onOrientationChange: OrientationChangeEvent.t => unit=?,
    ~onRequestClose: unit => unit=?,
    ~onShow: unit => unit=?,
    ~presentationStyle: [
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
