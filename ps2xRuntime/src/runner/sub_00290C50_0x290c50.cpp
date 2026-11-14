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

// Function: sub_00290C50
// Address: 0x290c50 - 0x290d00
void sub_00290C50_0x290c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290C50_0x290c50");
#endif

    switch (ctx->pc) {
        case 0x290c78u: goto label_290c78;
        case 0x290cacu: goto label_290cac;
        case 0x290cd4u: goto label_290cd4;
        default: break;
    }

    ctx->pc = 0x290c50u;

    // 0x290c50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x290c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x290c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290c58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x290c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x290c5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x290c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x290c60: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x290c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x290c64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x290c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290c68: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x290c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290c6c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x290c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290c70: 0xc041934  jal         func_1064D0
    ctx->pc = 0x290C70u;
    SET_GPR_U32(ctx, 31, 0x290C78u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x290C70u, 0x290C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C78u;
label_290c78:
    // 0x290c78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290c7c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x290c7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x290c80: 0x3e00008  jr          $ra
    ctx->pc = 0x290C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290C88u;
    // 0x290c88: 0x0  nop
    ctx->pc = 0x290c88u;
    // NOP
    // 0x290c8c: 0x0  nop
    ctx->pc = 0x290c8cu;
    // NOP
    // 0x290c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x290c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x290c94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x290c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x290c98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290c9c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x290c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x290ca0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x290ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290ca4: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x290CA4u;
    SET_GPR_U32(ctx, 31, 0x290CACu);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x290CA4u, 0x290CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290CACu;
label_290cac:
    // 0x290cac: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x290cacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x290cb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x290cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290cb4: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x290cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x290cb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x290CB8u;
    {
        const bool branch_taken_0x290cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290cb8) {
            ctx->pc = 0x290CDCu;
            goto label_290cdc;
        }
    }
    ctx->pc = 0x290CC0u;
    // 0x290cc0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x290cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290cc4: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x290cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x290cc8: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x290cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x290ccc: 0xc0a4340  jal         func_290D00
    ctx->pc = 0x290CCCu;
    SET_GPR_U32(ctx, 31, 0x290CD4u);
    ctx->pc = 0x290D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290D00u, 0x290CCCu, 0x290CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290CD4u;
label_290cd4:
    // 0x290cd4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x290cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290cd8: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x290cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
label_290cdc:
    // 0x290cdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x290cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ce0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x290ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290ce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290ce8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x290ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x290cec: 0x3e00008  jr          $ra
    ctx->pc = 0x290CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290CF4u;
    // 0x290cf4: 0x0  nop
    ctx->pc = 0x290cf4u;
    // NOP
    // 0x290cf8: 0x0  nop
    ctx->pc = 0x290cf8u;
    // NOP
    // 0x290cfc: 0x0  nop
    ctx->pc = 0x290cfcu;
    // NOP
    ctx->pc = 0x290d00u;
}
