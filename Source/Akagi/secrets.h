/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2018 - 2020
*
*  TITLE:       SECRETS.H
*
*  VERSION:     3.27
*
*  DATE:        10 Sep 2020
*
*  Secrets used for decryption.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/

#pragma once

#define UACME_KEY_SIZE      32
//
// Note:
// Attach Kuma key and packed unit when building not for github 
// otherwise remediation methods will fail,
// g_bSecretsXX need to be re-generated too.
//

#ifdef _WIN64
static const unsigned char g_bSecrets[288] = {
	0x06, 0xC2, 0x85, 0x0B, 0xEC, 0xF4, 0xFA, 0x87, 0x86, 0xAB, 0xCD, 0xA2, 0xFF, 0xAD, 0x17, 0xDE,
	0x3E, 0xC2, 0xC6, 0x95, 0xBE, 0x18, 0xF7, 0x3C, 0x90, 0x39, 0x91, 0x19, 0xFF, 0x96, 0xF9, 0x37,
	0x38, 0x51, 0xE6, 0xC2, 0x72, 0x2D, 0x5B, 0xB7, 0x37, 0xB2, 0x2E, 0xCF, 0x5F, 0x9C, 0xD9, 0x96,
	0x47, 0xE2, 0xD6, 0x18, 0xE3, 0xF5, 0xBF, 0x41, 0xD1, 0x69, 0xE3, 0xDB, 0x11, 0x63, 0xA0, 0xC9,
	0x1A, 0x1E, 0x1B, 0xAD, 0xC0, 0xAB, 0xA4, 0x09, 0x0B, 0xDC, 0xB9, 0x73, 0x0A, 0xE0, 0x66, 0x6C,
	0xD5, 0x2A, 0xA1, 0xBF, 0x85, 0x4E, 0xA7, 0x0A, 0x21, 0xE5, 0x3D, 0xB6, 0x90, 0x30, 0xC2, 0xBB,
	0x2E, 0xBF, 0xBC, 0x13, 0xD2, 0xDA, 0x3A, 0x39, 0x2A, 0xAD, 0x1C, 0x2A, 0x80, 0xCC, 0x98, 0x30,
	0xE6, 0xFC, 0xA6, 0x12, 0xE5, 0xE8, 0x33, 0xB8, 0xD5, 0x40, 0xDC, 0xAE, 0x05, 0x7E, 0xA5, 0x38,
	0x74, 0xE3, 0xD6, 0x5A, 0xBB, 0x89, 0x6A, 0x5C, 0xA7, 0xD1, 0x74, 0x7D, 0xC9, 0x36, 0xFA, 0xE4,
	0x09, 0xC2, 0x85, 0x0B, 0xE0, 0x4F, 0xDA, 0x57, 0xF7, 0xF7, 0xBB, 0x8F, 0x0E, 0x53, 0xF4, 0xD8,
	0xF8, 0x1A, 0x4F, 0xFF, 0x24, 0xDA, 0xFF, 0x66, 0xA2, 0x18, 0x5D, 0xBC, 0xA8, 0xBE, 0x28, 0x6D,
	0x6E, 0x7F, 0x9A, 0x2E, 0x7F, 0x2D, 0x5A, 0xB5, 0x67, 0xB6, 0xD4, 0x44, 0x89, 0x06, 0x3B, 0x29,
	0xE0, 0xC0, 0x24, 0x52, 0xEA, 0xDB, 0x0C, 0xEA, 0x6C, 0x01, 0xA2, 0xE3, 0x25, 0x4D, 0x43, 0x96,
	0x4F, 0x2F, 0x52, 0xA0, 0x3A, 0x04, 0xC3, 0x12, 0x01, 0xD6, 0xAD, 0x5B, 0xF4, 0x79, 0xC1, 0xBD,
	0xC9, 0x4D, 0x75, 0x49, 0x13, 0x82, 0xF4, 0x80, 0x7D, 0xB4, 0xE8, 0x4C, 0xD7, 0x97, 0x35, 0xCF,
	0xEA, 0x31, 0xC7, 0x6F, 0xE9, 0x55, 0xCD, 0x9D, 0xE9, 0x16, 0xAA, 0x20, 0x48, 0x93, 0x27, 0x4F,
	0xF1, 0xC9, 0xDF, 0x0F, 0x30, 0x4C, 0xDF, 0x75, 0xAB, 0xEA, 0x72, 0x51, 0x2C, 0x56, 0x42, 0x3C,
	0x79, 0x6C, 0x89, 0x46, 0x9A, 0xA1, 0xCD, 0x38, 0x22, 0x3E, 0x96, 0x00, 0xE5, 0xA8, 0x67, 0x21
};
#else
static const unsigned char g_bSecrets[216] = {
    0xA9, 0xC2, 0x85, 0x0B, 0xA0, 0x79, 0x73, 0xD8, 0xC8, 0x89, 0xFF, 0xCF, 0xF7, 0x6A, 0x6C, 0xAF,
    0x60, 0x9C, 0x1D, 0x6F, 0xF0, 0x39, 0xDC, 0x71, 0x5F, 0x06, 0x57, 0xE2, 0x4B, 0x56, 0x90, 0x1F,
    0x77, 0x03, 0xA8, 0x70, 0xDF, 0x2D, 0x5B, 0xB7, 0x89, 0xA4, 0x08, 0x3A, 0x5D, 0xC8, 0x7C, 0xDD,
    0xC0, 0x7D, 0x1A, 0x81, 0x17, 0xAB, 0xC1, 0xC8, 0x6F, 0x07, 0xC5, 0xBD, 0x94, 0x3E, 0x35, 0x3D,
    0x51, 0x3F, 0x46, 0xEB, 0xAA, 0x93, 0x25, 0xB0, 0xA4, 0xDC, 0xB9, 0x73, 0x4B, 0xD5, 0xF6, 0x8C,
    0x48, 0xD0, 0xA5, 0x27, 0xC3, 0x93, 0xD9, 0xFB, 0xAD, 0x3F, 0x44, 0x7C, 0x14, 0x9F, 0x6F, 0x0B,
    0x9E, 0xA6, 0xFF, 0xB3, 0x5B, 0xF8, 0x56, 0xE4, 0x4D, 0x3F, 0xEA, 0x3E, 0x2D, 0xCC, 0x98, 0x30,
    0x97, 0xA0, 0x05, 0xE9, 0x8A, 0x0C, 0x4C, 0x61, 0xD3, 0xE9, 0x81, 0x33, 0x2F, 0xB4, 0x12, 0x44,
    0x53, 0x35, 0x21, 0xDA, 0xDA, 0xE9, 0xBF, 0x78, 0x20, 0xAE, 0x09, 0x2E, 0xE9, 0x71, 0x87, 0x15,
    0xAD, 0xC2, 0x85, 0x0B, 0x1A, 0x4D, 0x23, 0xAA, 0x54, 0xBC, 0x4E, 0xC2, 0x37, 0x6E, 0x79, 0xE9,
    0x9D, 0x34, 0xD2, 0x56, 0x14, 0xF0, 0x40, 0x27, 0xAD, 0x5D, 0x62, 0xD5, 0xC8, 0x21, 0x4F, 0x9B,
    0x4D, 0xEB, 0x1C, 0xAC, 0xE8, 0xD2, 0xA5, 0x4A, 0x20, 0x79, 0x2D, 0x66, 0xD1, 0xC3, 0x3D, 0x38,
    0x86, 0xD5, 0x64, 0xCC, 0x01, 0xD5, 0x26, 0x01, 0xD1, 0x34, 0xF3, 0x7B, 0x4F, 0x96, 0xFC, 0xE1,
    0xCE, 0xE7, 0x35, 0x27, 0x81, 0x78, 0xF9, 0xCB
};
#endif
