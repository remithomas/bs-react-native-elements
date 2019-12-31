open ReactNative;

// module M = {
//   type data = [`Element(React.element) | `Str(string)];
//   let toElement = (x: data) =>
//     switch x {
//     | `Element(e) => e
//     | `Str(s) => React.string(s)
//     };
// };

// M.toElement(`Str(""));




[@react.component]
[@bs.module "react-native-elements"]
external make: (
  ~_Component: React.element=?,
  ~containerStyle: Style.t=?,
  ~contentContainerStyle: Style.t=?,
  ~rightContentContainerStyle: Style.t=?,
  // ~chevron,
  // ~checkmark,
  ~onPress: unit => unit=?,
  ~onLongPress: unit => unit=?,
  ~title: string=?,
  // ~titleElement: [@bs.as "title"] [React.element=?],
  // [@bs.string] [ | `close(unit => unit) | `line(string => unit)]

  // ~title,
    // ~titleElement
  ~titleStyle: Style.t=?,
  // ~titleProps,
  // ~subtitle,
  ~subtitleStyle: Style.t=?,
  // ~subtitleProps,
  // ~rightTitle,
  ~rightTitleStyle: Style.t=?,
  // ~rightTitleProps,
  // ~rightSubtitle,
  ~rightSubtitleStyle: Style.t=?,
  // ~rightSubtitleProps,
  // ~leftIcon,
  // ~rightIcon,
  // ~leftAvatar,
  // ~rightAvatar,
  ~leftElement: React.element=?,
  ~rightElement: React.element=?,
  // ~switch,
  // ~input,
  // ~buttonGroup,
  // ~checkBox,
  // ~badge,
  ~disabled: bool=?,
  ~disabledStyle: Style.t=?,
  ~topDivider: bool=?,
  ~bottomDivider: bool=?,
  ~_ViewComponent: React.element=?,
  ~pad: int=?,
  unit
) =>
  React.element =
  "ListItem";
