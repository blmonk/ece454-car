################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Generated_Code/AD1.c \
../Generated_Code/AS1.c \
../Generated_Code/ASerialLdd1.c \
../Generated_Code/AdcLdd1.c \
../Generated_Code/Cap1.c \
../Generated_Code/CaptureLdd1.c \
../Generated_Code/Cpu.c \
../Generated_Code/PE_LDD.c \
../Generated_Code/PWM1.c \
../Generated_Code/PWM2.c \
../Generated_Code/PWM3.c \
../Generated_Code/PwmLdd1.c \
../Generated_Code/PwmLdd2.c \
../Generated_Code/PwmLdd3.c \
../Generated_Code/TI1.c \
../Generated_Code/TI2.c \
../Generated_Code/TU1.c \
../Generated_Code/TU2.c \
../Generated_Code/TU3.c \
../Generated_Code/TU4.c \
../Generated_Code/TimerIntLdd1.c \
../Generated_Code/TimerIntLdd2.c \
../Generated_Code/Vectors.c \
../Generated_Code/clk_cam.c \
../Generated_Code/si_cam.c 

OBJS += \
./Generated_Code/AD1.o \
./Generated_Code/AS1.o \
./Generated_Code/ASerialLdd1.o \
./Generated_Code/AdcLdd1.o \
./Generated_Code/Cap1.o \
./Generated_Code/CaptureLdd1.o \
./Generated_Code/Cpu.o \
./Generated_Code/PE_LDD.o \
./Generated_Code/PWM1.o \
./Generated_Code/PWM2.o \
./Generated_Code/PWM3.o \
./Generated_Code/PwmLdd1.o \
./Generated_Code/PwmLdd2.o \
./Generated_Code/PwmLdd3.o \
./Generated_Code/TI1.o \
./Generated_Code/TI2.o \
./Generated_Code/TU1.o \
./Generated_Code/TU2.o \
./Generated_Code/TU3.o \
./Generated_Code/TU4.o \
./Generated_Code/TimerIntLdd1.o \
./Generated_Code/TimerIntLdd2.o \
./Generated_Code/Vectors.o \
./Generated_Code/clk_cam.o \
./Generated_Code/si_cam.o 

C_DEPS += \
./Generated_Code/AD1.d \
./Generated_Code/AS1.d \
./Generated_Code/ASerialLdd1.d \
./Generated_Code/AdcLdd1.d \
./Generated_Code/Cap1.d \
./Generated_Code/CaptureLdd1.d \
./Generated_Code/Cpu.d \
./Generated_Code/PE_LDD.d \
./Generated_Code/PWM1.d \
./Generated_Code/PWM2.d \
./Generated_Code/PWM3.d \
./Generated_Code/PwmLdd1.d \
./Generated_Code/PwmLdd2.d \
./Generated_Code/PwmLdd3.d \
./Generated_Code/TI1.d \
./Generated_Code/TI2.d \
./Generated_Code/TU1.d \
./Generated_Code/TU2.d \
./Generated_Code/TU3.d \
./Generated_Code/TU4.d \
./Generated_Code/TimerIntLdd1.d \
./Generated_Code/TimerIntLdd2.d \
./Generated_Code/Vectors.d \
./Generated_Code/clk_cam.d \
./Generated_Code/si_cam.d 


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/%.o: ../Generated_Code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:/Users/L00304709/workspace.kds/ece454-car/lab7/Static_Code/PDD" -I"C:/Users/L00304709/workspace.kds/ece454-car/lab7/Static_Code/IO_Map" -I"C:/Users/L00304709/workspace.kds/ece454-car/lab7/Sources" -I"C:/Users/L00304709/workspace.kds/ece454-car/lab7/Generated_Code" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


