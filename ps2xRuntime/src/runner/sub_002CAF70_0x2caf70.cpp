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

// Function: sub_002CAF70
// Address: 0x2caf70 - 0x2cafe0
void sub_002CAF70_0x2caf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAF70_0x2caf70");
#endif

    switch (ctx->pc) {
        case 0x2caf88u: goto label_2caf88;
        case 0x2cafa8u: goto label_2cafa8;
        case 0x2cafb8u: goto label_2cafb8;
        default: break;
    }

    ctx->pc = 0x2caf70u;

    // 0x2caf70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2caf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2caf74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2caf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2caf78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2caf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2caf7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2caf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caf80: 0xc04f5e8  jal         func_13D7A0
    ctx->pc = 0x2CAF80u;
    SET_GPR_U32(ctx, 31, 0x2CAF88u);
    ctx->pc = 0x13D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D7A0u, 0x2CAF80u, 0x2CAF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF88u;
label_2caf88:
    // 0x2caf88: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2caf88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2caf8c: 0x246367d0  addiu       $v1, $v1, 0x67D0
    ctx->pc = 0x2caf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26576));
    // 0x2caf90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2caf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caf94: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2caf94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2caf98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2caf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caf9c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2caf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2cafa0: 0xc0b2c80  jal         func_2CB200
    ctx->pc = 0x2CAFA0u;
    SET_GPR_U32(ctx, 31, 0x2CAFA8u);
    ctx->pc = 0x2CB200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB200u, 0x2CAFA0u, 0x2CAFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAFA8u;
label_2cafa8:
    // 0x2cafa8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cafac: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x2cafacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2cafb0: 0xc0452e0  jal         func_114B80
    ctx->pc = 0x2CAFB0u;
    SET_GPR_U32(ctx, 31, 0x2CAFB8u);
    ctx->pc = 0x114B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B80u, 0x2CAFB0u, 0x2CAFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAFB8u;
label_2cafb8:
    // 0x2cafb8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cafb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cafbc: 0xaf82bcc0  sw          $v0, -0x4340($gp)
    ctx->pc = 0x2cafbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950080), GPR_U32(ctx, 2));
    // 0x2cafc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cafc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cafc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cafc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cafc8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2cafc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cafcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAFD4u;
    // 0x2cafd4: 0x0  nop
    ctx->pc = 0x2cafd4u;
    // NOP
    // 0x2cafd8: 0x0  nop
    ctx->pc = 0x2cafd8u;
    // NOP
    // 0x2cafdc: 0x0  nop
    ctx->pc = 0x2cafdcu;
    // NOP
    ctx->pc = 0x2cafe0u;
}
