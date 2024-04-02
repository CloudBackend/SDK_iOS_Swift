/*
    Copyright © CloudBackend AB 2023.
*/

#ifndef CBE_ROLE_H
#define CBE_ROLE_H

#include "CBEIOS/delegate/AddRoleMemberDelegate.h"
#include "CBEIOS/delegate/RemoveRoleMemberDelegate.h"
#include "CBEIOS/delegate/ListMembersDelegate.h"

/*!
 * @brief list of members of a Group.
 * 
 */
@interface CBERole : NSObject {
}
/**
* Returns the name of this role.
*/
-(NSString*) name;

/**
* Returns the id of this role.
*/
-(CBERoleId) id;

/**
* Returns the id of the group that this role belongs to.
*/
-(CBEGroupId) groupId;

/**
* Returns the members of this role.
*/
// std::vector<CBI::MemberPtr> members;
-(NSArray*) members;

/**
* List all members in this role.
*/
-(void) listMembers:(id<ListMembersDelegatePtr>) delegate;

/**
* Add a member to this role.
*/
-(void) addMember:(CBEMemberId)                  memberId
        delegate: (id<AddRoleMemberDelegatePtr>) delegate;

/**
* Remove a member from this role.
*/
-(void) removeMember:(CBEMemberId)                 memberId
        delegate:(id<RemoveRoleMemberDelegatePtr>) delegate;

- (id) initWith:(void*) cbiPeerPtr;

@end
#endif //CBE_ROLE_H
