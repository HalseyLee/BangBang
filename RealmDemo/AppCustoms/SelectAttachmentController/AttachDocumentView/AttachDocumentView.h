//
//  AttachDocumentView.h
//  RealmDemo
//
//  Created by lottak_mac2 on 16/8/9.
//  Copyright © 2016年 com.luohaifang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AttachmentSelectDelegate.h"
//附件文档选择
@interface AttachDocumentView : UIView

@property (nonatomic, weak) id<AttachmentSelectDelegate> delegate;

@end
