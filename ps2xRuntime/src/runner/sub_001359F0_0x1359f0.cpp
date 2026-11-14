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

// Function: sub_001359F0
// Address: 0x1359f0 - 0x135a40
void sub_001359F0_0x1359f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001359F0_0x1359f0");
#endif

    switch (ctx->pc) {
        case 0x135a20u: goto label_135a20;
        default: break;
    }

    ctx->pc = 0x1359f0u;

    // 0x1359f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1359f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1359f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1359f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1359f8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1359f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1359fc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1359fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135a00: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x135A00u;
    {
        const bool branch_taken_0x135a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135a00) {
            ctx->pc = 0x135A24u;
            goto label_135a24;
        }
    }
    ctx->pc = 0x135A08u;
    // 0x135a08: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x135a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135a0c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x135A0Cu;
    {
        const bool branch_taken_0x135a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x135a0c) {
            ctx->pc = 0x135A24u;
            goto label_135a24;
        }
    }
    ctx->pc = 0x135A14u;
    // 0x135a14: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x135a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135a18: 0xc119c5c  jal         func_467170
    ctx->pc = 0x135A18u;
    SET_GPR_U32(ctx, 31, 0x135A20u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x135A18u, 0x135A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A20u;
label_135a20:
    // 0x135a20: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x135a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_135a24:
    // 0x135a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135a28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x135a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x135A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135A34u;
    // 0x135a34: 0x0  nop
    ctx->pc = 0x135a34u;
    // NOP
    // 0x135a38: 0x0  nop
    ctx->pc = 0x135a38u;
    // NOP
    // 0x135a3c: 0x0  nop
    ctx->pc = 0x135a3cu;
    // NOP
    ctx->pc = 0x135a40u;
}
