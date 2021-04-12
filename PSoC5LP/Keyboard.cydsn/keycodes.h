/**
*   \file keycodes.h
*   \brief List of keycodes sent from keyboard to host.
*
*   [](https://www.usb.org/sites/default/files/documents/hut1_12v2.pdf)   
*/
#ifndef __KEYCODES_H__
    #define __KEYCODES_H__
    
    #define IS_ERROR(code) (KC_ROLL_OVER <= (code) && (code) <= KC_UNDEFINED)
    #define IS_ANY(code) (KC_A <= (code) && (code) <= 0xFF)
    #define IS_KEY(code) (KC_A <= (code) && (code) <= KC_EXSEL)
    #define IS_MOD(code) (KC_LCTRL <= (code) && (code) <= KC_RGUI)
    
    #define IS_SPECIAL(code) ((0xA5 <= (code) && (code) <= 0xDF) || (0xE8 <= (code) && (code) <= 0xFF))
    #define IS_SYSTEM(code) (KC_PWR <= (code) && (code) <= KC_WAKE)
    #define IS_CONSUMER(code) (KC_MUTE <= (code) && (code) <= KC_BRID)

    #define IS_FN(code) (KC_FN0 <= (code) && (code) <= KC_FN31)

    #define IS_MOUSEKEY(code) (KC_MS_UP <= (code) && (code) <= KC_MS_ACCEL2)
    #define IS_MOUSEKEY_MOVE(code) (KC_MS_UP <= (code) && (code) <= KC_MS_RIGHT)
    #define IS_MOUSEKEY_BUTTON(code) (KC_MS_BTN1 <= (code) && (code) <= KC_MS_BTN5)
    #define IS_MOUSEKEY_WHEEL(code) (KC_MS_WH_UP <= (code) && (code) <= KC_MS_WH_RIGHT)
    #define IS_MOUSEKEY_ACCEL(code) (KC_MS_ACCEL0 <= (code) && (code) <= KC_MS_ACCEL2)

    #define MOD_BIT(code) (1 << MOD_INDEX(code))
    #define MOD_INDEX(code) ((code)&0x07)

    #define MOD_MASK_CTRL (MOD_BIT(KC_LCTRL) | MOD_BIT(KC_RCTRL))
    #define MOD_MASK_SHIFT (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT))
    #define MOD_MASK_ALT (MOD_BIT(KC_LALT) | MOD_BIT(KC_RALT))
    #define MOD_MASK_GUI (MOD_BIT(KC_LGUI) | MOD_BIT(KC_RGUI))
    #define MOD_MASK_CS (MOD_MASK_CTRL | MOD_MASK_SHIFT)
    #define MOD_MASK_CA (MOD_MASK_CTRL | MOD_MASK_ALT)
    #define MOD_MASK_CG (MOD_MASK_CTRL | MOD_MASK_GUI)
    #define MOD_MASK_SA (MOD_MASK_SHIFT | MOD_MASK_ALT)
    #define MOD_MASK_SG (MOD_MASK_SHIFT | MOD_MASK_GUI)
    #define MOD_MASK_AG (MOD_MASK_ALT | MOD_MASK_GUI)
    #define MOD_MASK_CSA (MOD_MASK_CTRL | MOD_MASK_SHIFT | MOD_MASK_ALT)
    #define MOD_MASK_CSG (MOD_MASK_CTRL | MOD_MASK_SHIFT | MOD_MASK_GUI)
    #define MOD_MASK_CAG (MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI)
    #define MOD_MASK_SAG (MOD_MASK_SHIFT | MOD_MASK_ALT | MOD_MASK_GUI)
    #define MOD_MASK_CSAG (MOD_MASK_CTRL | MOD_MASK_SHIFT | MOD_MASK_ALT | MOD_MASK_GUI)

    #define FN_BIT(code) (1 << FN_INDEX(code))
    #define FN_INDEX(code) ((code)-KC_FN0)
    #define FN_MIN KC_FN0
    #define FN_MAX KC_FN31
    
    enum hid_keyboard_keypad_usage {
        KC_NO,
        KC_ROLL_OVER,
        KC_POST_FAIL,
        KC_UNDEFINED,
        KC_A,
        KC_B,
        KC_C,
        KC_D, 
        KC_E,
        KC_F,
        KC_G,
        KC_H,
        KC_I,
        KC_J,
        KC_K,
        KC_L,
        KC_M, // 0x10
        KC_N,
        KC_O,
        KC_P,
        KC_Q,
        KC_R,
        KC_S,
        KC_T,
        KC_U,
        KC_V,
        KC_W,
        KC_X,
        KC_Y,
        KC_Z,
        KC_1,
        KC_2, 
        KC_3, // 0x20
        KC_4,
        KC_5,
        KC_6,
        KC_7,
        KC_8,
        KC_9,
        KC_0,
        KC_ENTER,
        KC_ESCAPE,
        KC_BSPACE,
        KC_TAB,
        KC_SPACE,
        KC_MINUS,
        KC_EQUAL,
        KC_LBRACKET,
        KC_RBRACKET, // 0x30
        KC_BSLASH,
        KC_NONUS_SLASH,
        KC_SCOLON,
        KC_QUOTE,
        KC_GRAVE,
        KC_COMMA,
        KC_DOT,
        KC_FSLASH,
        KC_CAPSLOCK,
        KC_F1,
        KC_F2,
        KC_F3,
        KC_F4,
        KC_F5,
        KC_F6,
        KC_F7, // 0x40
        KC_F8,
        KC_F9,
        KC_F10,
        KC_F11,
        KC_F12,
        KC_PSCREEN,
        KC_SCROLLLOCK,
        KC_PAUSE,
        KC_INSERT,
        KC_HOME,
        KC_PGUP,
        KC_DELETE,
        KC_END,
        KC_PGDOWN,
        KC_RIGHT,
        KC_LEFT, // 0x50
        KC_UP,
        KC_DOWN,
        KC_NUMLOCK,
        KC_KP_SLASH,
        KC_KP_ASTERISK,
        KC_KP_MINUS,
        KC_KP_PLUS,
        KC_KP_ENTER,
        KC_KP_1,
        KC_KP_2,
        KC_KP_3,
        KC_KP_4,
        KC_KP_5,
        KC_KP_6,
        KC_KP_7,
        KC_KP_8, // 0x60
        KC_KP_9,
        KC_KP_0,
        KC_KP_DOT,
        KC_NONUS_BSLASH,
        KC_APP,
        KC_POWER,
        KC_KP_EQUAL,
        KC_F13,
        KC_F14,
        KC_F15,
        KC_F16,
        KC_F17,
        KC_F18,
        KC_F19,
        KC_F20,
        KC_F21, // 0x70
        KC_F22,
        KC_F23,
        KC_F24,
        KC_EXECUTE,
        KC_HELP,
        KC_MENU,
        KC_SELECT,
        KC_STOP,
        KC_AGAIN,
        KC_UNDO,
        KC_CUT,
        KC_COPY,
        KC_PASTE,
        KC_FIND,
        KC_MUTE,
        KC_VOLUP, // 0x80
        KC_VOLDOWN,
        KC_LOCKING_CAPS,
        KC_LOCKING_NUM,
        KC_LOCKING_SCROLL,
        KC_KP_COMMA,
        KC_KP_EQUAL_AS400,
        KC_INT1,
        KC_INT2,
        KC_INT3,
        KC_INT4,
        KC_INT5,
        KC_INT6,
        KC_INT7,
        KC_INT8,
        KC_INT9,
        KC_LANG1, // 0x90
        KC_LANG2,
        KC_LANG3,
        KC_LANG4,
        KC_LANG5,
        KC_LANG6,
        KC_LANG7,
        KC_LANG8,
        KC_LANG9,
        KC_ALT_ERASE,
        KC_SYSREQ,
        KC_CANCEL,
        KC_CLEAR,
        KC_PRIOR,
        KC_RETURN,
        KC_SEPARATOR,
        KC_OUT,
        KC_OPER,
        KC_CLEAR_AGAIN,
        KC_CRSEL,
        KC_EXSEL,
        
        #if 0
            // ***************************************************************
            // These keycodes are present in the HID spec, but are           *
            // nonfunctional on modern OSes. QMK uses this range (0xA5-0xDF) *
            // for the media and function keys instead - see below.          *
            // ***************************************************************
            KC_KP_00                = 0xB0,
            KC_KP_000,
            KC_THOUSANDS_SEPARATOR,
            KC_DECIMAL_SEPARATOR,
            KC_CURRENCY_UNIT,
            KC_CURRENCY_SUB_UNIT,
            KC_KP_LPAREN,
            KC_KP_RPAREN,
            KC_KP_LCBRACKET,
            KC_KP_RCBRACKET,
            KC_KP_TAB,
            KC_KP_BSPACE,
            KC_KP_A,
            KC_KP_B,
            KC_KP_C,
            KC_KP_D,
            KC_KP_E,                //0xC0
            KC_KP_F,
            KC_KP_XOR,
            KC_KP_HAT,
            KC_KP_PERC,
            KC_KP_LT,
            KC_KP_GT,
            KC_KP_AND,
            KC_KP_LAZYAND,
            KC_KP_OR,
            KC_KP_LAZYOR,
            KC_KP_COLON,
            KC_KP_HASH,
            KC_KP_SPACE,
            KC_KP_ATMARK,
            KC_KP_EXCLAMATION,
            KC_KP_MEM_STORE,        //0xD0
            KC_KP_MEM_RECALL,
            KC_KP_MEM_CLEAR,
            KC_KP_MEM_ADD,
            KC_KP_MEM_SUB,
            KC_KP_MEM_MUL,
            KC_KP_MEM_DIV,
            KC_KP_PLUS_MINUS,
            KC_KP_CLEAR,
            KC_KP_CLEAR_ENTRY,
            KC_KP_BINARY,
            KC_KP_OCTAL,
            KC_KP_DECIMAL,
            KC_KP_HEXADECIMAL,
        #endif
        
        /* Modifiers */
        KC_LCTRL = 0xE0,
        KC_LSHIFT,
        KC_LALT,
        KC_LGUI,
        KC_RCTRL,
        KC_RSHIFT,
        KC_RALT,
        KC_RGUI
        
        // **********************************************
        // * 0xF0-0xFF are unallocated in the HID spec. *
        // * QMK uses these for Mouse Keys - see below. *
        // **********************************************
    };
    
    /* Media and Function keys */
    enum internal_special_keycodes {
        /* Generic Desktop Page (0x01) */
        KC_SYSTEM_POWER = 0xA5,
        KC_SYSTEM_SLEEP,
        KC_SYSTEM_WAKE,

        /* Consumer Page (0x0C) */
        KC_AUDIO_MUTE,
        KC_AUDIO_VOL_UP,
        KC_AUDIO_VOL_DOWN,
        KC_MEDIA_NEXT_TRACK,
        KC_MEDIA_PREV_TRACK,
        KC_MEDIA_STOP,
        KC_MEDIA_PLAY_PAUSE,
        KC_MEDIA_SELECT,
        KC_MEDIA_EJECT,  // 0xB0
        KC_MAIL,
        KC_CALCULATOR,
        KC_MY_COMPUTER,
        KC_WWW_SEARCH,
        KC_WWW_HOME,
        KC_WWW_BACK,
        KC_WWW_FORWARD,
        KC_WWW_STOP,
        KC_WWW_REFRESH,
        KC_WWW_FAVORITES,
        KC_MEDIA_FAST_FORWARD,
        KC_MEDIA_REWIND,
        KC_BRIGHTNESS_UP,
        KC_BRIGHTNESS_DOWN,

        /* Fn keys */
        KC_FN0 = 0xC0,
        KC_FN1,
        KC_FN2,
        KC_FN3,
        KC_FN4,
        KC_FN5,
        KC_FN6,
        KC_FN7,
        KC_FN8,
        KC_FN9,
        KC_FN10,
        KC_FN11,
        KC_FN12,
        KC_FN13,
        KC_FN14,
        KC_FN15,
        KC_FN16,  // 0xD0
        KC_FN17,
        KC_FN18,
        KC_FN19,
        KC_FN20,
        KC_FN21,
        KC_FN22,
        KC_FN23,
        KC_FN24,
        KC_FN25,
        KC_FN26,
        KC_FN27,
        KC_FN28,
        KC_FN29,
        KC_FN30,
        KC_FN31
    };

    enum mouse_keys {
        /* Mouse Buttons */
        KC_MS_UP = 0xF0,
        KC_MS_DOWN,
        KC_MS_LEFT,
        KC_MS_RIGHT,
        KC_MS_BTN1,
        KC_MS_BTN2,
        KC_MS_BTN3,
        KC_MS_BTN4,
        KC_MS_BTN5,

        /* Mouse Wheel */
        KC_MS_WH_UP,
        KC_MS_WH_DOWN,
        KC_MS_WH_LEFT,
        KC_MS_WH_RIGHT,

        /* Acceleration */
        KC_MS_ACCEL0,
        KC_MS_ACCEL1,
        KC_MS_ACCEL2
    };
    
#endif