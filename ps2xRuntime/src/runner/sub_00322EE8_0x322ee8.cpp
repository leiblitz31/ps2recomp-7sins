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

// Function: sub_00322EE8
// Address: 0x322ee8 - 0x322f40
void sub_00322EE8_0x322ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322EE8_0x322ee8");
#endif

    switch (ctx->pc) {
        case 0x322f10u: goto label_322f10;
        case 0x322f28u: goto label_322f28;
        default: break;
    }

    ctx->pc = 0x322ee8u;

    // 0x322ee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x322ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x322eec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x322eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x322ef0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x322ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x322ef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x322ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x322ef8: 0x2450b1e0  addiu       $s0, $v0, -0x4E20
    ctx->pc = 0x322ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
    // 0x322efc: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x322efcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61B23Cu));
    // 0x322f00: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x322F00u;
    {
        const bool branch_taken_0x322f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x322f00) {
            ctx->pc = 0x322F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322F00u;
            // 0x322f04: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322F18u;
            goto label_322f18;
        }
    }
    ctx->pc = 0x322F08u;
    // 0x322f08: 0xc1116c6  jal         func_445B18
    ctx->pc = 0x322F08u;
    SET_GPR_U32(ctx, 31, 0x322F10u);
    ctx->pc = 0x445B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445B18u, 0x322F08u, 0x322F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322F10u;
label_322f10:
    // 0x322f10: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x322f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x322f14: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x322f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_322f18:
    // 0x322f18: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x322F18u;
    {
        const bool branch_taken_0x322f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x322f18) {
            ctx->pc = 0x322F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322F18u;
            // 0x322f1c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322F30u;
            goto label_322f30;
        }
    }
    ctx->pc = 0x322F20u;
    // 0x322f20: 0xc1116c6  jal         func_445B18
    ctx->pc = 0x322F20u;
    SET_GPR_U32(ctx, 31, 0x322F28u);
    ctx->pc = 0x445B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445B18u, 0x322F20u, 0x322F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322F28u;
label_322f28:
    // 0x322f28: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x322f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x322f2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x322f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_322f30:
    // 0x322f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x322f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322f34: 0x3e00008  jr          $ra
    ctx->pc = 0x322F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F34u;
        // 0x322f38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322F3Cu;
    // 0x322f3c: 0x0  nop
    ctx->pc = 0x322f3cu;
    // NOP
    ctx->pc = 0x322f40u;
}
