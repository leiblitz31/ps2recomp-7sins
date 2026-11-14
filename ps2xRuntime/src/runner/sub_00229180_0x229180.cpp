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

// Function: sub_00229180
// Address: 0x229180 - 0x229200
void sub_00229180_0x229180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229180_0x229180");
#endif

    switch (ctx->pc) {
        case 0x2291a8u: goto label_2291a8;
        case 0x2291b8u: goto label_2291b8;
        default: break;
    }

    ctx->pc = 0x229180u;

    // 0x229180: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x229180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x229184: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x229184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x229188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x229188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22918c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22918cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x229190: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x229190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x229194: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x229194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x229198: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x229198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x22919c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x22919cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2291a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2291A0u;
    {
        const bool branch_taken_0x2291a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2291a0) {
            ctx->pc = 0x2291CCu;
            goto label_2291cc;
        }
    }
    ctx->pc = 0x2291A8u;
label_2291a8:
    // 0x2291a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2291a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2291ac: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2291acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2291b0: 0xc08a490  jal         func_229240
    ctx->pc = 0x2291B0u;
    SET_GPR_U32(ctx, 31, 0x2291B8u);
    ctx->pc = 0x229240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229240u, 0x2291B0u, 0x2291B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2291B8u;
label_2291b8:
    // 0x2291b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2291b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2291bc: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x2291bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x2291c0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2291c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2291c4: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x2291c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x2291c8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2291c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2291cc:
    // 0x2291cc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2291ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2291d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2291d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2291d4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2291D4u;
    {
        const bool branch_taken_0x2291d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2291d4) {
            ctx->pc = 0x2291A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2291a8;
        }
    }
    ctx->pc = 0x2291DCu;
    // 0x2291dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2291dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2291e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2291e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2291e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2291e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2291e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2291e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2291ec: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2291ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2291f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2291F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2291F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2291F8u;
    // 0x2291f8: 0x0  nop
    ctx->pc = 0x2291f8u;
    // NOP
    // 0x2291fc: 0x0  nop
    ctx->pc = 0x2291fcu;
    // NOP
    ctx->pc = 0x229200u;
}
