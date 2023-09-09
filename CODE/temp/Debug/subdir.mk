################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ADC_driver.c \
../DIO.c \
../DIO_Program.c \
../LCD.c \
../finaltemp.c 

OBJS += \
./ADC_driver.o \
./DIO.o \
./DIO_Program.o \
./LCD.o \
./finaltemp.o 

C_DEPS += \
./ADC_driver.d \
./DIO.d \
./DIO_Program.d \
./LCD.d \
./finaltemp.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


