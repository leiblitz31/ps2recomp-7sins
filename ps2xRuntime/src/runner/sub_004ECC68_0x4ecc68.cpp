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

// Function: sub_004ECC68
// Address: 0x4ecc68 - 0x4ecc78
void sub_004ECC68_0x4ecc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECC68_0x4ecc68");
#endif

    ctx->pc = 0x4ecc68u;

    // 0x4ecc68: 0x7479656b  .word       0x7479656B                   # INVALID     $v1, $t9, 0x656B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ecc68u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ECC68 raw=0x7479656B");
    // 0x4ecc6c: 0x3d656d69  .word       0x3D656D69                   # lui         $a1, 0x6D69 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ecc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28009 << 16));
    // 0x4ecc70: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecc70u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4ecc74: 0x0  nop
    ctx->pc = 0x4ecc74u;
    // NOP
    ctx->pc = 0x4ecc78u;
}
