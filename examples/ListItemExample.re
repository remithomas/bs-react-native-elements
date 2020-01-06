open ReactNative;

[@react.component]
let make = () => {
  let list = [||];

  <View>
    {
      list |. Belt.Array.map(_item => {
        <Elements.ListItem
          title=`String("title")
          onPress={() => Js.log("onPress")}
        />
      })
      |. React.array
    }
  </View>
}
