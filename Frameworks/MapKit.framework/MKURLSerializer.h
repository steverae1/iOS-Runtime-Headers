/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKRisonParser;

@interface MKURLSerializer : NSObject {
    MKRisonParser *_parser;
}

- (id)_mapOptionsForUrlRepresentation:(id)arg1;
- (unsigned int)_mapTypeForString:(id)arg1;
- (id)_modeKeyForString:(id)arg1;
- (id)_stringForMapType:(unsigned int)arg1;
- (id)_stringForMode:(int)arg1;
- (id)_urlRepresentationForMapOptions:(id)arg1;
- (id)_urlWithAction:(id)arg1 query:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)mapItemsFromUrl:(id)arg1 options:(id*)arg2;
- (id)urlForDirectionsFromMapItem:(id)arg1 toMapItem:(id)arg2 directionsMode:(int)arg3 options:(id)arg4;
- (id)urlForOpeningMapItems:(id)arg1 options:(id)arg2;

@end
