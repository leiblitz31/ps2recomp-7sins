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

// Function: sub_002E81C0
// Address: 0x2e81c0 - 0x2e8220
void sub_002E81C0_0x2e81c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E81C0_0x2e81c0");
#endif

    switch (ctx->pc) {
        case 0x2e81d4u: goto label_2e81d4;
        case 0x2e81e4u: goto label_2e81e4;
        default: break;
    }

    ctx->pc = 0x2e81c0u;

    // 0x2e81c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e81c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e81c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e81c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e81c8: 0x7fbe0000  sq          $fp, 0x0($sp)
    ctx->pc = 0x2e81c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 30));
    // 0x2e81cc: 0xc0bb49a  jal         func_2ED268
    ctx->pc = 0x2E81CCu;
    SET_GPR_U32(ctx, 31, 0x2E81D4u);
    ctx->pc = 0x2E81D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E81CCu;
    // 0x2e81d0: 0x3a0f021  addu        $fp, $sp, $zero (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED268u, 0x2E81CCu, 0x2E81D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E81D4u;
label_2e81d4:
    // 0x2e81d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E81D4u;
    {
        const bool branch_taken_0x2e81d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e81d4) {
            ctx->pc = 0x2E8200u;
            goto label_2e8200;
        }
    }
    ctx->pc = 0x2E81DCu;
    // 0x2e81dc: 0xc0ba354  jal         func_2E8D50
    ctx->pc = 0x2E81DCu;
    SET_GPR_U32(ctx, 31, 0x2E81E4u);
    ctx->pc = 0x2E81E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E81DCu;
    // 0x2e81e0: 0x27c40020  addiu       $a0, $fp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8D50u, 0x2E81DCu, 0x2E81E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E81E4u;
label_2e81e4:
    // 0x2e81e4: 0x0  nop
    ctx->pc = 0x2e81e4u;
    // NOP
    // 0x2e81e8: 0x0  nop
    ctx->pc = 0x2e81e8u;
    // NOP
    // 0x2e81ec: 0x0  nop
    ctx->pc = 0x2e81ecu;
    // NOP
    // 0x2e81f0: 0x0  nop
    ctx->pc = 0x2e81f0u;
    // NOP
    // 0x2e81f4: 0x0  nop
    ctx->pc = 0x2e81f4u;
    // NOP
    // 0x2e81f8: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E81F8u;
    {
        const bool branch_taken_0x2e81f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e81f8) {
            ctx->pc = 0x2E81E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e81e4;
        }
    }
    ctx->pc = 0x2E8200u;
label_2e8200:
    // 0x2e8200: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x2e8200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x2e8204: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e8204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8208: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x2e8208u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e820c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E820Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E820Cu;
        // 0x2e8210: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E820Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8214u;
    // 0x2e8214: 0x0  nop
    ctx->pc = 0x2e8214u;
    // NOP
    // 0x2e8218: 0x0  nop
    ctx->pc = 0x2e8218u;
    // NOP
    // 0x2e821c: 0x0  nop
    ctx->pc = 0x2e821cu;
    // NOP
    ctx->pc = 0x2e8220u;
}
