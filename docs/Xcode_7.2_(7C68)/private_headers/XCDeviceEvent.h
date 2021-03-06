//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  8 2015 15:34:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/NSSecureCoding-Protocol.h>

@interface XCDeviceEvent : NSObject <NSSecureCoding>
{
    unsigned int _eventPage;
    unsigned int _usage;
    double _duration;
}

+ (id)deviceEventWithPage:(unsigned int)arg1 usage:(unsigned int)arg2 duration:(double)arg3;
+ (_Bool)supportsSecureCoding;
- (id)description;
@property double duration; // @synthesize duration=_duration;
- (void)encodeWithCoder:(id)arg1;
@property unsigned int eventPage; // @synthesize eventPage=_eventPage;
- (id)initWithCoder:(id)arg1;
@property unsigned int usage; // @synthesize usage=_usage;

@end

