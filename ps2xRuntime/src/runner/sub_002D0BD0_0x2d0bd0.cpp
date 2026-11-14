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

// Function: sub_002D0BD0
// Address: 0x2d0bd0 - 0x2d0c30
void sub_002D0BD0_0x2d0bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0BD0_0x2d0bd0");
#endif

    switch (ctx->pc) {
        case 0x2d0becu: goto label_2d0bec;
        case 0x2d0bfcu: goto label_2d0bfc;
        case 0x2d0c10u: goto label_2d0c10;
        default: break;
    }

    ctx->pc = 0x2d0bd0u;

    // 0x2d0bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d0bd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d0bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d0bdc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d0bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d0be0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d0be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0be4: 0xc0b436c  jal         func_2D0DB0
    ctx->pc = 0x2D0BE4u;
    SET_GPR_U32(ctx, 31, 0x2D0BECu);
    ctx->pc = 0x2D0DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0DB0u, 0x2D0BE4u, 0x2D0BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0BECu;
label_2d0bec:
    // 0x2d0bec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0bf0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d0bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0bf4: 0xc0b4338  jal         func_2D0CE0
    ctx->pc = 0x2D0BF4u;
    SET_GPR_U32(ctx, 31, 0x2D0BFCu);
    ctx->pc = 0x2D0CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0CE0u, 0x2D0BF4u, 0x2D0BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0BFCu;
label_2d0bfc:
    // 0x2d0bfc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d0bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0c00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d0c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0c04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d0c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0c08: 0xc0b430c  jal         func_2D0C30
    ctx->pc = 0x2D0C08u;
    SET_GPR_U32(ctx, 31, 0x2D0C10u);
    ctx->pc = 0x2D0C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0C30u, 0x2D0C08u, 0x2D0C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0C10u;
label_2d0c10:
    // 0x2d0c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0c14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0c18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d0c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d0c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0C24u;
    // 0x2d0c24: 0x0  nop
    ctx->pc = 0x2d0c24u;
    // NOP
    // 0x2d0c28: 0x0  nop
    ctx->pc = 0x2d0c28u;
    // NOP
    // 0x2d0c2c: 0x0  nop
    ctx->pc = 0x2d0c2cu;
    // NOP
    ctx->pc = 0x2d0c30u;
}
