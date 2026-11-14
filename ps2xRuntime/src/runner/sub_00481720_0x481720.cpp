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

// Function: sub_00481720
// Address: 0x481720 - 0x481770
void sub_00481720_0x481720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481720_0x481720");
#endif

    switch (ctx->pc) {
        case 0x481758u: goto label_481758;
        default: break;
    }

    ctx->pc = 0x481720u;

    // 0x481720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x481720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x481724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x481724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x481728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x481728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48172c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48172cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x481730: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x481730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481734: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x481734u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x481738: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x481738u;
    {
        const bool branch_taken_0x481738 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x481738) {
            ctx->pc = 0x481758u;
            goto label_481758;
        }
    }
    ctx->pc = 0x481740u;
    // 0x481740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x481740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481744: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x481744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x481748: 0x24a51770  addiu       $a1, $a1, 0x1770
    ctx->pc = 0x481748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6000));
    // 0x48174c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48174cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481750: 0xc0e3396  jal         func_38CE58
    ctx->pc = 0x481750u;
    SET_GPR_U32(ctx, 31, 0x481758u);
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x481750u, 0x481758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481758u;
label_481758:
    // 0x481758: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x481758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48175c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48175cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x481760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481764: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x481764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x481768: 0x3e00008  jr          $ra
    ctx->pc = 0x481768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481770u;
}
