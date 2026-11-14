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

// Function: sub_002815B0
// Address: 0x2815b0 - 0x281620
void sub_002815B0_0x2815b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002815B0_0x2815b0");
#endif

    switch (ctx->pc) {
        case 0x2815d0u: goto label_2815d0;
        case 0x2815e4u: goto label_2815e4;
        case 0x2815f8u: goto label_2815f8;
        default: break;
    }

    ctx->pc = 0x2815b0u;

    // 0x2815b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2815b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2815b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2815b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2815b8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2815b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2815bc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2815bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2815c0: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2815c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2815c4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2815c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2815c8: 0xc0a05a4  jal         func_281690
    ctx->pc = 0x2815C8u;
    SET_GPR_U32(ctx, 31, 0x2815D0u);
    ctx->pc = 0x281690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281690u, 0x2815C8u, 0x2815D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2815D0u;
label_2815d0:
    // 0x2815d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2815d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2815d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2815d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2815d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2815d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2815dc: 0xc0a0588  jal         func_281620
    ctx->pc = 0x2815DCu;
    SET_GPR_U32(ctx, 31, 0x2815E4u);
    ctx->pc = 0x281620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281620u, 0x2815DCu, 0x2815E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2815E4u;
label_2815e4:
    // 0x2815e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2815e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2815e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2815e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2815ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2815ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2815f0: 0xc0a0764  jal         func_281D90
    ctx->pc = 0x2815F0u;
    SET_GPR_U32(ctx, 31, 0x2815F8u);
    ctx->pc = 0x281D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281D90u, 0x2815F0u, 0x2815F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2815F8u;
label_2815f8:
    // 0x2815f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2815f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2815fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2815fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x281600: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x281600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281608: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x281608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28160c: 0x3e00008  jr          $ra
    ctx->pc = 0x28160Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28160Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281614u;
    // 0x281614: 0x0  nop
    ctx->pc = 0x281614u;
    // NOP
    // 0x281618: 0x0  nop
    ctx->pc = 0x281618u;
    // NOP
    // 0x28161c: 0x0  nop
    ctx->pc = 0x28161cu;
    // NOP
    ctx->pc = 0x281620u;
}
