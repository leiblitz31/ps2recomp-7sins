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

// Function: sub_004ECC48
// Address: 0x4ecc48 - 0x4ecc58
void sub_004ECC48_0x4ecc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECC48_0x4ecc48");
#endif

    ctx->pc = 0x4ecc48u;

    // 0x4ecc48: 0x65766572  daddiu      $s6, $t3, 0x6572
    ctx->pc = 0x4ecc48u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25970);
    // 0x4ecc4c: 0x3d657372  .word       0x3D657372                   # lui         $a1, 0x7372 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ecc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29554 << 16));
    // 0x4ecc50: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecc50u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4ecc54: 0x0  nop
    ctx->pc = 0x4ecc54u;
    // NOP
    ctx->pc = 0x4ecc58u;
}
