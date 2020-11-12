[@bs.deriving abstract]
type theme = {
  // Avatar: Partial<AvatarProps>;
  // Badge: Partial<BadgeProps>;
  // Button: Partial<ButtonProps>;
  // ButtonGroup: Partial<ButtonGroupProps>;
  // Card: Partial<CardProps>;
  // CheckBox: Partial<CheckBoxProps>;
  // Divider: Partial<DividerProps>;
  // Header: Partial<HeaderProps>;
  // Icon: Partial<IconProps>;
  // Image: Partial<ImageProps>;
  // Input: Partial<InputProps>;
  // ListItem: Partial<ListItemProps>;
  [@bs.optional] [@bs.as "ListItem"]
  listItem: Elements_ListItem.jsProps,
  // Overlay: Partial<OverlayProps>;
  // PricingCard: Partial<PricingCardProps>;
  // Rating: Partial<RatingProps>;
  // AirbnbRating: Partial<AirbnbRatingProps>;
  // SearchBar: Partial<SearchBarProps>;
  // Slider: Partial<SliderProps>;
  // SocialIcon: Partial<SocialIconProps>;
  // Text: Partial<TextProps>;
  // Tile: Partial<TileProps>;
  // Tooltip: Partial<TooltipProps>;
  // colors: RecursivePartial<Colors>;
};

[@bs.obj]
external makeTheme: (~listItem: Elements_ListItem.jsProps=?, unit) => theme;

[@react.component] [@bs.module "react-native-elements"]
external make:
  (~theme: theme=?, ~children: React.element=?, unit) => React.element =
  "ThemeProvider";
