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

// Function: sub_002398F0
// Address: 0x2398f0 - 0x2399a0
void sub_002398F0_0x2398f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002398F0_0x2398f0");
#endif

    switch (ctx->pc) {
        case 0x239914u: goto label_239914;
        case 0x239928u: goto label_239928;
        case 0x239938u: goto label_239938;
        case 0x239948u: goto label_239948;
        case 0x239960u: goto label_239960;
        case 0x239970u: goto label_239970;
        case 0x239980u: goto label_239980;
        case 0x239990u: goto label_239990;
        default: break;
    }

    ctx->pc = 0x2398f0u;

    // 0x2398f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2398f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2398f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2398f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2398f8: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2398f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2398fc: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2398fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x239900: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x239900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x239904: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x239904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x239908: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x239908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23990c: 0xc041b48  jal         func_106D20
    ctx->pc = 0x23990Cu;
    SET_GPR_U32(ctx, 31, 0x239914u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x23990Cu, 0x239914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239914u;
label_239914:
    // 0x239914: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x239914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x239918: 0x27859d80  addiu       $a1, $gp, -0x6280
    ctx->pc = 0x239918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942080));
    // 0x23991c: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x23991cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x239920: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x239920u;
    SET_GPR_U32(ctx, 31, 0x239928u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x239920u, 0x239928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239928u;
label_239928:
    // 0x239928: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x239928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23992c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x23992cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x239930: 0xc119568  jal         func_4655A0
    ctx->pc = 0x239930u;
    SET_GPR_U32(ctx, 31, 0x239938u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x239930u, 0x239938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239938u;
label_239938:
    // 0x239938: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x239938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23993c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23993cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x239940: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x239940u;
    SET_GPR_U32(ctx, 31, 0x239948u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x239940u, 0x239948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239948u;
label_239948:
    // 0x239948: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x239948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23994c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x23994cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x239950: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x239950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x239954: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x239954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x239958: 0xc08e608  jal         func_239820
    ctx->pc = 0x239958u;
    SET_GPR_U32(ctx, 31, 0x239960u);
    ctx->pc = 0x239820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239820u, 0x239958u, 0x239960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239960u;
label_239960:
    // 0x239960: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x239960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x239964: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239968: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x239968u;
    SET_GPR_U32(ctx, 31, 0x239970u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x239968u, 0x239970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239970u;
label_239970:
    // 0x239970: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x239970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x239974: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239978: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x239978u;
    SET_GPR_U32(ctx, 31, 0x239980u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x239978u, 0x239980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239980u;
label_239980:
    // 0x239980: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x239980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x239984: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239988: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x239988u;
    SET_GPR_U32(ctx, 31, 0x239990u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x239988u, 0x239990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239990u;
label_239990:
    // 0x239990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239994: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x239994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x239998: 0x3e00008  jr          $ra
    ctx->pc = 0x239998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2399A0u;
}
