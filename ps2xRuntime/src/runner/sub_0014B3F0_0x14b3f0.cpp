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

// Function: sub_0014B3F0
// Address: 0x14b3f0 - 0x14b480
void sub_0014B3F0_0x14b3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B3F0_0x14b3f0");
#endif

    switch (ctx->pc) {
        case 0x14b438u: goto label_14b438;
        case 0x14b448u: goto label_14b448;
        case 0x14b45cu: goto label_14b45c;
        default: break;
    }

    ctx->pc = 0x14b3f0u;

    // 0x14b3f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b3f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14b3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14b3f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b3fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14b3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x14b400: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x14b400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x14b404: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x14b404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b408: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14b408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b40c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14b40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b410: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14b410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b414: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14b414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b418: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14b418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b41c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b420: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14b420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14b424: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x14b424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x14b428: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x14b428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x14b42c: 0x2447000c  addiu       $a3, $v0, 0xC
    ctx->pc = 0x14b42cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x14b430: 0xc045a70  jal         func_1169C0
    ctx->pc = 0x14B430u;
    SET_GPR_U32(ctx, 31, 0x14B438u);
    ctx->pc = 0x1169C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1169C0u, 0x14B430u, 0x14B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B438u;
label_14b438:
    // 0x14b438: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b43c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x14b43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x14b440: 0xc052d20  jal         func_14B480
    ctx->pc = 0x14B440u;
    SET_GPR_U32(ctx, 31, 0x14B448u);
    ctx->pc = 0x14B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B480u, 0x14B440u, 0x14B448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B448u;
label_14b448:
    // 0x14b448: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14b448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b44c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14b44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b450: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14b450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b454: 0xc0546c8  jal         func_151B20
    ctx->pc = 0x14B454u;
    SET_GPR_U32(ctx, 31, 0x14B45Cu);
    ctx->pc = 0x151B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151B20u, 0x14B454u, 0x14B45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B45Cu;
label_14b45c:
    // 0x14b45c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14b45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b460: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x14b460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14b464: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14b464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14b468: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x14b468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x14b46c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14b46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b470: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14b470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b474: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x14b474u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14b478: 0x3e00008  jr          $ra
    ctx->pc = 0x14B478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B480u;
}
