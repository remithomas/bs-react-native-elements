open ReactNative;

[@react.component]
let make = () => {
  <View>
    <Elements.Avatar
      source={
        Image.Source.fromUriSource(
          Image.uriSource(~uri="https://s3.amazonaws.com/uifaces/faces/twitter/jsa/128.jpg", ()),
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
          style(~backgroundColor=Color.transparent, ())
        )
      }
    />

    <Elements.Avatar
      rounded=true
      source={
        Image.Source.fromUriSource(
          Image.uriSource(~uri="https://i.imgur.com/0y8Ftya.jpg", ()),
        )
      }
      imageProps={
        Elements.Image.fromImageProps(
          ~source={
            Image.Source.fromUriSource(
              Image.uriSource(~uri="https://i.imgur.com/0y8Ftya.jpg", ()),
            )
          },
          ~resizeMode=`contain,
          ()
        )
      }
    />
  </View>
}
