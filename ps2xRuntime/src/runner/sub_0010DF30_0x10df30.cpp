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

// Function: sub_0010DF30
// Address: 0x10df30 - 0x10dfa0
void sub_0010DF30_0x10df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DF30_0x10df30");
#endif

    switch (ctx->pc) {
        case 0x10df58u: goto label_10df58;
        case 0x10df68u: goto label_10df68;
        case 0x10df88u: goto label_10df88;
        default: break;
    }

    ctx->pc = 0x10df30u;

    // 0x10df30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10df30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10df34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10df34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10df38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10df38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10df3c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x10df3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x10df40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10df44: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10DF44u;
    {
        const bool branch_taken_0x10df44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10df44) {
            ctx->pc = 0x10DF88u;
            goto label_10df88;
        }
    }
    ctx->pc = 0x10DF4Cu;
    // 0x10df4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10df4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10df50: 0xc043804  jal         func_10E010
    ctx->pc = 0x10DF50u;
    SET_GPR_U32(ctx, 31, 0x10DF58u);
    ctx->pc = 0x10E010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E010u, 0x10DF50u, 0x10DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF58u;
label_10df58:
    // 0x10df58: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10df58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10df5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10df5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10df60: 0xc0437e8  jal         func_10DFA0
    ctx->pc = 0x10DF60u;
    SET_GPR_U32(ctx, 31, 0x10DF68u);
    ctx->pc = 0x10DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFA0u, 0x10DF60u, 0x10DF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF68u;
label_10df68:
    // 0x10df68: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x10df68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10df6c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x10df6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x10df70: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10df70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10df74: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DF74u;
    {
        const bool branch_taken_0x10df74 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x10df74) {
            ctx->pc = 0x10DF88u;
            goto label_10df88;
        }
    }
    ctx->pc = 0x10DF7Cu;
    // 0x10df7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10df80: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x10DF80u;
    SET_GPR_U32(ctx, 31, 0x10DF88u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x10DF80u, 0x10DF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DF88u;
label_10df88:
    // 0x10df88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10df88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10df8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10df8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10df90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10df90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10df94: 0x3e00008  jr          $ra
    ctx->pc = 0x10DF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DF9Cu;
    // 0x10df9c: 0x0  nop
    ctx->pc = 0x10df9cu;
    // NOP
    ctx->pc = 0x10dfa0u;
}
