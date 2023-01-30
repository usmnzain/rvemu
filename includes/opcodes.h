//Register type `
#define R_TYPE      0x33
    #define ADD_SUB 0x0
        #define ADD 0x00
        #define SUB 0x20
    #define SLL     0x1
    #define SLT     0x2
    #define SLTU    0x3
    #define XOR     0x4
    #define SR      0x5
        #define SRL 0x00
        #define SRA 0x20
    #define OR      0x6
    #define AND     0x7

// Register double word
#define RW_TYPE         0x3B
    #define ADD_SUB_W   0x0
        #define ADDW    0x00
        #define SUBW    0x20
    #define SLLW        0x1
    #define SRW         0x5
        #define SRLW    0x00
        #define SRAW    0x20

// Immediate type
#define I_TYPE 0x13
    #define ADDI    0x0
    #define SLLI    0x1
    #define SLTI    0x2
    #define SLTIU   0x3
    #define XORI    0x4
    #define SRI     0x5
        #define SRLI    0x00
        #define SRAI    0x20
    #define ORI     0x6
    #define ANDI    0x7

// Immediate Double Word
#define IW_TYPE 0x1B
    #define ADDIW   0x0
    #define SLLIW   0x1
    #define SRIW    0x5
        #define SRLIW   0x00
        #define SRAIW   0x20

// Load Instructions
#define IL_TYPE 0x3
    #define LB      0x0
    #define LH      0x1
    #define LW      0x2
    #define LD      0x3
    #define LBU     0x4
    #define LHU     0x5
    #define LWU     0x6

#define IJ_TYPE 0x67 //JALR

#define IS_TYPE 0x73 //ECALL EBREAK