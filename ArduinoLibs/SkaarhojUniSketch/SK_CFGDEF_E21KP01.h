#ifndef SK_CUSTOM
		
	// Define number of each supported device we want to talk to:
#define SK_DEVICES_ATEM 1

#define SK_DEVICES 1		
		

#define SK_HWCCOUNT 13	
			

#define SK_MAXACTIONS 13	
			

	// Define the relation between a device index in the configuration and which device type it is.
	// There must be an exact match between the listed devices here and the defined number of devices just above
	// The order in the list below correspondance to the JavaScript based listing inside "JSscriptData" (variable "devLst")
	// This is how the arduino code will know, what a given device index means
static const uint8_t deviceArray[] PROGMEM = {0,SK_DEV_ATEM};

		// SVG drawing of the unit
static const unsigned char htmlSVG[] PROGMEM = "<svg viewBox=\"0 0 1264 814\" width=\"70%\" id=\"ctrlimg\"><defs><linearGradient id=\"grad1\" x1=\"0%\" y1=\"0%\" x2=\"0%\" y2=\"100%\"><stop offset=\"0%\" style=\"stop-color:rgb(0,0,208);stop-opacity:1\" /><stop offset=\"40%\" style=\"stop-color:rgb(0,0,150);stop-opacity:1\" /><stop offset=\"100%\" style=\"stop-color:rgb(0,0,190);stop-opacity:1\" /></linearGradient></defs><rect width=\"1184\" height=\"780\" x=40 y=17 style=\"fill:url(#grad1);\" /><rect width=\"1184\" height=\"10\" x=40 y=85 style=\"fill:rgb(0,0,100);\" /><rect width=\"1184\" height=\"10\" x=40 y=729 style=\"fill:rgb(0,0,100);\" /><rect width=\"90\" height=\"814\" x=0 y=0 rx=\"30\" ry=\"30\" style=\"fill:rgb(0,0,0);\" /><rect width=\"90\" height=\"814\" x=1174 y=0 rx=\"30\" ry=\"30\" style=\"fill:rgb(0,0,0);\" /></svg>";

	// JavaScript generic code (script.min.js) + configuration data for controller / devices. GZIP'ed
	// Orig size: 16192, GZIP size: 5349 
