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

// Function: sub_001A6DE0
// Address: 0x1a6de0 - 0x1a6e60
void sub_001A6DE0_0x1a6de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6DE0_0x1a6de0");
#endif

    switch (ctx->pc) {
        case 0x1a6e10u: goto label_1a6e10;
        case 0x1a6e24u: goto label_1a6e24;
        case 0x1a6e44u: goto label_1a6e44;
        default: break;
    }

    ctx->pc = 0x1a6de0u;

    // 0x1a6de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a6de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6de8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a6de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a6dec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1a6decu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a6df0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a6df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6df4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A6DF4u;
    {
        const bool branch_taken_0x1a6df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6df4) {
            ctx->pc = 0x1A6E44u;
            goto label_1a6e44;
        }
    }
    ctx->pc = 0x1A6DFCu;
    // 0x1a6dfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a6dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6e00: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x1a6e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x1a6e04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a6e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a6e08: 0xc058c38  jal         func_1630E0
    ctx->pc = 0x1A6E08u;
    SET_GPR_U32(ctx, 31, 0x1A6E10u);
    ctx->pc = 0x1630E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1630E0u, 0x1A6E08u, 0x1A6E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6E10u;
label_1a6e10:
    // 0x1a6e10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a6e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6e14: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1a6e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a6e18: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a6e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a6e1c: 0xc056094  jal         func_158250
    ctx->pc = 0x1A6E1Cu;
    SET_GPR_U32(ctx, 31, 0x1A6E24u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1A6E1Cu, 0x1A6E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6E24u;
label_1a6e24:
    // 0x1a6e24: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1a6e24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6e28: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1a6e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a6e2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a6e2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a6e30: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6E30u;
    {
        const bool branch_taken_0x1a6e30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a6e30) {
            ctx->pc = 0x1A6E44u;
            goto label_1a6e44;
        }
    }
    ctx->pc = 0x1A6E38u;
    // 0x1a6e38: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a6e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6e3c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1A6E3Cu;
    SET_GPR_U32(ctx, 31, 0x1A6E44u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1A6E3Cu, 0x1A6E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6E44u;
label_1a6e44:
    // 0x1a6e44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a6e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6e4c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a6e4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a6e50: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6E58u;
    // 0x1a6e58: 0x0  nop
    ctx->pc = 0x1a6e58u;
    // NOP
    // 0x1a6e5c: 0x0  nop
    ctx->pc = 0x1a6e5cu;
    // NOP
    ctx->pc = 0x1a6e60u;
}
