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

// Function: sub_004E3170
// Address: 0x4e3170 - 0x4e3180
void sub_004E3170_0x4e3170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3170_0x4e3170");
#endif

    ctx->pc = 0x4e3170u;

    // 0x4e3170: 0x656c6573  daddiu      $t4, $t3, 0x6573
    ctx->pc = 0x4e3170u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25971);
    // 0x4e3174: 0x64657463  daddiu      $a1, $v1, 0x7463
    ctx->pc = 0x4e3174u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29795);
    // 0x4e3178: 0x7463615f  .word       0x7463615F                   # INVALID     $v1, $v1, 0x615F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3178u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E3178 raw=0x7463615F");
    // 0x4e317c: 0x6e6f69  .word       0x006E6F69                   # mtsa        $v1 # 000E6F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e317cu;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
    ctx->pc = 0x4e3180u;
}
