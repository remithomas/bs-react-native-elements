# (WIP) React Native Elements bindings for ReasonML [![Build Status](https://travis-ci.org/remithomas/bs-react-native-elements.svg?branch=master)](https://travis-ci.org/remithomas/bs-react-native-elements)

- https://react-native-training.github.io/react-native-elements/
- https://reasonml-community.github.io/reason-react-native/
- https://reasonml.github.io

## Installation

```bash
yarn add https://github.com/remithomas/bs-react-native-elements
```

Then add `react-native-elements` to `bsconfig.json`

```json
"bs-dependencies": ["bs-react-native-elements"]
```

## Version

We follow versions according `React Native Elements`.
`bs-version 2.3.*` matches `React Native Elements version 2.3.*`.

Our patch version is only elements we add or fixes we made on elements.

## Customizing

- [ ] ThemeProvider (10%)

## Elements

- [ ] Avatar (50%)
- [x] Badge (missing value as React.element)
- [ ] Button
- [x] ButtonGroup
- [ ] Card
- [x] CheckBox
- [x] Divider
- [ ] Header
- [x] Icon
- [x] Image
- [ ] Input
- [x] ListItem
- [x] Overlay
- [x] Pricing
- [ ] Rating
- [x] SearchBar
- [ ] Slider
- [ ] SocialIcon
- [x] Text
- [ ] Tile
- [ ] Tooltip

## Todos

- [ ] Add react-native props to Image
- [ ] Text Component should accept only h1 props or h2 props... not both. multiple signatures
- [ ] Badge component, value as React.element
- [ ] Create a expo app to show the result

## Contributing

Please feel free to submit, comment anything on this repo :)
