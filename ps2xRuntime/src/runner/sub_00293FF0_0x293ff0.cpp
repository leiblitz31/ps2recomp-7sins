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

// Function: sub_00293FF0
// Address: 0x293ff0 - 0x294070
void sub_00293FF0_0x293ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293FF0_0x293ff0");
#endif

    switch (ctx->pc) {
        case 0x294018u: goto label_294018;
        case 0x294028u: goto label_294028;
        default: break;
    }

    ctx->pc = 0x293ff0u;

    // 0x293ff0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x293ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x293ff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x293ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x293ff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x293ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x293ffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x293ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x294000: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x294000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x294004: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x294004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x294008: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x294008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x29400c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x29400cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x294010: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x294010u;
    {
        const bool branch_taken_0x294010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294010) {
            ctx->pc = 0x29403Cu;
            goto label_29403c;
        }
    }
    ctx->pc = 0x294018u;
label_294018:
    // 0x294018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29401c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x29401cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294020: 0xc0a4f84  jal         func_293E10
    ctx->pc = 0x294020u;
    SET_GPR_U32(ctx, 31, 0x294028u);
    ctx->pc = 0x293E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293E10u, 0x294020u, 0x294028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294028u;
label_294028:
    // 0x294028: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x294028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29402c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29402cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x294030: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x294030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x294034: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x294034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x294038: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x294038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29403c:
    // 0x29403c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x29403cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294040: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x294040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x294044: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x294044u;
    {
        const bool branch_taken_0x294044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x294044) {
            ctx->pc = 0x294018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294018;
        }
    }
    ctx->pc = 0x29404Cu;
    // 0x29404c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29404cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294050: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x294050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294054: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x294054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294058: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x294058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29405c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x29405cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x294060: 0x3e00008  jr          $ra
    ctx->pc = 0x294060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294068u;
    // 0x294068: 0x0  nop
    ctx->pc = 0x294068u;
    // NOP
    // 0x29406c: 0x0  nop
    ctx->pc = 0x29406cu;
    // NOP
    ctx->pc = 0x294070u;
}
