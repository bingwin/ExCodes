//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VoiceAddrResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasEndFlag:1;
    unsigned int hasUserCount:1;
    unsigned int hasReportFiled:1;
    unsigned int endFlag;
    int userCount;
    BaseResponse *baseResponse;
    NSMutableArray *mutableUserNameListList;
    NSString *reportFiled;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetReportFiled:) NSString *reportFiled; // @synthesize reportFiled;
@property(readonly, nonatomic) BOOL hasReportFiled; // @synthesize hasReportFiled;
@property(retain, nonatomic) NSMutableArray *mutableUserNameListList; // @synthesize mutableUserNameListList;
@property(nonatomic, setter=SetUserCount:) int userCount; // @synthesize userCount;
@property(readonly, nonatomic) BOOL hasUserCount; // @synthesize hasUserCount;
@property(nonatomic, setter=SetEndFlag:) unsigned int endFlag; // @synthesize endFlag;
@property(readonly, nonatomic) BOOL hasEndFlag; // @synthesize hasEndFlag;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addUserNameList:(id)arg1;
- (void)addUserNameListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *userNameList; // @dynamic userNameList;
- (id)userNameListList;
- (id)init;

@end
