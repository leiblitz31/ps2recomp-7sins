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

// Function: sub_001075B0
// Address: 0x1075b0 - 0x107610
void sub_001075B0_0x1075b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001075B0_0x1075b0");
#endif

    switch (ctx->pc) {
        case 0x1075ccu: goto label_1075cc;
        case 0x1075dcu: goto label_1075dc;
        case 0x1075f0u: goto label_1075f0;
        default: break;
    }

    ctx->pc = 0x1075b0u;

    // 0x1075b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1075b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1075b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1075b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1075b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1075b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1075bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1075bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1075c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1075c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1075c4: 0xc041db8  jal         func_1076E0
    ctx->pc = 0x1075C4u;
    SET_GPR_U32(ctx, 31, 0x1075CCu);
    ctx->pc = 0x1076E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076E0u, 0x1075C4u, 0x1075CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1075CCu;
label_1075cc:
    // 0x1075cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1075ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1075d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1075d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1075d4: 0xc041db0  jal         func_1076C0
    ctx->pc = 0x1075D4u;
    SET_GPR_U32(ctx, 31, 0x1075DCu);
    ctx->pc = 0x1076C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076C0u, 0x1075D4u, 0x1075DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1075DCu;
label_1075dc:
    // 0x1075dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1075dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1075e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1075e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1075e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1075e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1075e8: 0xc041d84  jal         func_107610
    ctx->pc = 0x1075E8u;
    SET_GPR_U32(ctx, 31, 0x1075F0u);
    ctx->pc = 0x107610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107610u, 0x1075E8u, 0x1075F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1075F0u;
label_1075f0:
    // 0x1075f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1075f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1075f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1075f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1075f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1075f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1075fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1075FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1075FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107604u;
    // 0x107604: 0x0  nop
    ctx->pc = 0x107604u;
    // NOP
    // 0x107608: 0x0  nop
    ctx->pc = 0x107608u;
    // NOP
    // 0x10760c: 0x0  nop
    ctx->pc = 0x10760cu;
    // NOP
    ctx->pc = 0x107610u;
}
