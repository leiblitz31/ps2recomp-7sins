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

// Function: sub_00123BE0
// Address: 0x123be0 - 0x123cb0
void sub_00123BE0_0x123be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123BE0_0x123be0");
#endif

    switch (ctx->pc) {
        case 0x123c40u: goto label_123c40;
        case 0x123c78u: goto label_123c78;
        default: break;
    }

    ctx->pc = 0x123be0u;

    // 0x123be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123be4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x123be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x123be8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x123be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x123bec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x123becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123bf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x123bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x123bf4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x123bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123bf8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x123bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x123bfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x123bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123c00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x123c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x123c04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x123c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123c08: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x123c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x123c0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x123c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123c10: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x123c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x123c14: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x123c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123c18: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x123c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x123c1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x123c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123c20: 0x9043000c  lbu         $v1, 0xC($v0)
    ctx->pc = 0x123c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x123c24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x123c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123c28: 0xa043000c  sb          $v1, 0xC($v0)
    ctx->pc = 0x123c28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x123c2c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x123c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123c30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x123c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123c34: 0x2466000d  addiu       $a2, $v1, 0xD
    ctx->pc = 0x123c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 13));
    // 0x123c38: 0x2445000d  addiu       $a1, $v0, 0xD
    ctx->pc = 0x123c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
    // 0x123c3c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x123c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_123c40:
    // 0x123c40: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x123c40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x123c44: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x123c44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x123c48: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x123c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x123c4c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x123c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x123c50: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x123c50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x123c54: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x123c54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x123c58: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x123c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x123c5c: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x123C5Cu;
    {
        const bool branch_taken_0x123c5c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x123c5c) {
            ctx->pc = 0x123C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123c40;
        }
    }
    ctx->pc = 0x123C64u;
    // 0x123c64: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x123c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123c68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x123c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123c6c: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x123c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x123c70: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x123c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x123c74: 0x240300bd  addiu       $v1, $zero, 0xBD
    ctx->pc = 0x123c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_123c78:
    // 0x123c78: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x123c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x123c7c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x123c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x123c80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x123c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x123c84: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x123c84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x123c88: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x123c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x123c8c: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x123C8Cu;
    {
        const bool branch_taken_0x123c8c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x123c8c) {
            ctx->pc = 0x123C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123c78;
        }
    }
    ctx->pc = 0x123C94u;
    // 0x123c94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x123c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123c98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x123c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x123c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x123C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123CA4u;
    // 0x123ca4: 0x0  nop
    ctx->pc = 0x123ca4u;
    // NOP
    // 0x123ca8: 0x0  nop
    ctx->pc = 0x123ca8u;
    // NOP
    // 0x123cac: 0x0  nop
    ctx->pc = 0x123cacu;
    // NOP
    ctx->pc = 0x123cb0u;
}
