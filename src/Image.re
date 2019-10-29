open ReactNative;

type imageProps;

[@bs.obj]
external fromImageProps:
  (
    ~accessibilityLabel: string=?,
    ~accessible: bool=?,
    ~blurRadius: float=?,
    ~capInsets: View.edgeInsets=?,
    ~defaultSource: ReactNative.Image.DefaultSource.t=?,
    ~fadeDuration: float=?,
    ~loadingIndicatorSource: array(ReactNative.Image.Source.t)=?,
    ~onError: ReactNative.Image.errorEvent => unit=?,
    ~onLayout: Event.layoutEvent => unit=?,
    ~onLoad: ReactNative.Image.imageLoadEvent => unit=?,
    ~onLoadEnd: unit => unit=?,
    ~onLoadStart: unit => unit=?,
    ~onPartialLoad: unit => unit=?,
    ~onProgress: ReactNative.Image.progressEvent => unit=?,
    ~progressiveRenderingEnabled: bool=?,
    ~resizeMethod: [@bs.string] [ | `auto | `resize | `scale]=?,
    ~resizeMode: [@bs.string] [
                  | `center
                  | `contain
                  | `cover
                  | `repeat
                  | `stretch
                ]
                  =?,
    ~source: ReactNative.Image.Source.t,
    ~style: Style.t=?,
    ~testID: string=?,
    unit
  ) => imageProps = ""; 

[@react.component]
[@bs.module "react-native-elements"]
external make:
  (
    ~containerStyle: Style.t=?,
    ~placeholderStyle: Style.t=?,
    ~_PlaceholderContent: React.element=?,
    ~_ImageComponent: React.element=?,
    // TODO: Also receives all React Native Image props
    unit
  ) =>
  React.element = 
  "Image";
