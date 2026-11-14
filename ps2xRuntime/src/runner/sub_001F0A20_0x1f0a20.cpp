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

// Function: sub_001F0A20
// Address: 0x1f0a20 - 0x1f0af0
void sub_001F0A20_0x1f0a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0A20_0x1f0a20");
#endif

    switch (ctx->pc) {
        case 0x1f0a44u: goto label_1f0a44;
        default: break;
    }

    ctx->pc = 0x1f0a20u;

    // 0x1f0a20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f0a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f0a24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f0a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f0a28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f0a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f0a2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f0a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f0a30: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1f0a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1f0a34: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1f0a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1f0a38: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x1f0a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1f0a3c: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x1F0A3Cu;
    SET_GPR_U32(ctx, 31, 0x1F0A44u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x1F0A3Cu, 0x1F0A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0A44u;
label_1f0a44:
    // 0x1f0a44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f0a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a48: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0A48u;
    {
        const bool branch_taken_0x1f0a48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0a48) {
            ctx->pc = 0x1F0A60u;
            goto label_1f0a60;
        }
    }
    ctx->pc = 0x1F0A50u;
    // 0x1f0a50: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0a54: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x1f0a54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1f0a58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0A58u;
    {
        const bool branch_taken_0x1f0a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0a58) {
            ctx->pc = 0x1F0A6Cu;
            goto label_1f0a6c;
        }
    }
    ctx->pc = 0x1F0A60u;
label_1f0a60:
    // 0x1f0a60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0a64: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1F0A64u;
    {
        const bool branch_taken_0x1f0a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0a64) {
            ctx->pc = 0x1F0ACCu;
            goto label_1f0acc;
        }
    }
    ctx->pc = 0x1F0A6Cu;
label_1f0a6c:
    // 0x1f0a6c: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1f0a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1f0a70: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f0a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0a74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f0a78: 0x80420060  lb          $v0, 0x60($v0)
    ctx->pc = 0x1f0a78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1f0a7c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1f0a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1f0a80: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1f0a80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1f0a84: 0x2451ffd0  addiu       $s1, $v0, -0x30
    ctx->pc = 0x1f0a84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1f0a88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0a8c: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F0A8Cu;
    {
        const bool branch_taken_0x1f0a8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f0a8c) {
            ctx->pc = 0x1F0AC8u;
            goto label_1f0ac8;
        }
    }
    ctx->pc = 0x1F0A94u;
    // 0x1f0a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0a98: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0A98u;
    {
        const bool branch_taken_0x1f0a98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f0a98) {
            ctx->pc = 0x1F0ABCu;
            goto label_1f0abc;
        }
    }
    ctx->pc = 0x1F0AA0u;
    // 0x1f0aa0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0AA0u;
    {
        const bool branch_taken_0x1f0aa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0aa0) {
            ctx->pc = 0x1F0AB0u;
            goto label_1f0ab0;
        }
    }
    ctx->pc = 0x1F0AA8u;
    // 0x1f0aa8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0AA8u;
    {
        const bool branch_taken_0x1f0aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0aa8) {
            ctx->pc = 0x1F0AC8u;
            goto label_1f0ac8;
        }
    }
    ctx->pc = 0x1F0AB0u;
label_1f0ab0:
    // 0x1f0ab0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0ab4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0AB4u;
    {
        const bool branch_taken_0x1f0ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ab4) {
            ctx->pc = 0x1F0ACCu;
            goto label_1f0acc;
        }
    }
    ctx->pc = 0x1F0ABCu;
label_1f0abc:
    // 0x1f0abc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f0abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0ac0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F0AC0u;
    {
        const bool branch_taken_0x1f0ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ac0) {
            ctx->pc = 0x1F0ACCu;
            goto label_1f0acc;
        }
    }
    ctx->pc = 0x1F0AC8u;
label_1f0ac8:
    // 0x1f0ac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0acc:
    // 0x1f0acc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f0accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0ad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f0ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f0ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0ad8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1f0ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f0adc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0AE4u;
    // 0x1f0ae4: 0x0  nop
    ctx->pc = 0x1f0ae4u;
    // NOP
    // 0x1f0ae8: 0x0  nop
    ctx->pc = 0x1f0ae8u;
    // NOP
    // 0x1f0aec: 0x0  nop
    ctx->pc = 0x1f0aecu;
    // NOP
    ctx->pc = 0x1f0af0u;
}
