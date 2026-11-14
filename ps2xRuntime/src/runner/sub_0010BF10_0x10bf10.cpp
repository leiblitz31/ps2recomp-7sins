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

// Function: sub_0010BF10
// Address: 0x10bf10 - 0x10bfc0
void sub_0010BF10_0x10bf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BF10_0x10bf10");
#endif

    switch (ctx->pc) {
        case 0x10bf3cu: goto label_10bf3c;
        case 0x10bf4cu: goto label_10bf4c;
        case 0x10bf5cu: goto label_10bf5c;
        case 0x10bf70u: goto label_10bf70;
        case 0x10bf80u: goto label_10bf80;
        case 0x10bf98u: goto label_10bf98;
        default: break;
    }

    ctx->pc = 0x10bf10u;

    // 0x10bf10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10bf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10bf14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10bf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10bf18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10bf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10bf1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10bf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10bf20: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x10bf20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x10bf24: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x10bf24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x10bf28: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x10bf28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x10bf2c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x10bf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10bf30: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x10bf30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10bf34: 0xc119428  jal         func_4650A0
    ctx->pc = 0x10BF34u;
    SET_GPR_U32(ctx, 31, 0x10BF3Cu);
    ctx->pc = 0x4650A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4650A0u, 0x10BF34u, 0x10BF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BF3Cu;
label_10bf3c:
    // 0x10bf3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10bf3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf40: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x10bf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10bf44: 0xc043114  jal         func_10C450
    ctx->pc = 0x10BF44u;
    SET_GPR_U32(ctx, 31, 0x10BF4Cu);
    ctx->pc = 0x10C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C450u, 0x10BF44u, 0x10BF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BF4Cu;
label_10bf4c:
    // 0x10bf4c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x10bf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10bf50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10bf50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf54: 0xc043008  jal         func_10C020
    ctx->pc = 0x10BF54u;
    SET_GPR_U32(ctx, 31, 0x10BF5Cu);
    ctx->pc = 0x10C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C020u, 0x10BF54u, 0x10BF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BF5Cu;
label_10bf5c:
    // 0x10bf5c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x10bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10bf60: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x10bf60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x10bf64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10bf64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf68: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10BF68u;
    {
        const bool branch_taken_0x10bf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bf68) {
            ctx->pc = 0x10BF9Cu;
            goto label_10bf9c;
        }
    }
    ctx->pc = 0x10BF70u;
label_10bf70:
    // 0x10bf70: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x10bf70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10bf74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10bf74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf78: 0xc042ff0  jal         func_10BFC0
    ctx->pc = 0x10BF78u;
    SET_GPR_U32(ctx, 31, 0x10BF80u);
    ctx->pc = 0x10BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFC0u, 0x10BF78u, 0x10BF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BF80u;
label_10bf80:
    // 0x10bf80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10bf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf84: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x10bf84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10bf88: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x10bf88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x10bf8c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x10bf8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10bf90: 0xc0434e4  jal         func_10D390
    ctx->pc = 0x10BF90u;
    SET_GPR_U32(ctx, 31, 0x10BF98u);
    ctx->pc = 0x10D390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D390u, 0x10BF90u, 0x10BF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BF98u;
label_10bf98:
    // 0x10bf98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10bf98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10bf9c:
    // 0x10bf9c: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x10bf9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x10bfa0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x10BFA0u;
    {
        const bool branch_taken_0x10bfa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bfa0) {
            ctx->pc = 0x10BF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bf70;
        }
    }
    ctx->pc = 0x10BFA8u;
    // 0x10bfa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10bfa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10bfac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10bfacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bfb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10bfb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bfb4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x10bfb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x10bfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x10BFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BFC0u;
}
