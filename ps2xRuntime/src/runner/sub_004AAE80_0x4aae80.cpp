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

// Function: sub_004AAE80
// Address: 0x4aae80 - 0x4aaef8
void sub_004AAE80_0x4aae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AAE80_0x4aae80");
#endif

    switch (ctx->pc) {
        case 0x4aaeb0u: goto label_4aaeb0;
        case 0x4aaed0u: goto label_4aaed0;
        default: break;
    }

    ctx->pc = 0x4aae80u;

    // 0x4aae80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4aae80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4aae84: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4aae84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4aae88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4aae88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4aae8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4aae8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aae90: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4aae90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4aae94: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x4aae94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aae98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aae98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aae9c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x4aae9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4aaea0: 0x10f1000e  beq         $a3, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x4AAEA0u;
    {
        const bool branch_taken_0x4aaea0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 17));
        ctx->pc = 0x4AAEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAEA0u;
        // 0x4aaea4: 0x3c120066  lui         $s2, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aaea0) {
            ctx->pc = 0x4AAEDCu;
            goto label_4aaedc;
        }
    }
    ctx->pc = 0x4AAEA8u;
    // 0x4aaea8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4aaea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4aaeac: 0x0  nop
    ctx->pc = 0x4aaeacu;
    // NOP
label_4aaeb0:
    // 0x4aaeb0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4aaeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaeb4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4aaeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4aaeb8: 0x264488f8  addiu       $a0, $s2, -0x7708
    ctx->pc = 0x4aaeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936824));
    // 0x4aaebc: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4aaebcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x4aaec0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4aaec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4aaec4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4aaec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4aaec8: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x4AAEC8u;
    SET_GPR_U32(ctx, 31, 0x4AAED0u);
    ctx->pc = 0x4AAECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAEC8u;
    // 0x4aaecc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4AAEC8u, 0x4AAED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAED0u;
label_4aaed0:
    // 0x4aaed0: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x4aaed0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4aaed4: 0x54f1fff6  bnel        $a3, $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x4AAED4u;
    {
        const bool branch_taken_0x4aaed4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 17));
        if (branch_taken_0x4aaed4) {
            ctx->pc = 0x4AAED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AAED4u;
            // 0x4aaed8: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AAEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aaeb0;
        }
    }
    ctx->pc = 0x4AAEDCu;
label_4aaedc:
    // 0x4aaedc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4aaedcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4aaee0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4aaee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aaee4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4aaee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aaee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aaee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aaeec: 0x3e00008  jr          $ra
    ctx->pc = 0x4AAEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAEECu;
        // 0x4aaef0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AAEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AAEF4u;
    // 0x4aaef4: 0x0  nop
    ctx->pc = 0x4aaef4u;
    // NOP
    ctx->pc = 0x4aaef8u;
}
