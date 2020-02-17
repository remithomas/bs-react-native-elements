open ReactNative;

[@bs.deriving abstract]
type buttonInfo = {
  [@bs.optional] title: string,
  [@bs.optional] icon: string,
  [@bs.optional] buttonStyle: Style.t,
  [@bs.optional] titleStyle: Style.t,
};

[@bs.obj]
external makeButtonInfo: (
  ~title: string=?,
  ~icon: string=?,
  ~buttonStyle: Style.t=?,
  ~titleStyle: Style.t=?,
  unit
) => buttonInfo = "";

[@react.component]
[@bs.module "react-native-elements"]
external make:
  (
    ~containerStyle: Style.t=?,
    ~infoStyle: Style.t=?,
    ~pricingStyle: Style.t=?,
    ~titleStyle: Style.t=?,
    ~wrapperStyle: Style.t=?,
    ~price: string,
    ~onButtonPress: Event.pressEvent => unit=?,
    ~button: buttonInfo=?,
    ~info: array(string)=?,
    ~color: Color.t=?,
    ~title: string,
    unit
  ) =>
  React.element = 
  "PricingCard";
