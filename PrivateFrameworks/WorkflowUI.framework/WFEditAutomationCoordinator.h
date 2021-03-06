/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFEditAutomationCoordinator : NSObject <UINavigationControllerDelegate, WFAutomationSummaryViewControllerDelegate> {
    WFAutomationSummaryViewController * _automationSummaryViewController;
    WFDatabase * _database;
    <WFEditAutomationCoordinatorDelegate> * _delegate;
    WFEditAutomationWorkflowStorage * _editingStorage;
    WFWorkflow * _editingWorkflow;
    UINavigationController * _navigationController;
    WFTrigger * _trigger;
    NSString * _triggerIdentifier;
    WFTriggerManager * _triggerManager;
    WFConfiguredTriggerRecord * _triggerRecord;
    WFWorkflowReference * _workflowReference;
}

@property (nonatomic, retain) WFAutomationSummaryViewController *automationSummaryViewController;
@property (nonatomic, retain) WFDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFEditAutomationCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFEditAutomationWorkflowStorage *editingStorage;
@property (nonatomic, retain) WFWorkflow *editingWorkflow;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (readonly) Class superclass;
@property (nonatomic, retain) WFTrigger *trigger;
@property (nonatomic, readonly, copy) NSString *triggerIdentifier;
@property (nonatomic, retain) WFTriggerManager *triggerManager;
@property (nonatomic, readonly) WFConfiguredTriggerRecord *triggerRecord;
@property (nonatomic, readonly) WFWorkflowReference *workflowReference;

- (void).cxx_destruct;
- (id)automationSummaryViewController;
- (void)automationSummaryViewController:(id)arg1 didFinishWithTrigger:(id)arg2;
- (void)automationSummaryViewController:(id)arg1 editTrigger:(id)arg2;
- (void)automationSummaryViewController:(id)arg1 editWorkflow:(id)arg2;
- (void)cancel;
- (id)database;
- (id)delegate;
- (id)editingStorage;
- (id)editingWorkflow;
- (void)finish;
- (id)initWithDatabase:(id)arg1 triggerRecord:(id)arg2 triggerIdentifier:(id)arg3 workflowReference:(id)arg4;
- (id)navigationController;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)setAutomationSummaryViewController:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditingStorage:(id)arg1;
- (void)setEditingWorkflow:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setTrigger:(id)arg1;
- (void)setTriggerManager:(id)arg1;
- (id)start;
- (id)trigger;
- (id)triggerIdentifier;
- (id)triggerManager;
- (id)triggerRecord;
- (void)updateUIForShowingViewController:(id)arg1;
- (id)workflowReference;

@end
