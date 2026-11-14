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

// Function: sub_00467CE0
// Address: 0x467ce0 - 0x467d70
void sub_00467CE0_0x467ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467CE0_0x467ce0");
#endif

    switch (ctx->pc) {
        case 0x467cf8u: goto label_467cf8;
        default: break;
    }

    ctx->pc = 0x467ce0u;

    // 0x467ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x467ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x467ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x467ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x467ce8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x467ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x467cec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x467cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467cf0: 0xc11a218  jal         func_468860
    ctx->pc = 0x467CF0u;
    SET_GPR_U32(ctx, 31, 0x467CF8u);
    ctx->pc = 0x468860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x468860u, 0x467CF0u, 0x467CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467CF8u;
label_467cf8:
    // 0x467cf8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x467cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x467cfc: 0x24636be0  addiu       $v1, $v1, 0x6BE0
    ctx->pc = 0x467cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27616));
    // 0x467d00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467d04: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x467d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x467d08: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x467d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x467d0c: 0x24636bf8  addiu       $v1, $v1, 0x6BF8
    ctx->pc = 0x467d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27640));
    // 0x467d10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467d14: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x467d14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x467d18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467d1c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x467d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x467d20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467d24: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x467d24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x467d28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x467d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x467d2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467d30: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x467d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x467d34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x467d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x467d38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467d3c: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x467d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x467d40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467d44: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x467d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x467d48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467d4c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x467d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x467d50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x467d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x467d58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x467d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x467d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x467D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x467D64u;
    // 0x467d64: 0x0  nop
    ctx->pc = 0x467d64u;
    // NOP
    // 0x467d68: 0x0  nop
    ctx->pc = 0x467d68u;
    // NOP
    // 0x467d6c: 0x0  nop
    ctx->pc = 0x467d6cu;
    // NOP
    ctx->pc = 0x467d70u;
}
