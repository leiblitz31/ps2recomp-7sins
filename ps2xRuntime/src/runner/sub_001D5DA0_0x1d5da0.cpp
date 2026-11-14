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

// Function: sub_001D5DA0
// Address: 0x1d5da0 - 0x1d5e80
void sub_001D5DA0_0x1d5da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5DA0_0x1d5da0");
#endif

    switch (ctx->pc) {
        case 0x1d5dd0u: goto label_1d5dd0;
        case 0x1d5de4u: goto label_1d5de4;
        case 0x1d5df8u: goto label_1d5df8;
        case 0x1d5e0cu: goto label_1d5e0c;
        case 0x1d5e20u: goto label_1d5e20;
        case 0x1d5e34u: goto label_1d5e34;
        case 0x1d5e48u: goto label_1d5e48;
        case 0x1d5e68u: goto label_1d5e68;
        default: break;
    }

    ctx->pc = 0x1d5da0u;

    // 0x1d5da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5da8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d5da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d5dac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1d5dacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d5db0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5db4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1D5DB4u;
    {
        const bool branch_taken_0x1d5db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5db4) {
            ctx->pc = 0x1D5E68u;
            goto label_1d5e68;
        }
    }
    ctx->pc = 0x1D5DBCu;
    // 0x1d5dbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5dc0: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1d5dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1d5dc4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d5dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5dc8: 0xc056094  jal         func_158250
    ctx->pc = 0x1D5DC8u;
    SET_GPR_U32(ctx, 31, 0x1D5DD0u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1D5DC8u, 0x1D5DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DD0u;
label_1d5dd0:
    // 0x1d5dd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5dd4: 0x244400d4  addiu       $a0, $v0, 0xD4
    ctx->pc = 0x1d5dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 212));
    // 0x1d5dd8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d5dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5ddc: 0xc058c38  jal         func_1630E0
    ctx->pc = 0x1D5DDCu;
    SET_GPR_U32(ctx, 31, 0x1D5DE4u);
    ctx->pc = 0x1630E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1630E0u, 0x1D5DDCu, 0x1D5DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DE4u;
label_1d5de4:
    // 0x1d5de4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5de8: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x1d5de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1d5dec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d5decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5df0: 0xc056094  jal         func_158250
    ctx->pc = 0x1D5DF0u;
    SET_GPR_U32(ctx, 31, 0x1D5DF8u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1D5DF0u, 0x1D5DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DF8u;
label_1d5df8:
    // 0x1d5df8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5dfc: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1d5dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1d5e00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d5e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5e04: 0xc075944  jal         func_1D6510
    ctx->pc = 0x1D5E04u;
    SET_GPR_U32(ctx, 31, 0x1D5E0Cu);
    ctx->pc = 0x1D6510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6510u, 0x1D5E04u, 0x1D5E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E0Cu;
label_1d5e0c:
    // 0x1d5e0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5e10: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x1d5e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1d5e14: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d5e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5e18: 0xc0758a4  jal         func_1D6290
    ctx->pc = 0x1D5E18u;
    SET_GPR_U32(ctx, 31, 0x1D5E20u);
    ctx->pc = 0x1D6290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6290u, 0x1D5E18u, 0x1D5E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E20u;
label_1d5e20:
    // 0x1d5e20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5e24: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1d5e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1d5e28: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d5e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5e2c: 0xc0757a0  jal         func_1D5E80
    ctx->pc = 0x1D5E2Cu;
    SET_GPR_U32(ctx, 31, 0x1D5E34u);
    ctx->pc = 0x1D5E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5E80u, 0x1D5E2Cu, 0x1D5E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E34u;
label_1d5e34:
    // 0x1d5e34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5e38: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x1d5e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x1d5e3c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d5e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5e40: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1D5E40u;
    SET_GPR_U32(ctx, 31, 0x1D5E48u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1D5E40u, 0x1D5E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E48u;
label_1d5e48:
    // 0x1d5e48: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1d5e48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5e4c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d5e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d5e50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d5e50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d5e54: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5E54u;
    {
        const bool branch_taken_0x1d5e54 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d5e54) {
            ctx->pc = 0x1D5E68u;
            goto label_1d5e68;
        }
    }
    ctx->pc = 0x1D5E5Cu;
    // 0x1d5e5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d5e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5e60: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1D5E60u;
    SET_GPR_U32(ctx, 31, 0x1D5E68u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1D5E60u, 0x1D5E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E68u;
label_1d5e68:
    // 0x1d5e68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5e70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d5e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d5e74: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5E7Cu;
    // 0x1d5e7c: 0x0  nop
    ctx->pc = 0x1d5e7cu;
    // NOP
    ctx->pc = 0x1d5e80u;
}
