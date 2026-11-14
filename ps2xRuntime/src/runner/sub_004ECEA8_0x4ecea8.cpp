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

// Function: sub_004ECEA8
// Address: 0x4ecea8 - 0x4eceb8
void sub_004ECEA8_0x4ecea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECEA8_0x4ecea8");
#endif

    ctx->pc = 0x4ecea8u;

    // 0x4ecea8: 0x722e6169  .word       0x722E6169                   # INVALID     $s1, $t6, 0x6169 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x4ecea8u;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x5 at 0x4ECEA8 raw=0x722E6169");
    // 0x4eceac: 0x74636165  .word       0x74636165                   # INVALID     $v1, $v1, 0x6165 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4eceacu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ECEAC raw=0x74636165");
    // 0x4eceb0: 0x6e6f69  .word       0x006E6F69                   # mtsa        $v1 # 000E6F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4eceb0u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
    // 0x4eceb4: 0x0  nop
    ctx->pc = 0x4eceb4u;
    // NOP
    ctx->pc = 0x4eceb8u;
}
