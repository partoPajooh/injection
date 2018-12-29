################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/ADG508.c \
../Src/ADG508T.c \
../Src/ADS7816.c \
../Src/HC138.c \
../Src/Termo.c \
../Src/colormonitor.c \
../Src/function.c \
../Src/globalVar.c \
../Src/main.c \
../Src/max6675.c \
../Src/stm32f1xx_hal_msp.c \
../Src/stm32f1xx_it.c \
../Src/system_stm32f1xx.c 

OBJS += \
./Src/ADG508.o \
./Src/ADG508T.o \
./Src/ADS7816.o \
./Src/HC138.o \
./Src/Termo.o \
./Src/colormonitor.o \
./Src/function.o \
./Src/globalVar.o \
./Src/main.o \
./Src/max6675.o \
./Src/stm32f1xx_hal_msp.o \
./Src/stm32f1xx_it.o \
./Src/system_stm32f1xx.o 

C_DEPS += \
./Src/ADG508.d \
./Src/ADG508T.d \
./Src/ADS7816.d \
./Src/HC138.d \
./Src/Termo.d \
./Src/colormonitor.d \
./Src/function.d \
./Src/globalVar.d \
./Src/main.d \
./Src/max6675.d \
./Src/stm32f1xx_hal_msp.d \
./Src/stm32f1xx_it.d \
./Src/system_stm32f1xx.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o: ../Src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -mfloat-abi=soft '-D__weak=__attribute__((weak))' '-D__packed=__attribute__((__packed__))' -DUSE_HAL_DRIVER -DSTM32F103xB -I"D:/21_EclipseWorkSpace/injection_iot/Inc" -I"D:/21_EclipseWorkSpace/injection_iot/Drivers/STM32F1xx_HAL_Driver/Inc" -I"D:/21_EclipseWorkSpace/injection_iot/Drivers/STM32F1xx_HAL_Driver/Inc/Legacy" -I"D:/21_EclipseWorkSpace/injection_iot/Drivers/CMSIS/Device/ST/STM32F1xx/Include" -I"D:/21_EclipseWorkSpace/injection_iot/Drivers/CMSIS/Include"  -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


