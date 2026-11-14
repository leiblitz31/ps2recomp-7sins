#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E6070
// Address: 0x4e6070 - 0x4e60e0
void sub_004E6070_0x4e6070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6070_0x4e6070");
#endif

    switch (ctx->pc) {
        case 0x4e609cu: goto label_4e609c;
        case 0x4e60b8u: goto label_4e60b8;
        default: break;
    }

    ctx->pc = 0x4e6070u;

    // 0x4e6070: 0x42474d26  .word       0x42474D26                   # INVALID     $s2, $a3, 0x4D26 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e6070u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x4E6070 raw=0x42474D26");
    // 0x4e6074: 0x4f435f4b  .word       0x4F435F4B                   # INVALID     $k0, $v1, 0x5F4B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6074u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6074 raw=0x4F435F4B");
    // 0x4e6078: 0x444f424d  .word       0x444F424D                   # cfc1        $t7, $8 # 0000024D <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6078u;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR8
    // 0x4e607c: 0x4f505349  .word       0x4F505349                   # INVALID     $k0, $s0, 0x5349 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e607cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E607C raw=0x4F505349");
    // 0x4e6080: 0x0  nop
    ctx->pc = 0x4e6080u;
    // NOP
    // 0x4e6084: 0x0  nop
    ctx->pc = 0x4e6084u;
    // NOP
    // 0x4e6088: 0x0  nop
    ctx->pc = 0x4e6088u;
    // NOP
    // 0x4e608c: 0x0  nop
    ctx->pc = 0x4e608cu;
    // NOP
    // 0x4e6090: 0x3e8f5c29  .word       0x3E8F5C29                   # lui         $t7, 0x5C29 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6090u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
    // 0x4e6094: 0x3e8f5c29  .word       0x3E8F5C29                   # lui         $t7, 0x5C29 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6094u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
    // 0x4e6098: 0x0  nop
    ctx->pc = 0x4e6098u;
    // NOP
label_4e609c:
    // 0x4e609c: 0x0  nop
    ctx->pc = 0x4e609cu;
    // NOP
    // 0x4e60a0: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e60a0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
    // 0x4e60a4: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e60a4u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
    // 0x4e60a8: 0x3f666666  .word       0x3F666666                   # lui         $a2, 0x6666 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e60a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
    // 0x4e60ac: 0xbf666666  cache       0x06, 0x6666($k1)
    ctx->pc = 0x4e60acu;
    // CACHE instruction (ignored)
    // 0x4e60b0: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e60b0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
    // 0x4e60b4: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e60b4u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_4e60b8:
    // 0x4e60b8: 0x3f4ccccd  .word       0x3F4CCCCD                   # lui         $t4, 0xCCCD # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e60b8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
    // 0x4e60bc: 0xbf4ccccd  cache       0x0C, -0x3333($k0)
    ctx->pc = 0x4e60bcu;
    // CACHE instruction (ignored)
    // 0x4e60c0: 0x3f333333  .word       0x3F333333                   # lui         $s3, 0x3333 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e60c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
    // 0x4e60c4: 0x3f333333  .word       0x3F333333                   # lui         $s3, 0x3333 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e60c4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
    // 0x4e60c8: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x4e60c8u;
    // CACHE instruction (ignored)
    // 0x4e60cc: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x4e60ccu;
    // CACHE instruction (ignored)
    // 0x4e60d0: 0x3f333333  .word       0x3F333333                   # lui         $s3, 0x3333 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e60d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
    // 0x4e60d4: 0x3f333333  .word       0x3F333333                   # lui         $s3, 0x3333 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e60d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
    // 0x4e60d8: 0xbe99999a  cache       0x19, -0x6666($s4)
    ctx->pc = 0x4e60d8u;
    // CACHE instruction (ignored)
    // 0x4e60dc: 0xbe99999a  cache       0x19, -0x6666($s4)
    ctx->pc = 0x4e60dcu;
    // CACHE instruction (ignored)
    ctx->pc = 0x4e60e0u;
}
