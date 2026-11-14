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

// Function: sub_0045ACC0
// Address: 0x45acc0 - 0x45ad70
void sub_0045ACC0_0x45acc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045ACC0_0x45acc0");
#endif

    switch (ctx->pc) {
        case 0x45ace8u: goto label_45ace8;
        case 0x45acfcu: goto label_45acfc;
        case 0x45ad10u: goto label_45ad10;
        default: break;
    }

    ctx->pc = 0x45acc0u;

    // 0x45acc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x45acc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x45acc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x45acc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x45acc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45acc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x45accc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45acccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45acd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45acd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45acd4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x45acd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x45acd8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x45acd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x45acdc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x45acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45ace0: 0xc116738  jal         func_459CE0
    ctx->pc = 0x45ACE0u;
    SET_GPR_U32(ctx, 31, 0x45ACE8u);
    ctx->pc = 0x459CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459CE0u, 0x45ACE0u, 0x45ACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45ACE8u;
label_45ace8:
    // 0x45ace8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x45ace8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45acec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x45acecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45acf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45acf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45acf4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x45ACF4u;
    {
        const bool branch_taken_0x45acf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45acf4) {
            ctx->pc = 0x45AD3Cu;
            goto label_45ad3c;
        }
    }
    ctx->pc = 0x45ACFCu;
label_45acfc:
    // 0x45acfc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45ad00: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x45ad00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45ad04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45ad04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ad08: 0xc116864  jal         func_45A190
    ctx->pc = 0x45AD08u;
    SET_GPR_U32(ctx, 31, 0x45AD10u);
    ctx->pc = 0x45A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A190u, 0x45AD08u, 0x45AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45AD10u;
label_45ad10:
    // 0x45ad10: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x45ad10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45ad14: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x45AD14u;
    {
        const bool branch_taken_0x45ad14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ad14) {
            ctx->pc = 0x45AD38u;
            goto label_45ad38;
        }
    }
    ctx->pc = 0x45AD1Cu;
    // 0x45ad1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x45ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x45ad20: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x45ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45ad24: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45AD24u;
    {
        const bool branch_taken_0x45ad24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45ad24) {
            ctx->pc = 0x45AD38u;
            goto label_45ad38;
        }
    }
    ctx->pc = 0x45AD2Cu;
    // 0x45ad2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x45ad2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ad30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x45AD30u;
    {
        const bool branch_taken_0x45ad30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ad30) {
            ctx->pc = 0x45AD4Cu;
            goto label_45ad4c;
        }
    }
    ctx->pc = 0x45AD38u;
label_45ad38:
    // 0x45ad38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x45ad38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_45ad3c:
    // 0x45ad3c: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x45ad3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x45ad40: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x45AD40u;
    {
        const bool branch_taken_0x45ad40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45ad40) {
            ctx->pc = 0x45ACFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45acfc;
        }
    }
    ctx->pc = 0x45AD48u;
    // 0x45ad48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45ad4c:
    // 0x45ad4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x45ad4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45ad50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45ad50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45ad54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45ad54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45ad58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45ad58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45ad5c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x45ad5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x45ad60: 0x3e00008  jr          $ra
    ctx->pc = 0x45AD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45AD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45AD68u;
    // 0x45ad68: 0x0  nop
    ctx->pc = 0x45ad68u;
    // NOP
    // 0x45ad6c: 0x0  nop
    ctx->pc = 0x45ad6cu;
    // NOP
    ctx->pc = 0x45ad70u;
}