static const unsigned char JSscriptData[] PROGMEM = {
	
	0x1F, 0x8B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0xB5, 0x3B, 0xFB, 0x73, 0x9B, 0x48, 0x93, 0xBF, 0x7F, 0x7F, 
	0x05, 0x4B, 0x6A, 0x6D, 0x71, 0x42, 0x32, 0x0F, 0x21, 0xC9, 
	0xC2, 0x72, 0xCE, 0x76, 0x92, 0xB5, 0x6B, 0xE3, 0x8D, 0x6B, 
	0x95, 0xC7, 0xDE, 0xA9, 0x54, 0x5B, 0x18, 0x46, 0x16, 0x09, 
	0x06, 0x1D, 0x20, 0x3B, 0x3E, 0xC7, 0xFF, 0xFB, 0x75, 0xF7, 
	0x0C, 0x68, 0x40, 0xC8, 0x51, 0xB2, 0xDF, 0x25, 0x15, 0x0D, 
	0xF3, 0xEA, 0x77, 0xF7, 0xF4, 0x34, 0xE4, 0xCE, 0x4B, 0x95, 
	0xF3, 0x4F, 0xFE, 0x78, 0x3A, 0x35, 0x75, 0xCB, 0x1C, 0xEA, 
	0x8E, 0xD5, 0xD3, 0x55, 0x53, 0xD5, 0xAD, 0x99, 0x0E, 0x23, 
	0xF6, 0xC0, 0xE4, 0x23, 0x56, 0x31, 0xE2, 0x58, 0x0E, 0x1F, 
	0xB1, 0x8B, 0x91, 0xFE, 0xE0, 0x90, 0x8F, 0xF4, 0x8A, 0x91, 
	0xA1, 0x6D, 0xF1, 0x11, 0xA7, 0x18, 0x31, 0x0D, 0xC7, 0xE6, 
	0x43, 0x67, 0x1F, 0xDE, 0x7F, 0x3B, 0xF9, 0xF0, 0xFE, 0x5D, 
	0x31, 0x83, 0x38, 0x6D, 0xCB, 0xD2, 0xD5, 0x13, 0x19, 0x27, 
	0x8D, 0x9C, 0xCA, 0x38, 0x69, 0xE4, 0x4C, 0xC6, 0x49, 0x23, 
	0xAF, 0xF8, 0x88, 0x8D, 0x28, 0x8C, 0xA1, 0x6E, 0x0D, 0x1D, 
	0x18, 0x0B, 0xB3, 0x65, 0xE4, 0x3D, 0xA8, 0xBA, 0x6D, 0xF0, 
	0xA9, 0x43, 0xA7, 0x98, 0x01, 0xC6, 0x06, 0x46, 0xB1, 0xBE, 
	0x1C, 0xB5, 0x68, 0x74, 0xE6, 0xFE, 0xEB, 0x0E, 0x84, 0x11, 
	0xB0, 0xBB, 0xB7, 0x59, 0x4E, 0xF2, 0x50, 0x4F, 0xDE, 0xBF, 
	0xBE, 0x54, 0x75, 0x13, 0x51, 0xC2, 0xBA, 0xC9, 0x43, 0x96, 
	0xB3, 0x5B, 0x55, 0x5A, 0xF8, 0x66, 0x15, 0xA3, 0xE4, 0xA6, 
	0x26, 0xAC, 0xBD, 0x4A, 0x93, 0x9B, 0xD4, 0xBB, 0x55, 0x26, 
	0xA9, 0xAF, 0xEA, 0x1D, 0x53, 0xEF, 0x58, 0xFA, 0x54, 0x55, 
	0x75, 0xF5, 0x3C, 0x89, 0x02, 0xE5, 0x55, 0x72, 0x1F, 0xC3, 
	0xF3, 0xFB, 0xE4, 0xE6, 0x26, 0x62, 0xF0, 0x70, 0xF6, 0xE0, 
	0x43, 0x3B, 0x43, 0xC0, 0xB4, 0x95, 0xDD, 0x85, 0xEC, 0x7E, 
	0x63, 0x6B, 0x7D, 0xD5, 0xDD, 0xC1, 0x55, 0x7A, 0xF3, 0x9D, 
	0x55, 0x27, 0x1F, 0xFE, 0x52, 0xDE, 0xAD, 0xF2, 0xE5, 0x2A, 
	0x17, 0x0B, 0xED, 0xE7, 0x29, 0xA1, 0xC1, 0xDF, 0xD2, 0x64, 
	0xB5, 0x54, 0x4E, 0xAA, 0xDD, 0xD3, 0x0D, 0xD8, 0x1F, 0x96, 
	0x59, 0x9E, 0x32, 0xE0, 0xF1, 0x77, 0xF6, 0xC0, 0x52, 0x4E, 
	0x44, 0x4F, 0xEF, 0x38, 0x8D, 0xD3, 0xCA, 0x9B, 0x30, 0x8A, 
	0xCA, 0x35, 0x56, 0xF3, 0x1A, 0xF8, 0xDD, 0x58, 0x82, 0x14, 
	0xD6, 0xF0, 0xF4, 0xD7, 0x48, 0xEA, 0xB3, 0x05, 0x9A, 0xFE, 
	0x76, 0x00, 0x02, 0x8B, 0xB4, 0xE2, 0xF2, 0x4A, 0x99, 0xE4, 
	0x7C, 0xDF, 0x80, 0x4C, 0x0E, 0x27, 0x76, 0x51, 0x96, 0x35, 
	0xD4, 0xD5, 0x56, 0xB1, 0x5B, 0xA1, 0x09, 0x6D, 0x0D, 0x04, 
	0x4C, 0x24, 0xF7, 0xD2, 0x5C, 0x9D, 0x15, 0xDD, 0xD7, 0x71, 
	0x80, 0x1D, 0x43, 0x37, 0x2D, 0x03, 0x54, 0xB3, 0xCA, 0x13, 
	0xE5, 0x22, 0xCE, 0x59, 0x7A, 0xE7, 0x45, 0xAA, 0xC0, 0xF8, 
	0xA7, 0x17, 0x07, 0xC9, 0x2D, 0xF5, 0x4A, 0x84, 0xEF, 0x10, 
	0xFD, 0xBB, 0xF9, 0xBC, 0x42, 0x50, 0x05, 0xFF, 0x59, 0x14, 
	0x2E, 0x39, 0x62, 0xAB, 0x32, 0x9C, 0xC4, 0x79, 0x9A, 0x44, 
	0x7C, 0xA6, 0x33, 0x14, 0xDC, 0x9E, 0xAD, 0x72, 0x14, 0x72, 
	0x61, 0x20, 0x40, 0x85, 0xD4, 0x7D, 0xF3, 0xFE, 0x54, 0xEA, 
	0xBD, 0x4F, 0xBD, 0x38, 0x0B, 0xF3, 0x30, 0x89, 0x81, 0xC5, 
	0x07, 0x24, 0x06, 0x95, 0x73, 0x48, 0x38, 0x2A, 0xB3, 0x57, 
	0x49, 0x26, 0x6D, 0xBB, 0x02, 0x77, 0x53, 0x2E, 0x3D, 0x3F, 
	0x05, 0xC8, 0xE4, 0xED, 0xC8, 0xCE, 0x15, 0xF9, 0x20, 0x88, 
	0x24, 0x59, 0x6E, 0x18, 0x9C, 0x10, 0xB1, 0x90, 0x2C, 0x97, 
	0xC4, 0xDB, 0x04, 0x16, 0xAE, 0xB9, 0xFC, 0x93, 0xF9, 0x49, 
	0x1A, 0x70, 0xA8, 0x1A, 0x81, 0xB5, 0x8C, 0xF5, 0xEC, 0x24, 
	0x59, 0xA5, 0x3E, 0x2B, 0x35, 0x30, 0x55, 0x2F, 0x0F, 0x5E, 
	0x2B, 0xE0, 0xDD, 0xD4, 0x82, 0x3F, 0x93, 0x1F, 0x98, 0xA2, 
	0x2D, 0xFA, 0xB6, 0x68, 0x7B, 0xA2, 0x75, 0x44, 0xDB, 0x47, 
	0x12, 0x3A, 0xB2, 0xFA, 0x3A, 0x3F, 0xAC, 0x3C, 0xE8, 0x7D, 
	0xF4, 0xD2, 0x07, 0x25, 0x0F, 0x6F, 0xC3, 0xF8, 0x46, 0xB1, 
	0x8C, 0x5F, 0x6B, 0x23, 0x0E, 0x8C, 0xEC, 0xA8, 0x65, 0xD2, 
	0x52, 0x10, 0x92, 0x9A, 0x0C, 0xF8, 0x67, 0xEE, 0x64, 0x9C, 
	0x03, 0xB1, 0x4B, 0xF9, 0x98, 0x44, 0xAB, 0x5B, 0x52, 0x9D, 
	0x21, 0x0F, 0x9F, 0x7A, 0x91, 0x17, 0xFB, 0xE5, 0x38, 0x06, 
	0x63, 0x3E, 0xF1, 0x96, 0xDD, 0xB1, 0x28, 0x93, 0xD6, 0x4B, 
	0x7A, 0xFE, 0xD3, 0xCB, 0xB9, 0x11, 0x4C, 0x05, 0x26, 0x90, 
	0x70, 0xF8, 0x55, 0xC5, 0x20, 0x8B, 0x5A, 0xFD, 0x14, 0x2E, 
	0x71, 0xE8, 0xD5, 0xC7, 0xD7, 0x2A, 0x37, 0x25, 0x1E, 0xD3, 
	0x1D, 0x88, 0x96, 0x6F, 0x20, 0x18, 0xB2, 0x4C, 0x52, 0xA8, 
	0xC6, 0xE1, 0x6C, 0x9B, 0xAE, 0x45, 0x86, 0x2B, 0x0F, 0x16, 
	0xE0, 0x16, 0x88, 0x0C, 0xE6, 0xDA, 0xC8, 0x37, 0x7C, 0xBB, 
	0x5C, 0xD7, 0x17, 0xEB, 0x6C, 0x80, 0x9D, 0xF8, 0x2B, 0xE2, 
	0xC7, 0xE6, 0xFC, 0x5C, 0xA4, 0x61, 0xD9, 0x85, 0xE9, 0x09, 
	0x8B, 0xB3, 0x24, 0x55, 0x7E, 0xF3, 0xC2, 0x98, 0x46, 0x25, 
	0xDE, 0x8C, 0xE0, 0x1A, 0x7E, 0xFB, 0xF4, 0x6B, 0x5A, 0xBC, 
	0x19, 0x42, 0x33, 0x13, 0x3B, 0x17, 0xAB, 0x3C, 0xE7, 0x91, 
	0x4F, 0xDE, 0x65, 0x1E, 0x38, 0x06, 0x35, 0x7D, 0xDE, 0x0C, 
	0x1C, 0x6A, 0x0E, 0x79, 0x0F, 0x0E, 0x26, 0xDE, 0x5A, 0xA2, 
	0x15, 0x8B, 0xCD, 0x21, 0x6F, 0x2D, 0xD1, 0xB7, 0xC5, 0x6E, 
	0x47, 0xAC, 0x1F, 0x58, 0x4E, 0xB1, 0x5F, 0x6C, 0xE8, 0x89, 
	0x95, 0x16, 0x8E, 0x08, 0x92, 0x3E, 0x2D, 0xC2, 0x9C, 0xC9, 
	0xBA, 0x95, 0x09, 0x03, 0xD0, 0xC6, 0xEF, 0xD8, 0x0E, 0x79, 
	0x6B, 0x1B, 0xA2, 0xB5, 0x44, 0xDB, 0x13, 0x6D, 0x9F, 0xB7, 
	0x3D, 0x31, 0xDF, 0x13, 0xFB, 0x7A, 0x62, 0x9F, 0x23, 0xC6, 
	0x1D, 0xB1, 0xCF, 0x11, 0xFB, 0x1C, 0xB1, 0xAF, 0x2F, 0xE6, 
	0xFB, 0x62, 0xDF, 0x40, 0xF4, 0x07, 0xA2, 0x3F, 0xA4, 0xBE, 
	0x30, 0xD2, 0xB7, 0xE1, 0x9C, 0xE2, 0x51, 0x6F, 0xAD, 0xA0, 
	0xDF, 0xBC, 0xDB, 0x5B, 0x6F, 0x63, 0x8C, 0xAB, 0x47, 0x1A, 
	0x3A, 0x5F, 0x31, 0x49, 0xAB, 0x14, 0xEC, 0xBC, 0x2C, 0x97, 
	0x86, 0x26, 0x5E, 0xBE, 0x4A, 0x3D, 0x34, 0xDC, 0x42, 0x12, 
	0x7F, 0x24, 0xE9, 0x2D, 0xF8, 0x2B, 0x98, 0x28, 0xCB, 0xF8, 
	0x24, 0x0B, 0x24, 0xA3, 0x3B, 0xF5, 0xD2, 0x8C, 0xC2, 0xC7, 
	0xF7, 0xBD, 0xF2, 0x10, 0xDC, 0x39, 0x0C, 0x58, 0xA2, 0xBC, 
	0xF7, 0xA2, 0x08, 0xCF, 0x13, 0x3C, 0x55, 0xC5, 0xA1, 0xAF, 
	0x96, 0x67, 0xB8, 0xCA, 0x13, 0x81, 0x03, 0xEC, 0x16, 0xDB, 
	0xB8, 0x97, 0x15, 0xDB, 0xC8, 0xC9, 0x38, 0xF6, 0xB3, 0x45, 
	0x9A, 0xDC, 0x7A, 0x68, 0xC8, 0xCA, 0x84, 0xE5, 0x39, 0x44, 
	0x09, 0x4E, 0x0C, 0x46, 0x16, 0xE6, 0x7B, 0x78, 0x3E, 0x01, 
	0x4B, 0x77, 0x18, 0x21, 0xC1, 0x0D, 0x30, 0xED, 0x81, 0xA4, 
	0xC8, 0x8B, 0xBF, 0x48, 0x0C, 0x9C, 0x9D, 0x7D, 0xF8, 0xFE, 
	0x5E, 0x94, 0x44, 0xD3, 0xE6, 0xAB, 0x8B, 0x2B, 0x72, 0x4A, 
	0x87, 0x9B, 0x12, 0x79, 0x31, 0x3F, 0x8C, 0x81, 0xB3, 0x84, 
	0x47, 0x00, 0x04, 0x03, 0xE0, 0x00, 0x7E, 0x11, 0xE6, 0xC0, 
	0x1E, 0x7F, 0xED, 0x80, 0x21, 0xFC, 0xAA, 0xFC, 0x77, 0x82, 
	0xC1, 0x0F, 0xE1, 0xF1, 0xFC, 0x68, 0x01, 0x9A, 0xE5, 0xD1, 
	0x44, 0xE5, 0x71, 0x13, 0x94, 0x4D, 0xBD, 0xEF, 0x9E, 0xAE, 
	0xCA, 0x87, 0x65, 0xF9, 0xB8, 0x8E, 0x83, 0x0E, 0x45, 0x64, 
	0x0C, 0x40, 0x00, 0xED, 0xB0, 0xE8, 0xFC, 0x3C, 0xB0, 0x4B, 
	0x76, 0x9B, 0xA4, 0x0F, 0x28, 0x25, 0x4C, 0x75, 0x28, 0xBF, 
	0x41, 0xCB, 0x00, 0x88, 0x18, 0x92, 0x7E, 0x18, 0x2A, 0xDF, 
	0x71, 0xC5, 0xD2, 0x2C, 0x04, 0x2B, 0x14, 0xD6, 0xCD, 0x17, 
	0x6C, 0xC7, 0x04, 0x9C, 0x88, 0xF8, 0xC7, 0x0F, 0x0E, 0xD1, 
	0x7D, 0x9F, 0xEC, 0x38, 0x77, 0xC2, 0x4F, 0xA5, 0x3A, 0x66, 
	0x3A, 0xCA, 0x23, 0xEF, 0x86, 0x44, 0xD5, 0xB7, 0x45, 0x07, 
	0x17, 0x82, 0x75, 0x34, 0xF3, 0x25, 0xA0, 0x5C, 0xC4, 0x77, 
	0x8C, 0x1F, 0x7A, 0xA4, 0xDC, 0xDB, 0x8C, 0x54, 0x2C, 0x1A, 
	0xDE, 0x3A, 0xA2, 0x35, 0xF1, 0xC7, 0xCA, 0x38, 0x35, 0x84, 
	0x84, 0xB1, 0xE0, 0xDA, 0xF3, 0xBF, 0x28, 0x25, 0x36, 0x09, 
	0x20, 0xAD, 0x52, 0xDF, 0x87, 0x4C, 0x81, 0x93, 0xF3, 0xFC, 
	0xD3, 0xD9, 0x0B, 0x15, 0x73, 0x74, 0x3E, 0xCA, 0x53, 0x69, 
	0x38, 0x4F, 0xE7, 0x82, 0x37, 0x70, 0x54, 0xE5, 0xC4, 0x27, 
	0x83, 0xE3, 0xFD, 0x4F, 0x5E, 0x98, 0x2B, 0x18, 0xFC, 0x32, 
	0x25, 0x83, 0x4C, 0x00, 0xB8, 0xC6, 0xF3, 0x9F, 0xA6, 0xCE, 
	0x56, 0x59, 0x9E, 0xDC, 0x2A, 0xE7, 0x70, 0xF8, 0x46, 0x10, 
	0x8C, 0x05, 0xF7, 0x17, 0xB1, 0x07, 0xFB, 0xEF, 0x84, 0x85, 
	0xE0, 0x08, 0x66, 0x1E, 0x0A, 0x6C, 0x8D, 0x99, 0xCF, 0x73, 
	0x32, 0x6E, 0xF4, 0x5E, 0xCC, 0x22, 0xE5, 0x34, 0x0D, 0x6F, 
	0x16, 0x79, 0xCC, 0x32, 0xF4, 0x1A, 0xC9, 0x25, 0xDF, 0xC2, 
	0x61, 0x9D, 0x67, 0x44, 0xAE, 0x56, 0xD0, 0xCB, 0x67, 0xDE, 
	0x84, 0x31, 0x83, 0xE3, 0x30, 0xBE, 0x61, 0xF2, 0x6C, 0x71, 
	0x19, 0x80, 0xA4, 0x00, 0x6E, 0x0D, 0x19, 0x5C, 0x06, 0x6A, 
	0x99, 0x08, 0x0A, 0xE5, 0x34, 0x02, 0x19, 0xC1, 0x7A, 0xDD, 
	0xD2, 0x6D, 0xBD, 0xA7, 0x3B, 0xE0, 0x8A, 0x03, 0x7D, 0x08, 
	0x16, 0x0D, 0xA7, 0x3B, 0x10, 0x0A, 0x7E, 0x02, 0x1E, 0x0A, 
	0x81, 0x0E, 0x6C, 0xD4, 0xEC, 0xEB, 0xE6, 0x40, 0x87, 0x3B, 
	0x91, 0x79, 0xA8, 0x63, 0xDA, 0x81, 0x01, 0x0A, 0xAD, 0x27, 
	0x89, 0x92, 0xD4, 0x2C, 0x1E, 0x30, 0x9F, 0xB9, 0xBC, 0x22, 
	0x1C, 0x57, 0xF8, 0x3C, 0x59, 0x2D, 0xE1, 0x24, 0xE4, 0x29, 
	0x11, 0xAE, 0x89, 0x98, 0x17, 0x13, 0x09, 0xFC, 0xE9, 0xC7, 
	0xD3, 0x21, 0x00, 0xFC, 0xDA, 0x54, 0xE0, 0xB2, 0x51, 0x3E, 
	0xDD, 0xD1, 0x93, 0x55, 0x8E, 0x59, 0xC5, 0xD8, 0x47, 0xD0, 
	0x91, 0x68, 0x2D, 0xD1, 0xDA, 0xA2, 0xED, 0x89, 0xD6, 0x11, 
	0x6D, 0x5F, 0xB4, 0x03, 0xD1, 0x0E, 0xA9, 0xB5, 0xC4, 0x7E, 
	0x4B, 0xEC, 0xB7, 0xC4, 0x7E, 0x4B, 0xEC, 0xB7, 0xC4, 0x7E, 
	0x4B, 0xEC, 0xB7, 0xC4, 0x7E, 0x8B, 0xEF, 0x07, 0x2B, 0x3A, 
	0x11, 0xED, 0xA9, 0x68, 0xCF, 0x44, 0x4B, 0xEE, 0xF6, 0xE3, 
	0x89, 0xA0, 0xCA, 0x13, 0x0B, 0xDC, 0xC3, 0x9F, 0xAC, 0xF2, 
	0xC9, 0x2E, 0x9F, 0x7A, 0x3B, 0xE4, 0x72, 0x22, 0xD7, 0xC6, 
	0x85, 0xAF, 0x26, 0xBF, 0x13, 0x40, 0x6C, 0xB9, 0x4D, 0x40, 
	0xB6, 0xCE, 0x15, 0x28, 0xFA, 0x94, 0x2D, 0xCF, 0x9E, 0x4F, 
	0xB3, 0x26, 0x18, 0xE6, 0x31, 0xFD, 0xA0, 0x50, 0xCD, 0x53, 
	0xAD, 0x1F, 0xB6, 0xA8, 0xBF, 0xDE, 0xFE, 0x89, 0x94, 0xBD, 
	0x9E, 0xE0, 0x49, 0x71, 0x76, 0x52, 0x33, 0xA5, 0x4B, 0x38, 
	0x50, 0x09, 0xC3, 0x65, 0x12, 0x87, 0x79, 0x92, 0xEE, 0x24, 
	0x62, 0xE2, 0xFE, 0xE4, 0xCD, 0x47, 0x24, 0x11, 0xEC, 0x53, 
	0x88, 0x06, 0x09, 0x3F, 0x4D, 0x72, 0x70, 0x55, 0x15, 0xCF, 
	0x01, 0x3C, 0xF4, 0xD5, 0x3F, 0xD1, 0xEB, 0xA0, 0xFD, 0x0B, 
	0xFE, 0xFD, 0x17, 0x31, 0x16, 0xE4, 0x0B, 0x14, 0x1A, 0x13, 
	0x13, 0xB0, 0xED, 0xA0, 0xB2, 0xE9, 0xA0, 0xDC, 0x72, 0x50, 
	0x6E, 0x38, 0x10, 0xCB, 0x49, 0x5C, 0x90, 0x09, 0x92, 0xA9, 
	0x43, 0x6B, 0x89, 0xD6, 0x16, 0x6D, 0x4F, 0xB4, 0x8E, 0x68, 
	0xFB, 0xA2, 0x1D, 0x88, 0x76, 0x28, 0xDA, 0x43, 0xD1, 0x9A, 
	0xC6, 0x4E, 0xEC, 0x22, 0x1D, 0x28, 0xC3, 0xDF, 0x28, 0xB4, 
	0xCB, 0x3A, 0x7B, 0x9B, 0xDC, 0x83, 0x6D, 0x14, 0x14, 0xF3, 
	0xA3, 0x20, 0x0B, 0xFF, 0x97, 0xF2, 0x5C, 0xF7, 0x5F, 0xF3, 
	0x55, 0x4C, 0x11, 0x4E, 0xB9, 0x79, 0x7D, 0x7A, 0xD1, 0x62, 
	0xDA, 0x63, 0xCA, 0x20, 0x23, 0x89, 0x95, 0x00, 0xD2, 0xD5, 
	0x5B, 0x16, 0xE7, 0xDD, 0x1B, 0x96, 0xBF, 0x8E, 0x18, 0x3E, 
	0x9E, 0x3E, 0x5C, 0x04, 0xB0, 0xE2, 0xA9, 0xDC, 0x92, 0xB1, 
	0xFC, 0xA4, 0xC5, 0xF4, 0x5C, 0x7B, 0x9C, 0x27, 0x69, 0x0B, 
	0x23, 0x4E, 0xAC, 0x84, 0xB1, 0x92, 0x6B, 0xAC, 0x8B, 0x53, 
	0x79, 0x9E, 0x86, 0xD7, 0xAB, 0x9C, 0xB5, 0x62, 0x3D, 0x9F, 
	0xC6, 0x33, 0xCD, 0x15, 0xA0, 0x59, 0x05, 0xC2, 0x5B, 0x0E, 
	0x41, 0xCC, 0x09, 0x90, 0x8F, 0x49, 0xEC, 0x47, 0xA1, 0xFF, 
	0x65, 0xB4, 0x4F, 0x64, 0xA9, 0xF3, 0x78, 0xBF, 0x9D, 0xB7, 
	0xF7, 0x55, 0xAD, 0x9B, 0xC1, 0xCD, 0x2B, 0x8A, 0xE0, 0xCE, 
	0x93, 0x7C, 0x84, 0xCC, 0xA6, 0xA5, 0xB9, 0xFB, 0xBA, 0xBF, 
	0x4A, 0x21, 0x75, 0x1E, 0xA9, 0xCB, 0x24, 0xC4, 0xAB, 0x90, 
	0xFA, 0x24, 0x91, 0xB8, 0x84, 0x84, 0x2D, 0xBF, 0x94, 0xF8, 
	0x2A, 0x10, 0xCC, 0xE1, 0xAE, 0x3C, 0x52, 0x5F, 0x04, 0xF4, 
	0x47, 0xD5, 0x21, 0x7D, 0x4F, 0xBE, 0x30, 0x18, 0xE0, 0x79, 
	0x2D, 0xEF, 0x76, 0xEE, 0xC9, 0x12, 0x46, 0xAA, 0xB5, 0x09, 
	0x73, 0xB2, 0x1D, 0xA6, 0x4F, 0x7F, 0x24, 0x98, 0xFD, 0x7E, 
	0x7F, 0x13, 0xA6, 0x59, 0x81, 0xE9, 0xA7, 0xAF, 0x37, 0xE5, 
	0x50, 0xEA, 0xC0, 0x87, 0xBB, 0x45, 0xCE, 0x84, 0x1A, 0x00, 
	0x31, 0x2C, 0x94, 0xB7, 0x4E, 0x76, 0xDE, 0xFB, 0xC7, 0xA4, 
	0xA5, 0x2E, 0xF2, 0x7C, 0x39, 0x3A, 0x38, 0xB8, 0xBF, 0xBF, 
	0xEF, 0xDE, 0xDB, 0xDD, 0x24, 0xBD, 0xA1, 0xD4, 0xFD, 0x20, 
	0xBB, 0x83, 0x20, 0x5A, 0x03, 0xED, 0x21, 0x64, 0xED, 0xD1, 
	0x3B, 0x6B, 0x71, 0x35, 0xF8, 0x79, 0x1A, 0x85, 0xB7, 0x37, 
	0xAA, 0xA6, 0xCB, 0x66, 0x00, 0xD3, 0x84, 0x9E, 0x75, 0xBD, 
	0xE5, 0x92, 0xC5, 0xC1, 0xD9, 0x22, 0x8C, 0x82, 0x96, 0x0C, 
	0x27, 0xCB, 0xFF, 0xF0, 0x6E, 0xDF, 0x44, 0x41, 0xB6, 0xB6, 
	0x16, 0xD6, 0x0D, 0xE1, 0x0C, 0x4C, 0xCF, 0xDF, 0x5F, 0xBE, 
	0x1D, 0xC3, 0x01, 0xFD, 0x79, 0x6C, 0xB8, 0x9F, 0x8F, 0x4C, 
	0xF8, 0x69, 0xB7, 0xB5, 0xFC, 0xF8, 0xF3, 0xDE, 0x5E, 0x8B, 
	0xC0, 0xA2, 0x5C, 0xD4, 0x30, 0x5E, 0x62, 0xB5, 0xE0, 0x31, 
	0x0C, 0x46, 0x2A, 0x81, 0xFA, 0x5B, 0x6D, 0x7F, 0xD6, 0x63, 
	0xB8, 0xAB, 0xC9, 0xFD, 0x0C, 0x6B, 0x03, 0x23, 0x95, 0xE4, 
	0x3B, 0x02, 0x96, 0x96, 0x5F, 0x5D, 0x55, 0x87, 0x23, 0x70, 
	0xC5, 0x46, 0x19, 0xE6, 0x68, 0xD9, 0xF4, 0xF3, 0xEC, 0x65, 
	0xF9, 0x34, 0x52, 0x41, 0xFE, 0xC0, 0xC7, 0x9A, 0x8C, 0xF6, 
	0x58, 0x3D, 0xBA, 0x4E, 0x0F, 0x8E, 0x55, 0x89, 0xF0, 0xF4, 
	0xED, 0x75, 0x24, 0x29, 0x9A, 0x75, 0x53, 0xB6, 0x84, 0x73, 
	0x93, 0xB5, 0xD4, 0x6F, 0xA0, 0x51, 0x58, 0x5E, 0x59, 0x7D, 
	0x9F, 0x4E, 0x4E, 0x39, 0x87, 0xFE, 0x98, 0x0B, 0x2C, 0x3B, 
	0x5D, 0xA8, 0x6D, 0xD6, 0x56, 0x81, 0xC0, 0x5C, 0xD3, 0xFD, 
	0x2A, 0xCF, 0x7E, 0x97, 0x48, 0xEE, 0x12, 0xC5, 0xE3, 0x4B, 
	0x2F, 0x5F, 0x74, 0xE7, 0x51, 0x02, 0xB2, 0x31, 0x51, 0x1D, 
	0x44, 0x68, 0x37, 0x62, 0xF1, 0x4D, 0xBE, 0xE8, 0x98, 0x5A, 
	0x5B, 0xFD, 0x55, 0x75, 0xC9, 0xC5, 0xC6, 0x24, 0x93, 0x45, 
	0x4F, 0xD5, 0xDC, 0xCA, 0xA2, 0x63, 0x13, 0x84, 0x16, 0x4B, 
	0x28, 0xAA, 0xB3, 0x46, 0xC1, 0x7B, 0x3E, 0x5B, 0x3F, 0x8D, 
	0x8C, 0xF1, 0x38, 0x7F, 0x59, 0x5C, 0x48, 0x46, 0x3C, 0x99, 
	0x55, 0x80, 0x58, 0x10, 0x8F, 0xA6, 0x83, 0x06, 0x7C, 0x3D, 
	0xA6, 0x36, 0xAE, 0x6A, 0xA2, 0x70, 0x4F, 0x35, 0x88, 0x80, 
	0x65, 0x62, 0x51, 0x87, 0x5D, 0x6D, 0xA0, 0x49, 0xD5, 0xF3, 
	0x87, 0x25, 0xE8, 0x01, 0x3C, 0x3F, 0xC7, 0x4C, 0x9D, 0x6B, 
	0x40, 0xED, 0xC0, 0x78, 0x98, 0xA3, 0x82, 0x5E, 0xB1, 0x88, 
	0x61, 0xFA, 0xAC, 0xFA, 0x91, 0x97, 0x65, 0x80, 0x94, 0x05, 
	0x39, 0xE9, 0xE2, 0x19, 0x34, 0xFE, 0xF2, 0x61, 0x47, 0x3C, 
	0x67, 0x57, 0x25, 0xA2, 0xB3, 0x64, 0xF9, 0xF0, 0x63, 0x68, 
	0xC2, 0x38, 0xDB, 0x11, 0xCD, 0xC5, 0x1F, 0x93, 0x12, 0xCF, 
	0x45, 0x9C, 0x61, 0x6E, 0xB9, 0xC6, 0x04, 0x60, 0x14, 0x81, 
	0xCD, 0x2D, 0x22, 0x63, 0x3A, 0x36, 0xF4, 0x10, 0x8C, 0x3C, 
	0x3C, 0x9A, 0xFC, 0xFE, 0xF7, 0xE5, 0xC9, 0x5F, 0x27, 0x67, 
	0xEF, 0x2F, 0xDE, 0xFD, 0x31, 0x71, 0x43, 0xB0, 0xF7, 0x70, 
	0xDE, 0x22, 0x51, 0x13, 0x51, 0xD9, 0xD2, 0x8B, 0x85, 0xAD, 
	0xCF, 0x63, 0x9F, 0x68, 0xE9, 0x10, 0x2D, 0xF0, 0x1B, 0x0A, 
	0xFA, 0x37, 0x97, 0x62, 0xFD, 0x67, 0x73, 0x29, 0x68, 0x37, 
	0xDC, 0xDB, 0x43, 0x1D, 0x7F, 0xFB, 0x76, 0xFE, 0xE9, 0x6E, 
	0xCA, 0x66, 0x7B, 0x7B, 0xBC, 0x05, 0xDD, 0x4B, 0x8F, 0xD3, 
	0x10, 0x7A, 0xC6, 0x2F, 0xE3, 0x96, 0xE9, 0x54, 0x06, 0xA7, 
	0xC6, 0x4C, 0xD3, 0x82, 0xF4, 0x4D, 0x3C, 0x41, 0xB3, 0xD6, 
	0x43, 0xCD, 0x65, 0x51, 0xC6, 0x14, 0xA0, 0xF7, 0x97, 0x14, 
	0x9C, 0x62, 0x6C, 0x92, 0x45, 0x7A, 0xE3, 0x22, 0x48, 0xD7, 
	0xC9, 0xD5, 0x5C, 0x20, 0xD6, 0xDB, 0x66, 0x3A, 0x04, 0x57, 
	0x12, 0x36, 0xFC, 0x86, 0xCF, 0x88, 0xBC, 0x8D, 0xF2, 0x7C, 
	0x92, 0xE2, 0x1E, 0xD9, 0x44, 0xF5, 0xF8, 0x19, 0x97, 0x61, 
	0xEF, 0x7F, 0x56, 0x2C, 0x7D, 0x98, 0x80, 0xA9, 0xF9, 0x90, 
	0x30, 0x9C, 0x44, 0x51, 0x4B, 0x05, 0xCF, 0xC8, 0xC0, 0xA8, 
	0x41, 0x11, 0x6E, 0x7A, 0x14, 0x0B, 0xB7, 0x70, 0x53, 0x90, 
	0x7F, 0x3C, 0x4D, 0x67, 0xC2, 0x17, 0xEF, 0xC2, 0x2C, 0xBC, 
	0x0E, 0xA3, 0x30, 0x7F, 0x18, 0xAB, 0xF4, 0x0C, 0x47, 0xA8, 
	0x1B, 0x66, 0xA9, 0x3F, 0x66, 0xFA, 0x67, 0x6C, 0xF2, 0x35, 
	0x01, 0xDC, 0x5A, 0x88, 0x00, 0x2E, 0xB4, 0x6F, 0xDF, 0x5A, 
	0xFC, 0x61, 0x3C, 0x9D, 0x69, 0x7A, 0x29, 0xC8, 0x31, 0x3E, 
	0x21, 0x0C, 0x21, 0x72, 0x7A, 0x9C, 0x22, 0xB4, 0xD9, 0xCB, 
	0x5A, 0x7F, 0x34, 0x9D, 0xE9, 0x65, 0x14, 0x71, 0xFF, 0x7F, 
	0xD8, 0x5A, 0x84, 0x41, 0xC0, 0x62, 0x75, 0xCD, 0x07, 0xF9, 
	0xB0, 0xC4, 0x06, 0x84, 0x91, 0x35, 0xED, 0xC8, 0x49, 0x49, 
	0x91, 0xCC, 0x7B, 0x98, 0xB7, 0xB4, 0xC7, 0xFB, 0x34, 0xCC, 
	0xD9, 0xD9, 0x64, 0xD2, 0x5A, 0x13, 0xCB, 0x0A, 0x6B, 0x80, 
	0xA5, 0x40, 0x57, 0x0E, 0x74, 0xE5, 0x47, 0xE7, 0x9F, 0xFC, 
	0x82, 0xB2, 0x1C, 0x28, 0x7B, 0xE4, 0x5C, 0x3D, 0x9A, 0xA3, 
	0x29, 0xD6, 0x31, 0x4D, 0xBC, 0x44, 0x59, 0xF0, 0xEC, 0xC0, 
	0xB3, 0x03, 0xCF, 0x36, 0x3C, 0x0F, 0x20, 0x51, 0x1C, 0xF4, 
	0x66, 0x7A, 0x4F, 0x5A, 0xE3, 0x8C, 0xA6, 0x43, 0x43, 0x1F, 
	0xC2, 0x53, 0x7F, 0x34, 0xED, 0xC3, 0x75, 0x0F, 0x9E, 0x06, 
	0x30, 0x0F, 0x8F, 0x66, 0x0F, 0x9E, 0x4D, 0x63, 0x34, 0x85, 
	0xC8, 0x0F, 0x59, 0x25, 0x76, 0x10, 0xFA, 0x21, 0xDC, 0x50, 
	0xF1, 0xBE, 0x64, 0x3A, 0xB4, 0x0C, 0x1E, 0x60, 0xA7, 0x45, 
	0x6B, 0x61, 0x63, 0x8F, 0xA6, 0x0E, 0xC5, 0x94, 0x85, 0xBB, 
	0x01, 0x2D, 0xBE, 0xA1, 0xB1, 0x60, 0xB3, 0x0D, 0x7B, 0x91, 
	0x02, 0x0B, 0x48, 0x73, 0x80, 0x04, 0x1A, 0xB7, 0x69, 0xDC, 
	0x21, 0x8A, 0x81, 0xB4, 0xFE, 0xC0, 0xE1, 0xE3, 0x0E, 0x8D, 
	0x43, 0x17, 0x9E, 0x89, 0x38, 0x58, 0x34, 0x84, 0x67, 0xC0, 
	0xE2, 0x0C, 0x81, 0x50, 0x5C, 0x33, 0x04, 0xF8, 0xB4, 0x11, 
	0x30, 0x3A, 0xB6, 0x0D, 0x7C, 0x22, 0xC6, 0x1E, 0xA4, 0xC9, 
	0xB0, 0xD2, 0x06, 0x8C, 0x16, 0xA4, 0xC9, 0x83, 0xE1, 0x00, 
	0x3A, 0x80, 0x12, 0x1E, 0x80, 0x0C, 0x13, 0x3A, 0x28, 0x8E, 
	0x1E, 0x64, 0xCF, 0x16, 0x6E, 0x01, 0xA4, 0x8E, 0x01, 0x89, 
	0x73, 0xCF, 0x82, 0xCE, 0x10, 0x67, 0x80, 0x32, 0x64, 0xC8, 
	0x3E, 0x44, 0xE6, 0x41, 0x60, 0x08, 0x14, 0x24, 0x89, 0x63, 
	0x0E, 0x3C, 0xF7, 0x90, 0x0F, 0xA4, 0xD1, 0x41, 0x0C, 0xD0, 
	0xE9, 0x51, 0x07, 0xE0, 0xD8, 0x83, 0x01, 0x0C, 0x62, 0x07, 
	0x28, 0x1E, 0x3A, 0xA6, 0x6E, 0xF7, 0x01, 0x5D, 0x1F, 0xF6, 
	0x00, 0x40, 0xC0, 0x00, 0xBC, 0xF7, 0x4D, 0xDE, 0xB1, 0x2C, 
	0x40, 0x37, 0x80, 0x99, 0x43, 0x21, 0x75, 0x1C, 0x07, 0xB1, 
	0xA3, 0xA0, 0x07, 0xA8, 0x3A, 0xAB, 0x4F, 0x2F, 0xB1, 0x86, 
	0x88, 0x10, 0xB2, 0x7B, 0x0B, 0x69, 0x1D, 0xC2, 0xA2, 0xE1, 
	0xC0, 0xD2, 0x7B, 0xC3, 0xFE, 0xEC, 0xC9, 0xCD, 0xEE, 0xC3, 
	0xDC, 0x5F, 0x80, 0x69, 0xF9, 0x18, 0x5C, 0x7A, 0x33, 0xED, 
	0x31, 0x60, 0x73, 0x6F, 0x15, 0xE5, 0x23, 0x88, 0x27, 0xF1, 
	0xB4, 0x1C, 0x9F, 0x4D, 0xCD, 0x99, 0xC6, 0x43, 0x26, 0xA5, 
	0x36, 0x6A, 0x8A, 0x57, 0x65, 0xFD, 0xF1, 0xEB, 0x48, 0x2C, 
	0x31, 0x67, 0x9D, 0xCA, 0x72, 0x63, 0x76, 0x60, 0xE9, 0x0F, 
	0xC5, 0xAC, 0x55, 0x9B, 0x35, 0x71, 0x36, 0xFD, 0x3A, 0x82, 
	0x4B, 0x48, 0xFA, 0x80, 0xBF, 0x3C, 0x41, 0xA8, 0x41, 0xD0, 
	0x17, 0x94, 0xBD, 0x8F, 0x6A, 0x5B, 0x9F, 0x44, 0xC4, 0x93, 
	0xC9, 0xF1, 0xC3, 0x94, 0x12, 0xEB, 0x47, 0x5F, 0xA2, 0x48, 
	0xF7, 0x25, 0x02, 0xF4, 0xB4, 0x0E, 0xFE, 0xC0, 0x82, 0x64, 
	0x4F, 0x08, 0x00, 0x93, 0x2A, 0xCA, 0x7B, 0x45, 0x6E, 0x9A, 
	0x62, 0xCE, 0x85, 0xE1, 0xA2, 0x94, 0x8B, 0xEF, 0x01, 0x4A, 
	0xB0, 0xE5, 0xEA, 0xCA, 0x49, 0x6B, 0xAB, 0x38, 0x5A, 0x35, 
	0x74, 0x1D, 0xDB, 0xD0, 0x6A, 0x32, 0xA9, 0x4B, 0xB8, 0xE3, 
	0xD0, 0x92, 0xEF, 0x0A, 0x06, 0x40, 0x6D, 0x91, 0x0D, 0x40, 
	0xC0, 0x33, 0x06, 0x68, 0x77, 0xAF, 0x21, 0xC7, 0xFC, 0xE2, 
	0x12, 0xD9, 0xE0, 0x44, 0xBC, 0xB5, 0x44, 0xDB, 0xDB, 0x9D, 
	0x8D, 0xBA, 0xD0, 0xEC, 0x0A, 0x07, 0x7D, 0xAB, 0xEB, 0x08, 
	0x1A, 0x21, 0x41, 0x2A, 0x88, 0x32, 0x2D, 0xA7, 0x89, 0x0A, 
	0x53, 0x60, 0xB7, 0x45, 0xEB, 0xEC, 0x4E, 0x05, 0xE1, 0x91, 
	0x10, 0xB7, 0xEB, 0xE6, 0x64, 0x03, 0xE7, 0x05, 0x21, 0x96, 
	0x53, 0x12, 0x62, 0x34, 0x8A, 0x63, 0xB0, 0x3B, 0x62, 0x0B, 
	0x74, 0xF0, 0x1C, 0xDE, 0x5E, 0x67, 0x30, 0x2C, 0x45, 0xD0, 
	0xB3, 0xD6, 0x22, 0x70, 0x06, 0x4D, 0x98, 0x0F, 0xB7, 0x60, 
	0xDE, 0xC9, 0x7E, 0xCD, 0xC1, 0x50, 0xC0, 0xD4, 0xFF, 0x09, 
	0x14, 0xA3, 0xFF, 0x6F, 0x80, 0x62, 0xF7, 0x9A, 0xD8, 0x1B, 
	0xFE, 0x13, 0xF6, 0x0E, 0x87, 0x0D, 0x20, 0xED, 0x6D, 0x20, 
	0x1B, 0x74, 0xE5, 0x54, 0x54, 0xD5, 0x31, 0x4B, 0x8B, 0x58, 
	0xBB, 0x8B, 0x5D, 0x1A, 0xC4, 0x16, 0xE6, 0x37, 0xC1, 0xB6, 
	0x1D, 0x03, 0xFD, 0x6D, 0x77, 0xC8, 0x32, 0xF9, 0xCE, 0xB6, 
	0x80, 0xD1, 0x28, 0x91, 0xB6, 0x09, 0xD6, 0x56, 0x93, 0xCA, 
	0xF0, 0x87, 0x09, 0xC6, 0x92, 0x7B, 0x85, 0xDC, 0x43, 0xA7, 
	0x21, 0xA4, 0x58, 0x92, 0xBB, 0x1E, 0xFE, 0x14, 0x8E, 0xB6, 
	0x59, 0x71, 0xC9, 0xCE, 0xC0, 0x68, 0x40, 0x63, 0x0E, 0xD6, 
	0x68, 0x7A, 0x8D, 0x12, 0x32, 0x7F, 0xDA, 0x66, 0x48, 0x5C, 
	0x3F, 0x25, 0x21, 0xB3, 0x26, 0x21, 0x14, 0xC6, 0xBF, 0x5D, 
	0x44, 0xC3, 0x6A, 0xC4, 0xB2, 0x9C, 0x2D, 0x68, 0xBE, 0x2F, 
	0xA2, 0x1F, 0x08, 0xD7, 0x66, 0xDD, 0x09, 0x0E, 0xE9, 0x3C, 
	0x71, 0x10, 0xA3, 0x53, 0x1A, 0xED, 0xDA, 0x6A, 0x87, 0xBD, 
	0x1F, 0x17, 0x5E, 0x35, 0x24, 0x76, 0x06, 0xFD, 0xAE, 0xB3, 
	0x81, 0xC3, 0x92, 0x43, 0xA1, 0xDD, 0xC4, 0x54, 0x7F, 0x77, 
	0xA6, 0x7A, 0x35, 0x75, 0x0D, 0xCC, 0x0D, 0x7C, 0x98, 0x7E, 
	0x95, 0x42, 0xB4, 0x7E, 0x22, 0xC0, 0xB5, 0x6D, 0xAB, 0xEA, 
	0x7B, 0x9D, 0xA1, 0xB5, 0x83, 0x71, 0xED, 0x06, 0xAB, 0x5D, 
	0x85, 0xF5, 0x54, 0xE4, 0xE5, 0xFE, 0x58, 0x2C, 0xB1, 0xE1, 
	0x52, 0xB0, 0x84, 0xAB, 0x00, 0xD6, 0x30, 0x34, 0x71, 0x27, 
	0x2D, 0xB3, 0xF3, 0xB0, 0xC8, 0xCE, 0x8B, 0x6C, 0x27, 0x67, 
	0x5F, 0x6B, 0x22, 0xAA, 0x58, 0x5A, 0xCF, 0x6E, 0xF7, 0x8D, 
	0xFF, 0x08, 0x3B, 0xF0, 0x53, 0xC0, 0x80, 0xAC, 0x82, 0x76, 
	0x75, 0xBC, 0xD8, 0x5F, 0x24, 0x29, 0xDC, 0x87, 0x6F, 0xE1, 
	0xC6, 0x81, 0x84, 0x8B, 0xFA, 0x18, 0x2F, 0xB1, 0xCD, 0x93, 
	0x38, 0xEF, 0xDC, 0xF3, 0x9A, 0x29, 0xDC, 0xF5, 0x92, 0x28, 
	0x28, 0x06, 0xB1, 0x38, 0x09, 0x43, 0xB6, 0x03, 0x17, 0x3E, 
	0x37, 0xED, 0x22, 0x2C, 0x7C, 0xAD, 0x0A, 0xD7, 0x9F, 0xB1, 
	0x0F, 0x97, 0xD2, 0xB5, 0x74, 0x52, 0x62, 0xF0, 0x79, 0x6A, 
	0x37, 0x53, 0xC5, 0x76, 0xEF, 0xD9, 0xC4, 0xE8, 0x65, 0xAD, 
	0x5F, 0x4F, 0x88, 0x20, 0x6B, 0x6A, 0x83, 0xC8, 0x37, 0x79, 
	0x11, 0x64, 0xE3, 0x0B, 0xF5, 0xB2, 0xF2, 0x57, 0x94, 0x17, 
	0xEB, 0xC5, 0xBF, 0xFE, 0x12, 0xEB, 0xE8, 0xA4, 0xDD, 0x4E, 
	0x92, 0x06, 0x0C, 0xA5, 0xC4, 0x97, 0x6C, 0xF2, 0x9C, 0xB7, 
	0xCD, 0x1A, 0xCB, 0x6E, 0xC1, 0x32, 0x70, 0x1C, 0x84, 0x77, 
	0x65, 0xB5, 0x00, 0x6E, 0xD1, 0x4F, 0x74, 0xE5, 0x66, 0x7A, 
	0xAA, 0x89, 0xAB, 0x39, 0x2F, 0x16, 0xD9, 0x70, 0xAD, 0xC6, 
	0x2A, 0x83, 0x54, 0x1D, 0xDA, 0x3F, 0xC2, 0xF2, 0x81, 0x42, 
	0xF7, 0xC3, 0xF1, 0x9A, 0x03, 0x48, 0x69, 0x96, 0x5F, 0x5D, 
	0x49, 0x39, 0xA3, 0x98, 0x8A, 0x43, 0x2E, 0xBE, 0x3F, 0x0B, 
	0x7D, 0x2F, 0xEA, 0x78, 0x51, 0x78, 0x13, 0x8F, 0xF2, 0x64, 
	0xE9, 0xAA, 0xC7, 0x2F, 0xF6, 0xDB, 0x2D, 0xA0, 0x4F, 0x6B, 
	0xEF, 0x2B, 0x7B, 0xF1, 0x75, 0xB6, 0x74, 0x95, 0xA3, 0x03, 
	0x04, 0x7B, 0xAC, 0x1C, 0x01, 0x61, 0x4A, 0x18, 0x8C, 0xD5, 
	0xE8, 0x3A, 0x0A, 0xFE, 0xE6, 0xD5, 0x5B, 0x85, 0x0A, 0x24, 
	0x38, 0xA4, 0x1E, 0xEF, 0xB7, 0xA9, 0xB6, 0x56, 0xDA, 0xA4, 
	0xD6, 0x56, 0x8F, 0x0E, 0x60, 0xCF, 0xB1, 0xAA, 0x27, 0x71, 
	0x14, 0xC6, 0x8C, 0x9B, 0x61, 0x36, 0xDE, 0xA8, 0x00, 0x02, 
	0x40, 0x2C, 0xA7, 0x89, 0xFA, 0x5F, 0xD1, 0xE3, 0x25, 0x03, 
	0xAE, 0x7F, 0x5E, 0x30, 0x28, 0x41, 0x17, 0x95, 0xC1, 0x79, 
	0x94, 0x78, 0xF9, 0x88, 0xDE, 0xB1, 0xA9, 0x4F, 0xA2, 0x34, 
	0x91, 0x69, 0x7A, 0x56, 0x2D, 0x56, 0xAB, 0x49, 0xFC, 0x85, 
	0x3D, 0xAC, 0xF0, 0x45, 0x01, 0x5D, 0x64, 0xF7, 0x89, 0x01, 
	0x2A, 0x50, 0xEC, 0x6B, 0x92, 0xFC, 0x88, 0xFC, 0x7C, 0x11, 
	0x66, 0x5D, 0x42, 0xA7, 0xB9, 0xAA, 0xF6, 0x04, 0x20, 0x53, 
	0xDD, 0x5B, 0xDF, 0x85, 0x23, 0x70, 0xAE, 0xE8, 0xA8, 0x52, 
	0x87, 0x73, 0xA3, 0xC2, 0xC3, 0x3C, 0x59, 0x81, 0x65, 0xED, 
	0x68, 0x7E, 0xA6, 0xEA, 0x54, 0xE7, 0xC4, 0xCA, 0x61, 0x4E, 
	0x95, 0xC3, 0x88, 0x13, 0x8B, 0x90, 0xF9, 0x55, 0x3C, 0xD7, 
	0x23, 0x81, 0x8B, 0x20, 0x5C, 0xA7, 0x32, 0x00, 0x3F, 0x4A, 
	0xA9, 0x50, 0x22, 0xDF, 0xC5, 0x89, 0x02, 0x70, 0xF6, 0x80, 
	0xA3, 0xCC, 0xA8, 0x7E, 0xB0, 0x2E, 0xA8, 0xAE, 0x6E, 0xD5, 
	0x75, 0x35, 0x15, 0x3A, 0x4F, 0x9A, 0x9E, 0xD4, 0xAD, 0x2B, 
	0xCB, 0x5F, 0xA1, 0xD0, 0x90, 0x33, 0xE4, 0xCA, 0x34, 0x8E, 
	0x23, 0x62, 0x05, 0xC8, 0x08, 0xF4, 0x98, 0xDD, 0x2B, 0xEF, 
	0x96, 0x58, 0x18, 0x68, 0xF1, 0x12, 0x62, 0x36, 0x52, 0x80, 
	0x6E, 0x3D, 0xD2, 0x0D, 0xBD, 0xC2, 0xFD, 0x78, 0x1C, 0xBD, 
	0x34, 0x47, 0x86, 0xD6, 0x50, 0xBA, 0x5C, 0xD7, 0x88, 0x93, 
	0xEA, 0x1E, 0xAA, 0x78, 0x31, 0x3D, 0x10, 0x6D, 0x02, 0x6C, 
	0x6C, 0x68, 0xCC, 0x5F, 0xE0, 0x3B, 0x50, 0xF2, 0xB3, 0x02, 
	0x0A, 0x57, 0x1E, 0x90, 0xBD, 0x0F, 0x71, 0xB0, 0xA2, 0x26, 
	0x57, 0x16, 0x4D, 0xB8, 0x04, 0x58, 0x58, 0xEB, 0x2C, 0x3D, 
	0x45, 0x96, 0x65, 0x9E, 0x46, 0x05, 0xD7, 0xB2, 0xEF, 0xA8, 
	0xE2, 0x9B, 0xB6, 0x88, 0xA5, 0xCA, 0xC5, 0x55, 0xF9, 0xAD, 
	0x83, 0xCA, 0x29, 0xF4, 0x36, 0xCB, 0xCA, 0xC7, 0x17, 0x57, 
	0x23, 0x70, 0x8D, 0xEB, 0x63, 0x5E, 0x61, 0xD6, 0x51, 0x84, 
	0xBD, 0xB5, 0x04, 0x1B, 0xEA, 0xDC, 0x88, 0xFA, 0xE2, 0x0A, 
	0xB5, 0x2F, 0x54, 0x23, 0x0D, 0x54, 0x2A, 0xDD, 0x8E, 0x5C, 
	0xE8, 0xC6, 0x45, 0x67, 0xF3, 0x1B, 0x08, 0x53, 0xD3, 0x68, 
	0xB6, 0x51, 0xDF, 0xB6, 0x8F, 0xA3, 0x97, 0xAA, 0xD2, 0x55, 
	0x80, 0x33, 0xD5, 0xAD, 0x15, 0xE1, 0x8B, 0xEA, 0xB7, 0xF8, 
	0x39, 0x9E, 0xAC, 0xAE, 0x63, 0x96, 0x2B, 0x97, 0x5E, 0xF6, 
	0x65, 0xF4, 0x43, 0x84, 0x67, 0xB4, 0x51, 0x22, 0x5C, 0x1A, 
	0xF8, 0x3E, 0xE1, 0xE6, 0x6E, 0x84, 0xA3, 0x06, 0x79, 0x65, 
	0x89, 0x7F, 0x19, 0x2B, 0x17, 0x97, 0x20, 0xCE, 0xF1, 0x41, 
	0xF4, 0x7E, 0x63, 0x76, 0x3C, 0x06, 0xE3, 0x92, 0x07, 0x8E, 
	0xC6, 0x66, 0xAF, 0xE2, 0x81, 0x14, 0x1D, 0x65, 0xF5, 0xAE, 
	0x57, 0xC3, 0x69, 0x27, 0x54, 0x2A, 0x87, 0x53, 0x99, 0x5D, 
	0x58, 0xFB, 0x3A, 0x96, 0xE2, 0xD1, 0xBA, 0xCF, 0x23, 0x92, 
	0xBF, 0x60, 0xFE, 0x97, 0xEB, 0xE4, 0x2B, 0x86, 0x35, 0x51, 
	0xF8, 0xE4, 0x96, 0x09, 0x0B, 0x2F, 0xAE, 0xAE, 0xCB, 0xC0, 
	0xB2, 0x51, 0xA7, 0xE3, 0xB1, 0x85, 0xB6, 0xB3, 0xE0, 0xE5, 
	0xBE, 0x28, 0x46, 0xEE, 0x8F, 0xF6, 0x79, 0xFD, 0x6E, 0x1F, 
	0x2C, 0x19, 0xE3, 0x42, 0xB1, 0x02, 0x89, 0x46, 0x01, 0x62, 
	0x5D, 0xB7, 0x7C, 0xC4, 0xC2, 0x86, 0x4C, 0xFF, 0x5D, 0xDD, 
	0xAB, 0xD7, 0x44, 0x14, 0xBA, 0x09, 0xF8, 0x77, 0xCA, 0x23, 
	0x25, 0xA4, 0x28, 0xDC, 0xB9, 0x8E, 0x12, 0xFF, 0x8B, 0xAB, 
	0xAC, 0x09, 0x43, 0xCF, 0x6E, 0x6D, 0x41, 0xF6, 0x52, 0xCD, 
	0x16, 0xC9, 0x3D, 0x68, 0x49, 0xD4, 0x18, 0x21, 0xA8, 0x13, 
	0x95, 0x5C, 0x25, 0x7C, 0x19, 0xEA, 0xC7, 0x1C, 0x4B, 0x32, 
	0xB6, 0x66, 0x1A, 0xA9, 0xB4, 0x62, 0x8B, 0xCA, 0x86, 0xA9, 
	0xDD, 0x6D, 0x9A, 0x1A, 0x51, 0xFF, 0x77, 0x51, 0x6D, 0x8E, 
	0xD6, 0x1A, 0xA8, 0x8C, 0x6E, 0x37, 0xBA, 0x35, 0xE9, 0x51, 
	0xDB, 0x24, 0xAB, 0xBB, 0xDB, 0x6A, 0x75, 0xBC, 0x0C, 0x54, 
	0xA5, 0xB1, 0x35, 0x61, 0x69, 0xE8, 0x45, 0x9A, 0xCA, 0xCF, 
	0xDC, 0x3B, 0xB9, 0x3A, 0xBD, 0xAE, 0x9A, 0xC7, 0x45, 0x42, 
	0xB5, 0xA5, 0x4A, 0x1E, 0x93, 0x7C, 0xD2, 0xEA, 0xBB, 0x21, 
	0xE3, 0x97, 0x31, 0xEC, 0x4B, 0xAB, 0xFE, 0xB9, 0x40, 0x17, 
	0x74, 0x79, 0x32, 0xD7, 0x10, 0xC8, 0x59, 0x14, 0xDD, 0x84, 
	0xFE, 0xDF, 0xE5, 0x0B, 0x27, 0xFA, 0x8D, 0x0B, 0x2F, 0xDC, 
	0x32, 0x5B, 0xC4, 0xCE, 0x91, 0x8A, 0x35, 0x5F, 0x9A, 0x9D, 
	0x4D, 0x69, 0x1A, 0x9B, 0x18, 0x1B, 0x63, 0x36, 0x6E, 0x3D, 
	0x33, 0xB9, 0x67, 0x3A, 0xDA, 0x37, 0xE9, 0x24, 0x3C, 0x36, 
	0x5E, 0x9A, 0x7D, 0x88, 0xF1, 0xAE, 0x5A, 0x9C, 0x5B, 0x7E, 
	0xF1, 0x2A, 0x49, 0x3A, 0x26, 0x3C, 0xFC, 0x78, 0xC6, 0x80, 
	0xBF, 0xCF, 0xBE, 0x97, 0x88, 0xA1, 0x67, 0xF6, 0x2B, 0x03, 
	0x68, 0x66, 0xC6, 0xC8, 0xD4, 0x1A, 0x60, 0x26, 0xA9, 0xD2, 
	0xCA, 0xF0, 0x7B, 0x2F, 0xFC, 0x0E, 0xE6, 0x27, 0x41, 0xD3, 
	0xE9, 0x44, 0x87, 0x67, 0xD8, 0x2C, 0x63, 0xD0, 0xDF, 0x76, 
	0x11, 0x37, 0x4C, 0x16, 0x42, 0x08, 0x35, 0x97, 0xE0, 0x25, 
	0x44, 0x2C, 0xE6, 0x63, 0x5D, 0x2F, 0x08, 0x5A, 0x32, 0xFD, 
	0x70, 0x7E, 0xA9, 0xD2, 0x2B, 0x23, 0x6F, 0x3C, 0x05, 0x01, 
	0x41, 0xFA, 0x02, 0x8E, 0x90, 0xD5, 0x02, 0x5D, 0x06, 0x4E, 
	0x51, 0xCD, 0x32, 0xC4, 0x97, 0xFF, 0xD3, 0x6C, 0x26, 0x67, 
	0x1A, 0xDC, 0xF3, 0xC4, 0x04, 0x84, 0x56, 0xD4, 0x17, 0x26, 
	0x46, 0x0C, 0x9F, 0xBE, 0x7D, 0x33, 0xC8, 0x11, 0x2B, 0xD3, 
	0xDC, 0x5A, 0x83, 0xF1, 0x77, 0x85, 0x57, 0x7D, 0x59, 0x44, 
	0xD2, 0xD3, 0x4A, 0xBF, 0xCE, 0x08, 0x53, 0x75, 0xDE, 0x9C, 
	0x89, 0xE3, 0xDF, 0x0D, 0xF0, 0xF5, 0xEE, 0x78, 0x2A, 0xAF, 
	0xD5, 0xA3, 0x19, 0x69, 0x34, 0x94, 0x35, 0xBA, 0x5E, 0x00, 
	0x17, 0x1D, 0x15, 0x23, 0x4F, 0x95, 0x5A, 0x08, 0xCF, 0x32, 
	0x0C, 0x9E, 0x2D, 0x81, 0xE2, 0x03, 0x50, 0x61, 0x90, 0x7E, 
	0x8C, 0x26, 0x9F, 0xB8, 0x07, 0xEA, 0x1E, 0x45, 0x42, 0x2C, 
	0x2C, 0xEB, 0xE1, 0xF6, 0xE4, 0x81, 0xB6, 0xD4, 0xDE, 0x48, 
	0xC5, 0xF4, 0x46, 0x4A, 0x93, 0x1D, 0x1B, 0x17, 0x35, 0x38, 
	0x76, 0xB3, 0xFA, 0x35, 0xDD, 0x1F, 0xA7, 0x5D, 0xAE, 0xF4, 
	0x6C, 0x9A, 0x76, 0xB9, 0x39, 0xB1, 0xE0, 0x22, 0x0E, 0xD8, 
	0xD7, 0x19, 0xF7, 0x98, 0xE2, 0x3E, 0xF6, 0x37, 0xA0, 0x7A, 
	0xF6, 0x4D, 0x52, 0x39, 0x5C, 0xBC, 0x99, 0x91, 0xE5, 0x2B, 
	0x4F, 0x42, 0x77, 0x63, 0x1E, 0xFD, 0x18, 0x54, 0xE6, 0xA3, 
	0xE2, 0x5B, 0x25, 0xC9, 0x4D, 0x41, 0x41, 0xDB, 0xDB, 0x7B, 
	0x7E, 0xBE, 0xEA, 0xE8, 0x7A, 0x5D, 0xCB, 0x3E, 0xFC, 0xB8, 
	0xDC, 0x85, 0xB6, 0xC4, 0xBC, 0x56, 0x0C, 0x97, 0x06, 0x70, 
	0x81, 0xBD, 0xBD, 0x5F, 0xC2, 0x75, 0x8C, 0xDB, 0xDB, 0x23, 
	0x03, 0xD8, 0xFD, 0x75, 0x21, 0x81, 0xF9, 0xDE, 0x2B, 0x43, 
	0x7D, 0xFD, 0xA2, 0x50, 0xAF, 0x18, 0x05, 0x4A, 0x42, 0x47, 
	0x5A, 0xEB, 0xDA, 0xE5, 0x0B, 0x20, 0x6E, 0x81, 0xD3, 0x3E, 
	0xCA, 0x6F, 0x38, 0x37, 0xDE, 0xB2, 0xA6, 0xD5, 0xC4, 0x41, 
	0xCA, 0x4E, 0xB6, 0x39, 0x2D, 0x38, 0xA4, 0x5F, 0xF5, 0x12, 
	0xFE, 0xFA, 0x32, 0x1E, 0x5B, 0x6E, 0x2C, 0x39, 0x31, 0x5C, 
	0x74, 0x8B, 0x6D, 0xF1, 0x86, 0x1F, 0x87, 0x28, 0x69, 0x4E, 
	0x5A, 0xD4, 0x1C, 0xA5, 0x80, 0xD2, 0x9A, 0xD6, 0xD2, 0x7A, 
	0xAC, 0xDA, 0xBE, 0xE4, 0xF9, 0x33, 0x21, 0x5D, 0x47, 0xFF, 
	0xF1, 0x3A, 0xEA, 0xBB, 0x4D, 0xAF, 0xE8, 0x8B, 0x5B, 0x56, 
	0xC4, 0xD3, 0x8F, 0x60, 0x7C, 0x92, 0xA6, 0xDE, 0x43, 0x37, 
	0xCC, 0xA8, 0xDD, 0xE4, 0x08, 0xAE, 0x1D, 0xC1, 0xCB, 0xFA, 
	0x28, 0x88, 0x68, 0x54, 0x1F, 0xD3, 0xEF, 0xC6, 0x9D, 0xA4, 
	0x63, 0xE2, 0xC1, 0x89, 0xF7, 0x66, 0xFC, 0x10, 0x78, 0x3C, 
	0x46, 0x13, 0x48, 0xE6, 0x4A, 0x52, 0x06, 0xC6, 0x73, 0xD0, 
	0xC1, 0xF9, 0x51, 0x7D, 0x6F, 0x21, 0xD6, 0x73, 0x9E, 0x57, 
	0x44, 0xB5, 0x80, 0x53, 0xC5, 0x7D, 0x3E, 0xD3, 0xCF, 0xBF, 
	0x77, 0x92, 0xA4, 0xB5, 0x1E, 0x3A, 0xDF, 0xF8, 0x5C, 0xDC, 
	0x73, 0x30, 0x6F, 0x20, 0x45, 0x7D, 0x1A, 0x43, 0xD4, 0xDB, 
	0x20, 0x76, 0x03, 0xE1, 0x16, 0x6A, 0x3B, 0x26, 0x4F, 0xB5, 
	0x76, 0x5D, 0xBC, 0x29, 0xC5, 0xED, 0x6B, 0x29, 0xB2, 0x42, 
	0x8E, 0xA3, 0x2F, 0xB1, 0x16, 0x34, 0x6F, 0x19, 0xC7, 0xC9, 
	0xDE, 0x9E, 0xF8, 0x76, 0x74, 0x7A, 0x37, 0xAB, 0x89, 0x73, 
	0x3D, 0xF1, 0x9C, 0x20, 0x3F, 0xB5, 0xD7, 0xEB, 0xFE, 0xB1, 
	0x10, 0x81, 0xB0, 0xF3, 0x36, 0x29, 0x3B, 0x39, 0x36, 0xBE, 
	0x7D, 0x0B, 0x1A, 0x24, 0x01, 0x69, 0xFD, 0xC6, 0x98, 0x29, 
	0x93, 0xDE, 0x6C, 0x57, 0xC8, 0xD0, 0xB8, 0xD5, 0x30, 0x67, 
	0xCE, 0x46, 0x89, 0xB6, 0x85, 0xB3, 0xF3, 0x7F, 0x17, 0x37, 
	0x81, 0x44, 0x5F, 0x72, 0x3C, 0x36, 0x5E, 0x5A, 0x23, 0x73, 
	0xBB, 0xC1, 0x82, 0xB9, 0xEF, 0x6A, 0xB2, 0xCB, 0x9F, 0xA2, 
	0x6F, 0x59, 0xD0, 0xD7, 0x6E, 0x3F, 0x3D, 0x51, 0xF9, 0xF4, 
	0x49, 0xFE, 0xB6, 0xA9, 0x78, 0xD3, 0xFF, 0x58, 0xD4, 0x14, 
	0xE8, 0x03, 0x24, 0x39, 0xFA, 0x5D, 0x27, 0xC1, 0xC3, 0x23, 
	0x95, 0x8E, 0xE6, 0xDE, 0x6D, 0x18, 0x3D, 0x8C, 0x4E, 0x30, 
	0x3D, 0xD6, 0xCF, 0x21, 0xD6, 0x30, 0xAC, 0x1D, 0xE9, 0x99, 
	0x17, 0x67, 0x9D, 0x0C, 0x92, 0xE6, 0xB9, 0xDB, 0xB9, 0x67, 
	0xD7, 0x5F, 0xC2, 0xBC, 0xB3, 0x4C, 0xB1, 0x06, 0xE6, 0xE3, 
	0x17, 0xC4, 0x1D, 0x2F, 0xF8, 0xBC, 0xCA, 0xF2, 0x11, 0xFB, 
	0xEA, 0xF9, 0xB9, 0xFB, 0x84, 0x65, 0xB4, 0x4A, 0xFE, 0xBB, 
	0xB0, 0x95, 0x47, 0xE5, 0x9A, 0xCA, 0x65, 0x23, 0xE5, 0x85, 
	0x4D, 0x7F, 0x94, 0x2C, 0x89, 0xC2, 0x40, 0x31, 0x21, 0xAB, 
	0x57, 0x96, 0x90, 0x4F, 0x81, 0x73, 0x8D, 0x1C, 0xEC, 0xDC, 
	0x7A, 0xE9, 0x4D, 0x18, 0x8F, 0x14, 0xCB, 0x51, 0x0C, 0x05, 
	0xFE, 0xB9, 0x0A, 0x7E, 0x13, 0x7E, 0x93, 0x26, 0xAB, 0x38, 
	0xE0, 0xE8, 0x46, 0x2F, 0xAE, 0x0F, 0xF1, 0xAF, 0x2B, 0x60, 
	0x76, 0x52, 0x2F, 0x08, 0x57, 0x19, 0xDF, 0xBE, 0x89, 0xBD, 
	0x1B, 0x5D, 0x2B, 0x8F, 0x05, 0x76, 0xC0, 0x27, 0x30, 0xE3, 
	0xC7, 0x7D, 0xF0, 0xA7, 0x0E, 0xC4, 0x46, 0x20, 0x1B, 0x18, 
	0x95, 0x17, 0x8C, 0xFE, 0xAC, 0x69, 0x05, 0xD2, 0xE8, 0xEF, 
	0x9A, 0xE0, 0x62, 0x60, 0xCB, 0x45, 0x8C, 0x57, 0x56, 0xA9, 
	0x04, 0xE7, 0x33, 0xFC, 0xDC, 0x11, 0x76, 0x86, 0x31, 0x2F, 
	0x2C, 0xC2, 0x66, 0xBC, 0xDE, 0x34, 0xD0, 0x8E, 0xD7, 0x6B, 
	0x14, 0xDE, 0x86, 0x08, 0xBC, 0xC0, 0x9F, 0x07, 0xC3, 0x46, 
	0x7E, 0xE7, 0x67, 0xB0, 0x83, 0xD7, 0xCC, 0x22, 0x36, 0xCF, 
	0xDD, 0xB5, 0xE8, 0x0F, 0xE9, 0x4F, 0x93, 0xE8, 0xAD, 0x46, 
	0xB6, 0x4B, 0xAE, 0x1B, 0x64, 0xD4, 0x44, 0x6C, 0x94, 0x02, 
	0x66, 0x3F, 0x62, 0x5E, 0x2A, 0x30, 0x3F, 0x29, 0x8D, 0xE4, 
	0x2D, 0x7A, 0xB0, 0xAE, 0x54, 0x34, 0x41, 0xDB, 0x5C, 0xF8, 
	0x02, 0x4D, 0xB8, 0x5C, 0xD7, 0xC9, 0x93, 0x25, 0xA8, 0x8F, 
	0xBE, 0x0E, 0x6C, 0x58, 0xBC, 0xB0, 0x90, 0xE7, 0xB2, 0x16, 
	0xAA, 0xF4, 0x70, 0x9D, 0x2C, 0x73, 0xA5, 0x14, 0x7A, 0x81, 
	0xD6, 0x00, 0xFB, 0x02, 0x78, 0x68, 0x61, 0x85, 0x14, 0x4C, 
	0xA7, 0x59, 0x0C, 0x06, 0xEB, 0x05, 0xD7, 0x3D, 0x57, 0xE1, 
	0xDD, 0x7B, 0xFC, 0x4F, 0x52, 0xBB, 0x1A, 0x5F, 0x76, 0xBA, 
	0xCA, 0x95, 0xC7, 0xA5, 0xF8, 0xFF, 0x2F, 0x23, 0x65, 0x1E, 
	0x7E, 0x65, 0x01, 0x6E, 0xC6, 0xAF, 0x92, 0x47, 0x0A, 0x91, 
	0x49, 0x95, 0x4D, 0xF1, 0xDC, 0x60, 0x7A, 0xBD, 0xB3, 0x93, 
	0x37, 0x8E, 0x51, 0x60, 0x57, 0x04, 0xFA, 0xD2, 0x10, 0x4D, 
	0xD8, 0xA7, 0x70, 0xCA, 0x9B, 0xF8, 0xA5, 0xB1, 0x00, 0xFF, 
	0xFB, 0xA3, 0xC7, 0x29, 0x88, 0x93, 0x18, 0xB6, 0x6F, 0xB1, 
	0xD2, 0x42, 0x3A, 0x3D, 0x80, 0x49, 0x8A, 0x11, 0xDF, 0xE8, 
	0x2A, 0xE2, 0x1B, 0xDD, 0x3A, 0xDB, 0xB8, 0xB0, 0xC9, 0x6E, 
	0xF1, 0x4B, 0xBA, 0x47, 0xA9, 0xF6, 0xC0, 0xEB, 0x0A, 0xA0, 
	0xB9, 0x2E, 0x0B, 0xF2, 0x47, 0xA9, 0xA0, 0xEB, 0xAE, 0x19, 
	0x06, 0x56, 0xE7, 0xF3, 0xB9, 0x5B, 0x30, 0x66, 0x28, 0x16, 
	0x68, 0xC8, 0x72, 0x05, 0x49, 0x45, 0xB7, 0xC9, 0x5D, 0xB9, 
	0x7D, 0x4B, 0xBE, 0xCD, 0x0D, 0xBD, 0x49, 0x95, 0xC2, 0x6F, 
	0x9A, 0xDC, 0x66, 0xA9, 0x3C, 0x16, 0x22, 0x2F, 0xF6, 0x4B, 
	0x16, 0x65, 0x36, 0x7B, 0xE8, 0x7F, 0xDE, 0xB2, 0x20, 0xF4, 
	0x14, 0x8A, 0x86, 0x60, 0x82, 0x42, 0xDF, 0xA5, 0x74, 0x51, 
	0xD8, 0xCA, 0x2F, 0xE1, 0xED, 0x32, 0x49, 0x73, 0x2F, 0x86, 
	0xE0, 0xF8, 0xA4, 0xF2, 0x3B, 0x2A, 0x7E, 0x92, 0xD6, 0x31, 
	0xF9, 0xA7, 0x69, 0x98, 0x0F, 0xD1, 0x67, 0x59, 0xEE, 0xFF, 
	0x01, 0xEF, 0xE0, 0x8F, 0xC1, 0x40, 0x3F, 0x00, 0x00, 
};

	// Default Controller Configuration (len=139)
