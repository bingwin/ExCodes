//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableView.h"

@interface WeNoteTableView : MMTableView
{
    BOOL _dragEnter;
}

@property(nonatomic) BOOL dragEnter; // @synthesize dragEnter=_dragEnter;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)setupDrag;
- (id)clickedIndexSetIncludesSelection;

@end
