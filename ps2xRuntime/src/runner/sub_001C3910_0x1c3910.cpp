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

// Function: sub_001C3910
// Address: 0x1c3910 - 0x1c3960
void sub_001C3910_0x1c3910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3910_0x1c3910");
#endif

    switch (ctx->pc) {
        case 0x1c3940u: goto label_1c3940;
        default: break;
    }

    ctx->pc = 0x1c3910u;

    // 0x1c3910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c3910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c3914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c3918: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c3918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c391c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c391cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3920: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3920u;
    {
        const bool branch_taken_0x1c3920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3920) {
            ctx->pc = 0x1C3944u;
            goto label_1c3944;
        }
    }
    ctx->pc = 0x1C3928u;
    // 0x1c3928: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c3928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c392c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C392Cu;
    {
        const bool branch_taken_0x1c392c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c392c) {
            ctx->pc = 0x1C3944u;
            goto label_1c3944;
        }
    }
    ctx->pc = 0x1C3934u;
    // 0x1c3934: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c3934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3938: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1C3938u;
    SET_GPR_U32(ctx, 31, 0x1C3940u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1C3938u, 0x1C3940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3940u;
label_1c3940:
    // 0x1c3940: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1c3940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1c3944:
    // 0x1c3944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3948: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c3948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c394c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C394Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C394Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3954u;
    // 0x1c3954: 0x0  nop
    ctx->pc = 0x1c3954u;
    // NOP
    // 0x1c3958: 0x0  nop
    ctx->pc = 0x1c3958u;
    // NOP
    // 0x1c395c: 0x0  nop
    ctx->pc = 0x1c395cu;
    // NOP
    ctx->pc = 0x1c3960u;
}
