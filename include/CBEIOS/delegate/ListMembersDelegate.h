#ifndef CBE__delegate__ListMembersDelegate_h__
#define CBE__delegate__ListMembersDelegate_h__
#import <Foundation/Foundation.h>
#include "CBEIOS/delegate/Error.h"

#include "CBEIOS/util/Context.h"
#include "CBEIOS/Types.h"


@protocol ListMembersDelegatePtr <NSObject> 
@required
   /**
   * Called upon successful ListMembers.
   * @param members Vector of cbe::Member holding the members
   * of a group.
   */
  -(void) onListMembersSuccess:(NSArray*) members;

  /**
   * Called if an error is encountered.
   */
  -(void) onListMembersError:(CBEError*)error  context:(CBEContext*)context;

  /**
   * Contains all information about a failed ListMembers.
   */
@end
#endif // !CBE__delegate__ListMembersDelegate_h__
