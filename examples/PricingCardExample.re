open ReactNative;

[@react.component]
let make = () => {
  <View>
    <Elements.PricingCard
      title="Freemium"
      price="free"
      button={
        Elements.PricingCard.makeButtonInfo(
          ~title="Add to my account",
          ()
        )
      }
    />
  </View>
}
