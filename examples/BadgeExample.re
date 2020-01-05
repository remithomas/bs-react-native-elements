open ReactNative;

[@react.component]
let make = () => {
  <View>
    // Standard badge
    <Elements.Badge value={Elements.Badge.BadgeValue.fromString("99+")} status=`error />
    // Todo: allow react element
    // <Badge value={Badge.BadgeValue.fromReactElement(<Text>{"My Custom Badge"->ReasonReact.string}</Text>)} />

    // Mini badge
    <Elements.Badge status=`success />
    <Elements.Badge status=`error />
    <Elements.Badge status=`primary />
    <Elements.Badge status=`warning />

    // Avatar with mini badge
    <View>
      <Elements.Avatar
        rounded=true
        source={
          ReactNative.Image.Source.fromUriSource(
            ReactNative.Image.uriSource(~uri="https://randomuser.me/api/portraits/men/41.jpg", ()),
          )
        }
        size=`large
      />

      <Elements.Badge
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
