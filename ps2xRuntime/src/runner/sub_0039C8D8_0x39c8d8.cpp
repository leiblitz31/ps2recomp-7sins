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

// Function: sub_0039C8D8
// Address: 0x39c8d8 - 0x39c948
void sub_0039C8D8_0x39c8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C8D8_0x39c8d8");
#endif

    switch (ctx->pc) {
        case 0x39c8d8u: goto label_39c8d8;
        case 0x39c8dcu: goto label_39c8dc;
        case 0x39c8e0u: goto label_39c8e0;
        case 0x39c8e4u: goto label_39c8e4;
        case 0x39c8e8u: goto label_39c8e8;
        case 0x39c8ecu: goto label_39c8ec;
        case 0x39c8f0u: goto label_39c8f0;
        case 0x39c8f4u: goto label_39c8f4;
        case 0x39c8f8u: goto label_39c8f8;
        case 0x39c8fcu: goto label_39c8fc;
        case 0x39c900u: goto label_39c900;
        case 0x39c904u: goto label_39c904;
        case 0x39c908u: goto label_39c908;
        case 0x39c90cu: goto label_39c90c;
        case 0x39c910u: goto label_39c910;
        case 0x39c914u: goto label_39c914;
        case 0x39c918u: goto label_39c918;
        case 0x39c91cu: goto label_39c91c;
        case 0x39c920u: goto label_39c920;
        case 0x39c924u: goto label_39c924;
        case 0x39c928u: goto label_39c928;
        case 0x39c92cu: goto label_39c92c;
        case 0x39c930u: goto label_39c930;
        case 0x39c934u: goto label_39c934;
        case 0x39c938u: goto label_39c938;
        case 0x39c93cu: goto label_39c93c;
        case 0x39c940u: goto label_39c940;
        case 0x39c944u: goto label_39c944;
        default: break;
    }

    ctx->pc = 0x39c8d8u;

label_39c8d8:
    // 0x39c8d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39c8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39c8dc:
    // 0x39c8dc: 0x8f82a9e0  lw          $v0, -0x5620($gp)
    ctx->pc = 0x39c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945248)));
label_39c8e0:
    // 0x39c8e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39c8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39c8e4:
    // 0x39c8e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x39c8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_39c8e8:
    // 0x39c8e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39c8e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c8ec:
    // 0x39c8ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39c8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39c8f0:
    // 0x39c8f0: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x39c8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39c8f4:
    // 0x39c8f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x39c8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39c8f8:
    // 0x39c8f8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_39c8fc:
    if (ctx->pc == 0x39C8FCu) {
        ctx->pc = 0x39C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C8F8u;
        // 0x39c8fc: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C900u;
        goto label_39c900;
    }
    ctx->pc = 0x39C8F8u;
    {
        const bool branch_taken_0x39c8f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C8F8u;
        // 0x39c8fc: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c8f8) {
            ctx->pc = 0x39C90Cu;
            goto label_39c90c;
        }
    }
    ctx->pc = 0x39C900u;
label_39c900:
    // 0x39c900: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x39c900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_39c904:
    // 0x39c904: 0x40f809  jalr        $v0
label_39c908:
    if (ctx->pc == 0x39C908u) {
        ctx->pc = 0x39C90Cu;
        goto label_39c90c;
    }
    ctx->pc = 0x39C904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39C90Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C904u, 0x39C90Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C90Cu;
label_39c90c:
    // 0x39c90c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x39c90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_39c910:
    // 0x39c910: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39c910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39c914:
    // 0x39c914: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x39c914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_39c918:
    // 0x39c918: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x39c918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_39c91c:
    // 0x39c91c: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x39c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
label_39c920:
    // 0x39c920: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x39c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_39c924:
    // 0x39c924: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x39c924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_39c928:
    // 0x39c928: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x39c928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_39c92c:
    // 0x39c92c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x39c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_39c930:
    // 0x39c930: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x39c930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_39c934:
    // 0x39c934: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x39c934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39c938:
    // 0x39c938: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39c938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39c93c:
    // 0x39c93c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39c940:
    // 0x39c940: 0x3e00008  jr          $ra
label_39c944:
    if (ctx->pc == 0x39C944u) {
        ctx->pc = 0x39C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C940u;
        // 0x39c944: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C948u;
        goto label_fallthrough_0x39c940;
    }
    ctx->pc = 0x39C940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C940u;
        // 0x39c944: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39c940:
    ctx->pc = 0x39C948u;
}
