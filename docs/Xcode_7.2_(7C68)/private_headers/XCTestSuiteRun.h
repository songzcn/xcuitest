//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  8 2015 15:34:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCTest/XCTestRun.h>

@class NSArray, NSMutableArray;

@interface XCTestSuiteRun : XCTestRun
{
    NSMutableArray *_testRuns;
}

- (void)addTestRun:(id)arg1;
- (void)dealloc;
- (unsigned long long)executionCount;
- (unsigned long long)failureCount;
- (id)initWithTest:(id)arg1;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(_Bool)arg4;
- (void)start;
- (void)stop;
- (double)testDuration;
@property(readonly, copy) NSArray *testRuns;
- (unsigned long long)unexpectedExceptionCount;

@end

