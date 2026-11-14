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

// Function: sub_002CB890
// Address: 0x2cb890 - 0x2cb8f0
void sub_002CB890_0x2cb890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB890_0x2cb890");
#endif

    switch (ctx->pc) {
        case 0x2cb8acu: goto label_2cb8ac;
        case 0x2cb8bcu: goto label_2cb8bc;
        case 0x2cb8d0u: goto label_2cb8d0;
        default: break;
    }

    ctx->pc = 0x2cb890u;

    // 0x2cb890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cb894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cb898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cb89c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2cb89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2cb8a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2cb8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb8a4: 0xc0b2e94  jal         func_2CBA50
    ctx->pc = 0x2CB8A4u;
    SET_GPR_U32(ctx, 31, 0x2CB8ACu);
    ctx->pc = 0x2CBA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA50u, 0x2CB8A4u, 0x2CB8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB8ACu;
label_2cb8ac:
    // 0x2cb8ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cb8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2cb8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb8b4: 0xc0b2e8c  jal         func_2CBA30
    ctx->pc = 0x2CB8B4u;
    SET_GPR_U32(ctx, 31, 0x2CB8BCu);
    ctx->pc = 0x2CBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA30u, 0x2CB8B4u, 0x2CB8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB8BCu;
label_2cb8bc:
    // 0x2cb8bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2cb8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb8c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cb8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cb8c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb8c8: 0xc0b2e3c  jal         func_2CB8F0
    ctx->pc = 0x2CB8C8u;
    SET_GPR_U32(ctx, 31, 0x2CB8D0u);
    ctx->pc = 0x2CB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8F0u, 0x2CB8C8u, 0x2CB8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB8D0u;
label_2cb8d0:
    // 0x2cb8d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cb8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb8d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb8d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb8d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cb8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cb8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB8E4u;
    // 0x2cb8e4: 0x0  nop
    ctx->pc = 0x2cb8e4u;
    // NOP
    // 0x2cb8e8: 0x0  nop
    ctx->pc = 0x2cb8e8u;
    // NOP
    // 0x2cb8ec: 0x0  nop
    ctx->pc = 0x2cb8ecu;
    // NOP
    ctx->pc = 0x2cb8f0u;
}
