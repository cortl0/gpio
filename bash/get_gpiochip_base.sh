# Get GPIO base addresses

for f in `ls -d /sys/class/gpio/gpiochip*`
do
    echo $f `cat $f/label $f/base $f/ngpio`
done
