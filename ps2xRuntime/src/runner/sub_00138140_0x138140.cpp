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

// Function: sub_00138140
// Address: 0x138140 - 0x138190
void sub_00138140_0x138140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138140_0x138140");
#endif

    switch (ctx->pc) {
        case 0x138158u: goto label_138158;
        case 0x13817cu: goto label_13817c;
        default: break;
    }

    ctx->pc = 0x138140u;

    // 0x138140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x138140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x138144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138148: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x138148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13814c: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x13814cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x138150: 0xc04e144  jal         func_138510
    ctx->pc = 0x138150u;
    SET_GPR_U32(ctx, 31, 0x138158u);
    ctx->pc = 0x138510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138510u, 0x138150u, 0x138158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138158u;
label_138158:
    // 0x138158: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x138158u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x13815c: 0xa3a00018  sb          $zero, 0x18($sp)
    ctx->pc = 0x13815cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x138160: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x138160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138164: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x138164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x138168: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x138168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x13816c: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x13816cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x138170: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x138170u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138174: 0xc04e064  jal         func_138190
    ctx->pc = 0x138174u;
    SET_GPR_U32(ctx, 31, 0x13817Cu);
    ctx->pc = 0x138190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138190u, 0x138174u, 0x13817Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13817Cu;
label_13817c:
    // 0x13817c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13817cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138184: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x138184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x138188: 0x3e00008  jr          $ra
    ctx->pc = 0x138188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138190u;
}
