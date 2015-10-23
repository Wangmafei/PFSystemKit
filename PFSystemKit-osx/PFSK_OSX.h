//
//  PFSK_OSX.h
//  PFSystemKit
//
//  Created by Perceval FARAMAZ on 19/04/15.
//  Copyright (c) 2015 Perceval FARAMAZ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PFSK_Common.h"
@class PFSystemKitPlatformReport;
@class PFSystemKitCPUReport;
@class PFSystemKitBatteryReport;

@interface PFSystemKit : PFSK_Common {
	@protected
	mach_port_t   			masterPort;
	io_registry_entry_t 	nvrEntry;
	io_registry_entry_t 	pexEntry;
	io_registry_entry_t 	smcEntry;
	io_registry_entry_t 	romEntry;
	io_registry_entry_t 	batEntry;
	BOOL					firstRunDoneForExpertDevice;
	BOOL					firstRunDoneForROM;
	BOOL					firstRunDoneForSMC;
	BOOL					firstRunDoneForBattery;
	@private
	NSDictionary*			platformExpertRawDict;
	NSDictionary*			romRawDict;
	NSDictionary*			smcRawDict;
	NSDictionary*			batteryRawDict;
}

/*!
 Various platform informations
 */
@property (strong, atomic, readonly) PFSystemKitPlatformReport*			platformReport;

/*!
 NSArray of NSDictionaries holding a graphic device and its informations
 */
@property (strong, atomic, readonly) NSArray*							graphicReport;

/*!
 NSArray of NSDictionaries holding a screen and its informations
 */
@property (strong, atomic, readonly) NSArray*							displayReport;

/*!
 Various CPU informations
 */
@property (strong, atomic, readonly) PFSystemKitCPUReport*					cpuReport;

/*!
 Various battery informations
 */
@property (strong, atomic, readonly) PFSystemKitBatteryReport*				batteryReport;

+(PFSystemKit*) investigate;
-(PFSystemKit*) init __attribute__((unavailable("Use +investigate ; -init does not use the singleton pattern.")));
-(void) finalize;

-(BOOL) updatePlatformReport;
-(BOOL) updateCPUReport;
-(BOOL) updateBatteryReport;

#if defined(__OBJC__) && defined(__cplusplus) //we're working with Objective-C++

#endif
@end

#import "PFSK_OSX+CPU.h"
#import "PFSK_OSX+RAM.h"
#import "PFSK_OSX+GPU.h"
