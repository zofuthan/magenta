// Copyright 2016 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// clang-format off

#ifndef DDK_PROTOCOL_DEF
#error Internal use only. Do not include.
#else
DDK_PROTOCOL_DEF(BLOCK,          'pBLK', "block")
DDK_PROTOCOL_DEF(CONSOLE,        'pCON', "console")
DDK_PROTOCOL_DEF(DEVICE,         'pDEV', "device")
DDK_PROTOCOL_DEF(DISPLAY,        'pDIS', "display")
DDK_PROTOCOL_DEF(ETHERNET,       'pETH', "ethernet")
DDK_PROTOCOL_DEF(INPUT,          'pINP', "input")
DDK_PROTOCOL_DEF(MISC,           'pMSC', "misc")
DDK_PROTOCOL_DEF(PCI,            'pPCI', "pci")
DDK_PROTOCOL_DEF(SATA,           'pSAT', "sata")
DDK_PROTOCOL_DEF(TPM,            'pTPM', "tpm")
DDK_PROTOCOL_DEF(USB_HCI,        'pUHI', "usb-hci")
DDK_PROTOCOL_DEF(USB_BUS,        'pUBS', "usb-bus")
DDK_PROTOCOL_DEF(USB_HUB,        'pUHB', "usb-hub")
DDK_PROTOCOL_DEF(USB_DEVICE,     'pUDV', "usb-device")
DDK_PROTOCOL_DEF(BLUETOOTH_HCI,  'pBHC', "usb-hci")
#undef DDK_PROTOCOL_DEF
#endif