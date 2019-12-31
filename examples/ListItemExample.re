open ReactNative;

[@react.component]
let make = () => {
  let list = [||];

  <View>
    {
      list |. Belt.Array.map(_item => {
        <ListItem
          title="title"
        />
      })
      |. React.array
    }
  </View>
}
