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

// Function: sub_004694B0
// Address: 0x4694b0 - 0x469520
void sub_004694B0_0x4694b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004694B0_0x4694b0");
#endif

    switch (ctx->pc) {
        case 0x4694f0u: goto label_4694f0;
        default: break;
    }

    ctx->pc = 0x4694b0u;

    // 0x4694b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4694b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4694b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4694b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4694b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4694b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4694bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4694bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4694c0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x4694c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x4694c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4694c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4694c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4694c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4694cc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x4694ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4694d0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4694D0u;
    {
        const bool branch_taken_0x4694d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4694d0) {
            ctx->pc = 0x4694E4u;
            goto label_4694e4;
        }
    }
    ctx->pc = 0x4694D8u;
    // 0x4694d8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4694d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4694dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4694DCu;
    {
        const bool branch_taken_0x4694dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4694dc) {
            ctx->pc = 0x4694F4u;
            goto label_4694f4;
        }
    }
    ctx->pc = 0x4694E4u;
label_4694e4:
    // 0x4694e4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4694e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4694e8: 0xc11a60c  jal         func_469830
    ctx->pc = 0x4694E8u;
    SET_GPR_U32(ctx, 31, 0x4694F0u);
    ctx->pc = 0x469830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469830u, 0x4694E8u, 0x4694F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4694F0u;
label_4694f0:
    // 0x4694f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4694f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4694f4:
    // 0x4694f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4694f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4694f8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x4694f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x4694fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4694fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x469500: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x469500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469504: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x469504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x469508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46950c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46950cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x469510: 0x3e00008  jr          $ra
    ctx->pc = 0x469510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469518u;
    // 0x469518: 0x0  nop
    ctx->pc = 0x469518u;
    // NOP
    // 0x46951c: 0x0  nop
    ctx->pc = 0x46951cu;
    // NOP
    ctx->pc = 0x469520u;
}
