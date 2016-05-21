# idaplugin
Visual Studio 2015 template for creating IDA plugins with IDA/SDK version v6.8.

Basically just add this to make a loader:

    int idaapi accept_file(linput_t *li, char fileformatname[MAX_FILE_FORMAT_NAME], int n) {
    	
    }
    
    void idaapi load_file(linput_t *li, ushort neflag, const char *fileformatname) {
    
    }
    
    int idaapi write_file(FILE *fp, const char *fileformatname) {
    
    }
    
    //--------------------------------------------------------------------------
    loader_t LDSC = {
      IDP_INTERFACE_VERSION,
      0,                            // loader flags
    //
    //      check input file format. if recognized, then return 1
    //      and fill 'fileformatname'.
    //      otherwise return 0
    //
      accept_file,
    //
    //      load file into the database.
    //
      load_file,
    //
    //      create output file from the database.
    //      this function may be absent.
    //
      write_file,
    };
