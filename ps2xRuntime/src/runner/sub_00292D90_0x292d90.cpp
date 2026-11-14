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

// Function: sub_00292D90
// Address: 0x292d90 - 0x292de0
void sub_00292D90_0x292d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292D90_0x292d90");
#endif

    ctx->pc = 0x292d90u;

    // 0x292d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x292d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x292d94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x292d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x292d98: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x292d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x292d9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x292d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292da0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x292da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292da4: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x292da4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x292da8: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x292da8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x292dac: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x292dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x292db0: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x292db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x292db4: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x292db4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x292db8: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x292db8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x292dbc: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x292dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x292dc0: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x292dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x292dc4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x292dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292dc8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x292dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x292dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x292DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292DD4u;
    // 0x292dd4: 0x0  nop
    ctx->pc = 0x292dd4u;
    // NOP
    // 0x292dd8: 0x0  nop
    ctx->pc = 0x292dd8u;
    // NOP
    // 0x292ddc: 0x0  nop
    ctx->pc = 0x292ddcu;
    // NOP
    ctx->pc = 0x292de0u;
}
