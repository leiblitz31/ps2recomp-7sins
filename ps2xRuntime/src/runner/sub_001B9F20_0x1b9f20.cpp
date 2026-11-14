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

// Function: sub_001B9F20
// Address: 0x1b9f20 - 0x1ba000
void sub_001B9F20_0x1b9f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9F20_0x1b9f20");
#endif

    switch (ctx->pc) {
        case 0x1b9fc0u: goto label_1b9fc0;
        default: break;
    }

    ctx->pc = 0x1b9f20u;

    // 0x1b9f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b9f24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b9f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b9f28: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1b9f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1b9f2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9f30: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b9f30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9f34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9f38: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1b9f38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b9f3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9f40: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x1b9f40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1b9f44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9f48: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1b9f48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b9f4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9f50: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1b9f50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1b9f54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9f58: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1b9f58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b9f5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9f60: 0x80430003  lb          $v1, 0x3($v0)
    ctx->pc = 0x1b9f60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1b9f64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9f68: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1b9f68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b9f6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9f70: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x1b9f70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b9f74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9f78: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x1b9f78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b9f7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9f80: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x1b9f80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1b9f84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9f88: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x1b9f88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b9f8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9f90: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b9f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b9f94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9f98: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1b9f98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1b9f9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9fa0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1b9fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b9fa4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9fa8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1b9fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1b9fac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1b9facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9fb0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9fb4: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x1b9fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b9fb8: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x1b9fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b9fbc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1b9fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1b9fc0:
    // 0x1b9fc0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1b9fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b9fc4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1b9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1b9fc8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1b9fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1b9fcc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1b9fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1b9fd0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1b9fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1b9fd4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1b9fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1b9fd8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1b9fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1b9fdc: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B9FDCu;
    {
        const bool branch_taken_0x1b9fdc = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1b9fdc) {
            ctx->pc = 0x1B9FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9fc0;
        }
    }
    ctx->pc = 0x1B9FE4u;
    // 0x1b9fe4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9fe8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b9fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b9fec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9FF4u;
    // 0x1b9ff4: 0x0  nop
    ctx->pc = 0x1b9ff4u;
    // NOP
    // 0x1b9ff8: 0x0  nop
    ctx->pc = 0x1b9ff8u;
    // NOP
    // 0x1b9ffc: 0x0  nop
    ctx->pc = 0x1b9ffcu;
    // NOP
    ctx->pc = 0x1ba000u;
}
