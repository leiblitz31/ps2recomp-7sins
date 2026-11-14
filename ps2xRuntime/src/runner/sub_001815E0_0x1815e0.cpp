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

// Function: sub_001815E0
// Address: 0x1815e0 - 0x181640
void sub_001815E0_0x1815e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001815E0_0x1815e0");
#endif

    switch (ctx->pc) {
        case 0x1815fcu: goto label_1815fc;
        case 0x18160cu: goto label_18160c;
        default: break;
    }

    ctx->pc = 0x1815e0u;

    // 0x1815e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1815e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1815e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1815e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1815e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1815e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1815ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1815ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1815f0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1815f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1815f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1815F4u;
    {
        const bool branch_taken_0x1815f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1815f4) {
            ctx->pc = 0x181618u;
            goto label_181618;
        }
    }
    ctx->pc = 0x1815FCu;
label_1815fc:
    // 0x1815fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1815fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181600: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x181600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181604: 0xc05f268  jal         func_17C9A0
    ctx->pc = 0x181604u;
    SET_GPR_U32(ctx, 31, 0x18160Cu);
    ctx->pc = 0x17C9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C9A0u, 0x181604u, 0x18160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18160Cu;
label_18160c:
    // 0x18160c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18160cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181610: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x181610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x181614: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x181614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_181618:
    // 0x181618: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x181618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18161c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x18161cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181620: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x181620u;
    {
        const bool branch_taken_0x181620 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x181620) {
            ctx->pc = 0x1815FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1815fc;
        }
    }
    ctx->pc = 0x181628u;
    // 0x181628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18162c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x18162cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x181630: 0x3e00008  jr          $ra
    ctx->pc = 0x181630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181638u;
    // 0x181638: 0x0  nop
    ctx->pc = 0x181638u;
    // NOP
    // 0x18163c: 0x0  nop
    ctx->pc = 0x18163cu;
    // NOP
    ctx->pc = 0x181640u;
}
