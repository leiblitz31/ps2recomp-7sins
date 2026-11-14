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

// Function: sub_004773D0
// Address: 0x4773d0 - 0x477430
void sub_004773D0_0x4773d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004773D0_0x4773d0");
#endif

    switch (ctx->pc) {
        case 0x4773ecu: goto label_4773ec;
        case 0x4773fcu: goto label_4773fc;
        case 0x477410u: goto label_477410;
        default: break;
    }

    ctx->pc = 0x4773d0u;

    // 0x4773d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4773d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4773d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4773d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4773d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4773d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4773dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x4773dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x4773e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4773e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4773e4: 0xc11dd74  jal         func_4775D0
    ctx->pc = 0x4773E4u;
    SET_GPR_U32(ctx, 31, 0x4773ECu);
    ctx->pc = 0x4775D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4775D0u, 0x4773E4u, 0x4773ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4773ECu;
label_4773ec:
    // 0x4773ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4773ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4773f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4773f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4773f4: 0xc11dd6c  jal         func_4775B0
    ctx->pc = 0x4773F4u;
    SET_GPR_U32(ctx, 31, 0x4773FCu);
    ctx->pc = 0x4775B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4775B0u, 0x4773F4u, 0x4773FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4773FCu;
label_4773fc:
    // 0x4773fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4773fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x477400: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x477400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477404: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x477404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477408: 0xc11dd0c  jal         func_477430
    ctx->pc = 0x477408u;
    SET_GPR_U32(ctx, 31, 0x477410u);
    ctx->pc = 0x477430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477430u, 0x477408u, 0x477410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477410u;
label_477410:
    // 0x477410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x477410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477414: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x477414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x477418: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x477418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x47741c: 0x3e00008  jr          $ra
    ctx->pc = 0x47741Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47741Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x477424u;
    // 0x477424: 0x0  nop
    ctx->pc = 0x477424u;
    // NOP
    // 0x477428: 0x0  nop
    ctx->pc = 0x477428u;
    // NOP
    // 0x47742c: 0x0  nop
    ctx->pc = 0x47742cu;
    // NOP
    ctx->pc = 0x477430u;
}
