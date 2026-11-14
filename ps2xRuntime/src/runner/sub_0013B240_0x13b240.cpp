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

// Function: sub_0013B240
// Address: 0x13b240 - 0x13b2b0
void sub_0013B240_0x13b240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B240_0x13b240");
#endif

    switch (ctx->pc) {
        case 0x13b260u: goto label_13b260;
        case 0x13b270u: goto label_13b270;
        case 0x13b284u: goto label_13b284;
        case 0x13b298u: goto label_13b298;
        default: break;
    }

    ctx->pc = 0x13b240u;

    // 0x13b240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13b240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13b244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13b244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13b248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b24c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x13b24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x13b250: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x13b250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x13b254: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x13b254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b258: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x13B258u;
    SET_GPR_U32(ctx, 31, 0x13B260u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x13B258u, 0x13B260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B260u;
label_13b260:
    // 0x13b260: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13b260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13b264: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13b264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b268: 0xc040304  jal         func_100C10
    ctx->pc = 0x13B268u;
    SET_GPR_U32(ctx, 31, 0x13B270u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x13B268u, 0x13B270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B270u;
label_13b270:
    // 0x13b270: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13b270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b274: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x13b274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x13b278: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x13b278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13b27c: 0xc04ecac  jal         func_13B2B0
    ctx->pc = 0x13B27Cu;
    SET_GPR_U32(ctx, 31, 0x13B284u);
    ctx->pc = 0x13B2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B2B0u, 0x13B27Cu, 0x13B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B284u;
label_13b284:
    // 0x13b284: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13b284u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b288: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13b288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13b28c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13b28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13b290: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13B290u;
    SET_GPR_U32(ctx, 31, 0x13B298u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13B290u, 0x13B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B298u;
label_13b298:
    // 0x13b298: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13b298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b29c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13b29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b2a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b2a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b2a4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13b2a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13b2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x13B2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B2B0u;
}
