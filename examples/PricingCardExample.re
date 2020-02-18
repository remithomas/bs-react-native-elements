open ReactNative;

[@react.component]
let make = () => {
  <Elements.ThemeProvider>
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
  </Elements.ThemeProvider>
}
