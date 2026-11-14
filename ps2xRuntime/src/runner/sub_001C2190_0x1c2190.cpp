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

// Function: sub_001C2190
// Address: 0x1c2190 - 0x1c21f0
void sub_001C2190_0x1c2190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2190_0x1c2190");
#endif

    switch (ctx->pc) {
        case 0x1c21acu: goto label_1c21ac;
        case 0x1c21bcu: goto label_1c21bc;
        case 0x1c21d0u: goto label_1c21d0;
        default: break;
    }

    ctx->pc = 0x1c2190u;

    // 0x1c2190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c2194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c2198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c219c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1c219cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1c21a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c21a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c21a4: 0xc0708b0  jal         func_1C22C0
    ctx->pc = 0x1C21A4u;
    SET_GPR_U32(ctx, 31, 0x1C21ACu);
    ctx->pc = 0x1C22C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22C0u, 0x1C21A4u, 0x1C21ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21ACu;
label_1c21ac:
    // 0x1c21ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c21acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c21b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c21b4: 0xc0708a8  jal         func_1C22A0
    ctx->pc = 0x1C21B4u;
    SET_GPR_U32(ctx, 31, 0x1C21BCu);
    ctx->pc = 0x1C22A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22A0u, 0x1C21B4u, 0x1C21BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21BCu;
label_1c21bc:
    // 0x1c21bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c21bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c21c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c21c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c21c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21c8: 0xc07087c  jal         func_1C21F0
    ctx->pc = 0x1C21C8u;
    SET_GPR_U32(ctx, 31, 0x1C21D0u);
    ctx->pc = 0x1C21F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C21F0u, 0x1C21C8u, 0x1C21D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21D0u;
label_1c21d0:
    // 0x1c21d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c21d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c21d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c21d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c21d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c21d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c21dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C21DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C21DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C21E4u;
    // 0x1c21e4: 0x0  nop
    ctx->pc = 0x1c21e4u;
    // NOP
    // 0x1c21e8: 0x0  nop
    ctx->pc = 0x1c21e8u;
    // NOP
    // 0x1c21ec: 0x0  nop
    ctx->pc = 0x1c21ecu;
    // NOP
    ctx->pc = 0x1c21f0u;
}
