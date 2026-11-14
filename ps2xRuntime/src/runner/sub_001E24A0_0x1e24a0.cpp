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

// Function: sub_001E24A0
// Address: 0x1e24a0 - 0x1e24f0
void sub_001E24A0_0x1e24a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E24A0_0x1e24a0");
#endif

    switch (ctx->pc) {
        case 0x1e24c8u: goto label_1e24c8;
        case 0x1e24e0u: goto label_1e24e0;
        default: break;
    }

    ctx->pc = 0x1e24a0u;

    // 0x1e24a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e24a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e24a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e24a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e24a8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e24a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e24ac: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e24acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e24b0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e24b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e24b4: 0xa3a70050  sb          $a3, 0x50($sp)
    ctx->pc = 0x1e24b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 7));
    // 0x1e24b8: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x1e24b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1e24bc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e24bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e24c0: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E24C0u;
    SET_GPR_U32(ctx, 31, 0x1E24C8u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E24C0u, 0x1E24C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E24C8u;
label_1e24c8:
    // 0x1e24c8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e24c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e24cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e24ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e24d0: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1e24d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e24d4: 0x93a70050  lbu         $a3, 0x50($sp)
    ctx->pc = 0x1e24d4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e24d8: 0xc07893c  jal         func_1E24F0
    ctx->pc = 0x1E24D8u;
    SET_GPR_U32(ctx, 31, 0x1E24E0u);
    ctx->pc = 0x1E24F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E24F0u, 0x1E24D8u, 0x1E24E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E24E0u;
label_1e24e0:
    // 0x1e24e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e24e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e24e4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1e24e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e24e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E24E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E24E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E24F0u;
}
