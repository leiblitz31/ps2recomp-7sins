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

// Function: sub_004ECEB8
// Address: 0x4eceb8 - 0x4ecec8
void sub_004ECEB8_0x4eceb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECEB8_0x4eceb8");
#endif

    ctx->pc = 0x4eceb8u;

    // 0x4eceb8: 0x702e6169  .word       0x702E6169                   # INVALID     $at, $t6, 0x6169 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x4eceb8u;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x5 at 0x4ECEB8 raw=0x702E6169");
    // 0x4ecebc: 0x7265776f  .word       0x7265776F                   # INVALID     $s3, $a1, 0x776F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ecebcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x4ECEBC raw=0x7265776F");
    // 0x4ecec0: 0x0  nop
    ctx->pc = 0x4ecec0u;
    // NOP
    // 0x4ecec4: 0x0  nop
    ctx->pc = 0x4ecec4u;
    // NOP
    ctx->pc = 0x4ecec8u;
}
