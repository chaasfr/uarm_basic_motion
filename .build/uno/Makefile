























.build/uno/robotarm/robotarm.o : lib/robotarm/robotarm.cpp
	@echo [93mrobotarm/robotarm.cpp[0m
	@mkdir -p .build/uno/robotarm
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c lib/robotarm/robotarm.cpp
include .build/uno/robotarm/robotarm.d

.build/uno/robotarm/Servo/Servo.o : lib/robotarm/Servo/Servo.cpp
	@echo [93mrobotarm/Servo/Servo.cpp[0m
	@mkdir -p .build/uno/robotarm/Servo
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c lib/robotarm/Servo/Servo.cpp
include .build/uno/robotarm/Servo/Servo.d

.build/uno/robotarm/VarSpeedServo/VarSpeedServo.o : lib/robotarm/VarSpeedServo/VarSpeedServo.cpp
	@echo [93mrobotarm/VarSpeedServo/VarSpeedServo.cpp[0m
	@mkdir -p .build/uno/robotarm/VarSpeedServo
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c lib/robotarm/VarSpeedServo/VarSpeedServo.cpp
include .build/uno/robotarm/VarSpeedServo/VarSpeedServo.d



.build/uno/robotarm/librobotarm.a : .build/uno/robotarm/robotarm.o .build/uno/robotarm/Servo/Servo.o .build/uno/robotarm/VarSpeedServo/VarSpeedServo.o
	@echo [92mLinking librobotarm.a[0m
	@/usr/share/arduino/hardware/tools/avr/bin/avr-ar rcs $@ $^












.build/uno/VarSpeedServo/VarSpeedServo.o : lib/VarSpeedServo/VarSpeedServo.cpp
	@echo [93mVarSpeedServo/VarSpeedServo.cpp[0m
	@mkdir -p .build/uno/VarSpeedServo
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c lib/VarSpeedServo/VarSpeedServo.cpp
include .build/uno/VarSpeedServo/VarSpeedServo.d



.build/uno/VarSpeedServo/libVarSpeedServo.a : .build/uno/VarSpeedServo/VarSpeedServo.o
	@echo [92mLinking libVarSpeedServo.a[0m
	@/usr/share/arduino/hardware/tools/avr/bin/avr-ar rcs $@ $^












.build/uno/Servo/Servo.o : lib/Servo/Servo.cpp
	@echo [93mServo/Servo.cpp[0m
	@mkdir -p .build/uno/Servo
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c lib/Servo/Servo.cpp
include .build/uno/Servo/Servo.d



.build/uno/Servo/libServo.a : .build/uno/Servo/Servo.o
	@echo [92mLinking libServo.a[0m
	@/usr/share/arduino/hardware/tools/avr/bin/avr-ar rcs $@ $^







.build/uno/arduino/WInterrupts.o : /usr/share/arduino/hardware/arduino/cores/arduino/WInterrupts.c
	@echo [93marduino/WInterrupts.c[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/WInterrupts.c
include .build/uno/arduino/WInterrupts.d

.build/uno/arduino/wiring.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring.c
	@echo [93marduino/wiring.c[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring.c
include .build/uno/arduino/wiring.d

.build/uno/arduino/wiring_analog.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring_analog.c
	@echo [93marduino/wiring_analog.c[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring_analog.c
include .build/uno/arduino/wiring_analog.d

.build/uno/arduino/wiring_digital.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring_digital.c
	@echo [93marduino/wiring_digital.c[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring_digital.c
include .build/uno/arduino/wiring_digital.d

.build/uno/arduino/wiring_pulse.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring_pulse.c
	@echo [93marduino/wiring_pulse.c[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring_pulse.c
include .build/uno/arduino/wiring_pulse.d

.build/uno/arduino/wiring_shift.o : /usr/share/arduino/hardware/arduino/cores/arduino/wiring_shift.c
	@echo [93marduino/wiring_shift.c[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/wiring_shift.c
include .build/uno/arduino/wiring_shift.d

.build/uno/arduino/avr-libc/realloc.o : /usr/share/arduino/hardware/arduino/cores/arduino/avr-libc/realloc.c
	@echo [93marduino/avr-libc/realloc.c[0m
	@mkdir -p .build/uno/arduino/avr-libc
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/avr-libc/realloc.c
include .build/uno/arduino/avr-libc/realloc.d

.build/uno/arduino/avr-libc/malloc.o : /usr/share/arduino/hardware/arduino/cores/arduino/avr-libc/malloc.c
	@echo [93marduino/avr-libc/malloc.c[0m
	@mkdir -p .build/uno/arduino/avr-libc
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc   -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/avr-libc/malloc.c
include .build/uno/arduino/avr-libc/malloc.d






.build/uno/arduino/CDC.o : /usr/share/arduino/hardware/arduino/cores/arduino/CDC.cpp
	@echo [93marduino/CDC.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/CDC.cpp
include .build/uno/arduino/CDC.d

.build/uno/arduino/Stream.o : /usr/share/arduino/hardware/arduino/cores/arduino/Stream.cpp
	@echo [93marduino/Stream.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/Stream.cpp
include .build/uno/arduino/Stream.d

.build/uno/arduino/WString.o : /usr/share/arduino/hardware/arduino/cores/arduino/WString.cpp
	@echo [93marduino/WString.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/WString.cpp
include .build/uno/arduino/WString.d

.build/uno/arduino/USBCore.o : /usr/share/arduino/hardware/arduino/cores/arduino/USBCore.cpp
	@echo [93marduino/USBCore.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/USBCore.cpp
include .build/uno/arduino/USBCore.d

.build/uno/arduino/HardwareSerial.o : /usr/share/arduino/hardware/arduino/cores/arduino/HardwareSerial.cpp
	@echo [93marduino/HardwareSerial.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/HardwareSerial.cpp
include .build/uno/arduino/HardwareSerial.d

.build/uno/arduino/new.o : /usr/share/arduino/hardware/arduino/cores/arduino/new.cpp
	@echo [93marduino/new.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/new.cpp
include .build/uno/arduino/new.d

.build/uno/arduino/WMath.o : /usr/share/arduino/hardware/arduino/cores/arduino/WMath.cpp
	@echo [93marduino/WMath.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/WMath.cpp
include .build/uno/arduino/WMath.d

.build/uno/arduino/Print.o : /usr/share/arduino/hardware/arduino/cores/arduino/Print.cpp
	@echo [93marduino/Print.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/Print.cpp
include .build/uno/arduino/Print.d

.build/uno/arduino/IPAddress.o : /usr/share/arduino/hardware/arduino/cores/arduino/IPAddress.cpp
	@echo [93marduino/IPAddress.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/IPAddress.cpp
include .build/uno/arduino/IPAddress.d

.build/uno/arduino/Tone.o : /usr/share/arduino/hardware/arduino/cores/arduino/Tone.cpp
	@echo [93marduino/Tone.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/Tone.cpp
include .build/uno/arduino/Tone.d

.build/uno/arduino/HID.o : /usr/share/arduino/hardware/arduino/cores/arduino/HID.cpp
	@echo [93marduino/HID.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/HID.cpp
include .build/uno/arduino/HID.d

.build/uno/arduino/main.o : /usr/share/arduino/hardware/arduino/cores/arduino/main.cpp
	@echo [93marduino/main.cpp[0m
	@mkdir -p .build/uno/arduino
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /usr/share/arduino/hardware/arduino/cores/arduino/main.cpp
include .build/uno/arduino/main.d



.build/uno/arduino/libarduino.a : .build/uno/arduino/WInterrupts.o .build/uno/arduino/wiring.o .build/uno/arduino/wiring_analog.o .build/uno/arduino/wiring_digital.o .build/uno/arduino/wiring_pulse.o .build/uno/arduino/wiring_shift.o .build/uno/arduino/avr-libc/realloc.o .build/uno/arduino/avr-libc/malloc.o .build/uno/arduino/CDC.o .build/uno/arduino/Stream.o .build/uno/arduino/WString.o .build/uno/arduino/USBCore.o .build/uno/arduino/HardwareSerial.o .build/uno/arduino/new.o .build/uno/arduino/WMath.o .build/uno/arduino/Print.o .build/uno/arduino/IPAddress.o .build/uno/arduino/Tone.o .build/uno/arduino/HID.o .build/uno/arduino/main.o
	@echo [92mLinking libarduino.a[0m
	@/usr/share/arduino/hardware/tools/avr/bin/avr-ar rcs $@ $^















.build/uno/src/MotionDemo.o : .build/uno/src/MotionDemo.cpp
	@echo [93msrc/MotionDemo.cpp[0m
	@mkdir -p .build/uno/src
	@/usr/share/arduino/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=105 -I/usr/share/arduino/hardware/arduino/cores/arduino -ffunction-sections -fdata-sections -g -Os -w -I/usr/share/arduino/hardware/arduino/variants/standard -Ilib/robotarm -Ilib/robotarm/Servo -Ilib/robotarm/VarSpeedServo -Ilib/VarSpeedServo -Ilib/Servo -I/usr/share/arduino/hardware/arduino/cores/arduino -I/usr/share/arduino/hardware/arduino/cores/arduino/avr-libc -fno-exceptions -iquote src  -o $@ -c .build/uno/src/MotionDemo.cpp
include .build/uno/src/MotionDemo.d







.build/uno/firmware.elf : .build/uno/src/MotionDemo.o .build/uno/robotarm/librobotarm.a .build/uno/VarSpeedServo/libVarSpeedServo.a .build/uno/Servo/libServo.a .build/uno/arduino/libarduino.a
	@echo [92mLinking firmware.elf[0m
	@/usr/share/arduino/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -Wl,-Os -Wl,--gc-sections -o $@ $^ -lm


.build/uno/firmware.hex : .build/uno/firmware.elf
	@echo [92mConverting to firmware.hex[0m
	@/usr/share/arduino/hardware/tools/avr/bin/avr-objcopy -O ihex -R .eeprom $^ $@

include .build/uno/src/dependencies.d .build/uno/arduino/dependencies.d .build/uno/robotarm/dependencies.d .build/uno/VarSpeedServo/dependencies.d .build/uno/Servo/dependencies.d

all : .build/uno/firmware.hex
	@true

