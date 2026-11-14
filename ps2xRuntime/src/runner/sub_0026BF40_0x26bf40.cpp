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

// Function: sub_0026BF40
// Address: 0x26bf40 - 0x26bfc0
void sub_0026BF40_0x26bf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BF40_0x26bf40");
#endif

    switch (ctx->pc) {
        case 0x26bf68u: goto label_26bf68;
        case 0x26bf78u: goto label_26bf78;
        default: break;
    }

    ctx->pc = 0x26bf40u;

    // 0x26bf40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26bf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26bf44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26bf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26bf48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26bf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26bf4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26bf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26bf50: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x26bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x26bf54: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x26bf54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x26bf58: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x26bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x26bf5c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x26bf5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26bf60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26BF60u;
    {
        const bool branch_taken_0x26bf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bf60) {
            ctx->pc = 0x26BF8Cu;
            goto label_26bf8c;
        }
    }
    ctx->pc = 0x26BF68u;
label_26bf68:
    // 0x26bf68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26bf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf6c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x26bf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26bf70: 0xc09b010  jal         func_26C040
    ctx->pc = 0x26BF70u;
    SET_GPR_U32(ctx, 31, 0x26BF78u);
    ctx->pc = 0x26C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C040u, 0x26BF70u, 0x26BF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF78u;
label_26bf78:
    // 0x26bf78: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26bf7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26bf80: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x26bf80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x26bf84: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x26bf84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x26bf88: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x26bf88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26bf8c:
    // 0x26bf8c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26bf90: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x26BF90u;
    {
        const bool branch_taken_0x26bf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bf90) {
            ctx->pc = 0x26BF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26bf68;
        }
    }
    ctx->pc = 0x26BF98u;
    // 0x26bf98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26bf98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26bf9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bfa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26bfa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bfa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26bfa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bfa8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x26bfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26bfac: 0x3e00008  jr          $ra
    ctx->pc = 0x26BFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BFB4u;
    // 0x26bfb4: 0x0  nop
    ctx->pc = 0x26bfb4u;
    // NOP
    // 0x26bfb8: 0x0  nop
    ctx->pc = 0x26bfb8u;
    // NOP
    // 0x26bfbc: 0x0  nop
    ctx->pc = 0x26bfbcu;
    // NOP
    ctx->pc = 0x26bfc0u;
}
