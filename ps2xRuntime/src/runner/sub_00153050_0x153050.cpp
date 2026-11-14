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

// Function: sub_00153050
// Address: 0x153050 - 0x1530b0
void sub_00153050_0x153050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153050_0x153050");
#endif

    switch (ctx->pc) {
        case 0x153074u: goto label_153074;
        case 0x153090u: goto label_153090;
        default: break;
    }

    ctx->pc = 0x153050u;

    // 0x153050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x153050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x153054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x153058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15305c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15305cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x153060: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x153060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x153064: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x153064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x153068: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x153068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15306c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x15306Cu;
    SET_GPR_U32(ctx, 31, 0x153074u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x15306Cu, 0x153074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153074u;
label_153074:
    // 0x153074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x153074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153078: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x153078u;
    {
        const bool branch_taken_0x153078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x153078) {
            ctx->pc = 0x153094u;
            goto label_153094;
        }
    }
    ctx->pc = 0x153080u;
    // 0x153080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153084: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x153084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153088: 0xc054c2c  jal         func_1530B0
    ctx->pc = 0x153088u;
    SET_GPR_U32(ctx, 31, 0x153090u);
    ctx->pc = 0x1530B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1530B0u, 0x153088u, 0x153090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153090u;
label_153090:
    // 0x153090: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x153090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_153094:
    // 0x153094: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x153094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15309c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x15309cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1530a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1530A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1530A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1530A8u;
    // 0x1530a8: 0x0  nop
    ctx->pc = 0x1530a8u;
    // NOP
    // 0x1530ac: 0x0  nop
    ctx->pc = 0x1530acu;
    // NOP
    ctx->pc = 0x1530b0u;
}
