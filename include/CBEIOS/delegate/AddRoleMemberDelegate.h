#ifndef CBE__delegate__AddRoleMemberDelegate_h__
#define CBE__delegate__AddRoleMemberDelegate_h__
#import <Foundation/Foundation.h>
#include "CBEIOS/delegate/Error.h"

#include "CBEIOS/util/Context.h"
#include "CBEIOS/Types.h"


@protocol AddRoleMemberDelegatePtr <NSObject> 
@required
   /**
   * Called upon successful AddRoleMember.
   * @param memberId holding the id to the member added to a role in a group
   */
  -(void) onAddRoleMemberSuccess;

  /**
   * Called if an error is encountered.
   */
  -(void) onAddRoleMemberError:(CBEError*)error  context:(CBEContext*)context;

  /**
   * Contains all information about a failed AddRoleMember.
   */
@end
#endif // !CBE__delegate__AddRoleMemberDelegate_h__
