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

// Function: sub_00217320
// Address: 0x217320 - 0x2173a0
void sub_00217320_0x217320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217320_0x217320");
#endif

    switch (ctx->pc) {
        case 0x217348u: goto label_217348;
        case 0x217358u: goto label_217358;
        default: break;
    }

    ctx->pc = 0x217320u;

    // 0x217320: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x217320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x217324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x217324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x217328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x217328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21732c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21732cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x217330: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x217330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x217334: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x217334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x217338: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x217338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x21733c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x21733cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217340: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x217340u;
    {
        const bool branch_taken_0x217340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217340) {
            ctx->pc = 0x21736Cu;
            goto label_21736c;
        }
    }
    ctx->pc = 0x217348u;
label_217348:
    // 0x217348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21734c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x21734cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x217350: 0xc085ce8  jal         func_2173A0
    ctx->pc = 0x217350u;
    SET_GPR_U32(ctx, 31, 0x217358u);
    ctx->pc = 0x2173A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2173A0u, 0x217350u, 0x217358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217358u;
label_217358:
    // 0x217358: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x217358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21735c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21735cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x217360: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x217360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x217364: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x217364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x217368: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x217368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21736c:
    // 0x21736c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x21736cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217370: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x217370u;
    {
        const bool branch_taken_0x217370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217370) {
            ctx->pc = 0x217348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217348;
        }
    }
    ctx->pc = 0x217378u;
    // 0x217378: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x217378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21737c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21737cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x217380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x217384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217388: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x217388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21738c: 0x3e00008  jr          $ra
    ctx->pc = 0x21738Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21738Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217394u;
    // 0x217394: 0x0  nop
    ctx->pc = 0x217394u;
    // NOP
    // 0x217398: 0x0  nop
    ctx->pc = 0x217398u;
    // NOP
    // 0x21739c: 0x0  nop
    ctx->pc = 0x21739cu;
    // NOP
    ctx->pc = 0x2173a0u;
}
