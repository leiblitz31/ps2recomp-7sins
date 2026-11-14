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

// Function: sub_00237B50
// Address: 0x237b50 - 0x237b90
void sub_00237B50_0x237b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237B50_0x237b50");
#endif

    switch (ctx->pc) {
        case 0x237b7cu: goto label_237b7c;
        default: break;
    }

    ctx->pc = 0x237b50u;

    // 0x237b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x237b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x237b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x237b58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x237b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x237b5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x237b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x237b60: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x237b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237b64: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x237b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237b68: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x237b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x237b6c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x237b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x237b70: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x237b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237b74: 0xc1178cc  jal         func_45E330
    ctx->pc = 0x237B74u;
    SET_GPR_U32(ctx, 31, 0x237B7Cu);
    ctx->pc = 0x45E330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45E330u, 0x237B74u, 0x237B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B7Cu;
label_237b7c:
    // 0x237b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x237b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237b84: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x237b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x237b88: 0x3e00008  jr          $ra
    ctx->pc = 0x237B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237B90u;
}
