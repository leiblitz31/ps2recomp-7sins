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

// Function: sub_002E5DE0
// Address: 0x2e5de0 - 0x2e5ea0
void sub_002E5DE0_0x2e5de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5DE0_0x2e5de0");
#endif

    switch (ctx->pc) {
        case 0x2e5e44u: goto label_2e5e44;
        case 0x2e5e58u: goto label_2e5e58;
        case 0x2e5e6cu: goto label_2e5e6c;
        case 0x2e5e8cu: goto label_2e5e8c;
        default: break;
    }

    ctx->pc = 0x2e5de0u;

    // 0x2e5de0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e5de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e5de4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e5de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e5de8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e5de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5dec: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2e5decu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e5df0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5DF8u;
    // 0x2e5df8: 0x0  nop
    ctx->pc = 0x2e5df8u;
    // NOP
    // 0x2e5dfc: 0x0  nop
    ctx->pc = 0x2e5dfcu;
    // NOP
    // 0x2e5e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e5e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e5e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e5e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e5e08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e5e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e5e0c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2e5e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e5e10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5e14: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E5E14u;
    {
        const bool branch_taken_0x2e5e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5e14) {
            ctx->pc = 0x2E5E8Cu;
            goto label_2e5e8c;
        }
    }
    ctx->pc = 0x2E5E1Cu;
    // 0x2e5e1c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e5e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e5e20: 0x24636a58  addiu       $v1, $v1, 0x6A58
    ctx->pc = 0x2e5e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27224));
    // 0x2e5e24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5e28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2e5e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2e5e2c: 0xaf80bcd0  sw          $zero, -0x4330($gp)
    ctx->pc = 0x2e5e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950096), GPR_U32(ctx, 0));
    // 0x2e5e30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5e34: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e5e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2e5e38: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e5e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e5e3c: 0xc0b96a0  jal         func_2E5A80
    ctx->pc = 0x2E5E3Cu;
    SET_GPR_U32(ctx, 31, 0x2E5E44u);
    ctx->pc = 0x2E5A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5A80u, 0x2E5E3Cu, 0x2E5E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5E44u;
label_2e5e44:
    // 0x2e5e44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5e48: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2e5e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2e5e4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e5e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e5e50: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x2E5E50u;
    SET_GPR_U32(ctx, 31, 0x2E5E58u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x2E5E50u, 0x2E5E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5E58u;
label_2e5e58:
    // 0x2e5e58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5e5c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e5e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e5e60: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e5e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e5e64: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x2E5E64u;
    SET_GPR_U32(ctx, 31, 0x2E5E6Cu);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x2E5E64u, 0x2E5E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5E6Cu;
label_2e5e6c:
    // 0x2e5e6c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2e5e6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5e70: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e5e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e5e74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e5e74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e5e78: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5E78u;
    {
        const bool branch_taken_0x2e5e78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e5e78) {
            ctx->pc = 0x2E5E8Cu;
            goto label_2e5e8c;
        }
    }
    ctx->pc = 0x2E5E80u;
    // 0x2e5e80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e5e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5e84: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2E5E84u;
    SET_GPR_U32(ctx, 31, 0x2E5E8Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2E5E84u, 0x2E5E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5E8Cu;
label_2e5e8c:
    // 0x2e5e8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5e94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e5e94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e5e98: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5EA0u;
}
