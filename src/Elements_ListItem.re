open Core;

type jsProps = {
  .
  "title": jsUnsafe,
};

let makeProps = (
  ~_Component: option(React.element)=?,
  ~title: option(StrOrNode.t)=?,
  ()
) => {
  "title": title |> StrOrNode.encodeValue,
  // "title": switch(title |> StrOrNode.encodeOpt) {
  //   | None => stringToJs("")
  //   | Some(r) => r
  // },
  /* "title": switch (title) {
    | None => "tit"
    | Some(t) => t |> StrOrNode.encode
  }, */
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