let component = ReasonReact.statelessComponent("Greeting");

let make = (~name, _children) => {
  ...component,
  render: _self =>
    <div className="alert alert-success">
      {ReasonReact.string("Hello! " ++ name)}
    </div>,
};
