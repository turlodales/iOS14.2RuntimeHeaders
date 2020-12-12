/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendar : EKObject {
    unsigned long long  _cachedJunkStatus;
}

@property (nonatomic) struct CGColor { }*CGColor;
@property (nonatomic, readonly) unsigned long long allowedEntityTypes;
@property (nonatomic, readonly) bool allowsContentModifications;
@property (nonatomic) unsigned long long cachedJunkStatus;
@property (nonatomic, readonly) NSString *calendarIdentifier;
@property (getter=isImmutable, nonatomic, readonly) bool immutable;
@property (nonatomic, retain) EKSource *source;
@property (getter=isSubscribed, nonatomic, readonly) bool subscribed;
@property (nonatomic, readonly) unsigned long long supportedEventAvailabilities;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (id)EKObjectChangeSummarizer_multiValueDiffKeys;
+ (id)EKObjectChangeSummarizer_singleValueDiffKeys;
+ (id)_eventKitBundle;
+ (id)calendarForEntityType:(unsigned long long)arg1 eventStore:(id)arg2;
+ (id)calendarForEntityTypes:(unsigned long long)arg1 eventStore:(id)arg2;
+ (id)calendarWithEventStore:(id)arg1;
+ (Class)frozenClass;
+ (bool)isWeakRelationship;
+ (id)knownIdentityKeysForComparison;
+ (id)knownRelationshipMultiValueKeys;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownRelationshipWeakKeys;
+ (id)knownSingleValueKeysForComparison;
+ (id)rowIDsForCalendars:(id)arg1;
+ (id)typeDescription:(long long)arg1;

