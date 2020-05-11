# Test for BananaPi P2 Zero
# Red led trigger

LED="/sys/class/leds/red_led/trigger"
while [ 1 ] ; do
    echo none > $LED
    sleep 0.5
    echo default-on > $LED
    sleep 0.5
done
