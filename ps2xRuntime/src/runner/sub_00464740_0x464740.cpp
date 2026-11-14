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

// Function: sub_00464740
// Address: 0x464740 - 0x4647b0
void sub_00464740_0x464740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464740_0x464740");
#endif

    switch (ctx->pc) {
        case 0x46475cu: goto label_46475c;
        default: break;
    }

    ctx->pc = 0x464740u;

    // 0x464740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x464740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x464744: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x464744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x464748: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x464748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46474c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46474cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x464750: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x464750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464754: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x464754u;
    {
        const bool branch_taken_0x464754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464754) {
            ctx->pc = 0x464774u;
            goto label_464774;
        }
    }
    ctx->pc = 0x46475Cu;
label_46475c:
    // 0x46475c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46475cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464760: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x464760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x464764: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x464764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x464768: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x464768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46476c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x46476cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x464770: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x464770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_464774:
    // 0x464774: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x464774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x464778: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x464778u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46477c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46477cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464780: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x464780u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x464784: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x464784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x464788: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x464788u;
    {
        const bool branch_taken_0x464788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x464788) {
            ctx->pc = 0x46475Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46475c;
        }
    }
    ctx->pc = 0x464790u;
    // 0x464790: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x464790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464794: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x464794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464798: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x464798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46479c: 0x3e00008  jr          $ra
    ctx->pc = 0x46479Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46479Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4647A4u;
    // 0x4647a4: 0x0  nop
    ctx->pc = 0x4647a4u;
    // NOP
    // 0x4647a8: 0x0  nop
    ctx->pc = 0x4647a8u;
    // NOP
    // 0x4647ac: 0x0  nop
    ctx->pc = 0x4647acu;
    // NOP
    ctx->pc = 0x4647b0u;
}
