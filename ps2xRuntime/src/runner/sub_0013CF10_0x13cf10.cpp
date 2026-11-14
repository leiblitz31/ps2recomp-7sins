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

// Function: sub_0013CF10
// Address: 0x13cf10 - 0x13cfc0
void sub_0013CF10_0x13cf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CF10_0x13cf10");
#endif

    switch (ctx->pc) {
        case 0x13cf44u: goto label_13cf44;
        case 0x13cf58u: goto label_13cf58;
        case 0x13cf68u: goto label_13cf68;
        case 0x13cf80u: goto label_13cf80;
        default: break;
    }

    ctx->pc = 0x13cf10u;

    // 0x13cf10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13cf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13cf14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13cf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13cf18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13cf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13cf1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13cf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13cf20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13cf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13cf24: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x13cf24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x13cf28: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13cf2c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13cf30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cf34: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x13cf34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13cf38: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x13cf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13cf3c: 0xc04f33c  jal         func_13CCF0
    ctx->pc = 0x13CF3Cu;
    SET_GPR_U32(ctx, 31, 0x13CF44u);
    ctx->pc = 0x13CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF0u, 0x13CF3Cu, 0x13CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CF44u;
label_13cf44:
    // 0x13cf44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13cf44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cf48: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13cf4c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x13cf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13cf50: 0xc04f3f0  jal         func_13CFC0
    ctx->pc = 0x13CF50u;
    SET_GPR_U32(ctx, 31, 0x13CF58u);
    ctx->pc = 0x13CFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CFC0u, 0x13CF50u, 0x13CF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CF58u;
label_13cf58:
    // 0x13cf58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13cf58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cf5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13cf5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cf60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13CF60u;
    {
        const bool branch_taken_0x13cf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cf60) {
            ctx->pc = 0x13CF84u;
            goto label_13cf84;
        }
    }
    ctx->pc = 0x13CF68u;
label_13cf68:
    // 0x13cf68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13cf6c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13cf70: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x13cf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13cf74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13cf74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cf78: 0xc04e51c  jal         func_139470
    ctx->pc = 0x13CF78u;
    SET_GPR_U32(ctx, 31, 0x13CF80u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x13CF78u, 0x13CF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CF80u;
label_13cf80:
    // 0x13cf80: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13cf80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13cf84:
    // 0x13cf84: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13CF84u;
    {
        const bool branch_taken_0x13cf84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cf84) {
            ctx->pc = 0x13CF9Cu;
            goto label_13cf9c;
        }
    }
    ctx->pc = 0x13CF8Cu;
    // 0x13cf8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13cf8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13cf90: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x13cf90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x13cf94: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x13CF94u;
    {
        const bool branch_taken_0x13cf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cf94) {
            ctx->pc = 0x13CF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13cf68;
        }
    }
    ctx->pc = 0x13CF9Cu;
label_13cf9c:
    // 0x13cf9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13cf9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cfa0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13cfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13cfa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13cfa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13cfa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13cfa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cfac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13cfacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cfb0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13cfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13cfb4: 0x3e00008  jr          $ra
    ctx->pc = 0x13CFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CFBCu;
    // 0x13cfbc: 0x0  nop
    ctx->pc = 0x13cfbcu;
    // NOP
    ctx->pc = 0x13cfc0u;
}
