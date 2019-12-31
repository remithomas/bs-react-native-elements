open ReactNative;

[@react.component]
let make = () => {
  <View>
    <ReactNativeElements.Button
      title="Solid Button"
    />

    <ReactNativeElements.Button
      title="Outline button"
      _type=`outline
    />

    <ReactNativeElements.Button
      title="Clear button"
      _type=`clear
    />
  </View>
}


