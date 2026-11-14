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

// Function: sub_0015E840
// Address: 0x15e840 - 0x15e8c0
void sub_0015E840_0x15e840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E840_0x15e840");
#endif

    switch (ctx->pc) {
        case 0x15e868u: goto label_15e868;
        case 0x15e878u: goto label_15e878;
        default: break;
    }

    ctx->pc = 0x15e840u;

    // 0x15e840: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15e840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15e844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15e844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15e848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15e84c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15e850: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x15e850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x15e854: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x15e854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x15e858: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x15e858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x15e85c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x15e85cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e860: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15E860u;
    {
        const bool branch_taken_0x15e860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e860) {
            ctx->pc = 0x15E88Cu;
            goto label_15e88c;
        }
    }
    ctx->pc = 0x15E868u;
label_15e868:
    // 0x15e868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e86c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x15e86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e870: 0xc057a50  jal         func_15E940
    ctx->pc = 0x15E870u;
    SET_GPR_U32(ctx, 31, 0x15E878u);
    ctx->pc = 0x15E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E940u, 0x15E870u, 0x15E878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E878u;
label_15e878:
    // 0x15e878: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15e878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e87c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15e880: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x15e880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x15e884: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x15e884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x15e888: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x15e888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e88c:
    // 0x15e88c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e890: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x15E890u;
    {
        const bool branch_taken_0x15e890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e890) {
            ctx->pc = 0x15E868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e868;
        }
    }
    ctx->pc = 0x15E898u;
    // 0x15e898: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15e898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e89c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15e89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e8a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e8a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e8a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e8a8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x15e8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15e8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x15E8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E8B4u;
    // 0x15e8b4: 0x0  nop
    ctx->pc = 0x15e8b4u;
    // NOP
    // 0x15e8b8: 0x0  nop
    ctx->pc = 0x15e8b8u;
    // NOP
    // 0x15e8bc: 0x0  nop
    ctx->pc = 0x15e8bcu;
    // NOP
    ctx->pc = 0x15e8c0u;
}
