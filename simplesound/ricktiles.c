
const uint8_t RICKTILES[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x03, 0x00, 0x07, 0x00, 0x1F, 0x00, 0x17, 0x00, 0x3E, 0x01, 0x3B, 0x00, 0x3E, 0x01,
    0x78, 0x00, 0xD9, 0x00, 0x3B, 0x00, 0xEE, 0x01, 0xFF, 0x00, 0x17, 0xE8, 0x01, 0xFE, 0x00, 0xFF,
    0x00, 0x00, 0xF8, 0x00, 0xF6, 0x00, 0x0E, 0xF0, 0xAF, 0x50, 0xD7, 0x28, 0x83, 0x7C, 0x81, 0x7E,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x40, 0x00, 0xA0, 0x00, 0xE0, 0x00, 0xA0, 0x40,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00,
    0x7E, 0x01, 0xBE, 0x01, 0xFE, 0x01, 0xBF, 0x00, 0x0F, 0x00, 0xFF, 0x00, 0x7F, 0x00, 0x7F, 0x00,
    0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xC0, 0x3F, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00,
    0x01, 0xFE, 0x01, 0xFE, 0x12, 0xED, 0x02, 0xFD, 0xF6, 0x09, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00,
    0xF0, 0x00, 0xF0, 0x00, 0x38, 0xC0, 0x18, 0xE0, 0x1C, 0xE0, 0x18, 0xE0, 0x98, 0x60, 0xD8, 0x20,
    0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00,
    0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xF7, 0x00, 0xEF, 0x00, 0xEF, 0x00, 0xFE, 0x01, 0xDE, 0x01,
    0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x7F, 0x80, 0xFF, 0x00, 0x7F, 0x80, 0xFF, 0x00,
    0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00,
    0xD8, 0x20, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF0, 0x00, 0xF0, 0x00,
    0x06, 0x00, 0x07, 0x00, 0x05, 0x00, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00,
    0xFF, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0xFF, 0x00, 0xBF, 0x00, 0xBF, 0x00, 0xBF, 0x00,
    0xF7, 0x08, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00,
    0xE0, 0x00, 0xE0, 0x00, 0xC0, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0xC0, 0x00,
    0xBF, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00,
    0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00,
    0xC0, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0F, 0x00,
    0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0xDF, 0x00, 0xDF, 0x00, 0xDF, 0x00,
    0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x04, 0xF8, 0x06, 0xF8, 0x07, 0xF8, 0x07, 0xF8, 0x07,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x80, 0x10, 0xE0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x03, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x1F, 0x00, 0x7F, 0x00, 0xFC, 0x03, 0xF0, 0x0F,
    0x07, 0x00, 0x1F, 0x00, 0x7F, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x3F, 0xC0, 0x37, 0xC0,
    0xDF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x7F, 0x80, 0x3B, 0xC4, 0xFF, 0x00,
    0xF8, 0x07, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xF0, 0x0F, 0xE0, 0x1F, 0xE0, 0x1F, 0xE0, 0x1F,
    0x1E, 0xE0, 0x05, 0xFA, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
    0x00, 0x00, 0xFE, 0x00, 0x7F, 0x80, 0x01, 0xFE, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0xFC, 0x00, 0x3E, 0xC0, 0x0F, 0xF0, 0x00, 0xFF, 0x00, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0xC0,
    0x0F, 0x00, 0x1F, 0x00, 0x7C, 0x03, 0x70, 0x0F, 0xC0, 0x3F, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x7F,
    0xC1, 0x3E, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
    0x3F, 0xC0, 0x3F, 0xC0, 0x3F, 0xC0, 0x3F, 0xC0, 0x0F, 0xF0, 0x01, 0xFE, 0x03, 0xFC, 0x01, 0xFE,
    0xFF, 0x00, 0xFF, 0x00, 0x97, 0x68, 0x87, 0x78, 0x83, 0x7C, 0x82, 0x7D, 0x02, 0xFD, 0x03, 0xFC,
    0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFE, 0x01, 0xFE, 0x01, 0x1F, 0xE0, 0x00, 0xFF, 0xFE, 0x01,
    0xC0, 0x3F, 0x80, 0x7F, 0x80, 0x7F, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
    0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
    0x00, 0xC0, 0x00, 0xE0, 0x00, 0xF0, 0x00, 0xF0, 0x00, 0xF0, 0x00, 0xF0, 0x00, 0xF0, 0x00, 0xF8,
    0x80, 0x7F, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
    0x01, 0xFE, 0x01, 0xFE, 0x01, 0xFE, 0x01, 0xFE, 0x01, 0xFE, 0x00, 0xFF, 0x01, 0xFE, 0x01, 0xFE,
    0x02, 0xFD, 0x1F, 0xE0, 0x1F, 0xE0, 0xE0, 0x1F, 0xFF, 0x00, 0x3F, 0xC0, 0xFC, 0x03, 0xFB, 0x04,
    0x1E, 0xE1, 0xF8, 0x07, 0xFE, 0x01, 0x00, 0xFF, 0xE0, 0x1F, 0xFC, 0x03, 0x00, 0xFF, 0xE0, 0x1F,
    0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC,
    0x00, 0xFF, 0x00, 0xFF, 0x80, 0x7F, 0x80, 0x7F, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
    0x00, 0xFF, 0x00, 0xFF, 0x01, 0xFE, 0x00, 0xFF, 0x00, 0xFF, 0x01, 0xFE, 0x00, 0xFF, 0x01, 0xFE,
    0x3D, 0xC2, 0x78, 0x87, 0xFB, 0x04, 0x3B, 0xC4, 0x38, 0xC7, 0xFB, 0x04, 0x3B, 0xC4, 0xF8, 0x07,
    0xF8, 0x07, 0x00, 0xFF, 0xF0, 0x0F, 0xF0, 0x0F, 0x00, 0xFF, 0xE0, 0x1F, 0xE0, 0x1F, 0x00, 0xFF,
    0x00, 0xFE, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0xC0, 0x00, 0xF8,
    0x01, 0xFE, 0x00, 0xFF, 0x00, 0xFF, 0x01, 0xFE, 0x00, 0xFF, 0x00, 0xFF, 0x01, 0xFE, 0x01, 0xFE,
    0xFF, 0x00, 0x3F, 0xC0, 0x10, 0xEF, 0xF7, 0x08, 0x1F, 0xE0, 0x11, 0xEE, 0xF6, 0x09, 0xF7, 0x08,
    0x00, 0xFF, 0xE0, 0x1F, 0x00, 0xFF, 0xC0, 0x3F, 0xE0, 0x1F, 0xE0, 0x1F, 0x00, 0xFF, 0xC0, 0x3F,
    0x00, 0xFF, 0x06, 0xF9, 0x07, 0xF8, 0x07, 0xF8, 0x07, 0xF8, 0x07, 0xF8, 0x07, 0xF8, 0x07, 0xF8,
    0x00, 0xFF, 0x00, 0xFF, 0x3F, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00,
    0x00, 0xFF, 0x00, 0xFF, 0xC0, 0x3F, 0xE0, 0x1F, 0xE0, 0x1F, 0xE0, 0x1F, 0xF0, 0x0F, 0xF8, 0x07,
    0x00, 0xFC, 0x00, 0xFE, 0x01, 0xFE, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xF0, 0x04, 0xF8, 0x00, 0xFC,
    0x00, 0xFF, 0x01, 0xFE, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x01, 0xFE, 0x00, 0xFF, 0x00, 0xFF,
    0x10, 0xEF, 0xF0, 0x0F, 0x37, 0xC8, 0x11, 0xEE, 0x10, 0xEF, 0xFF, 0x00, 0x1F, 0xE0, 0x10, 0xEF,
    0x00, 0xFF, 0x00, 0xFF, 0xC0, 0x3F, 0xC0, 0x3F, 0x00, 0xFF, 0x80, 0x7F, 0x80, 0x7F, 0x00, 0xFF,
    0x01, 0xFE, 0x01, 0xFE, 0x01, 0xFE, 0x01, 0xFE, 0x01, 0xFE, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
    0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xEF, 0x10, 0x7F, 0x80, 0x7F, 0x80, 0x01, 0xFE,
    0xFC, 0x03, 0xFC, 0x03, 0xFE, 0x01, 0xFE, 0x01, 0xFE, 0x01, 0xFE, 0x01, 0xFE, 0x01, 0xFE, 0x01,
    0x00, 0xFC, 0x02, 0xFC, 0x02, 0xFC, 0x02, 0xFC, 0x02, 0xFC, 0x02, 0xFC, 0x02, 0xFC, 0x00, 0xFE,
};
