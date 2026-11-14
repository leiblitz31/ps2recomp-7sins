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

// Function: sub_002F8A98
// Address: 0x2f8a98 - 0x2f8b08
void sub_002F8A98_0x2f8a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8A98_0x2f8a98");
#endif

    switch (ctx->pc) {
        case 0x2f8ac8u: goto label_2f8ac8;
        case 0x2f8ad8u: goto label_2f8ad8;
        case 0x2f8ae0u: goto label_2f8ae0;
        default: break;
    }

    ctx->pc = 0x2f8a98u;

    // 0x2f8a98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f8a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f8a9c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f8a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f8aa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f8aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f8aa4: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x2f8aa4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
    // 0x2f8aa8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f8aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f8aac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f8aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8ab0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f8ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f8ab4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f8ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8ab8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2f8ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2f8abc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F8ABCu;
    {
        const bool branch_taken_0x2f8abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8ABCu;
        // 0x2f8ac0: 0x3c120060  lui         $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8abc) {
            ctx->pc = 0x2F8AF0u;
            goto label_2f8af0;
        }
    }
    ctx->pc = 0x2F8AC4u;
    // 0x2f8ac4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2f8ac4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2f8ac8:
    // 0x2f8ac8: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8AC8u;
    {
        const bool branch_taken_0x2f8ac8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2f8ac8) {
            ctx->pc = 0x2F8AE0u;
            goto label_2f8ae0;
        }
    }
    ctx->pc = 0x2F8AD0u;
    // 0x2f8ad0: 0xc0c0212  jal         func_300848
    ctx->pc = 0x2F8AD0u;
    SET_GPR_U32(ctx, 31, 0x2F8AD8u);
    ctx->pc = 0x2F8AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8AD0u;
    // 0x2f8ad4: 0x26449ef0  addiu       $a0, $s2, -0x6110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x2F8AD0u, 0x2F8AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8AD8u;
label_2f8ad8:
    // 0x2f8ad8: 0xc0be48c  jal         func_2F9230
    ctx->pc = 0x2F8AD8u;
    SET_GPR_U32(ctx, 31, 0x2F8AE0u);
    ctx->pc = 0x2F8ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8AD8u;
    // 0x2f8adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9230u, 0x2F8AD8u, 0x2F8AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8AE0u;
label_2f8ae0:
    // 0x2f8ae0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8ae4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2f8ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2f8ae8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F8AE8u;
    {
        const bool branch_taken_0x2f8ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AE8u;
        // 0x2f8aec: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ae8) {
            ctx->pc = 0x2F8AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8ac8;
        }
    }
    ctx->pc = 0x2F8AF0u;
label_2f8af0:
    // 0x2f8af0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f8af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8af4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f8af4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8af8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f8af8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8afc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f8afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8b00: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B00u;
        // 0x2f8b04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8B08u;
}
