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

// Function: sub_00462D20
// Address: 0x462d20 - 0x462e20
void sub_00462D20_0x462d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00462D20_0x462d20");
#endif

    switch (ctx->pc) {
        case 0x462de8u: goto label_462de8;
        default: break;
    }

    ctx->pc = 0x462d20u;

    // 0x462d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x462d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x462d24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x462d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x462d28: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x462d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x462d2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x462d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x462d30: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x462d30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x462d34: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x462d34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x462d38: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x462d38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x462d3c: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x462d3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x462d40: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x462d40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x462d44: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x462d44u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x462d48: 0xa4c40002  sh          $a0, 0x2($a2)
    ctx->pc = 0x462d48u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x462d4c: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x462d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x462d50: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x462d50u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x462d54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x462d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x462d58: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x462d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x462d5c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x462d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x462d60: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x462d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x462d64: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x462d64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x462d68: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x462d68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x462d6c: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x462d6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x462d70: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x462d70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x462d74: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x462d74u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x462d78: 0xa4c40002  sh          $a0, 0x2($a2)
    ctx->pc = 0x462d78u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x462d7c: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x462d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x462d80: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x462d80u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x462d84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x462d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x462d88: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x462d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x462d8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x462d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x462d90: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x462d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x462d94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x462d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x462d98: 0x94430014  lhu         $v1, 0x14($v0)
    ctx->pc = 0x462d98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x462d9c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x462d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x462da0: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x462da0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x462da4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x462da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x462da8: 0x94430016  lhu         $v1, 0x16($v0)
    ctx->pc = 0x462da8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x462dac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x462dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x462db0: 0xa4430016  sh          $v1, 0x16($v0)
    ctx->pc = 0x462db0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x462db4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x462db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x462db8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x462db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x462dbc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x462dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x462dc0: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x462dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x462dc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x462dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x462dc8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x462dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x462dcc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x462dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x462dd0: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x462dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x462dd4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x462dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x462dd8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x462dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x462ddc: 0x24660020  addiu       $a2, $v1, 0x20
    ctx->pc = 0x462ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x462de0: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x462de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x462de4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x462de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_462de8:
    // 0x462de8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x462de8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x462dec: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x462decu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x462df0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x462df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x462df4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x462df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x462df8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x462df8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x462dfc: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x462dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x462e00: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x462e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x462e04: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x462E04u;
    {
        const bool branch_taken_0x462e04 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x462e04) {
            ctx->pc = 0x462DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_462de8;
        }
    }
    ctx->pc = 0x462E0Cu;
    // 0x462e0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x462e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x462e10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x462e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x462e14: 0x3e00008  jr          $ra
    ctx->pc = 0x462E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x462E1Cu;
    // 0x462e1c: 0x0  nop
    ctx->pc = 0x462e1cu;
    // NOP
    ctx->pc = 0x462e20u;
}
