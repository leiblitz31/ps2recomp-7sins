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

// Function: sub_004ECC88
// Address: 0x4ecc88 - 0x4ecc98
void sub_004ECC88_0x4ecc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECC88_0x4ecc88");
#endif

    ctx->pc = 0x4ecc88u;

    // 0x4ecc88: 0x74736f70  .word       0x74736F70                   # INVALID     $v1, $s3, 0x6F70 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ecc88u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ECC88 raw=0x74736F70");
    // 0x4ecc8c: 0x3d657275  .word       0x3D657275                   # lui         $a1, 0x7275 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ecc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29301 << 16));
    // 0x4ecc90: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecc90u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4ecc94: 0x0  nop
    ctx->pc = 0x4ecc94u;
    // NOP
    ctx->pc = 0x4ecc98u;
}
