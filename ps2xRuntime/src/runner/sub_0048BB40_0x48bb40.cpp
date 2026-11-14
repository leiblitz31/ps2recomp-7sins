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

// Function: sub_0048BB40
// Address: 0x48bb40 - 0x48bb90
void sub_0048BB40_0x48bb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048BB40_0x48bb40");
#endif

    switch (ctx->pc) {
        case 0x48bb58u: goto label_48bb58;
        case 0x48bb68u: goto label_48bb68;
        default: break;
    }

    ctx->pc = 0x48bb40u;

    // 0x48bb40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48bb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48bb44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48bb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48bb48: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48bb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x48bb4c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x48bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x48bb50: 0xc122fa8  jal         func_48BEA0
    ctx->pc = 0x48BB50u;
    SET_GPR_U32(ctx, 31, 0x48BB58u);
    ctx->pc = 0x48BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BEA0u, 0x48BB50u, 0x48BB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BB58u;
label_48bb58:
    // 0x48bb58: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48bb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48bb5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48bb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48bb60: 0xc122f68  jal         func_48BDA0
    ctx->pc = 0x48BB60u;
    SET_GPR_U32(ctx, 31, 0x48BB68u);
    ctx->pc = 0x48BDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BDA0u, 0x48BB60u, 0x48BB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BB68u;
label_48bb68:
    // 0x48bb68: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x48bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x48bb6c: 0x24636db8  addiu       $v1, $v1, 0x6DB8
    ctx->pc = 0x48bb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28088));
    // 0x48bb70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48bb74: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x48bb74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x48bb78: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48bb7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48bb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48bb80: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48bb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48bb84: 0x3e00008  jr          $ra
    ctx->pc = 0x48BB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48BB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48BB8Cu;
    // 0x48bb8c: 0x0  nop
    ctx->pc = 0x48bb8cu;
    // NOP
    ctx->pc = 0x48bb90u;
}
