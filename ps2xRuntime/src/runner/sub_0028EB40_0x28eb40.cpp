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

// Function: sub_0028EB40
// Address: 0x28eb40 - 0x28eb90
void sub_0028EB40_0x28eb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EB40_0x28eb40");
#endif

    switch (ctx->pc) {
        case 0x28eb64u: goto label_28eb64;
        default: break;
    }

    ctx->pc = 0x28eb40u;

    // 0x28eb40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28eb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28eb44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28eb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28eb48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28eb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28eb4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28eb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x28eb50: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x28eb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x28eb54: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28eb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28eb58: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x28eb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28eb5c: 0xc0a20e8  jal         func_2883A0
    ctx->pc = 0x28EB5Cu;
    SET_GPR_U32(ctx, 31, 0x28EB64u);
    ctx->pc = 0x2883A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2883A0u, 0x28EB5Cu, 0x28EB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EB64u;
label_28eb64:
    // 0x28eb64: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x28eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28eb68: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x28eb68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28eb6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28eb70: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x28eb70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x28eb74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28eb78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28eb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28eb7c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28eb7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28eb80: 0x3e00008  jr          $ra
    ctx->pc = 0x28EB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EB88u;
    // 0x28eb88: 0x0  nop
    ctx->pc = 0x28eb88u;
    // NOP
    // 0x28eb8c: 0x0  nop
    ctx->pc = 0x28eb8cu;
    // NOP
    ctx->pc = 0x28eb90u;
}
