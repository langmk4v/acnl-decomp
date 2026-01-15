arm-none-eabi-gcc  \
    test.c \
    -o test.out \
    -std=c11 \
    -I./Functions/ \
    -Wno-incompatible-pointer-types \
    -fomit-frame-pointer -ffunction-sections -fno-strict-aliasing \
    -march=armv6k -mtune=mpcore -mfloat-abi=hard -mtp=soft