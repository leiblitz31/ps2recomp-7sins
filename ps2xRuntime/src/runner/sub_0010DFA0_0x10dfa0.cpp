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

// Function: sub_0010DFA0
// Address: 0x10dfa0 - 0x10e010
void sub_0010DFA0_0x10dfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DFA0_0x10dfa0");
#endif

    switch (ctx->pc) {
        case 0x10dfd4u: goto label_10dfd4;
        case 0x10dff4u: goto label_10dff4;
        default: break;
    }

    ctx->pc = 0x10dfa0u;

    // 0x10dfa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10dfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10dfa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10dfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10dfa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10dfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10dfac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x10dfacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x10dfb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dfb4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10DFB4u;
    {
        const bool branch_taken_0x10dfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dfb4) {
            ctx->pc = 0x10DFF4u;
            goto label_10dff4;
        }
    }
    ctx->pc = 0x10DFBCu;
    // 0x10dfbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dfc0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dfc4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10dfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10dfc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10dfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10dfcc: 0xc0448b4  jal         func_1122D0
    ctx->pc = 0x10DFCCu;
    SET_GPR_U32(ctx, 31, 0x10DFD4u);
    ctx->pc = 0x1122D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122D0u, 0x10DFCCu, 0x10DFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DFD4u;
label_10dfd4:
    // 0x10dfd4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x10dfd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10dfd8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x10dfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x10dfdc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10dfdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10dfe0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DFE0u;
    {
        const bool branch_taken_0x10dfe0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x10dfe0) {
            ctx->pc = 0x10DFF4u;
            goto label_10dff4;
        }
    }
    ctx->pc = 0x10DFE8u;
    // 0x10dfe8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10dfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dfec: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x10DFECu;
    SET_GPR_U32(ctx, 31, 0x10DFF4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x10DFECu, 0x10DFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DFF4u;
label_10dff4:
    // 0x10dff4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10dff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10dffc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10dffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10e000: 0x3e00008  jr          $ra
    ctx->pc = 0x10E000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E008u;
    // 0x10e008: 0x0  nop
    ctx->pc = 0x10e008u;
    // NOP
    // 0x10e00c: 0x0  nop
    ctx->pc = 0x10e00cu;
    // NOP
    ctx->pc = 0x10e010u;
}
