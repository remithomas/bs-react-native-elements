open ReactNative;

[@react.component] [@bs.module "react-native-elements"]
external make:
  (
    ~button: bool=?,
    ~_Component: React.element=?,
    ~disabled: bool=?,
    ~fontFamily: string=?,
    ~fontStyle: Style.t=?,
    ~fontWeight: string=?,
    ~iconColor: Color.t=?,
    ~iconSize: int=?,
    ~iconStyle: Style.t=?,
    ~_type: [@bs.string "type"] [
              | `material
              | [@bs.as "material-community"] `materialCommunity
              | [@bs.as "font-awesome"] `fontAwesome
              | [@bs.as "font-awesome-5"] `fontAwesome5
              | [@bs.as "octicon"] `octicon
              | [@bs.as "ionicon"] `ionicon
              | [@bs.as "foundation"] `foundation
              | [@bs.as "evilicon"] `evilicon
              | [@bs.as "simple-line-icon"] `simpleLineIcon
              | [@bs.as "zocial"] `zocial
              | [@bs.as "entypo"] `entypo
              | [@bs.as "feather"] `feather
              | [@bs.as "antdesign"] `antdesign
              | [@bs.as "fontisto"] `fontisto
            ],
    ~light: bool=?,
    ~loading: bool=?,
    ~onPress: Event.pressEvent => unit=?,
    ~onLongPress: Event.pressEvent => unit=?,
    ~raised: bool=?,
    ~style: Style.t=?,
    ~title: string=?,
    ~iconType: [@bs.string] [
                 | `angellist
                 | `codepen
                 | `envelope
                 | `etsy
                 | `facebook
                 | `flickr
                 | `foursquare
                 | [@bs.as "github-alt"] `githubAlt
                 | `github
                 | `gitlab
                 | `instagram
                 | `linkedin
                 | `medium
                 | `pinterest
                 | `quora
                 | [@bs.as "reddit-alien"] `redditAlien
                 | `soundcloud
                 | [@bs.as "stack-overflow"] `stackOverflow
                 | `steam
                 | `stumbleupon
                 | `tumblr
                 | `twitch
                 | `twitter
                 | `google
                 | [@bs.as "google-plus-official"] `googlePlusOfficial
                 | `vimeo
                 | `vk
                 | `weibo
                 | `wordpress
                 | `youtube
               ],
    ~underlayColor: Color.t=?,
    unit
  ) =>
  React.element =
  "SocialIcon";
