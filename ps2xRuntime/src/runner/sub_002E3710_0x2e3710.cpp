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

// Function: sub_002E3710
// Address: 0x2e3710 - 0x2e3770
void sub_002E3710_0x2e3710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3710_0x2e3710");
#endif

    switch (ctx->pc) {
        case 0x2e372cu: goto label_2e372c;
        case 0x2e373cu: goto label_2e373c;
        case 0x2e3750u: goto label_2e3750;
        default: break;
    }

    ctx->pc = 0x2e3710u;

    // 0x2e3710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e3714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e3714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e3718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e3718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e371c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e371cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e3720: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e3720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3724: 0xc0b4c3c  jal         func_2D30F0
    ctx->pc = 0x2E3724u;
    SET_GPR_U32(ctx, 31, 0x2E372Cu);
    ctx->pc = 0x2D30F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D30F0u, 0x2E3724u, 0x2E372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E372Cu;
label_2e372c:
    // 0x2e372c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e372cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3730: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e3730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3734: 0xc0b8e08  jal         func_2E3820
    ctx->pc = 0x2E3734u;
    SET_GPR_U32(ctx, 31, 0x2E373Cu);
    ctx->pc = 0x2E3820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3820u, 0x2E3734u, 0x2E373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E373Cu;
label_2e373c:
    // 0x2e373c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e373cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3740: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e3740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3744: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e3744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3748: 0xc0b8ddc  jal         func_2E3770
    ctx->pc = 0x2E3748u;
    SET_GPR_U32(ctx, 31, 0x2E3750u);
    ctx->pc = 0x2E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3770u, 0x2E3748u, 0x2E3750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3750u;
label_2e3750:
    // 0x2e3750: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e3750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e3754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3758: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e3758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e375c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E375Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E375Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3764u;
    // 0x2e3764: 0x0  nop
    ctx->pc = 0x2e3764u;
    // NOP
    // 0x2e3768: 0x0  nop
    ctx->pc = 0x2e3768u;
    // NOP
    // 0x2e376c: 0x0  nop
    ctx->pc = 0x2e376cu;
    // NOP
    ctx->pc = 0x2e3770u;
}
