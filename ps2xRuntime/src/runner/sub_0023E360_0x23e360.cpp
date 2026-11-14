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

// Function: sub_0023E360
// Address: 0x23e360 - 0x23e3b0
void sub_0023E360_0x23e360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E360_0x23e360");
#endif

    switch (ctx->pc) {
        case 0x23e390u: goto label_23e390;
        default: break;
    }

    ctx->pc = 0x23e360u;

    // 0x23e360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23e360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23e364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23e368: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23e368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23e36c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e370: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E370u;
    {
        const bool branch_taken_0x23e370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e370) {
            ctx->pc = 0x23E394u;
            goto label_23e394;
        }
    }
    ctx->pc = 0x23E378u;
    // 0x23e378: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23e378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e37c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E37Cu;
    {
        const bool branch_taken_0x23e37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e37c) {
            ctx->pc = 0x23E394u;
            goto label_23e394;
        }
    }
    ctx->pc = 0x23E384u;
    // 0x23e384: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23e384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23e388: 0xc119c5c  jal         func_467170
    ctx->pc = 0x23E388u;
    SET_GPR_U32(ctx, 31, 0x23E390u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x23E388u, 0x23E390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E390u;
label_23e390:
    // 0x23e390: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x23e390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_23e394:
    // 0x23e394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e398: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23e398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23e39c: 0x3e00008  jr          $ra
    ctx->pc = 0x23E39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E3A4u;
    // 0x23e3a4: 0x0  nop
    ctx->pc = 0x23e3a4u;
    // NOP
    // 0x23e3a8: 0x0  nop
    ctx->pc = 0x23e3a8u;
    // NOP
    // 0x23e3ac: 0x0  nop
    ctx->pc = 0x23e3acu;
    // NOP
    ctx->pc = 0x23e3b0u;
}