static const uint8_t defaultControllerConfig[] PROGMEM = {
		
	0x00, 0x79, 0x0B, 0x0A, 0x61, 0x02, 0x00, 0x01, 0x00, 0x71, 
	0x02, 0x00, 0x06, 0x00, 0x0B, 0x0A, 0x61, 0x02, 0x00, 0x02, 
	0x00, 0x71, 0x02, 0x00, 0x07, 0x00, 0x0B, 0x0A, 0x61, 0x02, 
	0x00, 0x03, 0x00, 0x71, 0x02, 0x00, 0x08, 0x00, 0x0B, 0x0A, 
	0x61, 0x02, 0x00, 0x04, 0x00, 0x71, 0x02, 0x00, 0x09, 0x00, 
	0x0B, 0x0A, 0x61, 0x02, 0x00, 0x05, 0x00, 0x71, 0x02, 0x00, 
	0x0A, 0x00, 0x07, 0x06, 0x21, 0x0E, 0x00, 0x31, 0x0F, 0x00, 
	0x0B, 0x0A, 0x61, 0x04, 0x00, 0x00, 0x00, 0x71, 0x04, 0x00, 
	0x01, 0x00, 0x0B, 0x0A, 0x61, 0x01, 0x00, 0x18, 0x00, 0x71, 
	0x01, 0x00, 0x19, 0x00, 0x09, 0x08, 0x41, 0x07, 0x00, 0x04, 
	0x51, 0x07, 0x01, 0x04, 0x05, 0x04, 0x4F, 0x00, 0x01, 0x01, 
	0x03, 0x02, 0x0F, 0x06, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 
	0x00, 0x00, 0xFF, 0xC0, 0xA8, 0x0A, 0x63, 0xFF, 0xFF, 0xFF, 
	0x00, 0x05, 0x01, 0xC0, 0xA8, 0x0A, 0xF0, 0x00, 0x00, 
};

#endif


#define SK_HWEN_STDOLEDDISPLAY 1
SkaarhojBI8 buttons;