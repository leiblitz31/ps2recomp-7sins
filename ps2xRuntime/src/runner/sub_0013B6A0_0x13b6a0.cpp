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

// Function: sub_0013B6A0
// Address: 0x13b6a0 - 0x13b720
void sub_0013B6A0_0x13b6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B6A0_0x13b6a0");
#endif

    switch (ctx->pc) {
        case 0x13b6c4u: goto label_13b6c4;
        case 0x13b6d0u: goto label_13b6d0;
        default: break;
    }

    ctx->pc = 0x13b6a0u;

    // 0x13b6a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13b6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13b6a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13b6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13b6a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b6ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b6b0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x13b6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x13b6b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13b6b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b6b8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x13b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b6bc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x13B6BCu;
    SET_GPR_U32(ctx, 31, 0x13B6C4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x13B6BCu, 0x13B6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B6C4u;
label_13b6c4:
    // 0x13b6c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13b6c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b6c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13B6C8u;
    {
        const bool branch_taken_0x13b6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b6c8) {
            ctx->pc = 0x13B6ECu;
            goto label_13b6ec;
        }
    }
    ctx->pc = 0x13B6D0u;
label_13b6d0:
    // 0x13b6d0: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x13b6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x13b6d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13b6d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b6d8: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x13b6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13b6dc: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x13b6dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b6e0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x13b6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x13b6e4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x13b6e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x13b6e8: 0x628826  xor         $s1, $v1, $v0
    ctx->pc = 0x13b6e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_13b6ec:
    // 0x13b6ec: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x13b6ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13b6f0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13B6F0u;
    {
        const bool branch_taken_0x13b6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b6f0) {
            ctx->pc = 0x13B6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b6d0;
        }
    }
    ctx->pc = 0x13B6F8u;
    // 0x13b6f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13b6f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b6fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13b6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b700: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b708: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13b708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13b70c: 0x3e00008  jr          $ra
    ctx->pc = 0x13B70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B714u;
    // 0x13b714: 0x0  nop
    ctx->pc = 0x13b714u;
    // NOP
    // 0x13b718: 0x0  nop
    ctx->pc = 0x13b718u;
    // NOP
    // 0x13b71c: 0x0  nop
    ctx->pc = 0x13b71cu;
    // NOP
    ctx->pc = 0x13b720u;
}
