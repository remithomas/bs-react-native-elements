open ReactNative;

[@react.component]
let make = () => {
  <View>
    <BsReactNativeElements.Button
      title="Solid Button"
    />

    <BsReactNativeElements.Button
      title="Outline button"
      _type=`outline
    />

    <BsReactNativeElements.Button
      title="Clear button"
      _type=`clear
    />
  </View>
}


