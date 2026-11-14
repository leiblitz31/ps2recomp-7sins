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

// Function: sub_0048C8F0
// Address: 0x48c8f0 - 0x48c980
void sub_0048C8F0_0x48c8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C8F0_0x48c8f0");
#endif

    switch (ctx->pc) {
        case 0x48c910u: goto label_48c910;
        case 0x48c91cu: goto label_48c91c;
        case 0x48c944u: goto label_48c944;
        default: break;
    }

    ctx->pc = 0x48c8f0u;

    // 0x48c8f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48c8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48c8f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48c8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48c8f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48c8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48c8fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48c8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x48c900: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48c900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c904: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48c904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48c908: 0xc123200  jal         func_48C800
    ctx->pc = 0x48C908u;
    SET_GPR_U32(ctx, 31, 0x48C910u);
    ctx->pc = 0x48C800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C800u, 0x48C908u, 0x48C910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C910u;
label_48c910:
    // 0x48c910: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48c910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c914: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x48C914u;
    {
        const bool branch_taken_0x48c914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c914) {
            ctx->pc = 0x48C934u;
            goto label_48c934;
        }
    }
    ctx->pc = 0x48C91Cu;
label_48c91c:
    // 0x48c91c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x48c91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x48c920: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x48c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48c924: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x48c924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x48c928: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x48c928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48c92c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x48c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x48c930: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x48c930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_48c934:
    // 0x48c934: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48c934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c938: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48c938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48c93c: 0xc1231f8  jal         func_48C7E0
    ctx->pc = 0x48C93Cu;
    SET_GPR_U32(ctx, 31, 0x48C944u);
    ctx->pc = 0x48C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C7E0u, 0x48C93Cu, 0x48C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C944u;
label_48c944:
    // 0x48c944: 0x1602fff5  bne         $s0, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x48C944u;
    {
        const bool branch_taken_0x48c944 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x48c944) {
            ctx->pc = 0x48C91Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48c91c;
        }
    }
    ctx->pc = 0x48C94Cu;
    // 0x48c94c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x48c94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x48c950: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48c950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c954: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x48c954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x48c958: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48c958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48c95c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c960: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x48c960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x48c964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48c964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48c968: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48c968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c96c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48c96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c970: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48c970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48c974: 0x3e00008  jr          $ra
    ctx->pc = 0x48C974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C97Cu;
    // 0x48c97c: 0x0  nop
    ctx->pc = 0x48c97cu;
    // NOP
    ctx->pc = 0x48c980u;
}
