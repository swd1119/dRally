#ifndef __DRALLY_KEYBOARD_H
#define __DRALLY_KEYBOARD_H

#define E0(c) (0x80|(c))

enum DR_SCAN {

    DR_SCAN_ERROR           = 0x00,     // is normally an error code
    DR_SCAN_ESCAPE          = 0x01,     // (Esc)
    DR_SCAN_1               = 0x02,     // (1!)
    DR_SCAN_2               = 0x03,     // (2@)
    DR_SCAN_3               = 0x04,     // (3#)
    DR_SCAN_4               = 0x05,     // (4$)
    DR_SCAN_5               = 0x06,     // (5%E)
    DR_SCAN_6               = 0x07,     // (6^)
    DR_SCAN_7               = 0x08,     // (7&)
    DR_SCAN_8               = 0x09,     // (8*)
    DR_SCAN_9               = 0x0a,     // (9()
    DR_SCAN_0               = 0x0b,     // (0))
    DR_SCAN_MINUS           = 0x0c,     // (-_)
    DR_SCAN_EQUALS          = 0x0d,     // (=+)
    DR_SCAN_BACKSPACE       = 0x0e,     // (Backspace)
    DR_SCAN_TAB             = 0x0f,     // (Tab)
    DR_SCAN_Q               = 0x10,     // (Q)
    DR_SCAN_W               = 0x11,     // (W)
    DR_SCAN_E               = 0x12,     // (E)
    DR_SCAN_R               = 0x13,     // (R)
    DR_SCAN_T               = 0x14,     // (T)
    DR_SCAN_Y               = 0x15,     // (Y)
    DR_SCAN_U               = 0x16,     // (U)
    DR_SCAN_I               = 0x17,     // (I)
    DR_SCAN_O               = 0x18,     // (O)
    DR_SCAN_P               = 0x19,     // (P)
    DR_SCAN_LEFTBRACKET     = 0x1a,     // ([{)
    DR_SCAN_RIGHTBRACKET    = 0x1b,     // (]})
    DR_SCAN_ENTER           = 0x1c,     // (Enter)
    DR_SCAN_LCTRL           = 0x1d,     // (LCtrl)
    DR_SCAN_A               = 0x1e,     // (A)
    DR_SCAN_S               = 0x1f,     // (S)
    DR_SCAN_D               = 0x20,     // (D)
    DR_SCAN_F               = 0x21,     // (F)
    DR_SCAN_G               = 0x22,     // (G)
    DR_SCAN_H               = 0x23,     // (H)
    DR_SCAN_J               = 0x24,     // (J)
    DR_SCAN_K               = 0x25,     // (K)
    DR_SCAN_L               = 0x26,     // (L)
    DR_SCAN_SEMICOLON       = 0x27,     // (;:)
    DR_SCAN_APOSTROPHE      = 0x28,     // ('")
    DR_SCAN_GRAVE           = 0x29,     // (`~)
    DR_SCAN_LSHIFT          = 0x2a,     // (LShift)
    DR_SCAN_BACKSLASH       = 0x2b,     // (\|), on a 102-key keyboard
    DR_SCAN_Z               = 0x2c,     // (Z)
    DR_SCAN_X               = 0x2d,     // (X)
    DR_SCAN_C               = 0x2e,     // (C)
    DR_SCAN_V               = 0x2f,     // (V)
    DR_SCAN_B               = 0x30,     // (B)
    DR_SCAN_N               = 0x31,     // (N)
    DR_SCAN_M               = 0x32,     // (M)
    DR_SCAN_COMMA           = 0x33,     // (,<)
    DR_SCAN_PERIOD          = 0x34,     // (.>)
    DR_SCAN_SLASH           = 0x35,     // (/?)
    DR_SCAN_RSHIFT          = 0x36,     // (RShift)
    DR_SCAN_KP_MULTIPLY     = 0x37,     // (Keypad-*) or (*/PrtScn) on a 83/84-key keyboard
    DR_SCAN_LALT            = 0x38,     // (LAlt)
    DR_SCAN_SPACE           = 0x39,     // (Space bar)
    DR_SCAN_CAPSLOCK        = 0x3a,     // (CapsLock)
    DR_SCAN_F1              = 0x3b,     // (F1)
    DR_SCAN_F2              = 0x3c,     // (F2)
    DR_SCAN_F3              = 0x3d,     // (F3)
    DR_SCAN_F4              = 0x3e,     // (F4)
    DR_SCAN_F5              = 0x3f,     // (F5)
    DR_SCAN_F6              = 0x40,     // (F6)
    DR_SCAN_F7              = 0x41,     // (F7)
    DR_SCAN_F8              = 0x42,     // (F8)
    DR_SCAN_F9              = 0x43,     // (F9)
    DR_SCAN_F10             = 0x44,     // (F10)
    DR_SCAN_NUMLOCKCLEAR    = 0x45,     // (NumLock)
    DR_SCAN_SCROLLLOCK      = 0x46,     // (ScrollLock)
    DR_SCAN_KP_7            = 0x47,     // (Keypad-7/Home)
    DR_SCAN_KP_8            = 0x48,     // (Keypad-8/Up)
    DR_SCAN_KP_9            = 0x49,     // (Keypad-9/PgUp)
    DR_SCAN_KP_MINUS        = 0x4a,     // (Keypad--)
    DR_SCAN_KP_4            = 0x4b,     // (Keypad-4/Left)
    DR_SCAN_KP_5            = 0x4c,     // (Keypad-5)
    DR_SCAN_KP_6            = 0x4d,     // (Keypad-6/Right)
    DR_SCAN_KP_PLUS         = 0x4e,     // (Keypad-+)
    DR_SCAN_KP_1            = 0x4f,     // (Keypad-1/End)
    DR_SCAN_KP_2            = 0x50,     // (Keypad-2/Down)
    DR_SCAN_KP_3            = 0x51,     // (Keypad-3/PgDn)
    DR_SCAN_KP_0            = 0x52,     // (Keypad-0/Ins)
    DR_SCAN_KP_PERIOD       = 0x53,     // (Keypad-./Del)
    DR_SCAN_SYSREQ          = 0x54,     // (Alt-SysRq) on a 84+ key keyboard
    DR_SCAN_55H             = 0x55,     // is less common; occurs e.g. as F11 on a Cherry G80-0777 keyboard, as F12 on a Telerate keyboard, as PF1 on a Focus 9000 keyboard, and as FN on an IBM ThinkPad.
    DR_SCAN_56H             = 0x56,     // mostly on non-US keyboards. It is often an unlabelled key to the left or to the right of the left Alt key.
    DR_SCAN_F11             = 0x57,     // (F11)
    DR_SCAN_F12             = 0x58,     // (F12) both on a 101+ key keyboard

