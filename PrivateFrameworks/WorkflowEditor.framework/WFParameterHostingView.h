/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface WFParameterHostingView : UIView {
    void hostingController;
    void initialState;
    void updatedState;
}

+ (bool)supportsParameterClass:(Class)arg1;

- (void).cxx_destruct;
- (void)attachToParentViewController:(id)arg1;
- (void)configureViewWithParameter:(id)arg1 state:(id)arg2 editable:(bool)arg3 processing:(bool)arg4 shouldFocus:(bool)arg5 variableProvider:(id)arg6 variableUIDelegate:(id)arg7 updateBlock:(id /* block */)arg8;
- (void)detachFromParentViewController;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end