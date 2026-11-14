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

// Function: sub_001A3AA0
// Address: 0x1a3aa0 - 0x1a3b00
void sub_001A3AA0_0x1a3aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3AA0_0x1a3aa0");
#endif

    switch (ctx->pc) {
        case 0x1a3abcu: goto label_1a3abc;
        case 0x1a3accu: goto label_1a3acc;
        case 0x1a3ae0u: goto label_1a3ae0;
        default: break;
    }

    ctx->pc = 0x1a3aa0u;

    // 0x1a3aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a3aa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a3aa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a3aac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1a3aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1a3ab0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a3ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3ab4: 0xc068c7c  jal         func_1A31F0
    ctx->pc = 0x1A3AB4u;
    SET_GPR_U32(ctx, 31, 0x1A3ABCu);
    ctx->pc = 0x1A31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31F0u, 0x1A3AB4u, 0x1A3ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3ABCu;
label_1a3abc:
    // 0x1a3abc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a3abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ac0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a3ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3ac4: 0xc068eec  jal         func_1A3BB0
    ctx->pc = 0x1A3AC4u;
    SET_GPR_U32(ctx, 31, 0x1A3ACCu);
    ctx->pc = 0x1A3BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3BB0u, 0x1A3AC4u, 0x1A3ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3ACCu;
label_1a3acc:
    // 0x1a3acc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a3accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3ad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a3ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ad4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a3ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ad8: 0xc068ec0  jal         func_1A3B00
    ctx->pc = 0x1A3AD8u;
    SET_GPR_U32(ctx, 31, 0x1A3AE0u);
    ctx->pc = 0x1A3B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3B00u, 0x1A3AD8u, 0x1A3AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3AE0u;
label_1a3ae0:
    // 0x1a3ae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3ae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3ae8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a3ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a3aec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3AF4u;
    // 0x1a3af4: 0x0  nop
    ctx->pc = 0x1a3af4u;
    // NOP
    // 0x1a3af8: 0x0  nop
    ctx->pc = 0x1a3af8u;
    // NOP
    // 0x1a3afc: 0x0  nop
    ctx->pc = 0x1a3afcu;
    // NOP
    ctx->pc = 0x1a3b00u;
}
