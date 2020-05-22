open ReactNative;

type imageProps;

[@bs.obj]
external fromImageProps:
  (
    ~accessibilityLabel: string=?,
    ~accessible: bool=?,
    ~blurRadius: float=?,
    ~capInsets: View.edgeInsets=?,
    ~defaultSource: Image.DefaultSource.t=?,
    ~fadeDuration: float=?,
    ~loadingIndicatorSource: array(Image.Source.t)=?,
    ~onError: Image.errorEvent => unit=?,
    ~onLayout: Event.layoutEvent => unit=?,
    ~onLoad: Image.imageLoadEvent => unit=?,
    ~onLoadEnd: unit => unit=?,
    ~onLoadStart: unit => unit=?,
    ~onPartialLoad: unit => unit=?,
    ~onProgress: Image.progressEvent => unit=?,
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
    ~source: Image.Source.t,
    ~style: Style.t=?,
    ~testID: string=?,
    unit
  ) =>
  imageProps;

[@react.component] [@bs.module "react-native-elements"]
external make:
  (
    ~containerStyle: Style.t=?,
    ~placeholderStyle: Style.t=?,
    ~_PlaceholderContent: React.element=?,
    ~_ImageComponent: React.element=?,
    // React Native Image props
    ~accessibilityLabel: string=?,
    ~accessible: bool=?,
    ~blurRadius: float=?,
    ~capInsets: View.edgeInsets=?,
    ~defaultSource: Image.DefaultSource.t=?,
    ~fadeDuration: float=?,
    ~loadingIndicatorSource: array(Image.Source.t)=?,
    ~onError: Image.errorEvent => unit=?,
    ~onLayout: Event.layoutEvent => unit=?,
    ~onLoad: Image.imageLoadEvent => unit=?,
    ~onLoadEnd: unit => unit=?,
    ~onLoadStart: unit => unit=?,
    ~onPartialLoad: unit => unit=?,
    ~onProgress: Image.progressEvent => unit=?,
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
    ~source: Image.Source.t,
    ~style: Style.t=?,
    ~testID: string=?,
    unit
  ) =>
  React.element =
  "Image";
