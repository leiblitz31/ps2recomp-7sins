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

// Function: sub_00308E48
// Address: 0x308e48 - 0x308eb8
void sub_00308E48_0x308e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308E48_0x308e48");
#endif

    ctx->pc = 0x308e48u;

    // 0x308e48: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x308e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x308e4c: 0x24472228  addiu       $a3, $v0, 0x2228
    ctx->pc = 0x308e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 8744));
    // 0x308e50: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x308e50u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4F223Cu));
    // 0x308e54: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x308E54u;
    {
        const bool branch_taken_0x308e54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x308e54) {
            ctx->pc = 0x308E68u;
            goto label_308e68;
        }
    }
    ctx->pc = 0x308E5Cu;
    // 0x308e5c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x308e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x308e60: 0x3e00008  jr          $ra
    ctx->pc = 0x308E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E60u;
        // 0x308e64: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308E68u;
label_308e68:
    // 0x308e68: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x308e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x308e6c: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x308e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x308e70: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x308e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x308e74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x308e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x308e78: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x308e78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x308e7c: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x308e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x308e80: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x308e80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x308e84: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x308e84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x308e88: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x308e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x308e8c: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x308e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x308e90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x308e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x308e94: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x308e94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x308e98: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x308e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x308e9c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x308e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x308ea0: 0x304203fe  andi        $v0, $v0, 0x3FE
    ctx->pc = 0x308ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1022);
    // 0x308ea4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x308ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x308ea8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x308ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x308eac: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x308eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x308eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x308EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308EB0u;
        // 0x308eb4: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308EB8u;
}
