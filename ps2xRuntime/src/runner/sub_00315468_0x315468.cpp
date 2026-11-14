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

// Function: sub_00315468
// Address: 0x315468 - 0x3154c0
void sub_00315468_0x315468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315468_0x315468");
#endif

    switch (ctx->pc) {
        case 0x315490u: goto label_315490;
        default: break;
    }

    ctx->pc = 0x315468u;

    // 0x315468: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x315468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31546c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31546cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x315470: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x315470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x315474: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x315474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x315478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31547c: 0x96020084  lhu         $v0, 0x84($s0)
    ctx->pc = 0x31547cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x315480: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x315480u;
    {
        const bool branch_taken_0x315480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315480u;
        // 0x315484: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315480) {
            ctx->pc = 0x3154A8u;
            goto label_3154a8;
        }
    }
    ctx->pc = 0x315488u;
    // 0x315488: 0xc0c5440  jal         func_315100
    ctx->pc = 0x315488u;
    SET_GPR_U32(ctx, 31, 0x315490u);
    ctx->pc = 0x31548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315488u;
    // 0x31548c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315100u, 0x315488u, 0x315490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315490u;
label_315490:
    // 0x315490: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x315490u;
    {
        const bool branch_taken_0x315490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315490u;
        // 0x315494: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315490) {
            ctx->pc = 0x3154ACu;
            goto label_3154ac;
        }
    }
    ctx->pc = 0x315498u;
    // 0x315498: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x315498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31549c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31549cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3154a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3154A0u;
    {
        const bool branch_taken_0x3154a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3154A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3154A0u;
        // 0x3154a4: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3154a0) {
            ctx->pc = 0x3154ACu;
            goto label_3154ac;
        }
    }
    ctx->pc = 0x3154A8u;
label_3154a8:
    // 0x3154a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3154a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3154ac:
    // 0x3154ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3154acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3154b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3154b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3154b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3154b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3154b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3154B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3154BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3154B8u;
        // 0x3154bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3154B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3154C0u;
}
