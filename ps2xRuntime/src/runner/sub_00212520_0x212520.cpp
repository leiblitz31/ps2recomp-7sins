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

// Function: sub_00212520
// Address: 0x212520 - 0x2125a0
void sub_00212520_0x212520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212520_0x212520");
#endif

    switch (ctx->pc) {
        case 0x212548u: goto label_212548;
        case 0x212558u: goto label_212558;
        default: break;
    }

    ctx->pc = 0x212520u;

    // 0x212520: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x212520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x212524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x212524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x212528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x212528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21252c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21252cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x212530: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x212530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x212534: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x212534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x212538: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x212538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x21253c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x21253cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212540: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x212540u;
    {
        const bool branch_taken_0x212540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212540) {
            ctx->pc = 0x21256Cu;
            goto label_21256c;
        }
    }
    ctx->pc = 0x212548u;
label_212548:
    // 0x212548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21254c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x21254cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x212550: 0xc06011c  jal         func_180470
    ctx->pc = 0x212550u;
    SET_GPR_U32(ctx, 31, 0x212558u);
    ctx->pc = 0x180470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180470u, 0x212550u, 0x212558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212558u;
label_212558:
    // 0x212558: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x212558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21255c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21255cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x212560: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x212560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x212564: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x212564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x212568: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x212568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21256c:
    // 0x21256c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x21256cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x212570: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x212570u;
    {
        const bool branch_taken_0x212570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212570) {
            ctx->pc = 0x212548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212548;
        }
    }
    ctx->pc = 0x212578u;
    // 0x212578: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x212578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21257c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21257cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x212580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x212584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212588: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x212588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21258c: 0x3e00008  jr          $ra
    ctx->pc = 0x21258Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21258Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212594u;
    // 0x212594: 0x0  nop
    ctx->pc = 0x212594u;
    // NOP
    // 0x212598: 0x0  nop
    ctx->pc = 0x212598u;
    // NOP
    // 0x21259c: 0x0  nop
    ctx->pc = 0x21259cu;
    // NOP
    ctx->pc = 0x2125a0u;
}
