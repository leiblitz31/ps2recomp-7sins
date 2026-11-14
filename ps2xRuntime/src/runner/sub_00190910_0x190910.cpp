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

// Function: sub_00190910
// Address: 0x190910 - 0x190950
void sub_00190910_0x190910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190910_0x190910");
#endif

    switch (ctx->pc) {
        case 0x190928u: goto label_190928;
        case 0x19093cu: goto label_19093c;
        default: break;
    }

    ctx->pc = 0x190910u;

    // 0x190910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x190914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190918: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x190918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19091c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x19091cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x190920: 0xc042280  jal         func_108A00
    ctx->pc = 0x190920u;
    SET_GPR_U32(ctx, 31, 0x190928u);
    ctx->pc = 0x108A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A00u, 0x190920u, 0x190928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190928u;
label_190928:
    // 0x190928: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x190928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19092c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x19092cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x190930: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x190930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190934: 0xc064254  jal         func_190950
    ctx->pc = 0x190934u;
    SET_GPR_U32(ctx, 31, 0x19093Cu);
    ctx->pc = 0x190950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190950u, 0x190934u, 0x19093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19093Cu;
label_19093c:
    // 0x19093c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19093cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190944: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x190944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x190948: 0x3e00008  jr          $ra
    ctx->pc = 0x190948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190950u;
}
