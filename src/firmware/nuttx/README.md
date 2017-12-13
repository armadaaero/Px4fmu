Flash the resulting .px4 file in QGroundControl (custom file option) to load the meta data into the application. 

The new airframe named "Aurora VTOL" then will be available in the user interface once you restart QGroundControl.

If not it can be forcible added by setting these two parameters in your ground control station:

SYS_AUTOSTART to the index of airframe 13014
SYS_AUTOCONFIG to 1
