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

// Function: sub_003C94C8
// Address: 0x3c94c8 - 0x3c9528
void sub_003C94C8_0x3c94c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C94C8_0x3c94c8");
#endif

    switch (ctx->pc) {
        case 0x3c9510u: goto label_3c9510;
        default: break;
    }

    ctx->pc = 0x3c94c8u;

    // 0x3c94c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c94c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c94cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c94ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c94d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c94d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c94d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c94d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c94d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c94d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3c94dc: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3C94DCu;
    {
        const bool branch_taken_0x3c94dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C94E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C94DCu;
        // 0x3c94e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c94dc) {
            ctx->pc = 0x3C9514u;
            goto label_3c9514;
        }
    }
    ctx->pc = 0x3C94E4u;
    // 0x3c94e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3c94e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c94e8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3C94E8u;
    {
        const bool branch_taken_0x3c94e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C94ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C94E8u;
        // 0x3c94ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c94e8) {
            ctx->pc = 0x3C9518u;
            goto label_3c9518;
        }
    }
    ctx->pc = 0x3C94F0u;
    // 0x3c94f0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3c94f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3c94f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C94F4u;
    {
        const bool branch_taken_0x3c94f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C94F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C94F4u;
        // 0x3c94f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c94f4) {
            ctx->pc = 0x3C9518u;
            goto label_3c9518;
        }
    }
    ctx->pc = 0x3C94FCu;
    // 0x3c94fc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3c94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3c9500: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C9500u;
    {
        const bool branch_taken_0x3c9500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9500u;
        // 0x3c9504: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9500) {
            ctx->pc = 0x3C9518u;
            goto label_3c9518;
        }
    }
    ctx->pc = 0x3C9508u;
    // 0x3c9508: 0xc0f20c8  jal         func_3C8320
    ctx->pc = 0x3C9508u;
    SET_GPR_U32(ctx, 31, 0x3C9510u);
    ctx->pc = 0x3C8320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C8320u, 0x3C9508u, 0x3C9510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9510u;
label_3c9510:
    // 0x3c9510: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c9510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9514:
    // 0x3c9514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c9514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c9518:
    // 0x3c9518: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c9518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c951c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C951Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C951Cu;
        // 0x3c9520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C951Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9524u;
    // 0x3c9524: 0x0  nop
    ctx->pc = 0x3c9524u;
    // NOP
    ctx->pc = 0x3c9528u;
}
