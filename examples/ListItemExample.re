open ReactNative;
/* open Core.StrOrNode; */

[@react.component]
let make = () => {
  let list = [||];

  <View>
    {
      list |. Belt.Array.map(_item => {
        <View>
        /* <ListItem /> */
        /* <ListItem title="yo" /> */
        <ListItem
          title=`String("title")
        />

        </View>
      })
      |. React.array
    }
  </View>
}
