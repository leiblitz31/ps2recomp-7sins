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

// Function: sub_00293E10
// Address: 0x293e10 - 0x293e80
void sub_00293E10_0x293e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293E10_0x293e10");
#endif

    switch (ctx->pc) {
        case 0x293e34u: goto label_293e34;
        default: break;
    }

    ctx->pc = 0x293e10u;

    // 0x293e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x293e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x293e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x293e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x293e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x293e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x293e1c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x293e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x293e20: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x293e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x293e24: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x293e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x293e28: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x293e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293e2c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x293E2Cu;
    SET_GPR_U32(ctx, 31, 0x293E34u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x293E2Cu, 0x293E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E34u;
label_293e34:
    // 0x293e34: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x293e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x293e38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x293E38u;
    {
        const bool branch_taken_0x293e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x293e38) {
            ctx->pc = 0x293E68u;
            goto label_293e68;
        }
    }
    ctx->pc = 0x293E40u;
    // 0x293e40: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x293e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x293e44: 0x8fa7002c  lw          $a3, 0x2C($sp)
    ctx->pc = 0x293e44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x293e48: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x293e48u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x293e4c: 0x90650001  lbu         $a1, 0x1($v1)
    ctx->pc = 0x293e4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x293e50: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x293e50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x293e54: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x293e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x293e58: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x293e58u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x293e5c: 0xa0e50001  sb          $a1, 0x1($a3)
    ctx->pc = 0x293e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x293e60: 0xa0e40002  sb          $a0, 0x2($a3)
    ctx->pc = 0x293e60u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x293e64: 0xa0e30003  sb          $v1, 0x3($a3)
    ctx->pc = 0x293e64u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
label_293e68:
    // 0x293e68: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x293e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x293e6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x293e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293e70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x293e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293e74: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x293e74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x293e78: 0x3e00008  jr          $ra
    ctx->pc = 0x293E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293E80u;
}
