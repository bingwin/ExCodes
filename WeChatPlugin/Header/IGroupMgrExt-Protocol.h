//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSString, WCContactData;

@protocol IGroupMgrExt

@optional
- (void)OnDeleteGroupMemberContact:(NSString *)arg1;
- (void)OnModifyGroupMemberContact:(WCContactData *)arg1;
- (void)OnChangeGroupMute:(NSString *)arg1;
- (void)OnChangeGroupSticky:(NSString *)arg1;
- (void)OnChangeMemberVerifyStatus:(NSString *)arg1;
- (void)OnChangeMemberShowDisplayName:(NSString *)arg1;
- (void)OnChangeMemberDisplayName:(NSString *)arg1;
- (void)OnDelGroupMember:(NSString *)arg1 withResult:(unsigned int)arg2 memberList:(NSArray *)arg3;
- (void)OnQuitGroup:(NSString *)arg1;
- (void)OnGroupFavoritedChanged:(NSString *)arg1;
- (void)OnChangeGroup:(NSString *)arg1;
- (void)OnAddGroupMember:(NSString *)arg1 withStatus:(unsigned int)arg2 memberList:(NSArray *)arg3 contactList:(NSArray *)arg4;
- (void)OnCreateGroup:(NSString *)arg1 withStatus:(int)arg2 memberList:(NSArray *)arg3;
@end
