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

// Function: sub_00186FC0
// Address: 0x186fc0 - 0x187070
void sub_00186FC0_0x186fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186FC0_0x186fc0");
#endif

    switch (ctx->pc) {
        case 0x186fecu: goto label_186fec;
        case 0x186ffcu: goto label_186ffc;
        case 0x18700cu: goto label_18700c;
        case 0x187020u: goto label_187020;
        case 0x187030u: goto label_187030;
        case 0x187044u: goto label_187044;
        default: break;
    }

    ctx->pc = 0x186fc0u;

    // 0x186fc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x186fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x186fc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x186fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x186fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186fd0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x186fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x186fd4: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x186fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x186fd8: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x186fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x186fdc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x186fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x186fe0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x186fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x186fe4: 0xc1193e8  jal         func_464FA0
    ctx->pc = 0x186FE4u;
    SET_GPR_U32(ctx, 31, 0x186FECu);
    ctx->pc = 0x464FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464FA0u, 0x186FE4u, 0x186FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186FECu;
label_186fec:
    // 0x186fec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x186fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ff0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x186ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x186ff4: 0xc043114  jal         func_10C450
    ctx->pc = 0x186FF4u;
    SET_GPR_U32(ctx, 31, 0x186FFCu);
    ctx->pc = 0x10C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C450u, 0x186FF4u, 0x186FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186FFCu;
label_186ffc:
    // 0x186ffc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x186ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187000: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x187000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187004: 0xc043008  jal         func_10C020
    ctx->pc = 0x187004u;
    SET_GPR_U32(ctx, 31, 0x18700Cu);
    ctx->pc = 0x10C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C020u, 0x187004u, 0x18700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18700Cu;
label_18700c:
    // 0x18700c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x18700cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x187010: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x187010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x187014: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x187014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187018: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x187018u;
    {
        const bool branch_taken_0x187018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187018) {
            ctx->pc = 0x187048u;
            goto label_187048;
        }
    }
    ctx->pc = 0x187020u;
label_187020:
    // 0x187020: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x187020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187024: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187028: 0xc042ff0  jal         func_10BFC0
    ctx->pc = 0x187028u;
    SET_GPR_U32(ctx, 31, 0x187030u);
    ctx->pc = 0x10BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFC0u, 0x187028u, 0x187030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187030u;
label_187030:
    // 0x187030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x187030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187034: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x187034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x187038: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x187038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x18703c: 0xc061d44  jal         func_187510
    ctx->pc = 0x18703Cu;
    SET_GPR_U32(ctx, 31, 0x187044u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x18703Cu, 0x187044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187044u;
label_187044:
    // 0x187044: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x187044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_187048:
    // 0x187048: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x187048u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x18704c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x18704Cu;
    {
        const bool branch_taken_0x18704c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18704c) {
            ctx->pc = 0x187020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187020;
        }
    }
    ctx->pc = 0x187054u;
    // 0x187054: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x187054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187058: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18705c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18705cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187060: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x187060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x187064: 0x3e00008  jr          $ra
    ctx->pc = 0x187064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18706Cu;
    // 0x18706c: 0x0  nop
    ctx->pc = 0x18706cu;
    // NOP
    ctx->pc = 0x187070u;
}
