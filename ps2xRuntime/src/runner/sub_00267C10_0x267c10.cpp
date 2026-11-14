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

// Function: sub_00267C10
// Address: 0x267c10 - 0x267d00
void sub_00267C10_0x267c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267C10_0x267c10");
#endif

    switch (ctx->pc) {
        case 0x267c40u: goto label_267c40;
        case 0x267c74u: goto label_267c74;
        case 0x267c80u: goto label_267c80;
        case 0x267cd4u: goto label_267cd4;
        default: break;
    }

    ctx->pc = 0x267c10u;

    // 0x267c10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x267c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x267c14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x267c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x267c18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x267c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x267c1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x267c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x267c20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x267c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x267c24: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x267c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x267c28: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x267c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x267c2c: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x267c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x267c30: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x267c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x267c34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x267c34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x267C38u;
    {
        const bool branch_taken_0x267c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267c38) {
            ctx->pc = 0x267C54u;
            goto label_267c54;
        }
    }
    ctx->pc = 0x267C40u;
label_267c40:
    // 0x267c40: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x267c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x267c44: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x267c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x267c48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x267c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x267c4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x267c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x267c50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x267c50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_267c54:
    // 0x267c54: 0x2e220009  sltiu       $v0, $s1, 0x9
    ctx->pc = 0x267c54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x267c58: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x267C58u;
    {
        const bool branch_taken_0x267c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267c58) {
            ctx->pc = 0x267C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267c40;
        }
    }
    ctx->pc = 0x267C60u;
    // 0x267c60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x267c60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x267c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267c68: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x267c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x267c6c: 0xc099efc  jal         func_267BF0
    ctx->pc = 0x267C6Cu;
    SET_GPR_U32(ctx, 31, 0x267C74u);
    ctx->pc = 0x267BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267BF0u, 0x267C6Cu, 0x267C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267C74u;
label_267c74:
    // 0x267c74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x267c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267c78: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x267C78u;
    {
        const bool branch_taken_0x267c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267c78) {
            ctx->pc = 0x267CC4u;
            goto label_267cc4;
        }
    }
    ctx->pc = 0x267C80u;
label_267c80:
    // 0x267c80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x267c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x267c84: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x267c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267c88: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x267C88u;
    {
        const bool branch_taken_0x267c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x267c88) {
            ctx->pc = 0x267CC0u;
            goto label_267cc0;
        }
    }
    ctx->pc = 0x267C90u;
    // 0x267c90: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x267c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x267c94: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x267c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x267c98: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x267C98u;
    {
        const bool branch_taken_0x267c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x267c98) {
            ctx->pc = 0x267CC0u;
            goto label_267cc0;
        }
    }
    ctx->pc = 0x267CA0u;
    // 0x267ca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267ca4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x267ca4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x267ca8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x267ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267cac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x267cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x267cb0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x267cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x267cb4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x267cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x267cb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x267cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x267cbc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x267cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_267cc0:
    // 0x267cc0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x267cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_267cc4:
    // 0x267cc4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x267cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267cc8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x267cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x267ccc: 0xc099e88  jal         func_267A20
    ctx->pc = 0x267CCCu;
    SET_GPR_U32(ctx, 31, 0x267CD4u);
    ctx->pc = 0x267A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267A20u, 0x267CCCu, 0x267CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267CD4u;
label_267cd4:
    // 0x267cd4: 0x1602ffea  bne         $s0, $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x267CD4u;
    {
        const bool branch_taken_0x267cd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x267cd4) {
            ctx->pc = 0x267C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267c80;
        }
    }
    ctx->pc = 0x267CDCu;
    // 0x267cdc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x267cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ce0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x267ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267ce4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x267ce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267ce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x267ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267cec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x267cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267cf0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x267cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x267cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x267CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267CFCu;
    // 0x267cfc: 0x0  nop
    ctx->pc = 0x267cfcu;
    // NOP
    ctx->pc = 0x267d00u;
}
