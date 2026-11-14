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

// Function: sub_0013CDD0
// Address: 0x13cdd0 - 0x13ce90
void sub_0013CDD0_0x13cdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CDD0_0x13cdd0");
#endif

    switch (ctx->pc) {
        case 0x13cdf4u: goto label_13cdf4;
        case 0x13ce08u: goto label_13ce08;
        case 0x13ce14u: goto label_13ce14;
        case 0x13ce28u: goto label_13ce28;
        case 0x13ce48u: goto label_13ce48;
        case 0x13ce60u: goto label_13ce60;
        default: break;
    }

    ctx->pc = 0x13cdd0u;

    // 0x13cdd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13cdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13cdd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13cdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13cdd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13cdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13cddc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13cddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13cde0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13cde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13cde4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x13cde4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x13cde8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13cde8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cdec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x13CDECu;
    {
        const bool branch_taken_0x13cdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cdec) {
            ctx->pc = 0x13CE50u;
            goto label_13ce50;
        }
    }
    ctx->pc = 0x13CDF4u;
label_13cdf4:
    // 0x13cdf4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13cdf8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x13cdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13cdfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13cdfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ce00: 0xc04e51c  jal         func_139470
    ctx->pc = 0x13CE00u;
    SET_GPR_U32(ctx, 31, 0x13CE08u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x13CE00u, 0x13CE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CE08u;
label_13ce08:
    // 0x13ce08: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13ce08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ce0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13CE0Cu;
    {
        const bool branch_taken_0x13ce0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ce0c) {
            ctx->pc = 0x13CE2Cu;
            goto label_13ce2c;
        }
    }
    ctx->pc = 0x13CE14u;
label_13ce14:
    // 0x13ce14: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x13ce14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ce18: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x13ce18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13ce1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13ce1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ce20: 0xc04f3a4  jal         func_13CE90
    ctx->pc = 0x13CE20u;
    SET_GPR_U32(ctx, 31, 0x13CE28u);
    ctx->pc = 0x13CE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CE90u, 0x13CE20u, 0x13CE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CE28u;
label_13ce28:
    // 0x13ce28: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x13ce28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13ce2c:
    // 0x13ce2c: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13CE2Cu;
    {
        const bool branch_taken_0x13ce2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ce2c) {
            ctx->pc = 0x13CE14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ce14;
        }
    }
    ctx->pc = 0x13CE34u;
    // 0x13ce34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13ce38: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x13ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13ce3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13ce3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ce40: 0xc04e51c  jal         func_139470
    ctx->pc = 0x13CE40u;
    SET_GPR_U32(ctx, 31, 0x13CE48u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x13CE40u, 0x13CE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CE48u;
label_13ce48:
    // 0x13ce48: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13ce48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x13ce4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13ce4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13ce50:
    // 0x13ce50: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13ce54: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x13ce54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13ce58: 0xc04e50c  jal         func_139430
    ctx->pc = 0x13CE58u;
    SET_GPR_U32(ctx, 31, 0x13CE60u);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x13CE58u, 0x13CE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CE60u;
label_13ce60:
    // 0x13ce60: 0x222182b  sltu        $v1, $s1, $v0
    ctx->pc = 0x13ce60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13ce64: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x13CE64u;
    {
        const bool branch_taken_0x13ce64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ce64) {
            ctx->pc = 0x13CDF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13cdf4;
        }
    }
    ctx->pc = 0x13CE6Cu;
    // 0x13ce6c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13ce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13ce70: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x13ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x13ce74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13ce74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ce78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13ce78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ce7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ce7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ce80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ce80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ce84: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13ce84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13ce88: 0x3e00008  jr          $ra
    ctx->pc = 0x13CE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CE90u;
}
