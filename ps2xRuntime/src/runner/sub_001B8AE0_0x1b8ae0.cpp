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

// Function: sub_001B8AE0
// Address: 0x1b8ae0 - 0x1b8b40
void sub_001B8AE0_0x1b8ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8AE0_0x1b8ae0");
#endif

    switch (ctx->pc) {
        case 0x1b8afcu: goto label_1b8afc;
        case 0x1b8b0cu: goto label_1b8b0c;
        default: break;
    }

    ctx->pc = 0x1b8ae0u;

    // 0x1b8ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b8ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b8ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8ae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b8ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b8aec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1b8aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1b8af0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1b8af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1b8af4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B8AF4u;
    {
        const bool branch_taken_0x1b8af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8af4) {
            ctx->pc = 0x1B8B18u;
            goto label_1b8b18;
        }
    }
    ctx->pc = 0x1B8AFCu;
label_1b8afc:
    // 0x1b8afc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b8afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8b00: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1b8b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8b04: 0xc06c88c  jal         func_1B2230
    ctx->pc = 0x1B8B04u;
    SET_GPR_U32(ctx, 31, 0x1B8B0Cu);
    ctx->pc = 0x1B2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2230u, 0x1B8B04u, 0x1B8B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8B0Cu;
label_1b8b0c:
    // 0x1b8b0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1b8b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8b10: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1b8b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1b8b14: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1b8b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1b8b18:
    // 0x1b8b18: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b8b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8b1c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b8b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8b20: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B8B20u;
    {
        const bool branch_taken_0x1b8b20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b8b20) {
            ctx->pc = 0x1B8AFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8afc;
        }
    }
    ctx->pc = 0x1B8B28u;
    // 0x1b8b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8b2c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b8b2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b8b30: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8B38u;
    // 0x1b8b38: 0x0  nop
    ctx->pc = 0x1b8b38u;
    // NOP
    // 0x1b8b3c: 0x0  nop
    ctx->pc = 0x1b8b3cu;
    // NOP
    ctx->pc = 0x1b8b40u;
}
