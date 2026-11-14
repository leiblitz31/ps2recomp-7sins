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

// Function: sub_0024D420
// Address: 0x24d420 - 0x24d4b0
void sub_0024D420_0x24d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D420_0x24d420");
#endif

    switch (ctx->pc) {
        case 0x24d468u: goto label_24d468;
        case 0x24d478u: goto label_24d478;
        case 0x24d48cu: goto label_24d48c;
        default: break;
    }

    ctx->pc = 0x24d420u;

    // 0x24d420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24d420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24d424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24d424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24d428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24d428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24d42c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24d42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x24d430: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x24d430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x24d434: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x24d434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d438: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x24d438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d43c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x24d43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d440: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x24d440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d444: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24d444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d448: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x24d448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d44c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d450: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x24d450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24d454: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x24d454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x24d458: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x24d458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x24d45c: 0x2447000c  addiu       $a3, $v0, 0xC
    ctx->pc = 0x24d45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x24d460: 0xc045a70  jal         func_1169C0
    ctx->pc = 0x24D460u;
    SET_GPR_U32(ctx, 31, 0x24D468u);
    ctx->pc = 0x1169C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1169C0u, 0x24D460u, 0x24D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D468u;
label_24d468:
    // 0x24d468: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24d468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d46c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x24d46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x24d470: 0xc09352c  jal         func_24D4B0
    ctx->pc = 0x24D470u;
    SET_GPR_U32(ctx, 31, 0x24D478u);
    ctx->pc = 0x24D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D4B0u, 0x24D470u, 0x24D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D478u;
label_24d478:
    // 0x24d478: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24d478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d47c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24d47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d480: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24d480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d484: 0xc093b9c  jal         func_24EE70
    ctx->pc = 0x24D484u;
    SET_GPR_U32(ctx, 31, 0x24D48Cu);
    ctx->pc = 0x24EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24EE70u, 0x24D484u, 0x24D48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D48Cu;
label_24d48c:
    // 0x24d48c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24d48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d490: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x24d490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24d494: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24d494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24d498: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x24d498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x24d49c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24d49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d4a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24d4a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d4a4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24d4a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24d4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x24D4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D4B0u;
}
