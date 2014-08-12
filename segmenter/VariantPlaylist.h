/*
 * VariantPlaylist.h
 *
 *  Created on: Aug 8, 2014
 *      Author: satram
 */

#ifndef VARIANTPLAYLIST_H_
#define VARIANTPLAYLIST_H_

#include "segmenterCommon.h"

class VariantPlaylist {
    std::string transcoded_output_url;
    std::string transcoded_output_path;
    std::string transcoded_output_filename;
    std::string media_playlist_filename;
    std::string iframe_playlist_filename;
    MediaPlaylist *mediaUrl;
    IFramePlaylist *iframeUrl;
public:
    VariantPlaylist(ConfigParams & config, variant_stream_info & var);
    virtual ~VariantPlaylist();
    void publish_playlist();
    void update_iframe_playlist(IFrameIndex *index);
    void update_media_playlist(IFrameIndex *index);
    void add_header(ConfigParams & config, variant_stream_info & var);
	friend class MediaPlaylist;
	friend class IFramePlaylist;

};

#endif /* VARIANTPLAYLIST_H_ */