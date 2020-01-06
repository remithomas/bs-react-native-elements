open ReactNative;
open Core;

[@bs.deriving abstract]
type jsProps = {
  .
  "containerStyle": Js.nullable(Style.t),
  "contentContainerStyle": Js.nullable(Style.t),
  "rightContentContainerStyle": Js.nullable(Style.t),
  "chevron": jsUnsafe,
  "checkmark": jsUnsafe,
  "onPress": Js.nullable(unit => unit),
  "onLongPress": Js.nullable(unit => unit),
  "title": jsUnsafe,
  "titleStyle": Js.nullable(Style.t),
  "subtitle": jsUnsafe,
  "subtitleStyle": Js.nullable(Style.t),
  "rightTitle": jsUnsafe,
  "rightSubtitle": jsUnsafe,
};

let makeProps = (
  /* ~_Component: option(React.element)=?, */
  ~containerStyle: option(Style.t)=?,
  ~contentContainerStyle: option(Style.t)=?,
  ~rightContentContainerStyle: option(Style.t)=?,
  ~chevron: option(BoolOrNode.t)=?,
  ~checkmark: option(BoolOrNode.t)=?,
  ~onPress: option(unit => unit)=?,
  ~onLongPress: option(unit => unit)=?,
  ~title: option(StrOrNode.t)=?,
  ~titleStyle: option(Style.t)=?,
  /* ~titleProps, */
  ~subtitle: option(StrOrNode.t)=?,
  ~subtitleStyle: option(Style.t)=?,
  /* ~subtitleProps, */
  ~rightTitle: option(StrOrNode.t)=?,
  /* ~rightTitleStyle: Style.t=?, */
  /* ~rightTitleProps, */
  ~rightSubtitle: option(StrOrNode.t)=?,
  /* ~rightSubtitleStyle: Style.t=?, */
  /* ~rightSubtitleProps, */
  /* ~leftIcon, */
  /* ~rightIcon, */
  /* ~leftAvatar, */
  /* ~rightAvatar, */
  /* ~leftElement: React.element=?, */
  /* ~rightElement: React.element=?, */
  /* ~switch, */
  /* ~input, */
  /* ~buttonGroup, */
  /* ~checkBox, */
  /* ~badge, */
  /* ~disabled: bool=?, */
  /* ~disabledStyle: Style.t=?, */
  /* ~topDivider: bool=?, */
  /* ~bottomDivider: bool=?, */
  /* ~_ViewComponent: React.element=?, */
  /* ~pad: int=?, */
  ()
) => {
  "containerStyle": Js.Nullable.fromOption(containerStyle),
  "contentContainerStyle": Js.Nullable.fromOption(contentContainerStyle),
  "rightContentContainerStyle": Js.Nullable.fromOption(rightContentContainerStyle),
  "chevron": chevron |> BoolOrNode.encodeValue,
  "checkmark": checkmark |> BoolOrNode.encodeValue,
  "onPress": Js.Nullable.fromOption(onPress),
  "onLongPress": Js.Nullable.fromOption(onLongPress),
  "title": title |> StrOrNode.encodeValue,
  "titleStyle": Js.Nullable.fromOption(titleStyle),
  "subtitle": subtitle |> StrOrNode.encodeValue,
  "subtitleStyle": Js.Nullable.fromOption(subtitleStyle),
  "rightTitle": rightTitle |> StrOrNode.encodeValue,
  "rightSubtitle": rightSubtitle |> StrOrNode.encodeValue,
};

[@bs.module "react-native-elements"]
external make: React.component(jsProps) = "ListItem";


/*


[@bs.obj]
external makeProps: (
  ~_Component: React.element=?,
  ~containerStyle: Style.t=?,
  ~contentContainerStyle: Style.t=?,
  ~rightContentContainerStyle: Style.t=?,
  // ~chevron,
  // ~checkmark,
  ~onPress: unit => unit=?,
  ~onLongPress: unit => unit=?,
  ~title: StrOrNode.t=?,
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
) => _ = "";

let make =
(
  ~_Component=?,
  ~containerStyle=?,
  ~contentContainerStyle=?,
  ~rightContentContainerStyle=?,
  // ~chevron,
  // ~checkmark,
  ~onPress=?,
  ~onLongPress=?,
  ~title=?,
  ~titleStyle=?,
  // ~titleProps,
  // ~subtitle,
  ~subtitleStyle=?,
  // ~subtitleProps,
  // ~rightTitle,
  ~rightTitleStyle=?,
  // ~rightTitleProps,
  // ~rightSubtitle,
  ~rightSubtitleStyle=?,
  // ~rightSubtitleProps,
  // ~leftIcon,
  // ~rightIcon,
  // ~leftAvatar,
  // ~rightAvatar,
  ~leftElement=?,
  ~rightElement=?,
  // ~switch,
  // ~input,
  // ~buttonGroup,
  // ~checkBox,
  // ~badge,
  ~disabled=?,
  ~disabledStyle=?,
  ~topDivider=?,
  ~bottomDivider=?,
  ~_ViewComponent=?,
  ~pad=?,
  children
) => {
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~_Component?,
        ~containerStyle?,
        ~contentContainerStyle?,
        ~rightContentContainerStyle?,
        // ~chevron,
        // ~checkmark,
        ~onPress?,
        ~onLongPress?,
        ~title=?title |> StrOrNode.encodeOpt,
        ~titleStyle?,
        // ~titleProps,
        // ~subtitle,
        ~subtitleStyle?,
        // ~subtitleProps,
        // ~rightTitle,
        ~rightTitleStyle?,
        // ~rightTitleProps,
        // ~rightSubtitle,
        ~rightSubtitleStyle?,
        // ~rightSubtitleProps,
        // ~leftIcon,
        // ~rightIcon,
        // ~leftAvatar,
        // ~rightAvatar,
        ~leftElement?,
        ~rightElement?,
        // ~switch,
        // ~input,
        // ~buttonGroup,
        // ~checkBox,
        // ~badge,
        ~disabled?,
        ~disabledStyle?,
        ~topDivider?,
        ~bottomDivider?,
        ~_ViewComponent?,
        ~pad?,
        ()
      ),
      children
  );
}*/