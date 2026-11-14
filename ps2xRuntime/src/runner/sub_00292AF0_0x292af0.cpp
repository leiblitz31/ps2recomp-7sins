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

// Function: sub_00292AF0
// Address: 0x292af0 - 0x292b50
void sub_00292AF0_0x292af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292AF0_0x292af0");
#endif

    switch (ctx->pc) {
        case 0x292b14u: goto label_292b14;
        case 0x292b40u: goto label_292b40;
        default: break;
    }

    ctx->pc = 0x292af0u;

    // 0x292af0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x292af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x292af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x292af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x292af8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x292af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x292afc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x292afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x292b00: 0x27a3001c  addiu       $v1, $sp, 0x1C
    ctx->pc = 0x292b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x292b04: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x292b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x292b08: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x292B08u;
    {
        const bool branch_taken_0x292b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x292b08) {
            ctx->pc = 0x292B30u;
            goto label_292b30;
        }
    }
    ctx->pc = 0x292B10u;
    // 0x292b10: 0x603021  addu        $a2, $v1, $zero
    ctx->pc = 0x292b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_292b14:
    // 0x292b14: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x292b14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x292b18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x292b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x292b1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x292b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x292b20: 0x0  nop
    ctx->pc = 0x292b20u;
    // NOP
    // 0x292b24: 0x0  nop
    ctx->pc = 0x292b24u;
    // NOP
    // 0x292b28: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x292B28u;
    {
        const bool branch_taken_0x292b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292b28) {
            ctx->pc = 0x292B14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292b14;
        }
    }
    ctx->pc = 0x292B30u;
label_292b30:
    // 0x292b30: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x292b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292b34: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x292b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292b38: 0xc0a4ad4  jal         func_292B50
    ctx->pc = 0x292B38u;
    SET_GPR_U32(ctx, 31, 0x292B40u);
    ctx->pc = 0x292B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292B50u, 0x292B38u, 0x292B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B40u;
label_292b40:
    // 0x292b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292b44: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x292b44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x292b48: 0x3e00008  jr          $ra
    ctx->pc = 0x292B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292B50u;
}
