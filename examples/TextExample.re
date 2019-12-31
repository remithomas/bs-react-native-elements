open ReactNative;

[@react.component]
let make = () => {
  <View>
    <ReactNativeElements.Text h1=true h1Style={
      Style.(
        style(
          ~paddingHorizontal=10.->dp,
          ~paddingVertical=20.->dp,
          (),
        )
      )
    }>
      {ReasonReact.string("hello")}
    </ReactNativeElements.Text>
  </View>
}
