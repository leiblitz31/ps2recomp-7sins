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

// Function: sub_00141750
// Address: 0x141750 - 0x1417b0
void sub_00141750_0x141750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141750_0x141750");
#endif

    switch (ctx->pc) {
        case 0x141768u: goto label_141768;
        case 0x141788u: goto label_141788;
        default: break;
    }

    ctx->pc = 0x141750u;

    // 0x141750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x141754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141758: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x141758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14175c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14175cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141760: 0xc0ad664  jal         func_2B5990
    ctx->pc = 0x141760u;
    SET_GPR_U32(ctx, 31, 0x141768u);
    ctx->pc = 0x2B5990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5990u, 0x141760u, 0x141768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141768u;
label_141768:
    // 0x141768: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x141768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x14176c: 0x24633840  addiu       $v1, $v1, 0x3840
    ctx->pc = 0x14176cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14400));
    // 0x141770: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141774: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x141774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x141778: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14177c: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x14177cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x141780: 0xc050674  jal         func_1419D0
    ctx->pc = 0x141780u;
    SET_GPR_U32(ctx, 31, 0x141788u);
    ctx->pc = 0x1419D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1419D0u, 0x141780u, 0x141788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141788u;
label_141788:
    // 0x141788: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14178c: 0xaf82ba84  sw          $v0, -0x457C($gp)
    ctx->pc = 0x14178cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949508), GPR_U32(ctx, 2));
    // 0x141790: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x141790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141798: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x141798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14179c: 0x3e00008  jr          $ra
    ctx->pc = 0x14179Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14179Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1417A4u;
    // 0x1417a4: 0x0  nop
    ctx->pc = 0x1417a4u;
    // NOP
    // 0x1417a8: 0x0  nop
    ctx->pc = 0x1417a8u;
    // NOP
    // 0x1417ac: 0x0  nop
    ctx->pc = 0x1417acu;
    // NOP
    ctx->pc = 0x1417b0u;
}
