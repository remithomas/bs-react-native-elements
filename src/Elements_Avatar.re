open ReactNative;

[@bs.deriving abstract]
type jsProps = {. "activeOpacity": Js.nullable(float)};

type icon = {
  name: string,
  color: string,
  size: int,
  _type: string,
  iconStyle: Style.t,
};

[@bs.obj] external fromIcon: (~name: string, unit) => icon;

[@react.component] [@bs.module "react-native-elements"]
external make:
  (
    ~activeOpacity: float=?,
    ~avatarStyle: Style.t=?,
    ~containerStyle: Style.t=?,
    // editButton
    // icon
    ~iconStyle: Style.t=?,
    ~imageProps: Elements_Image.imageProps=?,
    ~onEditPress: Event.pressEvent => unit=?,
    ~onLongPress: Event.pressEvent => unit=?,
    ~onPress: Event.pressEvent => unit=?,
    ~overlayContainerStyle: Style.t=?,
    ~placeholderStyle: Style.t=?,
    ~rounded: bool=?,
    ~size: [ | `small | `medium | `large | `xlarge]=?,
    ~showEditButton: bool=?,
    ~source: Image.Source.t=?,
    ~title: string=?,
    ~titleStyle: Style.t=?,
    ~renderPlaceholderContent: React.element=?,
    ~_Component: React.element=?,
    ~_ImageComponent: React.element=?,
    unit
  ) =>
  React.element =
  "Avatar";