    DR_SCAN_KP_ENTER        = E0(0x1c), // (Keypad Enter)
    DR_SCAN_RCTRL           = E0(0x1d), // (RCtrl)
    DR_SCAN_E0_2AH          = E0(0x2a), // (fake LShift)
    DR_SCAN_KP_DIVIDE       = E0(0x35), // (Keypad-/)
    DR_SCAN_E0_36H          = E0(0x36), // (fake RShift)
    DR_SCAN_PRINTSCREEN     = E0(0x37), // (Ctrl-PrtScn)
    DR_SCAN_RALT            = E0(0x38), // (RAlt)
    DR_SCAN_E0_46H          = E0(0x46), // (Ctrl-Break)
    DR_SCAN_HOME            = E0(0x47), // (Grey Home)
    DR_SCAN_UP              = E0(0x48), // (Grey Up)
    DR_SCAN_PAGEUP          = E0(0x49), // (Grey PgUp)
    DR_SCAN_LEFT            = E0(0x4b), // (Grey Left)
    DR_SCAN_RIGHT           = E0(0x4d), // (Grey Right)
    DR_SCAN_END             = E0(0x4f), // (Grey End)
    DR_SCAN_DOWN            = E0(0x50), // (Grey Down)
    DR_SCAN_PAGEDOWN        = E0(0x51), // (Grey PgDn)
    DR_SCAN_INSERT          = E0(0x52), // (Grey Insert)
    DR_SCAN_DELETE          = E0(0x53)  // (Grey Delete)
};

#undef E0

#endif // __DRALLY_KEYBOARD_H

