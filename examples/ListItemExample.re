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
          leftAvatar={`Props({
            "activeOpacity": Js.Nullable.return(2.0)
          })}
        />
      })
      |. React.array
    }
  </View>
}
