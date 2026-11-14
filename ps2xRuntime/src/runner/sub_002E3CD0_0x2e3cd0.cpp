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

// Function: sub_002E3CD0
// Address: 0x2e3cd0 - 0x2e3e10
void sub_002E3CD0_0x2e3cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3CD0_0x2e3cd0");
#endif

    switch (ctx->pc) {
        case 0x2e3d30u: goto label_2e3d30;
        case 0x2e3d44u: goto label_2e3d44;
        case 0x2e3d58u: goto label_2e3d58;
        case 0x2e3d6cu: goto label_2e3d6c;
        case 0x2e3d80u: goto label_2e3d80;
        case 0x2e3d94u: goto label_2e3d94;
        case 0x2e3db4u: goto label_2e3db4;
        default: break;
    }

    ctx->pc = 0x2e3cd0u;

    // 0x2e3cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e3cd4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e3cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e3cd8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3cdc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2e3cdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e3ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3CE8u;
    // 0x2e3ce8: 0x0  nop
    ctx->pc = 0x2e3ce8u;
    // NOP
    // 0x2e3cec: 0x0  nop
    ctx->pc = 0x2e3cecu;
    // NOP
    // 0x2e3cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e3cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3cf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e3cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e3cfc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2e3cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e3d00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3d04: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2E3D04u;
    {
        const bool branch_taken_0x2e3d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3d04) {
            ctx->pc = 0x2E3DB4u;
            goto label_2e3db4;
        }
    }
    ctx->pc = 0x2E3D0Cu;
    // 0x2e3d0c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e3d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e3d10: 0x24636a40  addiu       $v1, $v1, 0x6A40
    ctx->pc = 0x2e3d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27200));
    // 0x2e3d14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3d18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2e3d18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2e3d1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3d20: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x2e3d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x2e3d24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e3d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e3d28: 0xc0b2bf8  jal         func_2CAFE0
    ctx->pc = 0x2E3D28u;
    SET_GPR_U32(ctx, 31, 0x2E3D30u);
    ctx->pc = 0x2CAFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAFE0u, 0x2E3D28u, 0x2E3D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D30u;
label_2e3d30:
    // 0x2e3d30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3d34: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e3d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e3d38: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e3d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e3d3c: 0xc0b8e5c  jal         func_2E3970
    ctx->pc = 0x2E3D3Cu;
    SET_GPR_U32(ctx, 31, 0x2E3D44u);
    ctx->pc = 0x2E3970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3970u, 0x2E3D3Cu, 0x2E3D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D44u;
label_2e3d44:
    // 0x2e3d44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3d48: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x2e3d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x2e3d4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e3d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e3d50: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x2E3D50u;
    SET_GPR_U32(ctx, 31, 0x2E3D58u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x2E3D50u, 0x2E3D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D58u;
label_2e3d58:
    // 0x2e3d58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3d5c: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x2e3d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x2e3d60: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e3d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e3d64: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2E3D64u;
    SET_GPR_U32(ctx, 31, 0x2E3D6Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2E3D64u, 0x2E3D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D6Cu;
label_2e3d6c:
    // 0x2e3d6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3d70: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x2e3d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x2e3d74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e3d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e3d78: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x2E3D78u;
    SET_GPR_U32(ctx, 31, 0x2E3D80u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x2E3D78u, 0x2E3D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D80u;
label_2e3d80:
    // 0x2e3d80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3d84: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2e3d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2e3d88: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e3d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e3d8c: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x2E3D8Cu;
    SET_GPR_U32(ctx, 31, 0x2E3D94u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x2E3D8Cu, 0x2E3D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D94u;
label_2e3d94:
    // 0x2e3d94: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2e3d94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3d98: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e3d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e3d9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e3d9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e3da0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3DA0u;
    {
        const bool branch_taken_0x2e3da0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e3da0) {
            ctx->pc = 0x2E3DB4u;
            goto label_2e3db4;
        }
    }
    ctx->pc = 0x2E3DA8u;
    // 0x2e3da8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e3da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3dac: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2E3DACu;
    SET_GPR_U32(ctx, 31, 0x2E3DB4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2E3DACu, 0x2E3DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3DB4u;
label_2e3db4:
    // 0x2e3db4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3db8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3dbc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e3dbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e3dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3DC8u;
    // 0x2e3dc8: 0x0  nop
    ctx->pc = 0x2e3dc8u;
    // NOP
    // 0x2e3dcc: 0x0  nop
    ctx->pc = 0x2e3dccu;
    // NOP
    // 0x2e3dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e3dd4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e3dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e3dd8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2e3dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2e3ddc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2e3ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2e3de0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2e3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3de4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3de8: 0xac430068  sw          $v1, 0x68($v0)
    ctx->pc = 0x2e3de8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
    // 0x2e3dec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e3decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3df0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e3df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3df4: 0xac43006c  sw          $v1, 0x6C($v0)
    ctx->pc = 0x2e3df4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 3));
    // 0x2e3df8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3dfc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e3dfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e3e00: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3E08u;
    // 0x2e3e08: 0x0  nop
    ctx->pc = 0x2e3e08u;
    // NOP
    // 0x2e3e0c: 0x0  nop
    ctx->pc = 0x2e3e0cu;
    // NOP
    ctx->pc = 0x2e3e10u;
}
