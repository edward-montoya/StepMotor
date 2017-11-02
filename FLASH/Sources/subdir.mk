################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/events.c" \
"../Sources/general.c" \
"../Sources/main.c" \
"../Sources/sci.c" \
"../Sources/steper.c" \

C_SRCS += \
../Sources/events.c \
../Sources/general.c \
../Sources/main.c \
../Sources/sci.c \
../Sources/steper.c \

OBJS += \
./Sources/events_c.obj \
./Sources/general_c.obj \
./Sources/main_c.obj \
./Sources/sci_c.obj \
./Sources/steper_c.obj \

OBJS_QUOTED += \
"./Sources/events_c.obj" \
"./Sources/general_c.obj" \
"./Sources/main_c.obj" \
"./Sources/sci_c.obj" \
"./Sources/steper_c.obj" \

C_DEPS += \
./Sources/events_c.d \
./Sources/general_c.d \
./Sources/main_c.d \
./Sources/sci_c.d \
./Sources/steper_c.d \

C_DEPS_QUOTED += \
"./Sources/events_c.d" \
"./Sources/general_c.d" \
"./Sources/main_c.d" \
"./Sources/sci_c.d" \
"./Sources/steper_c.d" \

OBJS_OS_FORMAT += \
./Sources/events_c.obj \
./Sources/general_c.obj \
./Sources/main_c.obj \
./Sources/sci_c.obj \
./Sources/steper_c.obj \


# Each subdirectory must supply rules for building sources it contributes
Sources/events_c.obj: ../Sources/events.c
	@echo 'Building file: $<'
	@echo 'Executing target #1 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/events.args" -ObjN="Sources/events_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Sources/%.d: ../Sources/%.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/general_c.obj: ../Sources/general.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/general.args" -ObjN="Sources/general_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Sources/main_c.obj: ../Sources/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/main.args" -ObjN="Sources/main_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Sources/sci_c.obj: ../Sources/sci.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/sci.args" -ObjN="Sources/sci_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Sources/steper_c.obj: ../Sources/steper.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Sources/steper.args" -ObjN="Sources/steper_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '


