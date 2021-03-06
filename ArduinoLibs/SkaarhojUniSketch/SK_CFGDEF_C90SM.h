#ifndef SK_CUSTOM
		
	// Define number of each supported device we want to talk to:
#define SK_DEVICES_ATEM 1

#define SK_DEVICES 1		
		

#define SK_HWCCOUNT 40	
			

#define SK_MAXACTIONS 13	
			

	// Define the relation between a device index in the configuration and which device type it is.
	// There must be an exact match between the listed devices here and the defined number of devices just above
	// The order in the list below correspondance to the JavaScript based listing inside "JSscriptData" (variable "devLst")
	// This is how the arduino code will know, what a given device index means
static const uint8_t deviceArray[] PROGMEM = {0,SK_DEV_ATEM};

		// SVG drawing of the unit
static const unsigned char htmlSVG[] PROGMEM = "<svg viewBox=\"0 0 3000 2000\" width=\"100%\" id=\"ctrlimg\"><defs><linearGradient id=\"grad1\" x1=\"0%\" y1=\"0%\" x2=\"0%\" y2=\"100%\"><stop offset=\"0%\" style=\"stop-color:rgb(0,0,208);stop-opacity:1\" /><stop offset=\"40%\" style=\"stop-color:rgb(0,0,150);stop-opacity:1\" /><stop offset=\"100%\" style=\"stop-color:rgb(0,0,190);stop-opacity:1\" /></linearGradient></defs><path d=\"M 0 0 H 3000 L 2950 146 L 3000 292 L 2950 440 L 0 440 Z\" style=\"fill:url(#grad1);\" /><path d=\"M 50 500 H 3000 V 940 H 0 L 50 792 L 0 646 Z\" style=\"fill:url(#grad1);\" /><path d=\"M 185 1000 H 2815 L 2765 1146 L 2815 1292 L 2765 1440 L 185 1440 Z\" style=\"fill:#aaaaaa\" /><path d=\"M 235 1500 H 2815 V 1940 H 185 L 235 1792 L 185 1646 Z\" style=\"fill:#aaaaaa;\" /><circle cx=72 cy=60 r=33 style=\"fill:white;\"/><circle cx=72 cy=380 r=33 style=\"fill:white;\"/><circle cx=106 cy=60 r=33 style=\"fill:white;\"/><circle cx=106 cy=380 r=33 style=\"fill:white;\"/><rect x=72 y=27 width=34 height=66 style=\"fill:white;\"/><rect x=72 y=347 width=34 height=66 style=\"fill:white;\"/><circle cx=2928 cy=560 r=33 style=\"fill:white;\"/><circle cx=2928 cy=880 r=33 style=\"fill:white;\"/><circle cx=2894 cy=560 r=33 style=\"fill:white;\"/><circle cx=2894 cy=880 r=33 style=\"fill:white;\"/><rect x=2894 y=527 width=34 height=66 style=\"fill:white;\"/><rect x=2894 y=847 width=34 height=66 style=\"fill:white;\"/><text x=\"2050\" y=\"700\" style=\"text-anchor:middle;fill:white;font-family:Verdana;font-weight:bold;font-size:25;transform:scale(1.4,1);letter-spacing:-3px;\">SKAARHOJ</text><text x=\"1675\" y=\"1650\" style=\"text-anchor:middle;fill:black;font-family:Verdana;font-weight:bold;font-size:50;transform:scale(1.5,1);letter-spacing:-5px;\">SKAARHOJ</text></svg>";

	// JavaScript generic code (script.min.js) + configuration data for controller / devices. GZIP'ed
	// Orig size: 16954, GZIP size: 5620 
