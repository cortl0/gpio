# Test for BananaPi P2 Zero
# pin: G12 = GPIO A PA14 = gpio14 = PA_EINT14 = UART3_RX = SPI1_CLK

echo "14" > /sys/class/gpio/export
echo "out" > /sys/class/gpio/gpio14/direction

for (( i=1; i <= 5; i++))
do
    echo "1" > /sys/class/gpio/gpio14/value
    sleep 2
    echo "0" > /sys/class/gpio/gpio14/value
    sleep 2
done

echo "14" > /sys/class/gpio/unexport
