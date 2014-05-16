//
//  RMGalleryCell.h
//  RMGallery
//
//  Created by Hermés Piqué on 20/03/14.
//  Copyright (c) 2014 Robot Media. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIKit.h>

@interface RMGalleryCell : UICollectionViewCell

@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicatorView;

@property (nonatomic, readonly) UIScrollView *scrollView;

@property (nonatomic, strong) UIImage *image;

- (void)doubleTapAtPoint:(CGPoint)point;

- (void)setImage:(UIImage *)image inSize:(CGSize)size;

@end
