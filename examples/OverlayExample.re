open ReactNative;

[@react.component]
let make = () => {
  <View>
    <Elements.Overlay isVisible=true>
      {ReasonReact.string("hello")}
    </Elements.Overlay>
  </View>;
};
