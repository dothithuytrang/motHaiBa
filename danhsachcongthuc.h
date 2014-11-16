//
//  danhsachcongthuc.h
//  TracNghiem
//
//  Created by Trung Nguyen on 08/10/2014.
//  Copyright (c) Năm 2014 ThanhTrung. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface danhsachcongthuc : UITableViewController <UITableViewDelegate, UITableViewDataSource, NSXMLParserDelegate>
{
    
    int tongso;
    
    int dedachon;
    NSMutableArray *list_entry;
    NSMutableArray *list_URL;
    
    //variable for xml checker
    BOOL check_entryname;
    BOOL check_entrylink;
    BOOL check_entry;
    NSString *tmp_str;
    
    IBOutlet UITableView *TableViewList;
    NSUserDefaults *sendchonde;
}

@end
