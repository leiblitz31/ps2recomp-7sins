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

// Function: sub_00106DD0
// Address: 0x106dd0 - 0x106e40
void sub_00106DD0_0x106dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106DD0_0x106dd0");
#endif

    switch (ctx->pc) {
        case 0x106e00u: goto label_106e00;
        case 0x106e20u: goto label_106e20;
        default: break;
    }

    ctx->pc = 0x106dd0u;

    // 0x106dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106dd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106dd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x106dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x106ddc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x106ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x106de0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106de4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x106DE4u;
    {
        const bool branch_taken_0x106de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106de4) {
            ctx->pc = 0x106E20u;
            goto label_106e20;
        }
    }
    ctx->pc = 0x106DECu;
    // 0x106dec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106df0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x106df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x106df4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x106df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x106df8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x106DF8u;
    SET_GPR_U32(ctx, 31, 0x106E00u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x106DF8u, 0x106E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106E00u;
label_106e00:
    // 0x106e00: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x106e00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106e04: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x106e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x106e08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x106e08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x106e0c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106E0Cu;
    {
        const bool branch_taken_0x106e0c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x106e0c) {
            ctx->pc = 0x106E20u;
            goto label_106e20;
        }
    }
    ctx->pc = 0x106E14u;
    // 0x106e14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x106e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106e18: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x106E18u;
    SET_GPR_U32(ctx, 31, 0x106E20u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x106E18u, 0x106E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106E20u;
label_106e20:
    // 0x106e20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106e24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106e28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x106e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x106e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x106E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106E34u;
    // 0x106e34: 0x0  nop
    ctx->pc = 0x106e34u;
    // NOP
    // 0x106e38: 0x0  nop
    ctx->pc = 0x106e38u;
    // NOP
    // 0x106e3c: 0x0  nop
    ctx->pc = 0x106e3cu;
    // NOP
    ctx->pc = 0x106e40u;
}
