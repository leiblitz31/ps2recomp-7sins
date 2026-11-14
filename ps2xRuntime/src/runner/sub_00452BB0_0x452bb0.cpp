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

// Function: sub_00452BB0
// Address: 0x452bb0 - 0x452c10
void sub_00452BB0_0x452bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452BB0_0x452bb0");
#endif

    switch (ctx->pc) {
        case 0x452bccu: goto label_452bcc;
        case 0x452bdcu: goto label_452bdc;
        case 0x452bf0u: goto label_452bf0;
        default: break;
    }

    ctx->pc = 0x452bb0u;

    // 0x452bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x452bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x452bb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x452bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x452bb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x452bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x452bbc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x452bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x452bc0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x452bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452bc4: 0xc114a84  jal         func_452A10
    ctx->pc = 0x452BC4u;
    SET_GPR_U32(ctx, 31, 0x452BCCu);
    ctx->pc = 0x452A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452A10u, 0x452BC4u, 0x452BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452BCCu;
label_452bcc:
    // 0x452bcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x452bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452bd0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x452bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452bd4: 0xc114b30  jal         func_452CC0
    ctx->pc = 0x452BD4u;
    SET_GPR_U32(ctx, 31, 0x452BDCu);
    ctx->pc = 0x452CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452CC0u, 0x452BD4u, 0x452BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452BDCu;
label_452bdc:
    // 0x452bdc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x452bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452be0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x452be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452be4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x452be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452be8: 0xc114b04  jal         func_452C10
    ctx->pc = 0x452BE8u;
    SET_GPR_U32(ctx, 31, 0x452BF0u);
    ctx->pc = 0x452C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452C10u, 0x452BE8u, 0x452BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452BF0u;
label_452bf0:
    // 0x452bf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x452bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452bf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x452bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x452bf8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x452bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x452bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x452BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x452C04u;
    // 0x452c04: 0x0  nop
    ctx->pc = 0x452c04u;
    // NOP
    // 0x452c08: 0x0  nop
    ctx->pc = 0x452c08u;
    // NOP
    // 0x452c0c: 0x0  nop
    ctx->pc = 0x452c0cu;
    // NOP
    ctx->pc = 0x452c10u;
}
