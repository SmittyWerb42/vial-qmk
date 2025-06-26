// Copyright 2023 Kael Soares Augusto (@Dwctor)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.

#define SERIAL_USART_TX_PIN B6     // USART TX pin
#define SERIAL_USART_RX_PIN B7     // USART RX pin

// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 200



// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
