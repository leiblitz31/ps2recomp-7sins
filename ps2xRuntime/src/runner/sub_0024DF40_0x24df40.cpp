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

// Function: sub_0024DF40
// Address: 0x24df40 - 0x24df90
void sub_0024DF40_0x24df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DF40_0x24df40");
#endif

    switch (ctx->pc) {
        case 0x24df68u: goto label_24df68;
        case 0x24df7cu: goto label_24df7c;
        default: break;
    }

    ctx->pc = 0x24df40u;

    // 0x24df40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24df40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24df44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24df44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24df48: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24df48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x24df4c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x24df4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x24df50: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x24df50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x24df54: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x24df54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x24df58: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x24df58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24df5c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x24df5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24df60: 0xc093cdc  jal         func_24F370
    ctx->pc = 0x24DF60u;
    SET_GPR_U32(ctx, 31, 0x24DF68u);
    ctx->pc = 0x24F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F370u, 0x24DF60u, 0x24DF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF68u;
label_24df68:
    // 0x24df68: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24df68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24df6c: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x24df6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x24df70: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x24df70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x24df74: 0xc0937e4  jal         func_24DF90
    ctx->pc = 0x24DF74u;
    SET_GPR_U32(ctx, 31, 0x24DF7Cu);
    ctx->pc = 0x24DF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DF90u, 0x24DF74u, 0x24DF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF7Cu;
label_24df7c:
    // 0x24df7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24df7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24df80: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x24df80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24df84: 0x3e00008  jr          $ra
    ctx->pc = 0x24DF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DF8Cu;
    // 0x24df8c: 0x0  nop
    ctx->pc = 0x24df8cu;
    // NOP
    ctx->pc = 0x24df90u;
}
