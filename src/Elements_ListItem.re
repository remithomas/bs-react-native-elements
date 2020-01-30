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
  "leftAvatar": jsUnsafe,
  "rightAvatar": jsUnsafe,
  "leftElement": Js.nullable(React.element),
  "rightElement": Js.nullable(React.element),
  /* switch, */
  /* input, */
  /* buttonGroup, */
  /* checkBox, */
  /* badge, */
  "disabled": Js.nullable(bool),
  "disabledStyle": Js.nullable(Style.t),
  "topDivider": Js.nullable(bool),
  "bottomDivider": Js.nullable(bool),
  /* _ViewComponent: React.element=?, */
  /* pad: int=?, */
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
  ~leftAvatar: option(PropsOrNode.t(Elements_Avatar.jsProps))=?,
  ~rightAvatar: option(PropsOrNode.t(Elements_Avatar.jsProps))=?,
  ~leftElement: option(React.element)=?,
  ~rightElement: option(React.element)=?,
  /* ~switch, */
  /* ~input, */
  /* ~buttonGroup, */
  /* ~checkBox, */
  /* ~badge, */
  ~disabled: option(bool)=?,
  ~disabledStyle: option(Style.t)=?,
  ~topDivider: option(bool)=?,
  ~bottomDivider: option(bool)=?,
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
  "leftAvatar": leftAvatar |> PropsOrNode.encodeValue,
  "rightAvatar": rightAvatar |> PropsOrNode.encodeValue,
  "leftElement": Js.Nullable.fromOption(leftElement),
  "rightElement": Js.Nullable.fromOption(rightElement),
  "disabled": Js.Nullable.fromOption(disabled),
  "disabledStyle": Js.Nullable.fromOption(disabledStyle),
  "topDivider": Js.Nullable.fromOption(topDivider),
  "bottomDivider": Js.Nullable.fromOption(bottomDivider),
};

[@bs.module "react-native-elements"]
external make: React.component(jsProps) = "ListItem";