- (struct CGColor { }*)CGColor;
- (id)UUID;
- (bool)_anotherCalendarForDefaultSchedulingExists;
- (bool)_anotherCalendarForRemindersExists;
- (bool)_anyCalendarOfType:(unsigned long long)arg1 inSameSourceExistsPassingTest:(id /* block */)arg2;
- (void)_clearCGColorCache;
- (bool)_flagValueWithMask:(unsigned int)arg1;
- (bool)_reset;
- (void)_setFlagValue:(bool)arg1 withMask:(unsigned int)arg2;
- (bool)_validateAccessConsent:(id*)arg1;
- (bool)_validateDeletable:(id*)arg1;
- (bool)_validateDeletableHelper:(id*)arg1;
- (void)addAlarms:(id)arg1;
- (void)addSharee:(id)arg1;
- (id)alarms;
- (id)allAlarms;
- (bool)allowEvents;
- (bool)allowReminders;
- (int)allowedEntities;
- (unsigned long long)allowedEntityTypes;
- (bool)allowsContentModifications;
- (bool)allowsIgnoringSharedEventChangeNotifications;
- (bool)allowsScheduling;
- (bool)automaticEventLocationGeocodingAllowed;
- (unsigned long long)cachedJunkStatus;
- (id)calendarIdentifier;
- (bool)canBePublished;
- (bool)canBeShared;
- (bool)canMergeWithCalendar:(id)arg1;
- (void)clearInvitationStatus;
- (id)colorString;
- (id)colorStringRaw;
- (bool)commit:(id*)arg1;
- (bool)couldBeJunk;
- (long long)deletionWarningsMask;
- (id)description;
- (id)digest;
- (int)displayOrder;
- (bool)eligibleForDefaultSchedulingCalendar;
- (int)entityType;
- (id)exportData;
- (id)externalID;
- (id)externalIDTag;
- (id)externalModificationTag;
- (id)externalRepresentation;
- (id)externalURI;
- (id)findOriginalAlarmStartingWith:(id)arg1;
- (unsigned int)flags;
- (bool)getColorRed:(int*)arg1 green:(int*)arg2 blue:(int*)arg3;
- (bool)hasEvents;
- (bool)hasSharees;
- (bool)hasTasks;
- (id)init;
- (unsigned long long)invitationStatus;
- (bool)isAffectingAvailability;
- (bool)isAlarmAcknowledgedPropertyDirty;
- (bool)isColorDisplayOnly;
- (bool)isDefaultSchedulingCalendar;
- (bool)isDeletable;
- (bool)isFacebookBirthdayCalendar;
- (bool)isFamilyCalendar;
- (bool)isHidden;
- (bool)isHolidaySubscribedCalendar;
- (bool)isIgnoringEventAlerts;
- (bool)isIgnoringSharedCalendarNotifications;
- (bool)isImmutable;
- (bool)isImmutableRaw;
- (bool)isInbox;
- (bool)isManaged;
- (bool)isMarkedImmutableSharees;
- (bool)isMarkedUndeletable;
- (bool)isMutableNaturalLanguageSuggestionsCalendar;
- (bool)isMutableSuggestionsCalendar;
- (bool)isNaturalLanguageSuggestedEventCalendar;
- (bool)isNotificationsCollection;
- (bool)isPublished;
- (bool)isSharingInvitation;
- (bool)isSubscribed;
- (bool)isSubscribedHolidayCalendar;
- (bool)isSuggestedEventCalendar;
- (bool)isSuggestionsCalendar;
- (bool)isSyncing;
- (id)lastSyncEndDate;
- (unsigned long long)lastSyncError;
- (id)lastSyncErrorData;
- (id)lastSyncErrorUserInfo;
- (id)lastSyncStartDate;
- (id)notes;
- (id)ownerIdentityAddress;
- (id)ownerIdentityDisplayName;
- (id)ownerIdentityEmail;
- (id)ownerIdentityFirstName;
- (int)ownerIdentityId;
- (id)ownerIdentityLastName;
- (id)ownerIdentityOrganizer;
- (id)ownerIdentityPhoneNumber;
- (bool)prohibitsScheduling;
- (id)publishURL;
- (id)pushKey;
- (bool)readOnly;
- (bool)refresh;
- (id)refreshDate;
- (bool)remove:(id*)arg1;
- (void)removeAcknowledgedSnoozedAlarms;
- (void)removeAlarms:(id)arg1;
- (void)removeAllSnoozedAlarms;
- (void)removeSharee:(id)arg1;
- (void)reset;
- (id)selectionSyncIdentifier;
- (id)selfIdentityAddress;
- (id)selfIdentityDisplayName;
- (id)selfIdentityEmail;
- (id)selfIdentityFirstName;
- (id)selfIdentityLastName;
- (id)selfIdentityPhoneNumber;
- (id)sendersEmail;
- (id)sendersPhoneNumber;
- (void)setAlarms:(id)arg1;
- (void)setAllAlarms:(id)arg1;
- (void)setAllowReminders:(bool)arg1;
- (void)setAllowedEntities:(int)arg1;
- (void)setAllowedEntityTypes:(unsigned long long)arg1;
- (void)setAllowsContentModifications:(bool)arg1;
- (void)setAllowsEvents:(bool)arg1;
- (void)setAllowsScheduling:(bool)arg1;
- (void)setCGColor:(struct CGColor { }*)arg1;
- (void)setCachedJunkStatus:(unsigned long long)arg1;
- (void)setCalendarIdentifier:(id)arg1;
- (void)setCanBePublished:(bool)arg1;
- (void)setCanBeShared:(bool)arg1;
- (void)setColorDisplayOnly:(bool)arg1;
- (void)setColorString:(id)arg1;
- (void)setColorStringRaw:(id)arg1;
- (void)setDigest:(id)arg1;
- (void)setDisplayOrder:(int)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalIDTag:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setExternalRepresentation:(id)arg1;
- (void)setFacebookBirthdayCalendar:(bool)arg1;
- (void)setFamilyCalendar:(bool)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHidden:(bool)arg1;
- (void)setImmutable:(bool)arg1;
- (void)setInbox:(bool)arg1;
- (void)setInvitationStatus:(unsigned long long)arg1;
- (void)setIsAffectingAvailability:(bool)arg1;
- (void)setIsDefaultSchedulingCalendar:(bool)arg1;
- (void)setIsIgnoringEventAlerts:(bool)arg1;
- (void)setIsIgnoringSharedCalendarNotifications:(bool)arg1;
- (void)setIsJunk:(bool)arg1;
- (void)setIsPublished:(bool)arg1;
- (void)setLastSyncEndDate:(id)arg1;
- (void)setLastSyncError:(unsigned long long)arg1;
- (void)setLastSyncError:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)setLastSyncErrorData:(id)arg1;
- (void)setLastSyncErrorUserInfo:(id)arg1;
- (void)setLastSyncStartDate:(id)arg1;
- (void)setMarkedImmutableSharees:(bool)arg1;
- (void)setMarkedUndeletable:(bool)arg1;
- (void)setNotes:(id)arg1;
- (void)setNotificationsCollection:(bool)arg1;
- (void)setOwnerIdentityAddress:(id)arg1;
- (void)setOwnerIdentityDisplayName:(id)arg1;
- (void)setOwnerIdentityEmail:(id)arg1;
- (void)setOwnerIdentityFirstName:(id)arg1;
- (void)setOwnerIdentityId:(id)arg1;
- (void)setOwnerIdentityLastName:(id)arg1;
- (void)setOwnerIdentityPhoneNumber:(id)arg1;
- (void)setProhibitsScheduling:(bool)arg1;
- (void)setPublishURL:(id)arg1;
- (void)setPushKey:(id)arg1;
- (void)setReadOnly:(bool)arg1;
- (void)setRefreshDate:(id)arg1;
- (void)setSelfIdentityAddress:(id)arg1;
- (void)setSelfIdentityDisplayName:(id)arg1;
- (void)setSelfIdentityEmail:(id)arg1;
- (void)setSelfIdentityFirstName:(id)arg1;
- (void)setSelfIdentityLastName:(id)arg1;
- (void)setSelfIdentityPhoneNumber:(id)arg1;
- (void)setSharedOwnerAddress:(id)arg1;
- (void)setSharedOwnerName:(id)arg1;
- (void)setSharedOwnerURL:(id)arg1;
- (void)setSharees:(id)arg1;
- (void)setSharingInvitation:(bool)arg1;
- (void)setSharingInvitationResponse:(unsigned long long)arg1;
- (void)setSharingStatus:(unsigned long long)arg1;
- (void)setSource:(id)arg1;
- (void)setSubcalAccountID:(id)arg1;
- (void)setSubscribed:(bool)arg1;
- (void)setSubscribedHolidayCalendar:(bool)arg1;
- (void)setSubscriptionID:(id)arg1;
- (void)setSymbolicColorName:(id)arg1;
- (void)setSyncToken:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setUnlocalizedTitle:(id)arg1;
- (id)sharedOwnerAddress;
- (id)sharedOwnerEmail;
- (id)sharedOwnerName;
- (id)sharedOwnerPhoneNumber;
- (id)sharedOwnerURL;
- (id)sharees;
- (unsigned long long)sharingInvitationResponse;
- (unsigned long long)sharingStatus;
- (void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(long long)arg3;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (id)source;
- (id)subcalAccountID;
- (id)subscriptionID;
- (unsigned long long)supportedEventAvailabilities;
- (bool)supportsJunkReporting;
- (id)symbolicColorName;
- (id)syncHash;
- (id)syncToken;
- (id)title;
- (long long)type;
- (id)unlocalizedTitle;
- (bool)validate:(id*)arg1;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

+ (id)displayColorForSymbolicName:(id)arg1;

- (id)displayColor;
- (id)uiColor;

// Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit

- (bool)hasSharees;
- (id)shareesAndOwner;

@end