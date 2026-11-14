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

// Function: sub_00413368
// Address: 0x413368 - 0x4133b0
void sub_00413368_0x413368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413368_0x413368");
#endif

    switch (ctx->pc) {
        case 0x413368u: goto label_413368;
        case 0x41336cu: goto label_41336c;
        case 0x413370u: goto label_413370;
        case 0x413374u: goto label_413374;
        case 0x413378u: goto label_413378;
        case 0x41337cu: goto label_41337c;
        case 0x413380u: goto label_413380;
        case 0x413384u: goto label_413384;
        case 0x413388u: goto label_413388;
        case 0x41338cu: goto label_41338c;
        case 0x413390u: goto label_413390;
        case 0x413394u: goto label_413394;
        case 0x413398u: goto label_413398;
        case 0x41339cu: goto label_41339c;
        case 0x4133a0u: goto label_4133a0;
        case 0x4133a4u: goto label_4133a4;
        case 0x4133a8u: goto label_4133a8;
        case 0x4133acu: goto label_4133ac;
        default: break;
    }

    ctx->pc = 0x413368u;

label_413368:
    // 0x413368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x413368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_41336c:
    // 0x41336c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x41336cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_413370:
    // 0x413370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x413370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_413374:
    // 0x413374: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x413374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_413378:
    // 0x413378: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x413378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_41337c:
    // 0x41337c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_413380:
    if (ctx->pc == 0x413380u) {
        ctx->pc = 0x413380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41337Cu;
        // 0x413380: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413384u;
        goto label_413384;
    }
    ctx->pc = 0x41337Cu;
    {
        const bool branch_taken_0x41337c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41337Cu;
        // 0x413380: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41337c) {
            ctx->pc = 0x413394u;
            goto label_413394;
        }
    }
    ctx->pc = 0x413384u;
label_413384:
    // 0x413384: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x413384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_413388:
    // 0x413388: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x413388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_41338c:
    // 0x41338c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x41338cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_413390:
    // 0x413390: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x413390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_413394:
    // 0x413394: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x413394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_413398:
    // 0x413398: 0x8c62e99c  lw          $v0, -0x1664($v1)
    ctx->pc = 0x413398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961564)));
label_41339c:
    // 0x41339c: 0x40f809  jalr        $v0
label_4133a0:
    if (ctx->pc == 0x4133A0u) {
        ctx->pc = 0x4133A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41339Cu;
        // 0x4133a0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4133A4u;
        goto label_4133a4;
    }
    ctx->pc = 0x41339Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4133A4u);
        ctx->pc = 0x4133A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41339Cu;
        // 0x4133a0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41339Cu, 0x4133A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4133A4u;
label_4133a4:
    // 0x4133a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4133a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4133a8:
    // 0x4133a8: 0x3e00008  jr          $ra
label_4133ac:
    if (ctx->pc == 0x4133ACu) {
        ctx->pc = 0x4133ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4133A8u;
        // 0x4133ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4133B0u;
        goto label_fallthrough_0x4133a8;
    }
    ctx->pc = 0x4133A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4133ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4133A8u;
        // 0x4133ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4133A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4133a8:
    ctx->pc = 0x4133B0u;
}
