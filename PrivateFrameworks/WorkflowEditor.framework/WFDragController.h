/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface WFDragController : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _centerOffset;
    <WFDragCoordinator> * _coordinator;
    NSHashTable * _currentViewControllers;
    NSDictionary * _eventDictionary;
    UIGestureRecognizer * _gestureRecognizer;
    UIViewController * _initialViewController;
    bool  _removedOnCompletion;
    UIView * _view;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic) struct CGPoint { double x1; double x2; } centerOffset;
@property (nonatomic, readonly) <WFDragCoordinator> *coordinator;
@property (nonatomic, copy) NSHashTable *currentViewControllers;
@property (nonatomic, copy) NSDictionary *eventDictionary;
@property (nonatomic, readonly) UIGestureRecognizer *gestureRecognizer;
@property (nonatomic) UIViewController *initialViewController;
@property (nonatomic) bool removedOnCompletion;
@property (nonatomic, retain) UIView *view;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })centerOffset;
- (id)coordinator;
- (id)currentViewControllers;
- (void)didEnterViewController:(id)arg1;
- (void)didExitViewController:(id)arg1;
- (void)didMoveInViewControllers:(id)arg1;
- (bool)dragController:(id)arg1 shouldAcceptViewWithCompletion:(id /* block */)arg2;
- (id)eventDictionary;
- (id)gestureRecognizer;
- (void)gestureRecognizerAction;
- (id)initWithGestureRecognizer:(id)arg1;
- (id)initialViewController;
- (bool)isActive;
- (bool)isViewLoaded;
- (void)loadView;
- (struct CGPoint { double x1; double x2; })locationOfViewInView:(id)arg1;
- (bool)removedOnCompletion;
- (void)reset;
- (void)setCenterOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCurrentViewControllers:(id)arg1;
- (void)setEventDictionary:(id)arg1;
- (void)setInitialViewController:(id)arg1;
- (void)setRemovedOnCompletion:(bool)arg1;
- (void)setView:(id)arg1;
- (void)updateCurrentViewControllers;
- (void)updateView;
- (id)view;

@end