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

// Function: sub_002FB068
// Address: 0x2fb068 - 0x2fb0c8
void sub_002FB068_0x2fb068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB068_0x2fb068");
#endif

    ctx->pc = 0x2fb068u;

    // 0x2fb068: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2fb068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fb06c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x2fb06cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x2fb070: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2fb070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2fb074: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2fb074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb078: 0x315c2  srl         $v0, $v1, 23
    ctx->pc = 0x2fb078u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 23));
    // 0x2fb07c: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x2fb07cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2fb080: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2fb080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fb084: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fb084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fb088: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x2fb088u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x2fb08c: 0x2445ff81  addiu       $a1, $v0, -0x7F
    ctx->pc = 0x2fb08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x2fb090: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FB090u;
    {
        const bool branch_taken_0x2fb090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB090u;
        // 0x2fb094: 0x321c0  sll         $a0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb090) {
            ctx->pc = 0x2FB0A8u;
            goto label_2fb0a8;
        }
    }
    ctx->pc = 0x2FB098u;
    // 0x2fb098: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fb098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fb09c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB09Cu;
        // 0x2fb0a0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB0A4u;
    // 0x2fb0a4: 0x0  nop
    ctx->pc = 0x2fb0a4u;
    // NOP
label_2fb0a8:
    // 0x2fb0a8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2fb0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2fb0ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fb0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fb0b0: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2fb0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2fb0b4: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x2fb0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x2fb0b8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2fb0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2fb0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB0BCu;
        // 0x2fb0c0: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB0C4u;
    // 0x2fb0c4: 0x0  nop
    ctx->pc = 0x2fb0c4u;
    // NOP
    ctx->pc = 0x2fb0c8u;
}
