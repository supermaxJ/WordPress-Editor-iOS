//
//  WPEditorField.h
//  Pods
//
//  Created by Diego E. Rey Mendez on 9/26/14.
//
//

#import <Foundation/Foundation.h>

@interface WPEditorField : NSObject

/**
 *  @brief      inputAccessoryView      The input accessory view for the field.
 */
@property (nonatomic, strong, readwrite) UIView* inputAccessoryView;

/**
 *  @brief      nodeId      The ID of the HTML node this editor field wraps.
 */
@property (nonatomic, copy, readonly) NSString* nodeId;

#pragma mark - Initializers

/**
 *  @brief      Initializes the field with the specified HTML node id.
 *
 *  @param      nodeId      The id of the html node this object will wrap.  Cannot be nil.
 *  @param      webVieq     The web view to use for all javascript calls.  Cannot be nil.
 *
 *  @returns    The initialized object.
 */
- (instancetype)initWithId:(NSString*)nodeId
                   webView:(UIWebView*)webView;

#pragma mark - DOM status

/**
 *  @brief      Called by the owner of this field to signal the DOM has been loaded.
 */
- (void)handleDOMLoaded;

#pragma mark - HTML

/**
 *  @brief      Retrieves the field's html contents.
 *
 *  @returns    The field's html contents.
 */
- (NSString*)html;

/**
 *  @brief      Sets the field's html contents.
 *
 *  @param      html     The new field's html contents.
 */
- (void)setHTML:(NSString*)html;

#pragma mark - Placeholder

/**
 *  @brief      Sets the placeholder text for this field.
 *
 *  @param      placeholderText     The new placeholder text.
 */
- (void)setPlaceholderText:(NSString*)placeholderText;

/**
 *  @brief      Sets the placeholder color for this field.
 *
 *  @param      placeholderText     The new placeholder color.
 */
- (void)setPlaceholderColor:(UIColor *)placeholderColor;

@end
