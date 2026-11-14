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

// Function: sub_0041D4A8
// Address: 0x41d4a8 - 0x41d4e0
void sub_0041D4A8_0x41d4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D4A8_0x41d4a8");
#endif

    switch (ctx->pc) {
        case 0x41d4a8u: goto label_41d4a8;
        case 0x41d4acu: goto label_41d4ac;
        case 0x41d4b0u: goto label_41d4b0;
        case 0x41d4b4u: goto label_41d4b4;
        case 0x41d4b8u: goto label_41d4b8;
        case 0x41d4bcu: goto label_41d4bc;
        case 0x41d4c0u: goto label_41d4c0;
        case 0x41d4c4u: goto label_41d4c4;
        case 0x41d4c8u: goto label_41d4c8;
        case 0x41d4ccu: goto label_41d4cc;
        case 0x41d4d0u: goto label_41d4d0;
        case 0x41d4d4u: goto label_41d4d4;
        case 0x41d4d8u: goto label_41d4d8;
        case 0x41d4dcu: goto label_41d4dc;
        default: break;
    }

    ctx->pc = 0x41d4a8u;

label_41d4a8:
    // 0x41d4a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41d4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41d4ac:
    // 0x41d4ac: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41d4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41d4b0:
    // 0x41d4b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41d4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_41d4b4:
    // 0x41d4b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41d4b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d4b8:
    // 0x41d4b8: 0x8c62e910  lw          $v0, -0x16F0($v1)
    ctx->pc = 0x41d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961424)));
label_41d4bc:
    // 0x41d4bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41d4c0:
    // 0x41d4c0: 0x40f809  jalr        $v0
label_41d4c4:
    if (ctx->pc == 0x41D4C4u) {
        ctx->pc = 0x41D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D4C0u;
        // 0x41d4c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D4C8u;
        goto label_41d4c8;
    }
    ctx->pc = 0x41D4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41D4C8u);
        ctx->pc = 0x41D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D4C0u;
        // 0x41d4c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D4C0u, 0x41D4C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D4C8u;
label_41d4c8:
    // 0x41d4c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41d4c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d4cc:
    // 0x41d4cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41d4d0:
    // 0x41d4d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41d4d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41d4d4:
    // 0x41d4d4: 0x3e00008  jr          $ra
label_41d4d8:
    if (ctx->pc == 0x41D4D8u) {
        ctx->pc = 0x41D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D4D4u;
        // 0x41d4d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D4DCu;
        goto label_41d4dc;
    }
    ctx->pc = 0x41D4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D4D4u;
        // 0x41d4d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D4DCu;
label_41d4dc:
    // 0x41d4dc: 0x0  nop
    ctx->pc = 0x41d4dcu;
    // NOP
    ctx->pc = 0x41d4e0u;
}
