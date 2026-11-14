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

// Function: sub_00179E10
// Address: 0x179e10 - 0x179e90
void sub_00179E10_0x179e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179E10_0x179e10");
#endif

    switch (ctx->pc) {
        case 0x179e30u: goto label_179e30;
        case 0x179e44u: goto label_179e44;
        default: break;
    }

    ctx->pc = 0x179e10u;

    // 0x179e10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x179e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x179e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x179e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x179e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x179e1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x179e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x179e20: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x179e20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x179e24: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x179e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179e28: 0xc042514  jal         func_109450
    ctx->pc = 0x179E28u;
    SET_GPR_U32(ctx, 31, 0x179E30u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x179E28u, 0x179E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E30u;
label_179e30:
    // 0x179e30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x179e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179e34: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x179e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x179e38: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x179e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179e3c: 0xc119354  jal         func_464D50
    ctx->pc = 0x179E3Cu;
    SET_GPR_U32(ctx, 31, 0x179E44u);
    ctx->pc = 0x464D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464D50u, 0x179E3Cu, 0x179E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E44u;
label_179e44:
    // 0x179e44: 0x83a40030  lb          $a0, 0x30($sp)
    ctx->pc = 0x179e44u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179e48: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x179e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179e4c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x179e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x179e50: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x179e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x179e54: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x179e54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x179e58: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x179e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179e5c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x179e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x179e60: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x179e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x179e64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x179e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x179e68: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x179e68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x179e6c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x179e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179e70: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x179e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x179e74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x179e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x179e78: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x179e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x179e7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x179e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179e80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179e84: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x179e84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x179e88: 0x3e00008  jr          $ra
    ctx->pc = 0x179E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179E90u;
}
