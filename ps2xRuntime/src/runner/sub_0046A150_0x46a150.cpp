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

// Function: sub_0046A150
// Address: 0x46a150 - 0x46a1e0
void sub_0046A150_0x46a150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A150_0x46a150");
#endif

    switch (ctx->pc) {
        case 0x46a170u: goto label_46a170;
        case 0x46a180u: goto label_46a180;
        case 0x46a18cu: goto label_46a18c;
        case 0x46a1a0u: goto label_46a1a0;
        case 0x46a1b0u: goto label_46a1b0;
        case 0x46a1c0u: goto label_46a1c0;
        case 0x46a1d0u: goto label_46a1d0;
        default: break;
    }

    ctx->pc = 0x46a150u;

    // 0x46a150: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x46a150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x46a154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46a158: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x46a158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x46a15c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x46a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x46a160: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x46a160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x46a164: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x46a164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46a168: 0xc11aecc  jal         func_46BB30
    ctx->pc = 0x46A168u;
    SET_GPR_U32(ctx, 31, 0x46A170u);
    ctx->pc = 0x46BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BB30u, 0x46A168u, 0x46A170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A170u;
label_46a170:
    // 0x46a170: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x46a170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46a174: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x46a174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46a178: 0xc1194c4  jal         func_465310
    ctx->pc = 0x46A178u;
    SET_GPR_U32(ctx, 31, 0x46A180u);
    ctx->pc = 0x465310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465310u, 0x46A178u, 0x46A180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A180u;
label_46a180:
    // 0x46a180: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x46a180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46a184: 0xc11931c  jal         func_464C70
    ctx->pc = 0x46A184u;
    SET_GPR_U32(ctx, 31, 0x46A18Cu);
    ctx->pc = 0x464C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464C70u, 0x46A184u, 0x46A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A18Cu;
label_46a18c:
    // 0x46a18c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46a190: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46a190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46a194: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x46a194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46a198: 0xc11a894  jal         func_46A250
    ctx->pc = 0x46A198u;
    SET_GPR_U32(ctx, 31, 0x46A1A0u);
    ctx->pc = 0x46A250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A250u, 0x46A198u, 0x46A1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A1A0u;
label_46a1a0:
    // 0x46a1a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x46a1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a1a4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x46a1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x46a1a8: 0xc11a878  jal         func_46A1E0
    ctx->pc = 0x46A1A8u;
    SET_GPR_U32(ctx, 31, 0x46A1B0u);
    ctx->pc = 0x46A1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A1E0u, 0x46A1A8u, 0x46A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A1B0u;
label_46a1b0:
    // 0x46a1b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x46a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46a1b4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46a1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46a1b8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46A1B8u;
    SET_GPR_U32(ctx, 31, 0x46A1C0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46A1B8u, 0x46A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A1C0u;
label_46a1c0:
    // 0x46a1c0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x46a1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x46a1c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46a1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46a1c8: 0xc11aef4  jal         func_46BBD0
    ctx->pc = 0x46A1C8u;
    SET_GPR_U32(ctx, 31, 0x46A1D0u);
    ctx->pc = 0x46BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BBD0u, 0x46A1C8u, 0x46A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A1D0u;
label_46a1d0:
    // 0x46a1d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a1d4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x46a1d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46a1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x46A1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A1E0u;
}
