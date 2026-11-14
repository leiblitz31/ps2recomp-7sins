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

// Function: sub_0022D260
// Address: 0x22d260 - 0x22d2c0
void sub_0022D260_0x22d260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D260_0x22d260");
#endif

    switch (ctx->pc) {
        case 0x22d27cu: goto label_22d27c;
        case 0x22d28cu: goto label_22d28c;
        case 0x22d2a0u: goto label_22d2a0;
        default: break;
    }

    ctx->pc = 0x22d260u;

    // 0x22d260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22d260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22d264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22d264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22d268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22d26c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22d26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22d270: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22d270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d274: 0xc08b51c  jal         func_22D470
    ctx->pc = 0x22D274u;
    SET_GPR_U32(ctx, 31, 0x22D27Cu);
    ctx->pc = 0x22D470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D470u, 0x22D274u, 0x22D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D27Cu;
label_22d27c:
    // 0x22d27c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22d27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d280: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22d280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d284: 0xc08b514  jal         func_22D450
    ctx->pc = 0x22D284u;
    SET_GPR_U32(ctx, 31, 0x22D28Cu);
    ctx->pc = 0x22D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D450u, 0x22D284u, 0x22D28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D28Cu;
label_22d28c:
    // 0x22d28c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d290: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22d290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d294: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22d294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d298: 0xc08b4b0  jal         func_22D2C0
    ctx->pc = 0x22D298u;
    SET_GPR_U32(ctx, 31, 0x22D2A0u);
    ctx->pc = 0x22D2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D2C0u, 0x22D298u, 0x22D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D2A0u;
label_22d2a0:
    // 0x22d2a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22d2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d2a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d2a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d2a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22d2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22d2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x22D2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D2B4u;
    // 0x22d2b4: 0x0  nop
    ctx->pc = 0x22d2b4u;
    // NOP
    // 0x22d2b8: 0x0  nop
    ctx->pc = 0x22d2b8u;
    // NOP
    // 0x22d2bc: 0x0  nop
    ctx->pc = 0x22d2bcu;
    // NOP
    ctx->pc = 0x22d2c0u;
}
