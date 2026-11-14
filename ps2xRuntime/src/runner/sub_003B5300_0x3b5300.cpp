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

// Function: sub_003B5300
// Address: 0x3b5300 - 0x3b5340
void sub_003B5300_0x3b5300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5300_0x3b5300");
#endif

    switch (ctx->pc) {
        case 0x3b5314u: goto label_3b5314;
        default: break;
    }

    ctx->pc = 0x3b5300u;

    // 0x3b5300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b5300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b5304: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b5304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b5308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b5308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b530c: 0xc0ec604  jal         func_3B1810
    ctx->pc = 0x3B530Cu;
    SET_GPR_U32(ctx, 31, 0x3B5314u);
    ctx->pc = 0x3B5310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B530Cu;
    // 0x3b5310: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1810u, 0x3B530Cu, 0x3B5314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5314u;
label_3b5314:
    // 0x3b5314: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3b5314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b5318: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x3b5318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3b531c: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x3b531cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x3b5320: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3b5320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3b5324: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b5324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5328: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3b5328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x3b532c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b532cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b5330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b5330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b5334: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5334u;
        // 0x3b5338: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B533Cu;
    // 0x3b533c: 0x0  nop
    ctx->pc = 0x3b533cu;
    // NOP
    ctx->pc = 0x3b5340u;
}