static const unsigned char JSscriptData[] PROGMEM = {
	
	0x1F, 0x8B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0xB5, 0x3B, 0xFB, 0x73, 0x9B, 0x48, 0x93, 0xBF, 0x7F, 0x7F, 
	0x05, 0x4B, 0x6A, 0x6D, 0x71, 0x42, 0x32, 0x6F, 0x3D, 0xB0, 
	0x9C, 0xB3, 0x15, 0x67, 0xAD, 0xDA, 0x38, 0x71, 0x45, 0x79, 
	0xEC, 0x9D, 0x4A, 0xB5, 0x85, 0x61, 0x64, 0x91, 0x60, 0xD0, 
	0x01, 0xB2, 0xE3, 0x73, 0xFC, 0xBF, 0x5F, 0xF7, 0xCC, 0x00, 
	0x03, 0x92, 0x1C, 0x25, 0xFB, 0x5D, 0x52, 0xD1, 0x30, 0xAF, 
	0x7E, 0x77, 0x4F, 0x4F, 0x43, 0xEE, 0xBC, 0x54, 0xBA, 0xF8, 
	0xEC, 0x8F, 0x66, 0x33, 0x5D, 0xB5, 0xFA, 0x86, 0xAA, 0x5B, 
	0x66, 0xB7, 0xAF, 0xCA, 0xBA, 0xAC, 0x1A, 0x73, 0x15, 0xC6, 
	0x1C, 0xD3, 0xEA, 0x5A, 0xC5, 0xA8, 0x51, 0x8C, 0xF6, 0xFA, 
	0x0E, 0xF4, 0xF9, 0xA8, 0x59, 0x8C, 0x0E, 0xCC, 0x41, 0xB7, 
	0x84, 0x60, 0x15, 0xA3, 0x08, 0xD5, 0x18, 0x38, 0x30, 0x23, 
	0xDB, 0x75, 0xA8, 0x7C, 0xD4, 0xA9, 0x43, 0xE5, 0xA3, 0xBD, 
	0x3A, 0x54, 0x3E, 0xDA, 0x2F, 0x46, 0x75, 0xA7, 0x67, 0xAA, 
	0x86, 0xA1, 0xA9, 0xF2, 0xF8, 0xE3, 0x07, 0x59, 0x35, 0xD9, 
	0xE0, 0xA0, 0xAF, 0x15, 0xF8, 0x4F, 0x8B, 0x95, 0x86, 0x6E, 
	0x1A, 0x15, 0x0B, 0x67, 0x25, 0x00, 0x5C, 0xCB, 0xA1, 0x8E, 
	0x1B, 0x6B, 0xF9, 0xF0, 0x2B, 0x36, 0x0C, 0x7B, 0x4D, 0x4D, 
	0x63, 0xC8, 0xA6, 0x6F, 0x26, 0xAF, 0xCE, 0xDF, 0xC3, 0xB8, 
	0x0E, 0x13, 0x40, 0x95, 0x53, 0x4E, 0xDC, 0x7A, 0x69, 0x7E, 
	0x49, 0xE2, 0xB5, 0xAC, 0xDA, 0x1A, 0xDB, 0xA4, 0x3B, 0xA6, 
	0xEA, 0xD8, 0xA6, 0x2A, 0x7F, 0x4A, 0xA2, 0xF5, 0x2D, 0x91, 
	0x01, 0x25, 0xC3, 0xAC, 0xEB, 0xA6, 0xDA, 0xB7, 0x1C, 0x55, 
	0x7E, 0xF7, 0x56, 0x56, 0x1D, 0x36, 0x66, 0x14, 0x63, 0xA7, 
	0xAF, 0x3F, 0xB1, 0x41, 0x90, 0xAF, 0x61, 0x99, 0x6A, 0xCF, 
	0xB2, 0x54, 0xF9, 0x8A, 0x78, 0x5F, 0x81, 0x49, 0xBA, 0xDF, 
	0x01, 0x72, 0x06, 0x20, 0x2C, 0x13, 0xB0, 0x7E, 0xFA, 0x08, 
	0xA3, 0x7D, 0x06, 0xC1, 0xEE, 0xF7, 0x55, 0x47, 0xD7, 0x71, 
	0x50, 0x1A, 0x5F, 0x94, 0x80, 0x71, 0xB8, 0x67, 0x00, 0x37, 
	0x1F, 0x33, 0x92, 0x4A, 0x7A, 0x6D, 0xBC, 0x6F, 0x9A, 0x7C, 
	0xDC, 0x60, 0xE3, 0xC0, 0x91, 0x41, 0xD7, 0x03, 0xEC, 0xF3, 
	0xD8, 0x4F, 0x02, 0x98, 0xE2, 0x4C, 0x71, 0x92, 0xFA, 0xBD, 
	0x81, 0xAA, 0x6B, 0x20, 0x3A, 0xF9, 0x8F, 0xAB, 0x77, 0xBA, 
	0xD4, 0x5A, 0x19, 0xA6, 0x22, 0xAB, 0x96, 0x26, 0xCC, 0xEA, 
	0x06, 0x9B, 0x35, 0x70, 0xD6, 0xD8, 0x98, 0x75, 0xD8, 0xAC, 
	0x89, 0xB3, 0x7A, 0x73, 0xD6, 0xD0, 0xD8, 0xAC, 0x85, 0xB3, 
	0xDA, 0xC6, 0xAC, 0xC5, 0x66, 0x6D, 0x98, 0xD5, 0x07, 0x1B, 
	0xB3, 0x9C, 0x2A, 0x07, 0x67, 0xFB, 0xCD, 0x59, 0x93, 0x53, 
	0xD5, 0xC3, 0xD9, 0xDE, 0xC6, 0x2C, 0xA7, 0xAA, 0x8F, 0xB3, 
	0x4E, 0x31, 0x8B, 0x06, 0x61, 0x19, 0x25, 0xBF, 0x13, 0xE4, 
	0x57, 0xD7, 0x9A, 0xB3, 0x9C, 0xDF, 0x09, 0xF2, 0x3B, 0xD8, 
	0x98, 0x64, 0x80, 0x27, 0xC8, 0x6E, 0xBF, 0x39, 0xC9, 0xB9, 
	0x9D, 0x20, 0xB7, 0xBD, 0x8D, 0x49, 0xC6, 0xEC, 0x04, 0x99, 
	0xDD, 0xA0, 0x88, 0xF3, 0x3A, 0x41, 0x5E, 0xED, 0xE6, 0x24, 
	0x67, 0x75, 0x82, 0xAC, 0x5A, 0x1B, 0x93, 0x9C, 0x20, 0xE4, 
	0x94, 0xAB, 0x6E, 0xEE, 0xFE, 0xEB, 0x0E, 0xC2, 0x40, 0x40, 
	0xEE, 0xDE, 0x64, 0x39, 0x8D, 0x04, 0xF2, 0xE9, 0x87, 0xF3, 
	0x4B, 0x30, 0x58, 0xDC, 0x67, 0x83, 0x71, 0x3F, 0x64, 0x39, 
	0xB9, 0x95, 0x85, 0x85, 0xAF, 0xD7, 0x31, 0xC6, 0x8C, 0x19, 
	0xDA, 0xDB, 0x55, 0x9A, 0xDC, 0xA4, 0xDE, 0xAD, 0x34, 0x4D, 
	0x7D, 0x59, 0xED, 0xE8, 0x6A, 0xC7, 0x50, 0x67, 0xB2, 0xAC, 
	0xCA, 0x17, 0x49, 0x14, 0x48, 0xAF, 0x92, 0xFB, 0x18, 0x9E, 
	0x3F, 0x24, 0x37, 0x37, 0x11, 0xB8, 0x80, 0x3C, 0x7E, 0xF0, 
	0xA1, 0x9D, 0x23, 0x60, 0xBA, 0x95, 0xDC, 0x85, 0xE4, 0x7E, 
	0x63, 0x6B, 0x73, 0xD5, 0xDD, 0xD1, 0x55, 0x7A, 0xF3, 0x83, 
	0x55, 0xA7, 0x1F, 0xFF, 0x92, 0xDE, 0xAD, 0xF3, 0xD5, 0x3A, 
	0xE7, 0x0B, 0xCD, 0xE7, 0x29, 0xA1, 0x83, 0x7F, 0xA4, 0xC9, 
	0x7A, 0x25, 0x9D, 0xD6, 0xBB, 0x67, 0x1B, 0xB0, 0x3F, 0xAE, 
	0xB2, 0x3C, 0x25, 0xC0, 0xE3, 0x9F, 0xE4, 0x81, 0xA4, 0x8C, 
	0x08, 0x4B, 0xED, 0xD8, 0x5B, 0xA7, 0xA5, 0xD7, 0x61, 0x14, 
	0x95, 0x6B, 0x8C, 0xED, 0x6B, 0xE0, 0x77, 0x63, 0x09, 0x52, 
	0xD8, 0xC0, 0xE3, 0x54, 0x48, 0x9A, 0xB3, 0x05, 0x1A, 0x67, 
	0x37, 0x00, 0x8E, 0x45, 0x58, 0x71, 0x79, 0x25, 0x4D, 0x73, 
	0xB6, 0xAF, 0x87, 0x36, 0x61, 0xE2, 0xC4, 0x3E, 0xCA, 0x32, 
	0x20, 0x76, 0xB6, 0x8A, 0xDD, 0x12, 0x9D, 0x50, 0x2A, 0x20, 
	0x60, 0x22, 0x39, 0xC4, 0x3F, 0x79, 0x5E, 0x74, 0xCF, 0xE3, 
	0x00, 0x3B, 0x9A, 0x4A, 0x9D, 0xE3, 0x74, 0x9D, 0x27, 0xD2, 
	0x24, 0xCE, 0x49, 0x7A, 0xE7, 0x45, 0x32, 0xC7, 0xF8, 0xDE, 
	0x8B, 0x83, 0xE4, 0x96, 0xF6, 0x4A, 0x84, 0xEF, 0x10, 0xFD, 
	0xBB, 0xC5, 0xA2, 0x46, 0x50, 0x0D, 0xFF, 0x38, 0x0A, 0x57, 
	0x0C, 0xB1, 0x51, 0x1B, 0x4E, 0xE2, 0x3C, 0x4D, 0x22, 0x36, 
	0xD3, 0xE9, 0x73, 0x6E, 0xC7, 0xEB, 0x1C, 0x85, 0x5C, 0x18, 
	0x08, 0x50, 0x21, 0x74, 0x5F, 0x7F, 0x38, 0x13, 0x7A, 0x1F, 
	0x52, 0x2F, 0xCE, 0xC2, 0x3C, 0x4C, 0x62, 0x60, 0xF1, 0x01, 
	0x89, 0x41, 0xE5, 0xD0, 0x80, 0x6B, 0xD4, 0x66, 0xAF, 0x92, 
	0x4C, 0xD8, 0x76, 0x15, 0x79, 0x0F, 0xD2, 0xA5, 0xE7, 0xA7, 
	0x00, 0x19, 0xA3, 0x2A, 0x7A, 0x1A, 0x1D, 0x94, 0x51, 0x24, 
	0xC9, 0x6A, 0xC3, 0xE0, 0xB8, 0x88, 0xB9, 0x64, 0x99, 0x24, 
	0xDE, 0x24, 0xB0, 0xB0, 0xE2, 0xF2, 0x3D, 0xF1, 0x93, 0x34, 
	0x60, 0x50, 0x15, 0x0A, 0xD6, 0xD0, 0xAA, 0xD9, 0x69, 0xB2, 
	0x4E, 0x7D, 0x52, 0x6A, 0x60, 0x26, 0x5F, 0x1E, 0x9D, 0x63, 
	0x58, 0xA7, 0x2D, 0x84, 0x71, 0xEA, 0x07, 0x3A, 0x6F, 0x8B, 
	0xBE, 0xC9, 0x5B, 0x8B, 0xB7, 0x36, 0x6F, 0x1D, 0x24, 0xA1, 
	0x23, 0xAA, 0xAF, 0xF3, 0xD3, 0xCA, 0x83, 0xDE, 0x27, 0x2F, 
	0x7D, 0x90, 0xF2, 0xF0, 0x36, 0x8C, 0x6F, 0x24, 0x43, 0xFB, 
	0xBD, 0x31, 0x62, 0xC3, 0xC8, 0x9E, 0x5A, 0xA6, 0x5A, 0x0A, 
	0x42, 0xAA, 0x26, 0x0D, 0xFE, 0xE9, 0x7B, 0x19, 0x67, 0x8F, 
	0xEF, 0x92, 0x8A, 0x83, 0xB6, 0x43, 0xF5, 0x50, 0x0E, 0x9F, 
	0x79, 0x91, 0x17, 0xFB, 0xE5, 0xB8, 0x61, 0x15, 0x13, 0x6F, 
	0xC8, 0x1D, 0x89, 0x32, 0x61, 0xBD, 0xA0, 0xE7, 0xF7, 0x5E, 
	0xCE, 0x8C, 0x60, 0xC6, 0x31, 0x81, 0x84, 0xC3, 0x6F, 0xF0, 
	0xFB, 0x2A, 0x44, 0xAD, 0x7E, 0x0E, 0x57, 0x38, 0xF4, 0xEA, 
	0xD3, 0xB9, 0xCC, 0x4C, 0x89, 0x85, 0x58, 0x1B, 0xA2, 0xE5, 
	0x6B, 0x08, 0x86, 0x24, 0x13, 0x14, 0xAA, 0x30, 0x38, 0xBB, 
	0xA6, 0x1B, 0x91, 0xE1, 0xCA, 0x83, 0x05, 0xB8, 0x05, 0x22, 
	0x83, 0x5E, 0x19, 0xF9, 0x86, 0x6F, 0x97, 0xEB, 0x1C, 0xBE, 
	0x0E, 0xCE, 0xF2, 0xD7, 0x89, 0xBF, 0xA6, 0xFC, 0x98, 0x8C, 
	0x9F, 0x49, 0x1A, 0x96, 0x5D, 0x98, 0x9E, 0x92, 0x38, 0x4B, 
	0x52, 0xE9, 0x0F, 0x2F, 0x8C, 0xE9, 0xA8, 0xC0, 0x9B, 0x16, 
	0x5C, 0xC3, 0xAF, 0x43, 0x7F, 0x75, 0x83, 0x35, 0x7D, 0x68, 
	0xE6, 0x7C, 0xE7, 0x72, 0x9D, 0xE7, 0x2C, 0xF2, 0x89, 0xBB, 
	0xF4, 0x23, 0x5B, 0xA3, 0x8D, 0xC3, 0x9A, 0x9E, 0x4D, 0x9B, 
	0x01, 0xEB, 0xE9, 0x1A, 0x6F, 0x0D, 0xDE, 0xF2, 0xC5, 0x7A, 
	0x9F, 0xB5, 0x06, 0xEF, 0x9B, 0x7C, 0xB7, 0xCD, 0xD7, 0xF7, 
	0x0C, 0xBB, 0xD8, 0xCF, 0x37, 0x58, 0x7C, 0xA5, 0x81, 0x23, 
	0x9C, 0xA4, 0xCF, 0xCB, 0x30, 0x27, 0xA2, 0x6E, 0x45, 0xC2, 
	0x00, 0xB4, 0xF6, 0x27, 0xB6, 0x7D, 0xD6, 0x42, 0x02, 0xC7, 
	0x5A, 0x83, 0xB7, 0x16, 0x6F, 0x1D, 0xD6, 0x5A, 0x7C, 0xDE, 
	0xE2, 0xFB, 0x2C, 0xBE, 0xCF, 0xE6, 0xE3, 0x36, 0xDF, 0x67, 
	0xF3, 0x7D, 0x36, 0xDF, 0xE7, 0xF0, 0x79, 0x87, 0xEF, 0xEB, 
	0xF1, 0x7E, 0x8F, 0xF7, 0xFB, 0xB4, 0xCF, 0x8D, 0xF4, 0x4D, 
	0xB8, 0xA0, 0xF1, 0xC8, 0xAA, 0x14, 0xF4, 0x87, 0x77, 0x7B, 
	0xEB, 0x6D, 0x8C, 0x31, 0xF5, 0x08, 0x43, 0x17, 0x6B, 0x22, 
	0x68, 0x95, 0x06, 0x3B, 0x2F, 0xCB, 0x85, 0xA1, 0xA9, 0x97, 
	0xAF, 0x53, 0x0F, 0x0D, 0xB7, 0x90, 0xC4, 0xDB, 0x24, 0xBD, 
	0x05, 0x7F, 0x05, 0x13, 0x25, 0x19, 0x9B, 0x24, 0x81, 0x60, 
	0x74, 0x67, 0x5E, 0x9A, 0xD1, 0xF0, 0xF1, 0x63, 0xAF, 0x1C, 
	0x80, 0x3B, 0x87, 0x01, 0x49, 0xA4, 0x0F, 0x5E, 0x14, 0xE1, 
	0x79, 0x82, 0xA7, 0x2A, 0x3F, 0xF4, 0xE5, 0xF2, 0x0C, 0x97, 
	0x59, 0x22, 0x70, 0x84, 0xDD, 0x62, 0x1B, 0xF3, 0xB2, 0x62, 
	0x1B, 0x75, 0x32, 0x86, 0x7D, 0xBC, 0x4C, 0x93, 0x5B, 0x0F, 
	0x0D, 0x59, 0x9A, 0x92, 0x3C, 0x87, 0x28, 0xC1, 0x88, 0xC1, 
	0xC8, 0x42, 0x7C, 0x0F, 0xCF, 0x27, 0x60, 0xE9, 0x0E, 0x23, 
	0x24, 0xB8, 0x01, 0x5E, 0x18, 0x20, 0x73, 0xF7, 0xE2, 0xAF, 
	0x02, 0x03, 0xE3, 0xF1, 0xC7, 0x1F, 0xEF, 0x45, 0x49, 0x6C, 
	0xDB, 0x7C, 0x35, 0xB9, 0xA2, 0x4E, 0x69, 0x33, 0x53, 0xA2, 
	0x5E, 0xCC, 0x0E, 0x63, 0xE0, 0x2C, 0x61, 0x11, 0x00, 0xC1, 
	0x00, 0x38, 0x80, 0x5F, 0x84, 0x39, 0xB0, 0xC7, 0xDF, 0x3B, 
	0x60, 0x08, 0xBF, 0x4B, 0xFF, 0x9D, 0x60, 0xF0, 0x43, 0x78, 
	0x2C, 0x3F, 0x5A, 0x82, 0x66, 0x59, 0x34, 0x91, 0x59, 0xDC, 
	0x04, 0x65, 0xD3, 0xDE, 0x0F, 0x4F, 0x57, 0xE9, 0xE3, 0xAA, 
	0x7C, 0xAC, 0xE2, 0xA0, 0x4D, 0x23, 0x32, 0x06, 0x20, 0x80, 
	0x36, 0x28, 0x3A, 0xBF, 0x0E, 0xEC, 0x92, 0xDC, 0x26, 0xE9, 
	0x03, 0x4A, 0x09, 0x53, 0x1D, 0x9A, 0xDF, 0xA0, 0x65, 0x00, 
	0x44, 0x0C, 0x49, 0x3F, 0x0D, 0x95, 0xED, 0xB8, 0x22, 0x69, 
	0x16, 0x82, 0x15, 0x72, 0xEB, 0x66, 0x0B, 0x76, 0x63, 0x02, 
	0x4E, 0x78, 0xFC, 0x63, 0x07, 0x07, 0xEF, 0x7E, 0x48, 0xF6, 
	0x9C, 0x3B, 0x65, 0xA7, 0x52, 0x13, 0x33, 0x3D, 0xCA, 0x23, 
	0xEF, 0x86, 0x8A, 0xCA, 0x31, 0x79, 0x07, 0x17, 0x82, 0x75, 
	0x6C, 0xE7, 0x8B, 0x43, 0x99, 0xC4, 0x77, 0x84, 0x1D, 0x7A, 
	0x54, 0xB9, 0xB7, 0x19, 0x55, 0x31, 0x6F, 0x58, 0x6B, 0xF3, 
	0x56, 0xC7, 0x1F, 0x23, 0x63, 0xD4, 0x50, 0x24, 0x84, 0x04, 
	0xD7, 0x9E, 0xFF, 0x55, 0x2A, 0xB1, 0x09, 0x00, 0xE9, 0x2A, 
	0xF9, 0x43, 0x48, 0x24, 0x38, 0x39, 0x2F, 0x3E, 0x8F, 0x5F, 
	0x40, 0x26, 0xAD, 0x69, 0x6C, 0x94, 0xA5, 0xD2, 0x70, 0x9E, 
	0x2E, 0x38, 0x6F, 0xE0, 0xA8, 0xD2, 0xA9, 0x4F, 0x0D, 0x8E, 
	0xF5, 0x3F, 0x7B, 0x61, 0x2E, 0x61, 0xF0, 0xCB, 0xA4, 0x0C, 
	0x32, 0x01, 0xE0, 0x1A, 0xCF, 0x7F, 0x3A, 0x35, 0x5E, 0x67, 
	0x79, 0x72, 0x2B, 0x5D, 0xC0, 0xE1, 0x1B, 0x41, 0x30, 0xE6, 
	0xDC, 0x4F, 0x62, 0x0F, 0xF6, 0xDF, 0x71, 0x0B, 0xC1, 0x11, 
	0xCC, 0x3C, 0x24, 0xD8, 0x1A, 0x13, 0x9F, 0xE5, 0x64, 0xCC, 
	0xE8, 0xBD, 0x98, 0x44, 0xD2, 0x59, 0x1A, 0xDE, 0x2C, 0xF3, 
	0x98, 0x64, 0xE8, 0x35, 0x82, 0x4B, 0xBE, 0x81, 0xC3, 0x3A, 
	0xCF, 0x28, 0xB9, 0x4A, 0x41, 0x2F, 0x9B, 0x79, 0x1D, 0xC6, 
	0x04, 0x8E, 0xC3, 0xF8, 0x86, 0x88, 0xB3, 0xC5, 0x65, 0x00, 
	0x92, 0x02, 0xB8, 0x35, 0x64, 0x70, 0x19, 0x68, 0x64, 0x22, 
	0x28, 0x94, 0xB3, 0x08, 0x64, 0x04, 0xEB, 0x55, 0x43, 0x35, 
	0x55, 0x4B, 0xB5, 0xC1, 0x15, 0x7B, 0x6A, 0x5F, 0xC5, 0x2B, 
	0x24, 0x5C, 0x8D, 0xD0, 0x4F, 0xC0, 0x43, 0x21, 0xD0, 0x81, 
	0x8D, 0xE2, 0xBD, 0xB6, 0x07, 0xB7, 0x31, 0xB8, 0x25, 0xAB, 
	0x98, 0x76, 0x60, 0x80, 0x42, 0xEB, 0x49, 0xA2, 0x24, 0xD5, 
	0x8B, 0x07, 0xCC, 0x67, 0x2E, 0xAF, 0x28, 0x8E, 0x2B, 0x7C, 
	0x9E, 0xAE, 0x57, 0x70, 0x12, 0xB2, 0x94, 0x08, 0xD7, 0x44, 
	0xC4, 0x8B, 0x29, 0x09, 0xEC, 0xE9, 0xE7, 0xD3, 0x21, 0x00, 
	0x7C, 0xAE, 0x4B, 0x70, 0xD9, 0x28, 0x9F, 0xEE, 0xE8, 0x93, 
	0x51, 0x8E, 0x19, 0xC5, 0xD8, 0x27, 0xD0, 0x11, 0x6F, 0x0D, 
	0xDE, 0x9A, 0xBC, 0xB5, 0x78, 0x6B, 0xF3, 0xD6, 0xE1, 0x6D, 
	0x8F, 0xB7, 0x7D, 0xDA, 0x1A, 0x7C, 0xBF, 0xC1, 0xF7, 0x1B, 
	0x7C, 0xBF, 0xC1, 0xF7, 0x1B, 0x7C, 0xBF, 0xC1, 0xF7, 0x1B, 
	0x7C, 0xBF, 0xC1, 0xF6, 0x83, 0x15, 0x9D, 0xF2, 0xF6, 0x8C, 
	0xB7, 0x63, 0xDE, 0x52, 0x77, 0xFB, 0xF9, 0x44, 0x50, 0x66, 
	0x89, 0x05, 0xEE, 0x61, 0x4F, 0x46, 0xF9, 0x64, 0x96, 0x4F, 
	0xD6, 0x1E, 0xB9, 0x1C, 0xCF, 0xB5, 0x71, 0xE1, 0xAB, 0xE9, 
	0x9F, 0x14, 0x20, 0xB6, 0xCC, 0x26, 0x20, 0x5B, 0x67, 0x0A, 
	0xE4, 0x7D, 0x9A, 0x2D, 0xCF, 0x9F, 0x4F, 0xB3, 0xA6, 0x18, 
	0xE6, 0x31, 0xFD, 0xA0, 0xA1, 0x9A, 0xA5, 0x5A, 0x3F, 0x6D, 
	0x51, 0x7F, 0xBD, 0x79, 0x8F, 0x94, 0x9D, 0x4F, 0xF1, 0xA4, 
	0x18, 0x9F, 0x36, 0x4C, 0xE9, 0x12, 0x0E, 0x54, 0x8A, 0xE1, 
	0x32, 0x89, 0xC3, 0x3C, 0x49, 0xF7, 0x12, 0x31, 0xE5, 0x9E, 
	0x56, 0x6C, 0xE4, 0x29, 0xD8, 0x27, 0x17, 0x0D, 0x12, 0x7E, 
	0x96, 0xE4, 0xE0, 0xAA, 0x32, 0x9E, 0x03, 0x78, 0xE8, 0xCB, 
	0xEF, 0xD1, 0xEB, 0xA0, 0xFD, 0x0B, 0xFE, 0xFD, 0x17, 0x65, 
	0x2C, 0xC8, 0x97, 0x28, 0x34, 0xC2, 0x27, 0x60, 0xDB, 0x51, 
	0x6D, 0xD3, 0x51, 0xB9, 0xE5, 0xA8, 0xDC, 0x70, 0xC4, 0x97, 
	0x53, 0x71, 0x41, 0x26, 0x48, 0x4D, 0x1D, 0x5A, 0x83, 0xB7, 
	0x26, 0x6F, 0x2D, 0xDE, 0xDA, 0xBC, 0x75, 0x78, 0xDB, 0xE3, 
	0x6D, 0x9F, 0xB7, 0x03, 0xDE, 0xEA, 0xDA, 0x5E, 0xEC, 0x22, 
	0x1D, 0x28, 0xC3, 0x3F, 0x68, 0x68, 0x17, 0x75, 0xF6, 0x26, 
	0xB9, 0x07, 0xDB, 0x28, 0x28, 0x66, 0x47, 0x41, 0x16, 0xFE, 
	0x2F, 0xCD, 0x73, 0xDD, 0x7F, 0x2D, 0xD6, 0x31, 0x8D, 0x70, 
	0xD2, 0xCD, 0xF9, 0xD9, 0xA4, 0x45, 0x94, 0xC7, 0x94, 0x40, 
	0x46, 0x12, 0x4B, 0x01, 0xA4, 0xAB, 0xB7, 0x24, 0xCE, 0xBB, 
	0x37, 0x24, 0x3F, 0x8F, 0x08, 0x3E, 0x9E, 0x3D, 0x4C, 0x02, 
	0x58, 0xF1, 0x54, 0x6E, 0xC9, 0x48, 0x7E, 0xDA, 0x22, 0x6A, 
	0xAE, 0x3C, 0x2E, 0x92, 0xB4, 0x85, 0x11, 0x27, 0x96, 0xC2, 
	0x58, 0xCA, 0x15, 0xD2, 0xC5, 0xA9, 0x3C, 0x4F, 0xC3, 0xEB, 
	0x75, 0x4E, 0x5A, 0xB1, 0x9A, 0xCF, 0xE2, 0xB9, 0xE2, 0x72, 
	0xD0, 0xA4, 0x06, 0xE1, 0x0D, 0x83, 0xC0, 0xE7, 0x38, 0xC8, 
	0xC7, 0x24, 0xF6, 0xA3, 0xD0, 0xFF, 0x3A, 0x3C, 0xA4, 0x64, 
	0xC9, 0x8B, 0xF8, 0xB0, 0x9D, 0xB7, 0x0F, 0x65, 0xA5, 0x9B, 
	0xC1, 0xCD, 0x2B, 0x8A, 0xE0, 0xCE, 0x93, 0x7C, 0x82, 0xCC, 
	0xA6, 0xA5, 0xB8, 0x87, 0xAA, 0xBF, 0x4E, 0x21, 0x75, 0x1E, 
	0xCA, 0xAB, 0x24, 0xC4, 0xAB, 0x90, 0xFC, 0x24, 0x90, 0xB8, 
	0x82, 0x84, 0x2D, 0xBF, 0x14, 0xF8, 0x2A, 0x10, 0x2C, 0xE0, 
	0xAE, 0x3C, 0x94, 0x5F, 0x04, 0xF4, 0x8F, 0xAC, 0x42, 0xFA, 
	0x9E, 0x7C, 0x25, 0x30, 0xC0, 0xF2, 0x5A, 0xD6, 0xED, 0xDC, 
	0x53, 0x4B, 0x18, 0xCA, 0xC6, 0x26, 0xCC, 0xE9, 0x6E, 0x98, 
	0x3E, 0xFD, 0x23, 0xC0, 0x74, 0x1C, 0x67, 0x13, 0xA6, 0x5E, 
	0x83, 0xE9, 0xA7, 0xE7, 0x9B, 0x72, 0x28, 0x75, 0xE0, 0xC3, 
	0xDD, 0x22, 0x27, 0x5C, 0x0D, 0x80, 0x18, 0x16, 0x8A, 0x5B, 
	0xA7, 0x7B, 0xEF, 0x7D, 0x3B, 0x6D, 0xC9, 0xCB, 0x3C, 0x5F, 
	0x0D, 0x8F, 0x8E, 0xEE, 0xEF, 0xEF, 0xBB, 0xF7, 0x66, 0x37, 
	0x49, 0x6F, 0x68, 0xEA, 0x7E, 0x94, 0xDD, 0x41, 0x10, 0x6D, 
	0x80, 0xF6, 0x10, 0xB2, 0xF2, 0xE8, 0x8D, 0x5B, 0x4C, 0x0D, 
	0x7E, 0x9E, 0x46, 0xE1, 0xED, 0x8D, 0xAC, 0xA8, 0xA2, 0x19, 
	0xC0, 0x34, 0x45, 0x4F, 0xBA, 0xDE, 0x6A, 0x45, 0xE2, 0x60, 
	0xBC, 0x0C, 0xA3, 0xA0, 0x25, 0xC2, 0xC9, 0xF2, 0xB7, 0xDE, 
	0xED, 0xEB, 0x28, 0xC8, 0x2A, 0x6B, 0x21, 0xDD, 0x10, 0xCE, 
	0xC0, 0xF4, 0xE2, 0xC3, 0xE5, 0x9B, 0x11, 0x1C, 0xD0, 0x5F, 
	0x46, 0x9A, 0xFB, 0xE5, 0x58, 0x87, 0x9F, 0x76, 0x5B, 0xC9, 
	0x4F, 0xBE, 0x1C, 0x1C, 0xB4, 0x28, 0x58, 0x94, 0x8B, 0x1C, 
	0xC6, 0x2B, 0xAC, 0x16, 0x3C, 0x86, 0xC1, 0x50, 0xA6, 0xA0, 
	0xFE, 0x96, 0xDB, 0x5F, 0xD4, 0x18, 0xEE, 0x6A, 0x62, 0x3F, 
	0xC3, 0xDA, 0xC0, 0x50, 0xA6, 0xF2, 0x1D, 0x02, 0x4B, 0xAB, 
	0x6F, 0xAE, 0xAC, 0xC2, 0x11, 0xB8, 0x26, 0xC3, 0x0C, 0x73, 
	0xB4, 0x6C, 0xF6, 0x65, 0xFE, 0xB2, 0x7C, 0x1A, 0xCA, 0x20, 
	0x7F, 0xE0, 0xA3, 0x22, 0xA3, 0x3D, 0x92, 0x8F, 0xAF, 0xD3, 
	0xA3, 0x13, 0x59, 0x20, 0x3C, 0x7D, 0x73, 0x1D, 0x09, 0x8A, 
	0x26, 0xDD, 0x94, 0xAC, 0xE0, 0xDC, 0x24, 0x2D, 0xF9, 0x3B, 
	0x68, 0x14, 0x96, 0xD7, 0x56, 0xDF, 0xA7, 0xD3, 0x33, 0xC6, 
	0xA1, 0x3F, 0x62, 0x02, 0xCB, 0xCE, 0x96, 0x72, 0x9B, 0xB4, 
	0x65, 0x20, 0x30, 0x57, 0x54, 0xBF, 0xCE, 0xB3, 0xDF, 0xA5, 
	0x24, 0x77, 0x29, 0xC5, 0xA3, 0x4B, 0x2F, 0x5F, 0x76, 0x17, 
	0x51, 0x02, 0xB2, 0xD1, 0x51, 0x1D, 0x94, 0xD0, 0x6E, 0x44, 
	0xE2, 0x9B, 0x7C, 0xD9, 0xD1, 0x95, 0xB6, 0xFC, 0xBB, 0xEC, 
	0x52, 0x17, 0x1B, 0x51, 0x99, 0x2C, 0x2D, 0x59, 0x71, 0x6B, 
	0x8B, 0x4E, 0x74, 0x10, 0x5A, 0x2C, 0xA0, 0xA8, 0xCF, 0x6A, 
	0x05, 0xEF, 0xF9, 0xBC, 0x7A, 0x1A, 0x6A, 0xA3, 0x51, 0xFE, 
	0xB2, 0xB8, 0x90, 0x0C, 0x59, 0x32, 0x2B, 0x01, 0xB1, 0x20, 
	0x1E, 0x45, 0x05, 0x0D, 0xF8, 0x6A, 0x4C, 0xDB, 0xB8, 0xAE, 
	0x89, 0xC2, 0x3D, 0xE5, 0x20, 0x02, 0x96, 0x29, 0x8B, 0x2A, 
	0xEC, 0x6A, 0x03, 0x4D, 0xB2, 0x9A, 0x3F, 0xAC, 0x40, 0x0F, 
	0xE0, 0xF9, 0x39, 0x66, 0xEA, 0x4C, 0x03, 0x72, 0x07, 0xC6, 
	0xC3, 0x1C, 0x15, 0xF4, 0x8A, 0x44, 0x04, 0xD3, 0x67, 0xD9, 
	0x8F, 0xBC, 0x2C, 0x03, 0xA4, 0x24, 0xC8, 0xA9, 0x2E, 0x9E, 
	0x41, 0xE3, 0xAF, 0x1E, 0xF6, 0xC4, 0x33, 0xBE, 0x2A, 0x11, 
	0x8D, 0x93, 0xD5, 0xC3, 0xCF, 0xA1, 0x09, 0xE3, 0x6C, 0x4F, 
	0x34, 0x93, 0xB7, 0xD3, 0x12, 0xCF, 0x24, 0xCE, 0x30, 0xB7, 
	0xAC, 0x30, 0x01, 0x18, 0x89, 0x63, 0x73, 0x8B, 0xC8, 0x98, 
	0x8E, 0x34, 0x35, 0x04, 0x23, 0x0F, 0x8F, 0xA7, 0x7F, 0xFE, 
	0x7D, 0x79, 0xFA, 0xD7, 0xE9, 0xF8, 0xC3, 0xE4, 0xDD, 0xDB, 
	0xA9, 0x1B, 0x82, 0xBD, 0x87, 0x8B, 0x16, 0x15, 0x35, 0x25, 
	0x2A, 0x5B, 0x79, 0x31, 0xB7, 0xF5, 0x45, 0xEC, 0x53, 0x5A, 
	0x3A, 0x94, 0x16, 0xF8, 0x0D, 0x39, 0xFD, 0x9B, 0x4B, 0xB1, 
	0xFE, 0xB3, 0xB9, 0x14, 0xB4, 0x1B, 0x1E, 0x1C, 0xA0, 0x8E, 
	0xBF, 0x7F, 0xBF, 0xF8, 0x7C, 0x37, 0x23, 0xF3, 0x83, 0x03, 
	0xD6, 0x82, 0xEE, 0x85, 0xC7, 0x59, 0x08, 0x3D, 0xED, 0xB7, 
	0x51, 0x4B, 0xB7, 0x6B, 0x83, 0x33, 0x6D, 0xAE, 0x28, 0x41, 
	0xFA, 0x3A, 0x9E, 0xA2, 0x59, 0xAB, 0xA1, 0xE2, 0x92, 0x28, 
	0x23, 0x12, 0xD0, 0xFB, 0x5B, 0x0A, 0x4E, 0x31, 0xD2, 0xA9, 
	0x45, 0x7A, 0xA3, 0x22, 0x48, 0x37, 0xC9, 0x55, 0x5C, 0x20, 
	0xD6, 0xDB, 0x65, 0x3A, 0x14, 0xAE, 0x20, 0x6C, 0xF8, 0x0D, 
	0x9F, 0x11, 0x79, 0x1B, 0xE5, 0xF9, 0x24, 0xC4, 0x3D, 0x6A, 
	0x13, 0xF5, 0xE3, 0x67, 0x54, 0x86, 0xBD, 0xFF, 0x59, 0x93, 
	0xF4, 0x61, 0x0A, 0xA6, 0xE6, 0x43, 0xC2, 0x70, 0x1A, 0x45, 
	0x2D, 0x19, 0x3C, 0x23, 0x03, 0xA3, 0x06, 0x45, 0xB8, 0xE9, 
	0x71, 0xCC, 0xDD, 0xC2, 0x4D, 0x41, 0xFE, 0xF1, 0x2C, 0x9D, 
	0x73, 0x5F, 0xBC, 0x0B, 0xB3, 0xF0, 0x3A, 0x8C, 0xC2, 0xFC, 
	0x61, 0x24, 0xD3, 0x67, 0x38, 0x42, 0xDD, 0x30, 0x4B, 0xFD, 
	0x11, 0x51, 0xBF, 0x60, 0x93, 0x57, 0x04, 0x30, 0x6B, 0xA1, 
	0x04, 0x30, 0xA1, 0x7D, 0xFF, 0xDE, 0x62, 0x0F, 0xA3, 0xD9, 
	0x5C, 0x51, 0x4B, 0x41, 0x8E, 0xF0, 0x09, 0x61, 0x70, 0x91, 
	0xD3, 0xC7, 0x19, 0x42, 0x9B, 0xBF, 0x6C, 0xF4, 0x87, 0xB3, 
	0xB9, 0x5A, 0x46, 0x11, 0xF7, 0xFF, 0x87, 0xAD, 0x65, 0x18, 
	0x04, 0x24, 0x96, 0x2B, 0x3E, 0xA8, 0x0F, 0x0B, 0x6C, 0x40, 
	0x18, 0xA9, 0x68, 0x47, 0x4E, 0x4A, 0x8A, 0x44, 0xDE, 0xC3, 
	0xBC, 0xA5, 0x3C, 0xDE, 0xA7, 0x61, 0x4E, 0xC6, 0xD3, 0x69, 
	0xAB, 0x22, 0x96, 0x14, 0xD6, 0x00, 0x4B, 0x81, 0xAE, 0x1C, 
	0xE8, 0xCA, 0x8F, 0x2F, 0x3E, 0xFB, 0x05, 0x65, 0x39, 0x50, 
	0xF6, 0xC8, 0xB8, 0x7A, 0xD4, 0x87, 0x33, 0xAC, 0x63, 0xEA, 
	0x78, 0x89, 0x32, 0xE0, 0xD9, 0x86, 0x67, 0x7C, 0x45, 0x67, 
	0xC2, 0x73, 0x0F, 0x12, 0xC5, 0x9E, 0x35, 0x57, 0x2D, 0x61, 
	0x8D, 0x3D, 0x9C, 0xF5, 0x35, 0xB5, 0x0F, 0x4F, 0xCE, 0x70, 
	0xE6, 0xC0, 0x75, 0x0F, 0x9E, 0x7A, 0x30, 0xEF, 0xE0, 0xAB, 
	0x45, 0x78, 0xD6, 0xB5, 0xE1, 0x0C, 0x5F, 0xDC, 0xE8, 0x03, 
	0xEC, 0x20, 0xF4, 0x01, 0xDC, 0x50, 0xF1, 0xBE, 0xA4, 0xDB, 
	0x74, 0x19, 0x3C, 0xC0, 0x4E, 0x83, 0xAE, 0x85, 0x8D, 0x16, 
	0x9D, 0x1A, 0xF0, 0x29, 0x03, 0x77, 0x03, 0x5A, 0x13, 0x9F, 
	0x61, 0xB3, 0x09, 0x7B, 0x91, 0x02, 0x03, 0x48, 0xB3, 0x81, 
	0x04, 0x3A, 0x6E, 0xD2, 0x71, 0x9B, 0x52, 0x0C, 0xA4, 0x39, 
	0x3D, 0x9B, 0x8D, 0xDB, 0x74, 0x1C, 0xBA, 0xF0, 0x4C, 0x89, 
	0x83, 0x45, 0x7D, 0x78, 0x06, 0x2C, 0x76, 0x1F, 0x08, 0xC5, 
	0x35, 0x7D, 0x80, 0x4F, 0x37, 0x02, 0x46, 0xDB, 0x34, 0x81, 
	0x4F, 0xC4, 0x68, 0x41, 0x9A, 0x0C, 0x2B, 0x4D, 0xC0, 0x68, 
	0xE8, 0xF8, 0xA6, 0xB5, 0x07, 0x1D, 0x40, 0x09, 0x0F, 0x40, 
	0x86, 0x0E, 0x1D, 0x14, 0x07, 0x7D, 0xB3, 0x84, 0x5B, 0x00, 
	0xA9, 0xAD, 0xE1, 0x0B, 0x5E, 0x03, 0x3A, 0x7D, 0x9C, 0x01, 
	0xCA, 0x90, 0x21, 0x73, 0x80, 0xCC, 0x83, 0xC0, 0x10, 0x28, 
	0x48, 0x12, 0xC7, 0x6C, 0x78, 0xB6, 0x90, 0x0F, 0xA4, 0xD1, 
	0x46, 0x0C, 0xD0, 0xB1, 0x68, 0x07, 0xE0, 0x98, 0xBD, 0x1E, 
	0x0C, 0x62, 0x07, 0x28, 0xEE, 0xDB, 0xBA, 0x6A, 0x3A, 0x80, 
	0xCE, 0x81, 0x3D, 0x00, 0x10, 0x30, 0x00, 0xEF, 0x8E, 0xCE, 
	0x3A, 0x86, 0x01, 0xE8, 0x7A, 0x30, 0x33, 0xE0, 0x52, 0xC7, 
	0x71, 0x10, 0x3B, 0x0A, 0xBA, 0x87, 0xAA, 0x33, 0x80, 0x0B, 
	0x78, 0xEE, 0x23, 0x42, 0xC8, 0xEE, 0x0D, 0xA4, 0xB5, 0x0F, 
	0x8B, 0xFA, 0x3D, 0x43, 0xB5, 0xFA, 0xCE, 0xFC, 0xC9, 0xCD, 
	0xEE, 0xC3, 0xDC, 0x5F, 0x82, 0x69, 0xF9, 0x18, 0x5C, 0xAC, 
	0xB9, 0xF2, 0x18, 0x90, 0x85, 0xB7, 0x8E, 0xF2, 0x21, 0xC4, 
	0x93, 0x78, 0x56, 0x8E, 0xCF, 0x67, 0xFA, 0x5C, 0x61, 0x21, 
	0x93, 0xA6, 0x36, 0x72, 0x8A, 0x57, 0x65, 0xF5, 0xF1, 0xDB, 
	0x90, 0x2F, 0xD1, 0xE7, 0x9D, 0xDA, 0x72, 0x6D, 0x7E, 0x64, 
	0xA8, 0x0F, 0xC5, 0xAC, 0xD1, 0x98, 0xD5, 0x71, 0x36, 0xFD, 
	0x36, 0x84, 0x4B, 0x48, 0xFA, 0x80, 0xBF, 0x2C, 0x41, 0x68, 
	0x40, 0x50, 0x97, 0x34, 0x7B, 0x1F, 0x36, 0xB6, 0x3E, 0xF1, 
	0x88, 0x27, 0x92, 0xE3, 0x87, 0x29, 0x4D, 0xAC, 0x1F, 0x7D, 
	0x81, 0x22, 0xD5, 0x17, 0x08, 0x50, 0xD3, 0x26, 0xF8, 0x23, 
	0x03, 0x92, 0x3D, 0x2E, 0x00, 0x4C, 0xAA, 0x68, 0xDE, 0xCB, 
	0x73, 0xD3, 0x14, 0x73, 0x2E, 0x0C, 0x17, 0xA5, 0x5C, 0x7C, 
	0x0F, 0x50, 0x82, 0x2D, 0xD7, 0x57, 0x4E, 0x5B, 0x3B, 0xC5, 
	0xD1, 0x6A, 0xA0, 0xEB, 0x98, 0x9A, 0xD2, 0x90, 0x49, 0x53, 
	0xC2, 0x1D, 0x9B, 0x2E, 0xF9, 0xA1, 0x60, 0x00, 0xD4, 0x0E, 
	0xD9, 0x00, 0x04, 0x3C, 0x63, 0x80, 0x76, 0xF7, 0x1A, 0x72, 
	0xCC, 0xAF, 0x2E, 0x25, 0x1B, 0x9C, 0x88, 0xB5, 0x06, 0x6F, 
	0xAD, 0xFD, 0xD9, 0x68, 0x0A, 0xCD, 0xAC, 0x71, 0xE0, 0x18, 
	0x5D, 0x9B, 0xD3, 0x08, 0x09, 0x52, 0x41, 0x94, 0x6E, 0xD8, 
	0xDB, 0xA8, 0xD0, 0x39, 0x76, 0x93, 0xB7, 0xF6, 0xFE, 0x54, 
	0x50, 0x3C, 0x02, 0xE2, 0x76, 0xD3, 0x9C, 0x4C, 0xE0, 0xBC, 
	0x20, 0xC4, 0xB0, 0x4B, 0x42, 0xB4, 0xAD, 0xE2, 0xE8, 0xED, 
	0x8F, 0xD8, 0x00, 0x1D, 0x3C, 0x87, 0xD7, 0xEA, 0xF4, 0xFA, 
	0xA5, 0x08, 0x2C, 0xA3, 0x12, 0x81, 0xDD, 0xDB, 0x86, 0x79, 
	0xB0, 0x03, 0xF3, 0x5E, 0xF6, 0xAB, 0xF7, 0xFA, 0x1C, 0xA6, 
	0xFA, 0x4F, 0xA0, 0x68, 0xCE, 0xBF, 0x01, 0x8A, 0x69, 0x6D, 
	0x63, 0xAF, 0xFF, 0x4F, 0xD8, 0x1B, 0xF4, 0xB7, 0x80, 0x34, 
	0x77, 0x81, 0xDC, 0xA2, 0x2B, 0xBB, 0xA6, 0xAA, 0x8E, 0x5E, 
	0x5A, 0x44, 0xE5, 0x2E, 0x66, 0x69, 0x10, 0x3B, 0x98, 0xDF, 
	0x04, 0xDB, 0xB6, 0x35, 0xF4, 0xB7, 0xFD, 0x21, 0x8B, 0xE4, 
	0xDB, 0xBB, 0x02, 0xC6, 0x56, 0x89, 0xB4, 0x75, 0xB0, 0xB6, 
	0x86, 0x54, 0xFA, 0x3F, 0x4D, 0x30, 0x96, 0xDC, 0x6B, 0xE4, 
	0x0E, 0xEC, 0x2D, 0x21, 0xC5, 0x10, 0xDC, 0x75, 0xF0, 0x4B, 
	0x38, 0xDA, 0x7A, 0xCD, 0x25, 0x3B, 0x3D, 0x6D, 0x0B, 0x1A, 
	0xBD, 0x57, 0xA1, 0xB1, 0xB6, 0x4A, 0x48, 0xFF, 0x65, 0x9B, 
	0xA1, 0xE2, 0xFA, 0x25, 0x09, 0xE9, 0x0D, 0x09, 0xA1, 0x30, 
	0xFE, 0xED, 0x22, 0xEA, 0xD7, 0x23, 0x96, 0x61, 0xEF, 0x40, 
	0xF3, 0x63, 0x11, 0xFD, 0x44, 0xB8, 0xD6, 0x9B, 0x4E, 0x30, 
	0xA0, 0xE7, 0x89, 0x8D, 0x18, 0xED, 0xD2, 0x68, 0x2B, 0xAB, 
	0xED, 0x5B, 0x3F, 0x2F, 0xBC, 0x7A, 0x48, 0xEC, 0xF4, 0x9C, 
	0xAE, 0xBD, 0x81, 0xC3, 0x10, 0x43, 0xA1, 0xB9, 0x8D, 0x29, 
	0x67, 0x7F, 0xA6, 0xAC, 0x86, 0xBA, 0x7A, 0xFA, 0x06, 0x3E, 
	0x4C, 0xBF, 0x4A, 0x21, 0x1A, 0xBF, 0x10, 0xE0, 0xDA, 0xF8, 
	0x15, 0x90, 0x68, 0x5D, 0x9D, 0xBE, 0xB1, 0x87, 0x71, 0xED, 
	0x07, 0xAB, 0x5D, 0x87, 0xF5, 0x54, 0xE4, 0xE5, 0xFE, 0x88, 
	0x2F, 0x31, 0xE1, 0x52, 0xB0, 0x82, 0xAB, 0x00, 0xD6, 0x30, 
	0x14, 0x7E, 0x27, 0x2D, 0xB3, 0xF3, 0xB0, 0xC8, 0xCE, 0x8B, 
	0x6C, 0x27, 0x27, 0xDF, 0x1A, 0x22, 0xAA, 0x59, 0x9A, 0x65, 
	0xB6, 0x1D, 0xED, 0x3F, 0xC2, 0x0E, 0xFC, 0x14, 0x30, 0x20, 
	0xAB, 0xA0, 0xBB, 0x3A, 0x5E, 0xEC, 0x2F, 0x93, 0x14, 0xEE, 
	0xC3, 0xB7, 0x70, 0xE3, 0x40, 0xC2, 0x79, 0x7D, 0x8C, 0x95, 
	0xD8, 0x16, 0x49, 0x9C, 0x77, 0xEE, 0x59, 0xCD, 0x14, 0xEE, 
	0x7A, 0x49, 0x14, 0x14, 0x83, 0x58, 0x9C, 0x84, 0x21, 0xD3, 
	0x86, 0x0B, 0x9F, 0x9B, 0x76, 0x11, 0x16, 0xBE, 0x56, 0x85, 
	0xEB, 0xCF, 0xC8, 0x87, 0x4B, 0x69, 0x25, 0x9D, 0x94, 0x32, 
	0xF8, 0x3C, 0xB5, 0x9B, 0xA9, 0x62, 0xDB, 0x7A, 0x36, 0x31, 
	0x7A, 0xD9, 0xE8, 0x37, 0x13, 0x22, 0xC8, 0x9A, 0xDA, 0x20, 
	0xF2, 0x4D, 0x5E, 0x38, 0xD9, 0xF8, 0x42, 0xBD, 0xAC, 0xFC, 
	0x15, 0xE5, 0xC5, 0x66, 0xF1, 0xCF, 0x59, 0x61, 0x1D, 0x9D, 
	0x6A, 0xB7, 0x93, 0xA4, 0x01, 0x41, 0x29, 0xB1, 0x25, 0x9B, 
	0x3C, 0xE7, 0x6D, 0xBD, 0xC1, 0xB2, 0x5B, 0xB0, 0x0C, 0x1C, 
	0x07, 0xE1, 0x5D, 0x59, 0x2D, 0x80, 0x5B, 0xF4, 0x13, 0xBD, 
	0x72, 0x13, 0x35, 0x55, 0xF8, 0xD5, 0x9C, 0x15, 0x8B, 0x4C, 
	0xB8, 0x56, 0x63, 0x95, 0x41, 0xA8, 0x0E, 0x1D, 0x1E, 0x63, 
	0xF9, 0x40, 0xA2, 0xF7, 0xC3, 0x51, 0xC5, 0x01, 0xA4, 0x34, 
	0xAB, 0x6F, 0xAE, 0xA0, 0x9C, 0x61, 0x4C, 0x8B, 0x43, 0x2E, 
	0xBE, 0x3F, 0x0B, 0x7D, 0x2F, 0xEA, 0x78, 0x51, 0x78, 0x13, 
	0x0F, 0xF3, 0x64, 0xE5, 0xCA, 0x27, 0x2F, 0x0E, 0xDB, 0x2D, 
	0xA0, 0x4F, 0x69, 0x1F, 0x4A, 0x07, 0xF1, 0x75, 0xB6, 0x72, 
	0xA5, 0xE3, 0x23, 0x04, 0x7B, 0x22, 0x1D, 0x03, 0x61, 0x52, 
	0x18, 0x8C, 0xE4, 0xE8, 0x3A, 0x0A, 0xFE, 0x66, 0xD5, 0x5B, 
	0x89, 0x16, 0x48, 0x70, 0x48, 0x3E, 0x39, 0x6C, 0xD3, 0xDA, 
	0x5A, 0x69, 0x93, 0x4A, 0x5B, 0x3E, 0x3E, 0x82, 0x3D, 0x27, 
	0xB2, 0x9A, 0xC4, 0x51, 0x18, 0x13, 0x66, 0x86, 0xD9, 0x68, 
	0xA3, 0x02, 0x08, 0x00, 0xB1, 0x9C, 0xC6, 0xEB, 0x7F, 0x45, 
	0x8F, 0x95, 0x0C, 0x98, 0xFE, 0x59, 0xC1, 0xA0, 0x04, 0x5D, 
	0x54, 0x06, 0x17, 0x51, 0xE2, 0xE5, 0x43, 0xFA, 0x8E, 0x4D, 
	0x7E, 0xE2, 0xA5, 0x89, 0x4C, 0x51, 0xB3, 0x7A, 0xB1, 0x5A, 
	0x4E, 0xE2, 0xAF, 0xE4, 0x61, 0x8D, 0x2F, 0x0A, 0xE8, 0x45, 
	0xF6, 0x90, 0x32, 0x40, 0x0B, 0x14, 0x87, 0x8A, 0x20, 0x3F, 
	0x4A, 0x7E, 0xBE, 0x0C, 0xB3, 0x2E, 0x45, 0xA7, 0xB8, 0xB2, 
	0xF2, 0x04, 0x20, 0x53, 0xD5, 0xAB, 0xEE, 0xC2, 0x11, 0x38, 
	0x57, 0x74, 0x5C, 0xAB, 0xC3, 0xB9, 0x51, 0xE1, 0x61, 0x9E, 
	0xA8, 0xC0, 0xB2, 0x76, 0xB4, 0x18, 0xCB, 0x2A, 0xAD, 0x73, 
	0x62, 0xE5, 0x30, 0xA7, 0x95, 0xC3, 0x88, 0x11, 0x8B, 0x90, 
	0xD9, 0x55, 0x3C, 0x57, 0x23, 0x8E, 0x8B, 0x42, 0xB8, 0x4E, 
	0x45, 0x00, 0x7E, 0x94, 0xD2, 0x42, 0x89, 0x78, 0x17, 0xA7, 
	0x14, 0x80, 0xB3, 0x07, 0x0C, 0x65, 0x46, 0xEB, 0x07, 0x55, 
	0x41, 0x75, 0x7D, 0x2B, 0x57, 0xD5, 0x54, 0xE8, 0x3C, 0x29, 
	0x6A, 0xD2, 0xB4, 0xAE, 0x2C, 0x7F, 0x85, 0x42, 0x43, 0xCE, 
	0x90, 0x2B, 0x5D, 0x3B, 0x89, 0x28, 0x2B, 0x40, 0x46, 0xA0, 
	0xC6, 0xE4, 0x5E, 0x7A, 0xB7, 0xC2, 0xC2, 0x40, 0x8B, 0x95, 
	0x10, 0xB3, 0xA1, 0x04, 0x74, 0xAB, 0x91, 0xAA, 0xA9, 0x35, 
	0xEE, 0x47, 0xA3, 0xE8, 0xA5, 0x3E, 0xD4, 0x94, 0x2D, 0xA5, 
	0xCB, 0xAA, 0x46, 0x9C, 0xD4, 0xF7, 0xD0, 0x8A, 0x17, 0x51, 
	0x03, 0xDE, 0x26, 0xC0, 0xC6, 0x86, 0xC6, 0xFC, 0x25, 0xBE, 
	0x03, 0xA5, 0x7E, 0x56, 0x40, 0x61, 0xCA, 0x03, 0xB2, 0x0F, 
	0x21, 0x0E, 0xD6, 0xD4, 0xE4, 0x8A, 0xA2, 0x09, 0x57, 0x00, 
	0x0B, 0x6B, 0x9D, 0xA5, 0xA7, 0x88, 0xB2, 0xCC, 0xD3, 0xA8, 
	0xE0, 0x5A, 0xF4, 0x1D, 0x99, 0x7F, 0xD3, 0x16, 0x91, 0x54, 
	0x9A, 0x5C, 0x95, 0xDF, 0x3A, 0xC8, 0x8C, 0x42, 0x6F, 0xB3, 
	0xAC, 0x7C, 0x32, 0xB9, 0x1A, 0x82, 0x6B, 0x5C, 0x9F, 0xB0, 
	0x0A, 0xB3, 0x8A, 0x22, 0xB4, 0x2A, 0x09, 0x6E, 0xA9, 0x73, 
	0x23, 0xEA, 0xC9, 0x15, 0x6A, 0x9F, 0xAB, 0x46, 0x18, 0xA8, 
	0x55, 0xBA, 0x6D, 0xB1, 0xD0, 0x8D, 0x8B, 0xC6, 0x8B, 0x1B, 
	0x08, 0x53, 0xB3, 0x68, 0xBE, 0x51, 0xDF, 0x36, 0x4F, 0xA2, 
	0x97, 0xB2, 0xD4, 0x95, 0x80, 0x33, 0xD9, 0x6D, 0x14, 0xE1, 
	0x8B, 0xEA, 0x37, 0xFF, 0x39, 0x99, 0xAE, 0xAF, 0x63, 0x92, 
	0x4B, 0x97, 0x5E, 0xF6, 0x75, 0xF8, 0x53, 0x84, 0x67, 0x74, 
	0xA3, 0x40, 0xB8, 0x30, 0xF0, 0x63, 0xC2, 0xF5, 0xFD, 0x08, 
	0x47, 0x0D, 0xB2, 0xCA, 0x12, 0xFB, 0x32, 0x56, 0x2C, 0x2E, 
	0x41, 0x9C, 0x63, 0x83, 0xE8, 0xFD, 0xDA, 0xFC, 0x64, 0x04, 
	0xC6, 0x25, 0x0E, 0x1C, 0x8F, 0x74, 0xAB, 0xE6, 0x81, 0x34, 
	0x3A, 0x8A, 0xEA, 0xAD, 0x56, 0xC3, 0x69, 0xC7, 0x55, 0x2A, 
	0x86, 0x53, 0x91, 0x5D, 0x58, 0x7B, 0x1E, 0x0B, 0xF1, 0xA8, 
	0xEA, 0xB3, 0x88, 0xE4, 0x2F, 0x89, 0xFF, 0xF5, 0x3A, 0xF9, 
	0x86, 0x61, 0x8D, 0x17, 0x3E, 0x99, 0x65, 0xC2, 0xC2, 0xC9, 
	0xD5, 0x75, 0x19, 0x58, 0x36, 0xEA, 0x74, 0x2C, 0xB6, 0xD0, 
	0xED, 0x24, 0x78, 0x79, 0xC8, 0x8B, 0x91, 0x87, 0xC3, 0x43, 
	0x56, 0xBF, 0x3B, 0x04, 0x4B, 0xC6, 0xB8, 0x50, 0xAC, 0x40, 
	0xA2, 0x51, 0x80, 0x58, 0xD7, 0x2D, 0x1F, 0xB1, 0xB0, 0x21, 
	0xD2, 0x7F, 0xD7, 0xF4, 0xEA, 0x8A, 0x88, 0x42, 0x37, 0x41, 
	0x08, 0xC9, 0x81, 0xF7, 0x30, 0x94, 0x42, 0x1A, 0x85, 0x3B, 
	0xD7, 0x51, 0xE2, 0x7F, 0x75, 0xA5, 0x8A, 0x30, 0xF4, 0xEC, 
	0xD6, 0x0E, 0x64, 0x2F, 0xE5, 0x6C, 0x99, 0xDC, 0x83, 0x96, 
	0x78, 0x8D, 0x11, 0x82, 0x3A, 0xA5, 0x92, 0xA9, 0x84, 0x2D, 
	0x43, 0xFD, 0xE8, 0x23, 0x41, 0xC6, 0xC6, 0x5C, 0xA1, 0x2A, 
	0xAD, 0xD9, 0xA2, 0xB4, 0x61, 0x6A, 0x77, 0x9B, 0xA6, 0x46, 
	0xA9, 0xFF, 0xBB, 0xA8, 0x36, 0x47, 0x95, 0x06, 0x6A, 0xA3, 
	0xBB, 0x8D, 0xAE, 0x22, 0x3D, 0x6A, 0xEB, 0xD4, 0xEA, 0xEE, 
	0x76, 0x5A, 0x1D, 0x2B, 0x03, 0xD5, 0x69, 0x6C, 0x4D, 0x49, 
	0x1A, 0x7A, 0x91, 0x22, 0xB3, 0x33, 0xF7, 0x4E, 0xAC, 0x4E, 
	0x57, 0x55, 0xF3, 0xB8, 0x48, 0xA8, 0x76, 0x54, 0xC9, 0x63, 
	0x2A, 0x9F, 0xB4, 0xFE, 0x6E, 0x48, 0xFB, 0x6D, 0x04, 0xFB, 
	0xD2, 0xBA, 0x7F, 0x2E, 0xD1, 0x05, 0x5D, 0x96, 0xCC, 0x6D, 
	0x09, 0xE4, 0x24, 0x8A, 0x6E, 0x42, 0xFF, 0xEF, 0xF2, 0x85, 
	0x13, 0xFD, 0x8D, 0x0B, 0x2F, 0xDC, 0x31, 0x5B, 0xC4, 0xCE, 
	0xA1, 0x8C, 0x35, 0x5F, 0x3A, 0x3B, 0x9F, 0xD1, 0x69, 0x6C, 
	0x62, 0x6C, 0xB4, 0xF9, 0xA8, 0xF5, 0xCC, 0xE4, 0x81, 0x6E, 
	0x2B, 0xDF, 0x85, 0x93, 0xF0, 0x44, 0x7B, 0xA9, 0x3B, 0x10, 
	0xE3, 0x5D, 0xB9, 0x38, 0xB7, 0xFC, 0xE2, 0x55, 0x92, 0x70, 
	0x4C, 0x78, 0xF8, 0xF1, 0x8C, 0x06, 0x7F, 0x9F, 0x7D, 0x2F, 
	0x11, 0x43, 0x4F, 0x77, 0x6A, 0x03, 0x68, 0x66, 0xDA, 0x50, 
	0x57, 0xB6, 0xC0, 0x4C, 0x52, 0xA9, 0x95, 0xE1, 0xF7, 0x5E, 
	0xF8, 0x1D, 0xCC, 0x2F, 0x82, 0xA6, 0xA7, 0x13, 0x3D, 0x3C, 
	0xC3, 0xED, 0x32, 0x06, 0xFD, 0xED, 0x16, 0xF1, 0x96, 0xC9, 
	0x42, 0x08, 0xA1, 0xE2, 0x52, 0x78, 0x09, 0x25, 0x16, 0xF3, 
	0xB1, 0xAE, 0x17, 0x04, 0x2D, 0x91, 0x7E, 0x38, 0xBF, 0x64, 
	0xE1, 0x95, 0x91, 0x37, 0x9A, 0x81, 0x80, 0x20, 0x7D, 0x01, 
	0x47, 0xC8, 0x1A, 0x81, 0x2E, 0x03, 0xA7, 0xA8, 0x67, 0x19, 
	0xFC, 0xCB, 0xFF, 0x59, 0x36, 0x17, 0x33, 0x0D, 0xE6, 0x79, 
	0x7C, 0x02, 0x42, 0x2B, 0xEA, 0x0B, 0x13, 0x23, 0x82, 0x4F, 
	0xDF, 0xBF, 0x6B, 0xD4, 0x11, 0x6B, 0xD3, 0xCC, 0x5A, 0x83, 
	0xD1, 0x0F, 0x85, 0x57, 0x7F, 0x59, 0x44, 0xA5, 0xA7, 0x94, 
	0x7E, 0x9D, 0x51, 0x4C, 0xF5, 0x79, 0x7D, 0xCE, 0x8F, 0x7F, 
	0x37, 0xC0, 0xD7, 0xBB, 0xA3, 0x99, 0xB8, 0x56, 0x8D, 0xE6, 
	0x54, 0xA3, 0xA1, 0xA8, 0xD1, 0x6A, 0x01, 0x5C, 0x74, 0x64, 
	0x8C, 0x3C, 0x75, 0x6A, 0x21, 0x3C, 0x8B, 0x30, 0x58, 0xB6, 
	0x04, 0x8A, 0x0F, 0x40, 0x85, 0x41, 0xFA, 0x29, 0x9A, 0x7E, 
	0x66, 0x1E, 0xA8, 0x7A, 0x34, 0x12, 0x62, 0x61, 0x59, 0x0D, 
	0x77, 0x27, 0x0F, 0x74, 0x4B, 0xE3, 0x8D, 0x54, 0x4C, 0xDF, 
	0x48, 0x29, 0xA2, 0x63, 0xE3, 0xA2, 0x2D, 0x8E, 0xBD, 0x5D, 
	0xFD, 0x8A, 0xEA, 0x8F, 0xD2, 0x2E, 0x53, 0x7A, 0x36, 0x4B, 
	0xBB, 0xCC, 0x9C, 0x48, 0x30, 0x89, 0x03, 0xF2, 0x6D, 0xCE, 
	0x3C, 0xA6, 0xB8, 0x8F, 0xFD, 0x0D, 0xA8, 0x9E, 0x7D, 0x93, 
	0x54, 0x0E, 0x17, 0x6F, 0x66, 0x44, 0xF9, 0x8A, 0x93, 0xD0, 
	0xDD, 0x98, 0x47, 0x3F, 0x06, 0x95, 0xF9, 0xA8, 0xF8, 0x56, 
	0x49, 0xF2, 0xB6, 0xA0, 0xA0, 0x1C, 0x1C, 0x3C, 0x3F, 0x5F, 
	0x77, 0x74, 0xB5, 0xA9, 0x65, 0x1F, 0x7E, 0x5C, 0xE6, 0x42, 
	0x3B, 0x62, 0x5E, 0x2B, 0x86, 0x4B, 0x03, 0xB8, 0xC0, 0xC1, 
	0xC1, 0x6F, 0x61, 0x15, 0xE3, 0x0E, 0x0E, 0xA8, 0x01, 0xEC, 
	0xFF, 0xBA, 0x90, 0x82, 0xF9, 0xD1, 0x2B, 0x43, 0xB5, 0x7A, 
	0x51, 0xA8, 0xD6, 0x8C, 0x02, 0x25, 0xA1, 0x22, 0xAD, 0x4D, 
	0xED, 0xB2, 0x05, 0x10, 0xB7, 0xC0, 0x69, 0x1F, 0xC5, 0x37, 
	0x9C, 0x1B, 0x6F, 0x59, 0xD3, 0x7A, 0xE2, 0x20, 0x64, 0x27, 
	0xBB, 0x9C, 0x16, 0x1C, 0xD2, 0xAF, 0x7B, 0x09, 0x7B, 0x7D, 
	0x19, 0x8F, 0x0C, 0x37, 0x16, 0x9C, 0x18, 0x2E, 0xBA, 0xC5, 
	0xB6, 0x78, 0xC3, 0x8F, 0x43, 0x94, 0x34, 0x23, 0x2D, 0xDA, 
	0x1E, 0xA5, 0x80, 0xD2, 0x86, 0xD6, 0xD2, 0x66, 0xAC, 0xDA, 
	0xBD, 0xE4, 0xF9, 0x33, 0x21, 0xAD, 0xA2, 0xFF, 0xA8, 0x8A, 
	0xFA, 0xEE, 0xB6, 0x57, 0xF4, 0xC5, 0x2D, 0x2B, 0x62, 0xE9, 
	0x47, 0x30, 0x3A, 0x4D, 0x53, 0xEF, 0xA1, 0x1B, 0x66, 0xB4, 
	0xDD, 0xE4, 0x08, 0xAE, 0x1D, 0xC1, 0xCB, 0xE6, 0x28, 0x88, 
	0x68, 0xD8, 0x1C, 0x53, 0xEF, 0x46, 0x9D, 0xA4, 0xA3, 0xE3, 
	0xC1, 0x89, 0xF7, 0x66, 0xFC, 0x10, 0x78, 0x34, 0x42, 0x13, 
	0x48, 0x16, 0x52, 0x52, 0x06, 0xC6, 0x0B, 0xD0, 0xC1, 0xC5, 
	0x71, 0x73, 0x6F, 0x21, 0xD6, 0x0B, 0x96, 0x57, 0x44, 0x8D, 
	0x80, 0x53, 0xC7, 0x7D, 0x31, 0x57, 0x2F, 0x7E, 0x74, 0x92, 
	0xA4, 0x8D, 0x1E, 0x3A, 0xDF, 0xE8, 0x82, 0xDF, 0x73, 0x30, 
	0x6F, 0xA0, 0x8A, 0xFA, 0x3C, 0x82, 0xA8, 0xB7, 0x41, 0xEC, 
	0x06, 0xC2, 0x1D, 0xD4, 0x76, 0x74, 0x96, 0x6A, 0xED, 0xBB, 
	0x78, 0x53, 0x8A, 0xBB, 0xD7, 0xD2, 0xC8, 0x0A, 0x39, 0x8E, 
	0xBA, 0xC2, 0x5A, 0xD0, 0xA2, 0xA5, 0x9D, 0x24, 0x07, 0x07, 
	0xFC, 0xDB, 0xD1, 0xD9, 0xDD, 0xBC, 0x21, 0xCE, 0x6A, 0xE2, 
	0x39, 0x41, 0x7E, 0x6E, 0x57, 0xEB, 0xFE, 0xB1, 0x10, 0x81, 
	0xB0, 0x8B, 0x36, 0x55, 0x76, 0x72, 0xA2, 0x7D, 0xFF, 0x1E, 
	0x6C, 0x91, 0x04, 0xA4, 0xF5, 0x1B, 0x63, 0xBA, 0x48, 0xFA, 
	0x76, 0xBB, 0x42, 0x86, 0x46, 0xAD, 0x2D, 0x73, 0xFA, 0x7C, 
	0x98, 0x28, 0x3B, 0x38, 0xBB, 0xF8, 0x77, 0x71, 0x13, 0x08, 
	0xF4, 0x25, 0x27, 0x23, 0xED, 0xA5, 0x31, 0xD4, 0x77, 0x1B, 
	0x2C, 0x98, 0xFB, 0xBE, 0x26, 0xBB, 0xFA, 0x25, 0xFA, 0x56, 
	0x05, 0x7D, 0xED, 0xF6, 0xD3, 0x13, 0x2D, 0x9F, 0x3E, 0x89, 
	0xDF, 0x36, 0x15, 0x6F, 0xFA, 0x1F, 0x8B, 0x9A, 0x02, 0xFD, 
	0x00, 0x49, 0x8C, 0x7E, 0xD7, 0x49, 0xF0, 0xF0, 0x48, 0x4B, 
	0x47, 0x0B, 0xEF, 0x36, 0x8C, 0x1E, 0x86, 0xA7, 0x98, 0x1E, 
	0xAB, 0x17, 0x10, 0x6B, 0x08, 0xD6, 0x8E, 0xD4, 0xCC, 0x8B, 
	0xB3, 0x4E, 0x06, 0x49, 0xF3, 0xC2, 0xED, 0xDC, 0x93, 0xEB, 
	0xAF, 0x61, 0xDE, 0x59, 0xA5, 0x58, 0x03, 0xF3, 0xF1, 0x0B, 
	0xE2, 0x8E, 0x17, 0x7C, 0x59, 0x67, 0xF9, 0x90, 0x7C, 0xF3, 
	0xFC, 0xDC, 0x7D, 0xC2, 0x32, 0x5A, 0x2D, 0xFF, 0x5D, 0x9A, 
	0xD2, 0xA3, 0x74, 0x4D, 0xCB, 0x65, 0x43, 0xE9, 0x85, 0x49, 
	0xFF, 0x48, 0x59, 0x12, 0x85, 0x81, 0xA4, 0x43, 0x56, 0x2F, 
	0xAD, 0x20, 0x9F, 0x02, 0xE7, 0x1A, 0xDA, 0xD8, 0xB9, 0xF5, 
	0xD2, 0x9B, 0x30, 0x1E, 0x4A, 0x86, 0x2D, 0x69, 0x12, 0xFC, 
	0x73, 0x25, 0xFC, 0x26, 0xFC, 0x26, 0x4D, 0xD6, 0x71, 0xC0, 
	0xD0, 0x0D, 0x5F, 0x5C, 0x0F, 0xF0, 0xAF, 0xCB, 0x61, 0x76, 
	0x52, 0x2F, 0x08, 0xD7, 0x19, 0xDB, 0xBE, 0x89, 0xBD, 0x1B, 
	0x5D, 0x4B, 0x8F, 0x05, 0x76, 0xC0, 0xC7, 0x31, 0xE3, 0xC7, 
	0x7D, 0xF0, 0xA7, 0x09, 0xC4, 0x44, 0x20, 0x1B, 0x18, 0xA5, 
	0x17, 0x84, 0xFE, 0xA9, 0x68, 0x05, 0xD2, 0xE8, 0xDF, 0x8A, 
	0xE0, 0x62, 0x60, 0xC7, 0x45, 0x8C, 0x55, 0x56, 0x69, 0x09, 
	0xCE, 0x27, 0xF8, 0xB9, 0x23, 0xEC, 0x0C, 0x63, 0x56, 0x58, 
	0x84, 0xCD, 0x78, 0xBD, 0xD9, 0x42, 0x3B, 0x5E, 0xAF, 0x51, 
	0x78, 0x1B, 0x22, 0xF0, 0x02, 0x7F, 0x11, 0xF4, 0xB7, 0xF2, 
	0xBB, 0x18, 0xC3, 0x0E, 0x56, 0x33, 0x8B, 0xC8, 0x22, 0x77, 
	0x2B, 0xD1, 0x0F, 0xE8, 0x9F, 0x6D, 0xA2, 0x37, 0xB6, 0xB2, 
	0x5D, 0x72, 0xBD, 0x45, 0x46, 0xDB, 0x88, 0x8D, 0x52, 0xC0, 
	0xEC, 0x47, 0xC4, 0x4B, 0x39, 0xE6, 0x27, 0x69, 0x2B, 0x79, 
	0x4B, 0x0B, 0xD6, 0x95, 0x8A, 0xA6, 0xD0, 0x36, 0x17, 0xBE, 
	0x40, 0x13, 0x2E, 0xD7, 0x75, 0xF2, 0x64, 0x05, 0xEA, 0xA3, 
	0x5F, 0x07, 0x6E, 0x59, 0xBC, 0x34, 0x90, 0xE7, 0xB2, 0x16, 
	0x2A, 0x59, 0xB8, 0x4E, 0x94, 0xB9, 0x54, 0x0A, 0xBD, 0x40, 
	0xAB, 0x81, 0x7D, 0x01, 0x3C, 0xB4, 0xB0, 0x42, 0x0A, 0xBA, 
	0xBD, 0x5D, 0x0C, 0x1A, 0xB1, 0x82, 0x6B, 0xCB, 0x95, 0x58, 
	0xF7, 0x1E, 0xFF, 0x93, 0xD4, 0xBE, 0xC6, 0x97, 0x9D, 0xAD, 
	0x73, 0xE9, 0x71, 0xC5, 0xFF, 0xFF, 0xCB, 0x50, 0x5A, 0x84, 
	0xDF, 0x48, 0x80, 0x9B, 0xF1, 0xAB, 0xE4, 0xA1, 0x44, 0xC9, 
	0xA4, 0x95, 0x4D, 0xFE, 0xBC, 0xC5, 0xF4, 0xAC, 0xF1, 0xE9, 
	0x6B, 0x5B, 0x2B, 0xB0, 0x4B, 0x1C, 0x7D, 0x69, 0x88, 0x3A, 
	0xEC, 0x93, 0x18, 0xE5, 0xDB, 0xF8, 0xA5, 0x63, 0x01, 0xFE, 
	0xF7, 0x47, 0x8F, 0x51, 0x10, 0x27, 0x31, 0x6C, 0xDF, 0x61, 
	0xA5, 0x85, 0x74, 0x2C, 0x80, 0x49, 0x15, 0xC3, 0xBF, 0xD1, 
	0x95, 0xF8, 0x37, 0xBA, 0x4D, 0xB6, 0x71, 0xE1, 0x36, 0xBB, 
	0xC5, 0x2F, 0xE9, 0x1E, 0x85, 0xDA, 0x03, 0xAB, 0x2B, 0x80, 
	0xE6, 0xBA, 0x24, 0xC8, 0x1F, 0x85, 0x82, 0xAE, 0x5B, 0x31, 
	0x0C, 0xAC, 0x2E, 0x16, 0x0B, 0xB7, 0x60, 0x4C, 0x93, 0x0C, 
	0xD0, 0x90, 0xE1, 0x72, 0x92, 0x8A, 0xEE, 0x36, 0x77, 0x65, 
	0xF6, 0x2D, 0xF8, 0x36, 0x33, 0xF4, 0x6D, 0xAA, 0xE4, 0x7E, 
	0xB3, 0xCD, 0x6D, 0x56, 0xD2, 0x63, 0x21, 0xF2, 0x62, 0xBF, 
	0x60, 0x51, 0xFA, 0x76, 0x0F, 0xFD, 0xCF, 0x5B, 0x12, 0x84, 
	0x9E, 0x44, 0xA3, 0x21, 0x98, 0x20, 0xD7, 0x77, 0x29, 0x5D, 
	0x14, 0xB6, 0xF4, 0x5B, 0x78, 0xBB, 0x4A, 0xD2, 0xDC, 0x8B, 
	0x21, 0x38, 0x3E, 0xC9, 0xEC, 0x8E, 0x8A, 0x9F, 0xA4, 0x75, 
	0x74, 0xF6, 0x69, 0x1A, 0xE6, 0x43, 0xF4, 0xB3, 0x2C, 0xF7, 
	0xFF, 0x00, 0x0B, 0x43, 0xF4, 0xD0, 0x3A, 0x42, 0x00, 0x00, 
};

	// Default Controller Configuration (len=278)
