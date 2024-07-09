# Arduino-Atmel-Libraries
Generic libraries specific to Atmel MCUs (Uno and Nano) for Arduino Framework projects 

## External libraries
These are the external libraries that are included in Generic-Libraries as [submodules](https://git-scm.com/book/en/v2/Git-Tools-Submodules) which links to the original source repositories, and following these [instructions](https://stackoverflow.com/questions/10856138/make-change-to-a-git-submodule-and-keep-the-changes?utm_medium=organic&utm_source=google_rich_qa&utm_campaign=google_rich_qa) to separate Generic-Libraries superproject local changes from the original source repository:
- [FreeRTOS](https://github.com/feilipu/Arduino_FreeRTOS_Library)   -> v11.1.0-2
- [SD](https://github.com/arduino-libraries/SD)                     -> v1.2.4
- [LowPower](https://github.com/rocketscream/Low-Power)             -> v1.81
- [TrueRandom](https://github.com/sirleech/TrueRandom)              -> v1.0

*NOTE:* all credits goes to, of course, the respective owners of these repositories.

## Own libraries
| Library | Description | Hardware associated |
| ------- | ----------- | ------------------- |
| Common_Lib | Quick static classes for frequently used functionalities like Sleep() / PowerDown() or ReadKeyboard() for debugging | - |
| Bluetooth_Lib | Controls bluetooth modules HC-05 and HC-06 via SoftwareSerial library | <img src="https://i2.wp.com/www.martyncurrey.com/wp-content/uploads/2015/08/HC-05-FC-114-HC-06-FC-114_1200-584x400.jpg" width="20%" alt="Bluetooth"> |
| SDFilesManager_Lib | Controls SD card with FAT16 limitations (8.3 filename format). Path is Unix based ('/' is root and normal slash means folder instead of backslash) | <img src="https://ae01.alicdn.com/kf/HTB1whIjXs_vK1RkSmRyq6xwupXaD/Micro-SD-Storage-Board-TF-Card-Module-Slot-Socket-Memory-Shield-Module-SPI-for-Arduino-Micro.jpg" width="25%" alt="SD Card"> |