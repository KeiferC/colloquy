NS_ASSUME_NONNULL_BEGIN

@interface NSScriptCommand (NSScriptCommandAdditions)
- (id __nullable) subjectParameter;
- (NSScriptObjectSpecifier *) subjectSpecifier;
- (void) setSubjectSpecifier:(NSScriptObjectSpecifier *) subject;
- (BOOL) subjectSupportsCommand;
- (nullable id) executeCommandOnSubject;
- (id) evaluatedDirectParameter;
@end

NS_ASSUME_NONNULL_END
