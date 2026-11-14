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

// Function: sub_00221C40
// Address: 0x221c40 - 0x221c80
void sub_00221C40_0x221c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221C40_0x221c40");
#endif

    switch (ctx->pc) {
        case 0x221c58u: goto label_221c58;
        case 0x221c68u: goto label_221c68;
        default: break;
    }

    ctx->pc = 0x221c40u;

    // 0x221c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x221c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x221c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221c48: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x221c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x221c4c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x221c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x221c50: 0xc0887ac  jal         func_221EB0
    ctx->pc = 0x221C50u;
    SET_GPR_U32(ctx, 31, 0x221C58u);
    ctx->pc = 0x221EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221EB0u, 0x221C50u, 0x221C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221C58u;
label_221c58:
    // 0x221c58: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x221c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221c5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x221c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221c60: 0xc08876c  jal         func_221DB0
    ctx->pc = 0x221C60u;
    SET_GPR_U32(ctx, 31, 0x221C68u);
    ctx->pc = 0x221DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221DB0u, 0x221C60u, 0x221C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221C68u;
label_221c68:
    // 0x221c68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x221c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221c6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221c70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x221c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x221c74: 0x3e00008  jr          $ra
    ctx->pc = 0x221C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221C7Cu;
    // 0x221c7c: 0x0  nop
    ctx->pc = 0x221c7cu;
    // NOP
    ctx->pc = 0x221c80u;
}
