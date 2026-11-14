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

// Function: sub_00247E80
// Address: 0x247e80 - 0x247ec0
void sub_00247E80_0x247e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247E80_0x247e80");
#endif

    switch (ctx->pc) {
        case 0x247e98u: goto label_247e98;
        case 0x247eacu: goto label_247eac;
        default: break;
    }

    ctx->pc = 0x247e80u;

    // 0x247e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247e88: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x247e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x247e8c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x247e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x247e90: 0xc092030  jal         func_2480C0
    ctx->pc = 0x247E90u;
    SET_GPR_U32(ctx, 31, 0x247E98u);
    ctx->pc = 0x2480C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2480C0u, 0x247E90u, 0x247E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247E98u;
label_247e98:
    // 0x247e98: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x247e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247e9c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x247e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x247ea0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x247ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247ea4: 0xc091fb0  jal         func_247EC0
    ctx->pc = 0x247EA4u;
    SET_GPR_U32(ctx, 31, 0x247EACu);
    ctx->pc = 0x247EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247EC0u, 0x247EA4u, 0x247EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247EACu;
label_247eac:
    // 0x247eac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x247eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247eb4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x247eb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x247eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x247EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247EC0u;
}
