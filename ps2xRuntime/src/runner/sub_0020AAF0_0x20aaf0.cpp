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

// Function: sub_0020AAF0
// Address: 0x20aaf0 - 0x20ab50
void sub_0020AAF0_0x20aaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AAF0_0x20aaf0");
#endif

    switch (ctx->pc) {
        case 0x20ab14u: goto label_20ab14;
        case 0x20ab40u: goto label_20ab40;
        default: break;
    }

    ctx->pc = 0x20aaf0u;

    // 0x20aaf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20aaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20aaf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20aaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20aaf8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x20aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x20aafc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x20aafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x20ab00: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x20ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20ab04: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x20ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x20ab08: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x20AB08u;
    {
        const bool branch_taken_0x20ab08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ab08) {
            ctx->pc = 0x20AB30u;
            goto label_20ab30;
        }
    }
    ctx->pc = 0x20AB10u;
    // 0x20ab10: 0x603021  addu        $a2, $v1, $zero
    ctx->pc = 0x20ab10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_20ab14:
    // 0x20ab14: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x20ab14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x20ab18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20ab18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20ab1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20ab20: 0x0  nop
    ctx->pc = 0x20ab20u;
    // NOP
    // 0x20ab24: 0x0  nop
    ctx->pc = 0x20ab24u;
    // NOP
    // 0x20ab28: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20AB28u;
    {
        const bool branch_taken_0x20ab28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ab28) {
            ctx->pc = 0x20AB14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ab14;
        }
    }
    ctx->pc = 0x20AB30u;
label_20ab30:
    // 0x20ab30: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20ab30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ab34: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x20ab34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ab38: 0xc082ad4  jal         func_20AB50
    ctx->pc = 0x20AB38u;
    SET_GPR_U32(ctx, 31, 0x20AB40u);
    ctx->pc = 0x20AB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AB50u, 0x20AB38u, 0x20AB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB40u;
label_20ab40:
    // 0x20ab40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ab40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ab44: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x20ab44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20ab48: 0x3e00008  jr          $ra
    ctx->pc = 0x20AB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AB50u;
}
