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

// Function: sub_003BA720
// Address: 0x3ba720 - 0x3ba7a0
void sub_003BA720_0x3ba720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BA720_0x3ba720");
#endif

    switch (ctx->pc) {
        case 0x3ba73cu: goto label_3ba73c;
        case 0x3ba784u: goto label_3ba784;
        default: break;
    }

    ctx->pc = 0x3ba720u;

    // 0x3ba720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ba720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ba724: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3ba724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba728: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ba728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3ba72c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ba72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ba730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ba734: 0x24a40100  addiu       $a0, $a1, 0x100
    ctx->pc = 0x3ba734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x3ba738: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3ba738u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ba73c:
    // 0x3ba73c: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x3ba73cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ba740: 0x78470010  lq          $a3, 0x10($v0)
    ctx->pc = 0x3ba740u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3ba744: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x3ba744u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x3ba748: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x3ba748u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x3ba74c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3ba74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3ba750: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BA750u;
    {
        const bool branch_taken_0x3ba750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA750u;
        // 0x3ba754: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba750) {
            ctx->pc = 0x3BA73Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ba73c;
        }
    }
    ctx->pc = 0x3BA758u;
    // 0x3ba758: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x3ba758u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ba75c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3ba75cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3ba760: 0x8ca300b0  lw          $v1, 0xB0($a1)
    ctx->pc = 0x3ba760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x3ba764: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3ba764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3ba768: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ba768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ba76c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3ba76cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3ba770: 0x8ca400b8  lw          $a0, 0xB8($a1)
    ctx->pc = 0x3ba770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x3ba774: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA774u;
    {
        const bool branch_taken_0x3ba774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA774u;
        // 0x3ba778: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba774) {
            ctx->pc = 0x3BA78Cu;
            goto label_3ba78c;
        }
    }
    ctx->pc = 0x3BA77Cu;
    // 0x3ba77c: 0xc0e27da  jal         func_389F68
    ctx->pc = 0x3BA77Cu;
    SET_GPR_U32(ctx, 31, 0x3BA784u);
    ctx->pc = 0x389F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389F68u, 0x3BA77Cu, 0x3BA784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA784u;
label_3ba784:
    // 0x3ba784: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x3ba784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x3ba788: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3ba788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ba78c:
    // 0x3ba78c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x3ba78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x3ba790: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ba790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ba794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ba794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba798: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA798u;
        // 0x3ba79c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA7A0u;
}
