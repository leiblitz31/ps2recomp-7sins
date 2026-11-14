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

// Function: sub_0044F370
// Address: 0x44f370 - 0x44f3d0
void sub_0044F370_0x44f370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F370_0x44f370");
#endif

    switch (ctx->pc) {
        case 0x44f38cu: goto label_44f38c;
        case 0x44f3a0u: goto label_44f3a0;
        case 0x44f3b0u: goto label_44f3b0;
        default: break;
    }

    ctx->pc = 0x44f370u;

    // 0x44f370: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x44f370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x44f374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44f374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44f378: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x44f378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x44f37c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x44f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44f380: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x44f380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x44f384: 0xc1138e4  jal         func_44E390
    ctx->pc = 0x44F384u;
    SET_GPR_U32(ctx, 31, 0x44F38Cu);
    ctx->pc = 0x44E390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E390u, 0x44F384u, 0x44F38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F38Cu;
label_44f38c:
    // 0x44f38c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x44f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x44f390: 0x2785afa8  addiu       $a1, $gp, -0x5058
    ctx->pc = 0x44f390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946728));
    // 0x44f394: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x44f394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f398: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x44F398u;
    SET_GPR_U32(ctx, 31, 0x44F3A0u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x44F398u, 0x44F3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F3A0u;
label_44f3a0:
    // 0x44f3a0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x44f3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x44f3a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44f3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f3a8: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x44F3A8u;
    SET_GPR_U32(ctx, 31, 0x44F3B0u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x44F3A8u, 0x44F3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F3B0u;
label_44f3b0:
    // 0x44f3b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44f3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44f3b4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x44f3b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x44f3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x44F3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F3C0u;
    // 0x44f3c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44f3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x44f3c4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44f3c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x44f3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x44F3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F3D0u;
}
