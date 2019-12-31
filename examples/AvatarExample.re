open ReactNative;

[@react.component]
let make = () => {
  <View>
    <Avatar
      source={
        ReactNative.Image.Source.fromUriSource(
          ReactNative.Image.uriSource(~uri="https://s3.amazonaws.com/uifaces/faces/twitter/jsa/128.jpg", ()),
        )
      }
      activeOpacity={0.7}
      avatarStyle={
        Style.(
          style(~borderRadius=145. /. 2., ())
        )
      }
      overlayContainerStyle={
        Style.(
          style(~backgroundColor=ReactNative.Color.transparent, ())
        )
      }
    />

    <Avatar
      rounded=true
      source={
        ReactNative.Image.Source.fromUriSource(
          ReactNative.Image.uriSource(~uri="https://i.imgur.com/0y8Ftya.jpg", ()),
        )
      }
      imageProps={
        ReactNativeElements.Image.fromImageProps(
          ~source={
            ReactNative.Image.Source.fromUriSource(
              ReactNative.Image.uriSource(~uri="https://i.imgur.com/0y8Ftya.jpg", ()),
            )
          },
          ~resizeMode=`contain,
          ()
        )
      }
    />
  </View>
}
