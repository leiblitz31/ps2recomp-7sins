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

// Function: sub_0016E5C0
// Address: 0x16e5c0 - 0x16e620
void sub_0016E5C0_0x16e5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E5C0_0x16e5c0");
#endif

    switch (ctx->pc) {
        case 0x16e5dcu: goto label_16e5dc;
        case 0x16e5ecu: goto label_16e5ec;
        case 0x16e600u: goto label_16e600;
        default: break;
    }

    ctx->pc = 0x16e5c0u;

    // 0x16e5c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16e5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16e5c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16e5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16e5c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16e5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16e5cc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16e5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x16e5d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16e5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e5d4: 0xc05b9bc  jal         func_16E6F0
    ctx->pc = 0x16E5D4u;
    SET_GPR_U32(ctx, 31, 0x16E5DCu);
    ctx->pc = 0x16E6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E6F0u, 0x16E5D4u, 0x16E5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E5DCu;
label_16e5dc:
    // 0x16e5dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16e5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e5e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16e5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e5e4: 0xc05b9b4  jal         func_16E6D0
    ctx->pc = 0x16E5E4u;
    SET_GPR_U32(ctx, 31, 0x16E5ECu);
    ctx->pc = 0x16E6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E6D0u, 0x16E5E4u, 0x16E5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E5ECu;
label_16e5ec:
    // 0x16e5ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16e5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e5f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16e5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e5f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16e5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e5f8: 0xc05b988  jal         func_16E620
    ctx->pc = 0x16E5F8u;
    SET_GPR_U32(ctx, 31, 0x16E600u);
    ctx->pc = 0x16E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E620u, 0x16E5F8u, 0x16E600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E600u;
label_16e600:
    // 0x16e600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16e600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16e604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e608: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16e608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16e60c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E614u;
    // 0x16e614: 0x0  nop
    ctx->pc = 0x16e614u;
    // NOP
    // 0x16e618: 0x0  nop
    ctx->pc = 0x16e618u;
    // NOP
    // 0x16e61c: 0x0  nop
    ctx->pc = 0x16e61cu;
    // NOP
    ctx->pc = 0x16e620u;
}
