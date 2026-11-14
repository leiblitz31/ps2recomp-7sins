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

// Function: sub_00413590
// Address: 0x413590 - 0x4135d0
void sub_00413590_0x413590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413590_0x413590");
#endif

    switch (ctx->pc) {
        case 0x413590u: goto label_413590;
        case 0x413594u: goto label_413594;
        case 0x413598u: goto label_413598;
        case 0x41359cu: goto label_41359c;
        case 0x4135a0u: goto label_4135a0;
        case 0x4135a4u: goto label_4135a4;
        case 0x4135a8u: goto label_4135a8;
        case 0x4135acu: goto label_4135ac;
        case 0x4135b0u: goto label_4135b0;
        case 0x4135b4u: goto label_4135b4;
        case 0x4135b8u: goto label_4135b8;
        case 0x4135bcu: goto label_4135bc;
        case 0x4135c0u: goto label_4135c0;
        case 0x4135c4u: goto label_4135c4;
        case 0x4135c8u: goto label_4135c8;
        case 0x4135ccu: goto label_4135cc;
        default: break;
    }

    ctx->pc = 0x413590u;

label_413590:
    // 0x413590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x413590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_413594:
    // 0x413594: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x413594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_413598:
    // 0x413598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x413598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41359c:
    // 0x41359c: 0x8f83bde8  lw          $v1, -0x4218($gp)
    ctx->pc = 0x41359cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950376)));
label_4135a0:
    // 0x4135a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4135a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4135a4:
    // 0x4135a4: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x4135a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_4135a8:
    // 0x4135a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4135a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4135ac:
    // 0x4135ac: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4135acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4135b0:
    // 0x4135b0: 0x40f809  jalr        $v0
label_4135b4:
    if (ctx->pc == 0x4135B4u) {
        ctx->pc = 0x4135B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4135B0u;
        // 0x4135b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4135B8u;
        goto label_4135b8;
    }
    ctx->pc = 0x4135B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4135B8u);
        ctx->pc = 0x4135B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4135B0u;
        // 0x4135b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4135B0u, 0x4135B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4135B8u;
label_4135b8:
    // 0x4135b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4135b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4135bc:
    // 0x4135bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4135bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4135c0:
    // 0x4135c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4135c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4135c4:
    // 0x4135c4: 0x3e00008  jr          $ra
label_4135c8:
    if (ctx->pc == 0x4135C8u) {
        ctx->pc = 0x4135C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4135C4u;
        // 0x4135c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4135CCu;
        goto label_4135cc;
    }
    ctx->pc = 0x4135C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4135C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4135C4u;
        // 0x4135c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4135C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4135CCu;
label_4135cc:
    // 0x4135cc: 0x0  nop
    ctx->pc = 0x4135ccu;
    // NOP
    ctx->pc = 0x4135d0u;
}
