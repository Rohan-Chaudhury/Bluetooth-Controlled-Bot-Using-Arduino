# Bluetooth-Controlled-Bot-Using-Arduino
Arduino Code for controlling a bot via Bluetooth using bluetooth module hc-05

First we have to configure the Hc-05 module.

To do that upload a blank code to the arduino with the bluetooth module powered off. Then power it up while holding the reset switch of the bluetooth module and connect it's Rx to arduino's RX and it's Tx to arduino's Tx. The LED on the bluetooth module will glow with a 1 second delay which shows that it is in AT mode now. Now open the serial monitor and set Baud rate to 38400 with both NL and CR configuration.Type AT and press enter. It will show error once and then again do the same thing.It will show ok now.

Now type AT+NAME=any_name to set to a name you like and press enter.
Then type AT+PSWD=any_pswd to set to any password you like and then press enter.

Now your bluetooth module is set up.
Now remove the power from bluetooth module once and then power it up again.
Remove Rx and Tx pins and upload the code and then connect it's Rx to arduino's Tx and it's Tx to arduino's Rx.
Once it's done use your phone to connect to the bluetooth module and use the app ArduinoRC available on playstore to send data via bluetooth. Check the data sent on serial monitor(change baud rate to 9600) and now it is fully configured.
