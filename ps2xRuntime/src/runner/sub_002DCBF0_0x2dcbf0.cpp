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

// Function: sub_002DCBF0
// Address: 0x2dcbf0 - 0x2dccc0
void sub_002DCBF0_0x2dcbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCBF0_0x2dcbf0");
#endif

    switch (ctx->pc) {
        case 0x2dcc0cu: goto label_2dcc0c;
        case 0x2dcc44u: goto label_2dcc44;
        case 0x2dcc90u: goto label_2dcc90;
        default: break;
    }

    ctx->pc = 0x2dcbf0u;

    // 0x2dcbf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dcbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dcbf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dcbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dcbf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dcbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dcbfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2dcbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2dcc00: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2dcc00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dcc04: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2dcc04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcc08: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2dcc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2dcc0c:
    // 0x2dcc0c: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2dcc0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2dcc10: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x2dcc10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2dcc14: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2dcc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2dcc18: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2dcc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2dcc1c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2dcc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2dcc20: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x2dcc20u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dcc24: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2dcc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2dcc28: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DCC28u;
    {
        const bool branch_taken_0x2dcc28 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x2dcc28) {
            ctx->pc = 0x2DCC0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcc0c;
        }
    }
    ctx->pc = 0x2DCC30u;
    // 0x2dcc30: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2dcc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dcc34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dcc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcc38: 0x24660020  addiu       $a2, $v1, 0x20
    ctx->pc = 0x2dcc38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2dcc3c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x2dcc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2dcc40: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2dcc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2dcc44:
    // 0x2dcc44: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2dcc44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2dcc48: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x2dcc48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2dcc4c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2dcc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2dcc50: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2dcc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2dcc54: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2dcc54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2dcc58: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x2dcc58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dcc5c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2dcc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2dcc60: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DCC60u;
    {
        const bool branch_taken_0x2dcc60 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x2dcc60) {
            ctx->pc = 0x2DCC44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcc44;
        }
    }
    ctx->pc = 0x2DCC68u;
    // 0x2dcc68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2dcc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dcc6c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2dcc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2dcc70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dcc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcc74: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x2dcc74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x2dcc78: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2dcc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcc7c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2dcc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dcc80: 0x24640044  addiu       $a0, $v1, 0x44
    ctx->pc = 0x2dcc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 68));
    // 0x2dcc84: 0x24450044  addiu       $a1, $v0, 0x44
    ctx->pc = 0x2dcc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x2dcc88: 0xc0469d4  jal         func_11A750
    ctx->pc = 0x2DCC88u;
    SET_GPR_U32(ctx, 31, 0x2DCC90u);
    ctx->pc = 0x11A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A750u, 0x2DCC88u, 0x2DCC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCC90u;
label_2dcc90:
    // 0x2dcc90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2dcc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dcc94: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x2dcc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2dcc98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dcc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcc9c: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x2dcc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x2dcca0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dcca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dcca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcca8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2dcca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dccac: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCCB4u;
    // 0x2dccb4: 0x0  nop
    ctx->pc = 0x2dccb4u;
    // NOP
    // 0x2dccb8: 0x0  nop
    ctx->pc = 0x2dccb8u;
    // NOP
    // 0x2dccbc: 0x0  nop
    ctx->pc = 0x2dccbcu;
    // NOP
    ctx->pc = 0x2dccc0u;
}
