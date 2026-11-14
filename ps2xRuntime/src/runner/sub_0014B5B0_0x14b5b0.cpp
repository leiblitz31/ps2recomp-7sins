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

// Function: sub_0014B5B0
// Address: 0x14b5b0 - 0x14b640
void sub_0014B5B0_0x14b5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B5B0_0x14b5b0");
#endif

    switch (ctx->pc) {
        case 0x14b5f8u: goto label_14b5f8;
        case 0x14b608u: goto label_14b608;
        case 0x14b61cu: goto label_14b61c;
        default: break;
    }

    ctx->pc = 0x14b5b0u;

    // 0x14b5b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b5b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14b5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14b5b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b5bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14b5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x14b5c0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x14b5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x14b5c4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x14b5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b5c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b5cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14b5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b5d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b5d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14b5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b5d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b5dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b5e0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14b5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14b5e4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x14b5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x14b5e8: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x14b5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x14b5ec: 0x2447000c  addiu       $a3, $v0, 0xC
    ctx->pc = 0x14b5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x14b5f0: 0xc045a70  jal         func_1169C0
    ctx->pc = 0x14B5F0u;
    SET_GPR_U32(ctx, 31, 0x14B5F8u);
    ctx->pc = 0x1169C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1169C0u, 0x14B5F0u, 0x14B5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5F8u;
label_14b5f8:
    // 0x14b5f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b5f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5fc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x14b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x14b600: 0xc052d90  jal         func_14B640
    ctx->pc = 0x14B600u;
    SET_GPR_U32(ctx, 31, 0x14B608u);
    ctx->pc = 0x14B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B640u, 0x14B600u, 0x14B608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B608u;
label_14b608:
    // 0x14b608: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14b608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b60c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14b60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b610: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14b610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b614: 0xc054708  jal         func_151C20
    ctx->pc = 0x14B614u;
    SET_GPR_U32(ctx, 31, 0x14B61Cu);
    ctx->pc = 0x151C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C20u, 0x14B614u, 0x14B61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B61Cu;
label_14b61c:
    // 0x14b61c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14b61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b620: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x14b620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14b624: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14b624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14b628: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x14b628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x14b62c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14b62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b630: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14b630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b634: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x14b634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14b638: 0x3e00008  jr          $ra
    ctx->pc = 0x14B638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B640u;
}
