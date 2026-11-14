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

// Function: sub_002A2870
// Address: 0x2a2870 - 0x2a28e0
void sub_002A2870_0x2a2870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2870_0x2a2870");
#endif

    switch (ctx->pc) {
        case 0x2a288cu: goto label_2a288c;
        case 0x2a28bcu: goto label_2a28bc;
        default: break;
    }

    ctx->pc = 0x2a2870u;

    // 0x2a2870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a2870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a2874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a2874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a2878: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a2878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a287c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a287cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2880: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a2880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a2884: 0xc040ae4  jal         func_102B90
    ctx->pc = 0x2A2884u;
    SET_GPR_U32(ctx, 31, 0x2A288Cu);
    ctx->pc = 0x102B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102B90u, 0x2A2884u, 0x2A288Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A288Cu;
label_2a288c:
    // 0x2a288c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a288cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2890: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a2890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a2894: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A289Cu;
    // 0x2a289c: 0x0  nop
    ctx->pc = 0x2a289cu;
    // NOP
    // 0x2a28a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a28a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a28a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a28a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a28a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a28a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a28ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2a28acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2a28b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a28b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a28b4: 0xc0911cc  jal         func_244730
    ctx->pc = 0x2A28B4u;
    SET_GPR_U32(ctx, 31, 0x2A28BCu);
    ctx->pc = 0x244730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244730u, 0x2A28B4u, 0x2A28BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A28BCu;
label_2a28bc:
    // 0x2a28bc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2a28bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a28c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a28c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a28c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a28c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a28c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a28c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a28cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a28ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a28d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A28D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A28D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A28D8u;
    // 0x2a28d8: 0x0  nop
    ctx->pc = 0x2a28d8u;
    // NOP
    // 0x2a28dc: 0x0  nop
    ctx->pc = 0x2a28dcu;
    // NOP
    ctx->pc = 0x2a28e0u;
}
