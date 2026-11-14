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

// Function: sub_003C9528
// Address: 0x3c9528 - 0x3c9588
void sub_003C9528_0x3c9528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9528_0x3c9528");
#endif

    switch (ctx->pc) {
        case 0x3c9574u: goto label_3c9574;
        default: break;
    }

    ctx->pc = 0x3c9528u;

    // 0x3c9528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c9528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c952c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c952cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c9530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c9530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c9534: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c9534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9538: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3c9538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3c953c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3c953cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c9540: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3C9540u;
    {
        const bool branch_taken_0x3c9540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9540u;
        // 0x3c9544: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9540) {
            ctx->pc = 0x3C9578u;
            goto label_3c9578;
        }
    }
    ctx->pc = 0x3C9548u;
    // 0x3c9548: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3c9548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c954c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3C954Cu;
    {
        const bool branch_taken_0x3c954c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C954Cu;
        // 0x3c9550: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c954c) {
            ctx->pc = 0x3C957Cu;
            goto label_3c957c;
        }
    }
    ctx->pc = 0x3C9554u;
    // 0x3c9554: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3c9554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3c9558: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C9558u;
    {
        const bool branch_taken_0x3c9558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9558u;
        // 0x3c955c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9558) {
            ctx->pc = 0x3C957Cu;
            goto label_3c957c;
        }
    }
    ctx->pc = 0x3C9560u;
    // 0x3c9560: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3c9560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3c9564: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C9564u;
    {
        const bool branch_taken_0x3c9564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9564u;
        // 0x3c9568: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9564) {
            ctx->pc = 0x3C957Cu;
            goto label_3c957c;
        }
    }
    ctx->pc = 0x3C956Cu;
    // 0x3c956c: 0xc0f20c8  jal         func_3C8320
    ctx->pc = 0x3C956Cu;
    SET_GPR_U32(ctx, 31, 0x3C9574u);
    ctx->pc = 0x3C8320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C8320u, 0x3C956Cu, 0x3C9574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9574u;
label_3c9574:
    // 0x3c9574: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c9574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c9578:
    // 0x3c9578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c9578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c957c:
    // 0x3c957c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c957cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c9580: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9580u;
        // 0x3c9584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9588u;
}
