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

// Function: sub_00109160
// Address: 0x109160 - 0x1091b0
void sub_00109160_0x109160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109160_0x109160");
#endif

    switch (ctx->pc) {
        case 0x109190u: goto label_109190;
        default: break;
    }

    ctx->pc = 0x109160u;

    // 0x109160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x109160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x109164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x109164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x109168: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x109168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10916c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10916cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109170: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x109170u;
    {
        const bool branch_taken_0x109170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x109170) {
            ctx->pc = 0x109194u;
            goto label_109194;
        }
    }
    ctx->pc = 0x109178u;
    // 0x109178: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x109178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10917c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10917Cu;
    {
        const bool branch_taken_0x10917c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10917c) {
            ctx->pc = 0x109194u;
            goto label_109194;
        }
    }
    ctx->pc = 0x109184u;
    // 0x109184: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x109184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109188: 0xc119c5c  jal         func_467170
    ctx->pc = 0x109188u;
    SET_GPR_U32(ctx, 31, 0x109190u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x109188u, 0x109190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109190u;
label_109190:
    // 0x109190: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x109190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_109194:
    // 0x109194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x109194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109198: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x109198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10919c: 0x3e00008  jr          $ra
    ctx->pc = 0x10919Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10919Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1091A4u;
    // 0x1091a4: 0x0  nop
    ctx->pc = 0x1091a4u;
    // NOP
    // 0x1091a8: 0x0  nop
    ctx->pc = 0x1091a8u;
    // NOP
    // 0x1091ac: 0x0  nop
    ctx->pc = 0x1091acu;
    // NOP
    ctx->pc = 0x1091b0u;
}
