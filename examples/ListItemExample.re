open ReactNative;

[@react.component]
let make = () => {
  let list = [||];

  <View>
    {
      list |. Belt.Array.map(_item => {
        <Elements.ListItem
          title=`String("title")
        />
      })
      |. React.array
    }
  </View>
}
