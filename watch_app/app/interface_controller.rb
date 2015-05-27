class InterfaceController < WKInterfaceController
  extend IB

  outlet :status_button, WKInterfaceButton
  outlet :last_update_label, WKInterfaceLabel
  outlet :status_label, WKInterfaceLabel

  def initWithContext(context)
    super
    return self
  end

  def willActivate
    # This method is called when watch view controller is about to be visible to user
    NSLog("%@ will activate", self)
  end

  def didDeactivate
    # This method is called when watch view controller is no longer visible
    NSLog("%@ did deactivate", self)
  end

end