static const uint8_t defaultControllerConfig[] PROGMEM = {
		
	0x01, 0x04, 0x06, 0x05, 0x61, 0x02, 0x00, 0x01, 0x00, 0x06, 
	0x05, 0x61, 0x02, 0x00, 0x02, 0x00, 0x06, 0x05, 0x61, 0x02, 
	0x00, 0x03, 0x00, 0x06, 0x05, 0x61, 0x02, 0x00, 0x04, 0x00, 
	0x06, 0x05, 0x61, 0x02, 0x00, 0x05, 0x00, 0x06, 0x05, 0x61, 
	0x02, 0x00, 0x06, 0x00, 0x06, 0x05, 0x61, 0x02, 0x00, 0x07, 
	0x00, 0x06, 0x05, 0x61, 0x02, 0x00, 0x08, 0x00, 0x04, 0x03, 
	0x21, 0x0E, 0x00, 0x06, 0x05, 0x61, 0x04, 0x00, 0x00, 0x00, 
	0x04, 0x03, 0x21, 0x0F, 0x00, 0x04, 0x03, 0x21, 0x10, 0x00, 
	0x03, 0x02, 0x00, 0x00, 0x04, 0x03, 0x21, 0x12, 0x00, 0x11, 
	0x10, 0x61, 0x13, 0x01, 0x00, 0x00, 0x61, 0x16, 0x19, 0x00, 
	0x00, 0x21, 0x17, 0x19, 0x21, 0x18, 0x19, 0x04, 0x03, 0x21, 
	0x17, 0x19, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 
	0x04, 0x03, 0x21, 0x19, 0x19, 0x04, 0x03, 0x21, 0x19, 0x19, 
	0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 
	0x00, 0x00, 0x12, 0x11, 0x61, 0x03, 0x00, 0x00, 0x00, 0x61, 
	0x03, 0x01, 0x00, 0x00, 0x61, 0x0A, 0x00, 0x01, 0x00, 0x0F, 
	0x06, 0x05, 0x04, 0x41, 0x2A, 0x01, 0x00, 0x04, 0x03, 0x21, 
	0x2B, 0x01, 0x05, 0x04, 0x41, 0x2A, 0x02, 0x00, 0x04, 0x03, 
	0x21, 0x2B, 0x02, 0x05, 0x04, 0x41, 0x2A, 0x03, 0x00, 0x04, 
	0x03, 0x21, 0x2B, 0x03, 0x05, 0x04, 0x41, 0x2A, 0x04, 0x00, 
	0x04, 0x03, 0x21, 0x2B, 0x04, 0x06, 0x05, 0x61, 0x00, 0x00, 
	0x01, 0x01, 0x06, 0x05, 0x61, 0x00, 0x00, 0x02, 0x01, 0x06, 
	0x05, 0x61, 0x00, 0x00, 0x03, 0x01, 0x06, 0x05, 0x61, 0x00, 
	0x00, 0x04, 0x01, 0x06, 0x05, 0x61, 0x00, 0x00, 0x05, 0x01, 
	0x06, 0x05, 0x61, 0x00, 0x00, 0x06, 0x01, 0x06, 0x05, 0x61, 
	0x00, 0x00, 0x07, 0x01, 0x06, 0x05, 0x61, 0x00, 0x00, 0x08, 
	0x01, 0xFF, 0xC0, 0xA8, 0x0A, 0x63, 0xFF, 0xFF, 0xFF, 0x00, 
	0x05, 0x01, 0xC0, 0xA8, 0x0A, 0xF0, 0x00, 0x00, 
};

#endif


SkaarhojBI8 buttons;
SkaarhojBI8 buttons2;
#define SK_HWEN_SLIDER 1
#define SK_HWEN_ACM 1
#define SK_HWEN_SSWMENU 1
#define SK_HWEN_MENU 1
#define SK_HWEN_GPIO 1