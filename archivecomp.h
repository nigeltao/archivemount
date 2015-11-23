#if ARCHIVE_VERSION_NUMBER < 3000000

#define archive_read_support_filter_all archive_read_support_compression_all 
#define archive_write_add_filter_gzip archive_write_set_compression_gzip
#define archive_write_add_filter_bzip2 archive_write_set_compression_bzip2
#define archive_write_add_filter_none archive_write_set_compression_none

#define archive_read_free archive_read_finish
#define archive_write_free archive_write_finish

#define archive_filter_code(arc, num) archive_compression(arc)

#endif