/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
 */

@interface TSPluginManager : NSObject {
    void pluginContainerController;
    void pluginViewControllers;
    void plugins;
}

@property (nonatomic) UIViewController<TSPluginContainerViewProviding> *pluginContainerController;

- (void).cxx_destruct;
- (void)addPlugin:(id)arg1;
- (bool)containsPluginForViewController:(id)arg1;
- (id)init;
- (id)pluginContainerController;
- (id)pluginForIdentifier:(id)arg1;
- (void)removeAll;
- (void)removePlugin:(id)arg1;
- (void)setPluginContainerController:(id)arg1;
- (bool)stashViewController:(id)arg1;

@end