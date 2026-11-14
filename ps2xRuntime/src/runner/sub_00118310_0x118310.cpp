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

// Function: sub_00118310
// Address: 0x118310 - 0x118370
void sub_00118310_0x118310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118310_0x118310");
#endif

    switch (ctx->pc) {
        case 0x118334u: goto label_118334;
        case 0x118350u: goto label_118350;
        default: break;
    }

    ctx->pc = 0x118310u;

    // 0x118310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118314: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x118318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11831c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x11831cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x118320: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x118320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x118324: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x118324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x118328: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x118328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11832c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x11832Cu;
    SET_GPR_U32(ctx, 31, 0x118334u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11832Cu, 0x118334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118334u;
label_118334:
    // 0x118334: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x118334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118338: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x118338u;
    {
        const bool branch_taken_0x118338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x118338) {
            ctx->pc = 0x118354u;
            goto label_118354;
        }
    }
    ctx->pc = 0x118340u;
    // 0x118340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118344: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x118344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118348: 0xc0460dc  jal         func_118370
    ctx->pc = 0x118348u;
    SET_GPR_U32(ctx, 31, 0x118350u);
    ctx->pc = 0x118370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118370u, 0x118348u, 0x118350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118350u;
label_118350:
    // 0x118350: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x118350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_118354:
    // 0x118354: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11835c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x11835cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x118360: 0x3e00008  jr          $ra
    ctx->pc = 0x118360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118368u;
    // 0x118368: 0x0  nop
    ctx->pc = 0x118368u;
    // NOP
    // 0x11836c: 0x0  nop
    ctx->pc = 0x11836cu;
    // NOP
    ctx->pc = 0x118370u;
}
