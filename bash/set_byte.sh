#set the bit

# Allwinner A20
# PIO_BASE = 0x01C20800
# PIO_INT_DEB = 0x218
sudo ./devmem2 0x1C20A18 w 0x1
dd bs=1 conv=notrunc,sparse if=i.txt of=o.txt skip=3 seek=5 count=1
