#ifndef CONTROL_H
#define CONTROL_H

#include "jamultypes.h"

#define CONTROL_UP 1
#define CONTROL_DN 2
#define CONTROL_LF 4
#define CONTROL_RT 8
#define CONTROL_B1 16
#define CONTROL_B2 32
#define CONTROL_B3 64
#define CONTROL_B4 128

// source of control
#define CONTROL_KB1	0
#define CONTROL_KB2 1
#define CONTROL_JOY 2

void InitControls(void);
void ApplyControlSettings(void);

void ControlKeyUp(char k);
void ControlKeyDown(char k);
byte GetControls(void);
byte GetTaps(void);
byte GetArrows(void);
dword GetJoyButtons(void);

byte LastScanCode(void);

byte JoystickAvailable(void);
void SetKeys(byte keys[8]);

char *ScanCodeText(byte s);

#endif
