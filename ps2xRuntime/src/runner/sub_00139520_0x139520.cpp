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

// Function: sub_00139520
// Address: 0x139520 - 0x139560
void sub_00139520_0x139520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139520_0x139520");
#endif

    switch (ctx->pc) {
        case 0x139544u: goto label_139544;
        default: break;
    }

    ctx->pc = 0x139520u;

    // 0x139520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x139520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x139524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139528: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x139528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x13952c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13952cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139530: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x139530u;
    {
        const bool branch_taken_0x139530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139530) {
            ctx->pc = 0x139544u;
            goto label_139544;
        }
    }
    ctx->pc = 0x139538u;
    // 0x139538: 0x8f84ba74  lw          $a0, -0x458C($gp)
    ctx->pc = 0x139538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x13953c: 0xc04e388  jal         func_138E20
    ctx->pc = 0x13953Cu;
    SET_GPR_U32(ctx, 31, 0x139544u);
    ctx->pc = 0x138E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138E20u, 0x13953Cu, 0x139544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139544u;
label_139544:
    // 0x139544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13954c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13954cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x139550: 0x3e00008  jr          $ra
    ctx->pc = 0x139550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139558u;
    // 0x139558: 0x0  nop
    ctx->pc = 0x139558u;
    // NOP
    // 0x13955c: 0x0  nop
    ctx->pc = 0x13955cu;
    // NOP
    ctx->pc = 0x139560u;
}
