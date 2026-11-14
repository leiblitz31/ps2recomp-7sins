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

// Function: sub_00479EE0
// Address: 0x479ee0 - 0x479f90
void sub_00479EE0_0x479ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479EE0_0x479ee0");
#endif

    switch (ctx->pc) {
        case 0x479f44u: goto label_479f44;
        default: break;
    }

    ctx->pc = 0x479ee0u;

    // 0x479ee0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x479ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x479ee4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x479ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x479ee8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x479ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x479eec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x479eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x479ef0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x479ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x479ef4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x479ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x479ef8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x479ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x479efc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x479efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479f00: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x479f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x479f04: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x479f04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x479f08: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x479f08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x479f0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x479f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x479f10: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x479f10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x479f14: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x479F14u;
    {
        const bool branch_taken_0x479f14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x479f14) {
            ctx->pc = 0x479F20u;
            goto label_479f20;
        }
    }
    ctx->pc = 0x479F1Cu;
    // 0x479f1c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x479f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_479f20:
    // 0x479f20: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x479F20u;
    {
        const bool branch_taken_0x479f20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x479f20) {
            ctx->pc = 0x479F48u;
            goto label_479f48;
        }
    }
    ctx->pc = 0x479F28u;
    // 0x479f28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x479f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x479f2c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x479f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x479f30: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x479F30u;
    {
        const bool branch_taken_0x479f30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x479f30) {
            ctx->pc = 0x479F48u;
            goto label_479f48;
        }
    }
    ctx->pc = 0x479F38u;
    // 0x479f38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x479f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479f3c: 0xc11e788  jal         func_479E20
    ctx->pc = 0x479F3Cu;
    SET_GPR_U32(ctx, 31, 0x479F44u);
    ctx->pc = 0x479E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479E20u, 0x479F3Cu, 0x479F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479F44u;
label_479f44:
    // 0x479f44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x479f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_479f48:
    // 0x479f48: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x479F48u;
    {
        const bool branch_taken_0x479f48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x479f48) {
            ctx->pc = 0x479F68u;
            goto label_479f68;
        }
    }
    ctx->pc = 0x479F50u;
    // 0x479f50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x479f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x479f54: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x479f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x479f58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x479f58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x479f5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x479f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x479f60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x479F60u;
    {
        const bool branch_taken_0x479f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479f60) {
            ctx->pc = 0x479F74u;
            goto label_479f74;
        }
    }
    ctx->pc = 0x479F68u;
label_479f68:
    // 0x479f68: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x479f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x479f6c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x479f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x479f70: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x479f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_479f74:
    // 0x479f74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x479f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479f78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x479f78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479f7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x479f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x479f80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x479f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x479f84: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x479f84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x479f88: 0x3e00008  jr          $ra
    ctx->pc = 0x479F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x479F90u;
}
