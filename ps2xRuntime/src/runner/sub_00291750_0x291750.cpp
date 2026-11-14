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

// Function: sub_00291750
// Address: 0x291750 - 0x291780
void sub_00291750_0x291750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291750_0x291750");
#endif

    ctx->pc = 0x291750u;

    // 0x291750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x291754: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x291754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x291758: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x291758u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x29175c: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x29175cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291760: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x291760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291764: 0xa0640068  sb          $a0, 0x68($v1)
    ctx->pc = 0x291764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 104), (uint8_t)GPR_U32(ctx, 4));
    // 0x291768: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x291768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29176c: 0x3e00008  jr          $ra
    ctx->pc = 0x29176Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29176Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291774u;
    // 0x291774: 0x0  nop
    ctx->pc = 0x291774u;
    // NOP
    // 0x291778: 0x0  nop
    ctx->pc = 0x291778u;
    // NOP
    // 0x29177c: 0x0  nop
    ctx->pc = 0x29177cu;
    // NOP
    ctx->pc = 0x291780u;
}
