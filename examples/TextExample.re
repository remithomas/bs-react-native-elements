open ReactNative;

[@react.component]
let make = () => {
  <View>
    <Elements.Text h1=true h1Style={
      Style.(
        style(
          ~paddingHorizontal=10.->dp,
          ~paddingVertical=20.->dp,
          (),
        )
      )
    }>
      {ReasonReact.string("hello")}
    </Elements.Text>
  </View>
}
