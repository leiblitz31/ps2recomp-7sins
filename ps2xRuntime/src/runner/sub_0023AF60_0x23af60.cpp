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

// Function: sub_0023AF60
// Address: 0x23af60 - 0x23afd0
void sub_0023AF60_0x23af60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AF60_0x23af60");
#endif

    switch (ctx->pc) {
        case 0x23af88u: goto label_23af88;
        case 0x23af98u: goto label_23af98;
        case 0x23afb8u: goto label_23afb8;
        default: break;
    }

    ctx->pc = 0x23af60u;

    // 0x23af60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23af60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23af64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23af64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23af68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23af68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23af6c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23af6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23af70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23af70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23af74: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23AF74u;
    {
        const bool branch_taken_0x23af74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23af74) {
            ctx->pc = 0x23AFB8u;
            goto label_23afb8;
        }
    }
    ctx->pc = 0x23AF7Cu;
    // 0x23af7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23af80: 0xc08ebf4  jal         func_23AFD0
    ctx->pc = 0x23AF80u;
    SET_GPR_U32(ctx, 31, 0x23AF88u);
    ctx->pc = 0x23AFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AFD0u, 0x23AF80u, 0x23AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF88u;
label_23af88:
    // 0x23af88: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23af88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23af8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23af8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23af90: 0xc08eac4  jal         func_23AB10
    ctx->pc = 0x23AF90u;
    SET_GPR_U32(ctx, 31, 0x23AF98u);
    ctx->pc = 0x23AB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AB10u, 0x23AF90u, 0x23AF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF98u;
label_23af98:
    // 0x23af98: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23af98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23af9c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23af9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23afa0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23afa0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23afa4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23AFA4u;
    {
        const bool branch_taken_0x23afa4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23afa4) {
            ctx->pc = 0x23AFB8u;
            goto label_23afb8;
        }
    }
    ctx->pc = 0x23AFACu;
    // 0x23afac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23afacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23afb0: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23AFB0u;
    SET_GPR_U32(ctx, 31, 0x23AFB8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23AFB0u, 0x23AFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AFB8u;
label_23afb8:
    // 0x23afb8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23afbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23afbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23afc0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23afc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23afc4: 0x3e00008  jr          $ra
    ctx->pc = 0x23AFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AFCCu;
    // 0x23afcc: 0x0  nop
    ctx->pc = 0x23afccu;
    // NOP
    ctx->pc = 0x23afd0u;
}
