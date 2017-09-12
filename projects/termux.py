#termux-battery-status        termux-reload-settings
#termux-camera-info           termux-setup-storage
#termux-camera-photo          termux-share
#termux-clipboard-get         termux-sms-inbox
#termux-clipboard-set         termux-sms-send
#termux-contact-list          termux-storage-get
##termux-dialog                termux-telephony-call
#termux-download              termux-telephony-cellinfo
#termux-fix-shebang           termux-telephony-deviceinfo
#termux-info                  termux-toast
#termux-infrared-frequencies  termux-tts-engines
#termux-infrared-transmit     termux-tts-speak
#termux-location              termux-vibrate
#termux-notification          termux-wake-lock
#termux-notification-remove   termux-wake-unlock
#termux-open                  termux-wifi-connectioninfo
#termux-open-url              termux-wifi-scaninfo<Paste>

import os
class termux:
    def battery_status():
        os.stystem("termux-battery-status")

