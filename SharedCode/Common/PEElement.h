enum PEElement {
    PE_PARSE_HEADER = 0x0001,
    PE_PARSE_EAT = 0x0002,
    PE_PARSE_IAT = 0x0004,
    PE_PARSE_TLS = 0x0008,
    PE_PARSE_DEBUG = 0x0010,
    PE_PARSE_ALL = 0x00FF,
    PE_NO_VALIDATION = 0x0100,
};
/*
enum PEElement_ {
    PE_PARSE_HEADER = 0x1000,
    PE_PARSE_EAT = 0x2000,
    PE_PARSE_IAT = 0x4000,
    PE_PARSE_TLS = 0x8000,
    PE_PARSE_DEBUG = 0x10000,
    PE_PARSE_ALL = 0xFFFFF
};
*/