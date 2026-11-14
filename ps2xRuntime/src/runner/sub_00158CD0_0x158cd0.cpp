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

// Function: sub_00158CD0
// Address: 0x158cd0 - 0x158d60
void sub_00158CD0_0x158cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158CD0_0x158cd0");
#endif

    switch (ctx->pc) {
        case 0x158d08u: goto label_158d08;
        case 0x158d30u: goto label_158d30;
        default: break;
    }

    ctx->pc = 0x158cd0u;

    // 0x158cd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x158cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x158cd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x158cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x158cd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x158cdc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x158cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x158ce0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x158ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x158ce4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x158ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x158ce8: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x158ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x158cec: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x158cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x158cf0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x158cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158cf4: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x158cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x158cf8: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x158cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x158cfc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x158cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158d00: 0xc11939c  jal         func_464E70
    ctx->pc = 0x158D00u;
    SET_GPR_U32(ctx, 31, 0x158D08u);
    ctx->pc = 0x464E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464E70u, 0x158D00u, 0x158D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158D08u;
label_158d08:
    // 0x158d08: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x158d08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158d0c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x158d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158d10: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x158d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158d14: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x158d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x158d18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x158d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158d1c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x158d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158d20: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x158d20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x158d24: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x158d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x158d28: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x158D28u;
    SET_GPR_U32(ctx, 31, 0x158D30u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x158D28u, 0x158D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158D30u;
label_158d30:
    // 0x158d30: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x158d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158d34: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x158d34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x158d38: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x158d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158d3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x158d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x158d40: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x158d40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x158d44: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x158d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158d48: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x158d48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x158d4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x158d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158d50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158d54: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x158d54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x158d58: 0x3e00008  jr          $ra
    ctx->pc = 0x158D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158D60u;
}
