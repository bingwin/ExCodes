//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray;

@interface AddContactLabelRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasLabelCount:1;
    unsigned int labelCount;
    BaseRequest *baseRequest;
    NSMutableArray *mutableLabelPairListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableLabelPairListList; // @synthesize mutableLabelPairListList;
@property(nonatomic, setter=SetLabelCount:) unsigned int labelCount; // @synthesize labelCount;
@property(readonly, nonatomic) BOOL hasLabelCount; // @synthesize hasLabelCount;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (void)addLabelPairList:(id)arg1;
- (void)addLabelPairListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *labelPairList; // @dynamic labelPairList;
- (id)labelPairListList;
- (id)init;

@end
