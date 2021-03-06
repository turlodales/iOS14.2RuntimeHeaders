/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
 */

@interface CCVegaWorkerClient : NSObject {
    NSMutableDictionary * _expressionFunctions;
    NSObject<CCVegaWorkerClientDelegate> * delegate;
    bool  isValid;
    CCVegaWorker * worker;
}

@property NSObject<CCVegaWorkerClientDelegate> *delegate;
@property bool isValid;
@property (retain) CCVegaWorker *worker;

- (void).cxx_destruct;
- (void)clientDidExecuteTimerCallback;
- (void)clientEnter;
- (void)clientExit;
- (id)delegate;
- (id)evaluateExpressionFunction:(id)arg1;
- (id)initWithWorker:(id)arg1 delegate:(id)arg2;
- (bool)isValid;
- (void)registerExpressionFunction:(id /* block */)arg1 withName:(id)arg2;
- (void)runBlockAsync:(id /* block */)arg1;
- (void)runBlockSync:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsValid:(bool)arg1;
- (void)setWorker:(id)arg1;
- (void)waitForWorker;
- (id)worker;

@end
