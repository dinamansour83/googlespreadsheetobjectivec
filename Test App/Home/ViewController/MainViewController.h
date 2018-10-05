//
//  MainViewController.h
//  Test App
//
//  Created by Dina Mansour on 9/8/18.

//

#import <UIKit/UIKit.h>
#import "BaseViewController.h"


@interface MainViewController : BaseViewController<UITableViewDelegate, UITableViewDataSource>
@property (weak, nonatomic) IBOutlet UITableView *tableView;

@end
