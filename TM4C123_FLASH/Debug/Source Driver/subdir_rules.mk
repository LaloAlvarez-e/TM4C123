################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
Source\ Driver/EEPROM.obj: ../Source\ Driver/EEPROM.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me -O4 --opt_for_speed=5 --include_path="/home/vyldram/Git/TM4C123/TM4C123_FLASH" --include_path="/home/vyldram/Git/TM4C123/TM4C123_FLASH/Header Driver" --include_path="/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="Source Driver/EEPROM.d_raw" --obj_directory="Source Driver" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '

Source\ Driver/FLASH.obj: ../Source\ Driver/FLASH.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me -O4 --opt_for_speed=5 --include_path="/home/vyldram/Git/TM4C123/TM4C123_FLASH" --include_path="/home/vyldram/Git/TM4C123/TM4C123_FLASH/Header Driver" --include_path="/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="Source Driver/FLASH.d_raw" --obj_directory="Source Driver" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '

Source\ Driver/FPU.obj: ../Source\ Driver/FPU.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me -O4 --opt_for_speed=5 --include_path="/home/vyldram/Git/TM4C123/TM4C123_FLASH" --include_path="/home/vyldram/Git/TM4C123/TM4C123_FLASH/Header Driver" --include_path="/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="Source Driver/FPU.d_raw" --obj_directory="Source Driver" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '

Source\ Driver/HIB.obj: ../Source\ Driver/HIB.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me -O4 --opt_for_speed=5 --include_path="/home/vyldram/Git/TM4C123/TM4C123_FLASH" --include_path="/home/vyldram/Git/TM4C123/TM4C123_FLASH/Header Driver" --include_path="/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="Source Driver/HIB.d_raw" --obj_directory="Source Driver" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '

Source\ Driver/MPU.obj: ../Source\ Driver/MPU.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me -O4 --opt_for_speed=5 --include_path="/home/vyldram/Git/TM4C123/TM4C123_FLASH" --include_path="/home/vyldram/Git/TM4C123/TM4C123_FLASH/Header Driver" --include_path="/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="Source Driver/MPU.d_raw" --obj_directory="Source Driver" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '

Source\ Driver/NVIC.obj: ../Source\ Driver/NVIC.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me -O4 --opt_for_speed=5 --include_path="/home/vyldram/Git/TM4C123/TM4C123_FLASH" --include_path="/home/vyldram/Git/TM4C123/TM4C123_FLASH/Header Driver" --include_path="/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="Source Driver/NVIC.d_raw" --obj_directory="Source Driver" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '

Source\ Driver/SCB.obj: ../Source\ Driver/SCB.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me -O4 --opt_for_speed=5 --include_path="/home/vyldram/Git/TM4C123/TM4C123_FLASH" --include_path="/home/vyldram/Git/TM4C123/TM4C123_FLASH/Header Driver" --include_path="/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="Source Driver/SCB.d_raw" --obj_directory="Source Driver" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '

Source\ Driver/SYSCTL.obj: ../Source\ Driver/SYSCTL.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me -O4 --opt_for_speed=5 --include_path="/home/vyldram/Git/TM4C123/TM4C123_FLASH" --include_path="/home/vyldram/Git/TM4C123/TM4C123_FLASH/Header Driver" --include_path="/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="Source Driver/SYSCTL.d_raw" --obj_directory="Source Driver" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '

Source\ Driver/SYSEXC.obj: ../Source\ Driver/SYSEXC.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me -O4 --opt_for_speed=5 --include_path="/home/vyldram/Git/TM4C123/TM4C123_FLASH" --include_path="/home/vyldram/Git/TM4C123/TM4C123_FLASH/Header Driver" --include_path="/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="Source Driver/SYSEXC.d_raw" --obj_directory="Source Driver" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '

Source\ Driver/SYSTICK.obj: ../Source\ Driver/SYSTICK.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me -O4 --opt_for_speed=5 --include_path="/home/vyldram/Git/TM4C123/TM4C123_FLASH" --include_path="/home/vyldram/Git/TM4C123/TM4C123_FLASH/Header Driver" --include_path="/home/vyldram/ti/ccs930/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="Source Driver/SYSTICK.d_raw" --obj_directory="Source Driver" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '


