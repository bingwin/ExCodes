//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface BaseGetHeadImage : NSObject
{
    BOOL _m_hasDelay;
    BOOL _m_isStop;
    id <GetHeadImageDelegate> _m_delegate;
    NSLock *_m_lock;
    NSObject<OS_dispatch_queue> *_m_workerThread;
    NSString *_m_type;
    NSMutableArray *_m_waitQueue;
    NSMutableArray *_m_downloadQueue;
    NSMutableArray *_m_failQueue;
    unsigned long long _m_downloadQueueMaxCount;
    unsigned long long _m_startDelay;
    unsigned long long _m_maxRetryTimes;
}

@property(nonatomic) unsigned long long m_maxRetryTimes; // @synthesize m_maxRetryTimes=_m_maxRetryTimes;
@property(nonatomic) unsigned long long m_startDelay; // @synthesize m_startDelay=_m_startDelay;
@property(nonatomic) unsigned long long m_downloadQueueMaxCount; // @synthesize m_downloadQueueMaxCount=_m_downloadQueueMaxCount;
@property(nonatomic) BOOL m_isStop; // @synthesize m_isStop=_m_isStop;
@property(nonatomic) BOOL m_hasDelay; // @synthesize m_hasDelay=_m_hasDelay;
@property(retain, nonatomic) NSMutableArray *m_failQueue; // @synthesize m_failQueue=_m_failQueue;
@property(retain, nonatomic) NSMutableArray *m_downloadQueue; // @synthesize m_downloadQueue=_m_downloadQueue;
@property(retain, nonatomic) NSMutableArray *m_waitQueue; // @synthesize m_waitQueue=_m_waitQueue;
@property(retain, nonatomic) NSString *m_type; // @synthesize m_type=_m_type;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *m_workerThread; // @synthesize m_workerThread=_m_workerThread;
@property(retain, nonatomic) NSLock *m_lock; // @synthesize m_lock=_m_lock;
@property(nonatomic) id <GetHeadImageDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)removeTaskInDownloadQueue:(id)arg1;
- (BOOL)isInDownloadQueue:(id)arg1;
- (BOOL)isInWaitQueue:(id)arg1;
- (BOOL)isFailTask:(id)arg1;
- (void)stopAllTask;
- (void)processTaskFail:(id)arg1 isWillRetry:(char *)arg2;
- (void)removeInDownloadQueue:(id)arg1;
- (id)addToDownloadQueue;
- (BOOL)addToWaitQueue:(id)arg1;
- (void)checkNeedDownload:(id)arg1;
- (void)processStartDownload;
- (void)onDelayStartDownload;
- (void)delayStartDownload;
- (void)startDownload;
- (id)workerQueue;
- (void)onTaskSucc:(id)arg1;
- (void)onTaskFail:(id)arg1;
- (void)StopDownload;
- (BOOL)DownloadHeadImage:(id)arg1 forScene:(int)arg2 isHD:(BOOL)arg3 isForce:(BOOL)arg4 url:(id)arg5;
- (void)dealloc;
- (id)initWithType:(id)arg1;

@end
