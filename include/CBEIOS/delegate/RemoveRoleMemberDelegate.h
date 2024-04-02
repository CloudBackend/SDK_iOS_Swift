#ifndef CBE__delegate__RemoveRoleMemberDelegate_h__
#define CBE__delegate__RemoveRoleMemberDelegate_h__
#import <Foundation/Foundation.h>
#include "CBEIOS/delegate/Error.h"

#include "CBEIOS/util/Context.h"
#include "CBEIOS/Types.h"


@protocol RemoveRoleMemberDelegatePtr <NSObject> 
@required
   /**
   * Called upon successful RemoveRoleMember.
   * @param memberId id of the removed member 
   */
  -(void) onRemoveRoleMemberSuccess;

  /**
   * Called if an error is encountered.
   */
  -(void) onRemoveRoleMemberError:(CBEError*)error  context:(CBEContext*)context;
@end
#endif // !CBE__delegate__RemoveRoleMemberDelegate_h__
