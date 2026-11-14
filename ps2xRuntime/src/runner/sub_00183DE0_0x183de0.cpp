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

// Function: sub_00183DE0
// Address: 0x183de0 - 0x183e50
void sub_00183DE0_0x183de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183DE0_0x183de0");
#endif

    switch (ctx->pc) {
        case 0x183e08u: goto label_183e08;
        case 0x183e18u: goto label_183e18;
        case 0x183e38u: goto label_183e38;
        default: break;
    }

    ctx->pc = 0x183de0u;

    // 0x183de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183de8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x183de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x183dec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x183decu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x183df0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183df4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x183DF4u;
    {
        const bool branch_taken_0x183df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183df4) {
            ctx->pc = 0x183E38u;
            goto label_183e38;
        }
    }
    ctx->pc = 0x183DFCu;
    // 0x183dfc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x183dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183e00: 0xc060fb0  jal         func_183EC0
    ctx->pc = 0x183E00u;
    SET_GPR_U32(ctx, 31, 0x183E08u);
    ctx->pc = 0x183EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183EC0u, 0x183E00u, 0x183E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183E08u;
label_183e08:
    // 0x183e08: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x183e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183e0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e10: 0xc060f94  jal         func_183E50
    ctx->pc = 0x183E10u;
    SET_GPR_U32(ctx, 31, 0x183E18u);
    ctx->pc = 0x183E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183E50u, 0x183E10u, 0x183E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183E18u;
label_183e18:
    // 0x183e18: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x183e18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183e1c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x183e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x183e20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x183e20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x183e24: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x183E24u;
    {
        const bool branch_taken_0x183e24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x183e24) {
            ctx->pc = 0x183E38u;
            goto label_183e38;
        }
    }
    ctx->pc = 0x183E2Cu;
    // 0x183e2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x183e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183e30: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x183E30u;
    SET_GPR_U32(ctx, 31, 0x183E38u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x183E30u, 0x183E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183E38u;
label_183e38:
    // 0x183e38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183e40: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x183e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183e44: 0x3e00008  jr          $ra
    ctx->pc = 0x183E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183E4Cu;
    // 0x183e4c: 0x0  nop
    ctx->pc = 0x183e4cu;
    // NOP
    ctx->pc = 0x183e50u;
}
