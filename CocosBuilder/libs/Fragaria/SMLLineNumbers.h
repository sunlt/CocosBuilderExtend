/*
 
 MGSFragaria
 Written by Jonathan Mitchell, jonathan@mugginsoft.com
 Find the latest version at https://github.com/mugginsoft/Fragaria
 
Smultron version 3.6b1, 2009-09-12
Written by Peter Borg, pgw3@mac.com
Find the latest version at http://smultron.sourceforge.net

Copyright 2004-2009 Peter Borg
 
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 
http://www.apache.org/licenses/LICENSE-2.0
 
Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/

#import <Cocoa/Cocoa.h>

@class SMLTextView;

@interface SMLLineNumbers : NSObject {
	NSPoint zeroPoint;
	NSClipView *updatingLineNumbersForClipView;
    
    id document;
    NSDictionary* attributes;
}
@property (nonatomic,retain) id document;
@property (nonatomic,retain) NSDictionary* attributes;
- (id)initWithDocument:(id)theDocument;
- (void)viewBoundsDidChange:(NSNotification *)notification;
- (void)updateLineNumbersCheckWidth:(BOOL)checkWidth recolour:(BOOL)recolour;
- (void)updateLineNumbersForClipView:(NSClipView *)clipView checkWidth:(BOOL)checkWidth recolour:(BOOL)recolour;

@end