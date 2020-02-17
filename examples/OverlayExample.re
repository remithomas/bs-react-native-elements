open ReactNative;

[@react.component]
let make = () => {
  <View>
    <Elements.Overlay
      isVisible=true
      height=Elements.Overlay.Number(100)
    >
      {ReasonReact.string("hello")}
    </Elements.Overlay>
  </View>
}
