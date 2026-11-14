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

// Function: sub_00100740
// Address: 0x100740 - 0x1007a0
void sub_00100740_0x100740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100740_0x100740");
#endif

    switch (ctx->pc) {
        case 0x100758u: goto label_100758;
        case 0x100768u: goto label_100768;
        case 0x100780u: goto label_100780;
        default: break;
    }

    ctx->pc = 0x100740u;

    // 0x100740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10074c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x10074cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x100750: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x100750u;
    SET_GPR_U32(ctx, 31, 0x100758u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x100750u, 0x100758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100758u;
label_100758:
    // 0x100758: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x100758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10075c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10075cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100760: 0xc0400e0  jal         func_100380
    ctx->pc = 0x100760u;
    SET_GPR_U32(ctx, 31, 0x100768u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x100760u, 0x100768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100768u;
label_100768:
    // 0x100768: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10076c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10076Cu;
    {
        const bool branch_taken_0x10076c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10076c) {
            ctx->pc = 0x100784u;
            goto label_100784;
        }
    }
    ctx->pc = 0x100774u;
    // 0x100774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100778: 0xc089b38  jal         func_226CE0
    ctx->pc = 0x100778u;
    SET_GPR_U32(ctx, 31, 0x100780u);
    ctx->pc = 0x226CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226CE0u, 0x100778u, 0x100780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100780u;
label_100780:
    // 0x100780: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100784:
    // 0x100784: 0xaf90bb80  sw          $s0, -0x4480($gp)
    ctx->pc = 0x100784u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949760), GPR_U32(ctx, 16));
    // 0x100788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10078c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10078cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100794: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x100794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x100798: 0x3e00008  jr          $ra
    ctx->pc = 0x100798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1007A0u;
}
