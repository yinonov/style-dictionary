//
// Copyright 2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License").
// You may not use this file except in compliance with the License.
// A copy of the License is located at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// or in the "license" file accompanying this file. This file is distributed
// on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing
// permissions and limitations under the License.
//
//  IconsViewController.h
//

#import <UIKit/UIKit.h>
#import <StyleDictionary/StyleDictionary.h>
#import <StyleDictionary/StyleDictionaryProperties.h>
#import "IconViewCell.h"
#import "IconDetailViewController.h"

@interface IconsViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource>

@property NSArray *tableData;

@end
