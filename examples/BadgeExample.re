open ReactNative;

[@react.component]
let make = () => {
  <View>
    // Standard badge
    <Badge value={Badge.BadgeValue.fromString("99+")} status=`error />
    // Todo: allow react element
    // <Badge value={Badge.BadgeValue.fromReactElement(<Text>{"My Custom Badge"->ReasonReact.string}</Text>)} />

    // Mini badge
    <Badge status=`success />
    <Badge status=`error />
    <Badge status=`primary />
    <Badge status=`warning />

    // Avatar with mini badge
    <View>
      <Avatar
        rounded=true
        source={
          ReactNative.Image.Source.fromUriSource(
            ReactNative.Image.uriSource(~uri="https://randomuser.me/api/portraits/men/41.jpg", ()),
          )
        }
        size=`large
      />

      <Badge
        status=`success
        containerStyle={
          Style.(
            style(~backgroundColor=ReactNative.Color.transparent, ())
          )
        }
      />
    </View>
  </View>
}
