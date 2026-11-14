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

// Function: sub_0041D7B8
// Address: 0x41d7b8 - 0x41d800
void sub_0041D7B8_0x41d7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D7B8_0x41d7b8");
#endif

    switch (ctx->pc) {
        case 0x41d7b8u: goto label_41d7b8;
        case 0x41d7bcu: goto label_41d7bc;
        case 0x41d7c0u: goto label_41d7c0;
        case 0x41d7c4u: goto label_41d7c4;
        case 0x41d7c8u: goto label_41d7c8;
        case 0x41d7ccu: goto label_41d7cc;
        case 0x41d7d0u: goto label_41d7d0;
        case 0x41d7d4u: goto label_41d7d4;
        case 0x41d7d8u: goto label_41d7d8;
        case 0x41d7dcu: goto label_41d7dc;
        case 0x41d7e0u: goto label_41d7e0;
        case 0x41d7e4u: goto label_41d7e4;
        case 0x41d7e8u: goto label_41d7e8;
        case 0x41d7ecu: goto label_41d7ec;
        case 0x41d7f0u: goto label_41d7f0;
        case 0x41d7f4u: goto label_41d7f4;
        case 0x41d7f8u: goto label_41d7f8;
        case 0x41d7fcu: goto label_41d7fc;
        default: break;
    }

    ctx->pc = 0x41d7b8u;

label_41d7b8:
    // 0x41d7b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41d7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41d7bc:
    // 0x41d7bc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41d7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41d7c0:
    // 0x41d7c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41d7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_41d7c4:
    // 0x41d7c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41d7c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d7c8:
    // 0x41d7c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41d7c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41d7cc:
    // 0x41d7cc: 0x8c62e928  lw          $v0, -0x16D8($v1)
    ctx->pc = 0x41d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961448)));
label_41d7d0:
    // 0x41d7d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41d7d4:
    // 0x41d7d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41d7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d7d8:
    // 0x41d7d8: 0x40f809  jalr        $v0
label_41d7dc:
    if (ctx->pc == 0x41D7DCu) {
        ctx->pc = 0x41D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D7D8u;
        // 0x41d7dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D7E0u;
        goto label_41d7e0;
    }
    ctx->pc = 0x41D7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41D7E0u);
        ctx->pc = 0x41D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D7D8u;
        // 0x41d7dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D7D8u, 0x41D7E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41D7E0u;
label_41d7e0:
    // 0x41d7e0: 0x92030022  lbu         $v1, 0x22($s0)
    ctx->pc = 0x41d7e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
label_41d7e4:
    // 0x41d7e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41d7e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41d7e8:
    // 0x41d7e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41d7ec:
    // 0x41d7ec: 0x306300e7  andi        $v1, $v1, 0xE7
    ctx->pc = 0x41d7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)231);
label_41d7f0:
    // 0x41d7f0: 0xa2030022  sb          $v1, 0x22($s0)
    ctx->pc = 0x41d7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 3));
label_41d7f4:
    // 0x41d7f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41d7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41d7f8:
    // 0x41d7f8: 0x3e00008  jr          $ra
label_41d7fc:
    if (ctx->pc == 0x41D7FCu) {
        ctx->pc = 0x41D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D7F8u;
        // 0x41d7fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41D800u;
        goto label_fallthrough_0x41d7f8;
    }
    ctx->pc = 0x41D7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D7F8u;
        // 0x41d7fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41d7f8:
    ctx->pc = 0x41D800u;
}
