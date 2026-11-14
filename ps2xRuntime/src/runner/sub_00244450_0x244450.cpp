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

// Function: sub_00244450
// Address: 0x244450 - 0x244480
void sub_00244450_0x244450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244450_0x244450");
#endif

    ctx->pc = 0x244450u;

    // 0x244450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x244454: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x244454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x244458: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x244458u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x24445c: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x24445cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244460: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x244460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244464: 0xa064004a  sb          $a0, 0x4A($v1)
    ctx->pc = 0x244464u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 74), (uint8_t)GPR_U32(ctx, 4));
    // 0x244468: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x244468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24446c: 0x3e00008  jr          $ra
    ctx->pc = 0x24446Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24446Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244474u;
    // 0x244474: 0x0  nop
    ctx->pc = 0x244474u;
    // NOP
    // 0x244478: 0x0  nop
    ctx->pc = 0x244478u;
    // NOP
    // 0x24447c: 0x0  nop
    ctx->pc = 0x24447cu;
    // NOP
    ctx->pc = 0x244480u;
}
