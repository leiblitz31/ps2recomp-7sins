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

// Function: sub_00419388
// Address: 0x419388 - 0x4193c0
void sub_00419388_0x419388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419388_0x419388");
#endif

    switch (ctx->pc) {
        case 0x419388u: goto label_419388;
        case 0x41938cu: goto label_41938c;
        case 0x419390u: goto label_419390;
        case 0x419394u: goto label_419394;
        case 0x419398u: goto label_419398;
        case 0x41939cu: goto label_41939c;
        case 0x4193a0u: goto label_4193a0;
        case 0x4193a4u: goto label_4193a4;
        case 0x4193a8u: goto label_4193a8;
        case 0x4193acu: goto label_4193ac;
        case 0x4193b0u: goto label_4193b0;
        case 0x4193b4u: goto label_4193b4;
        case 0x4193b8u: goto label_4193b8;
        case 0x4193bcu: goto label_4193bc;
        default: break;
    }

    ctx->pc = 0x419388u;

label_419388:
    // 0x419388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x419388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41938c:
    // 0x41938c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41938cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_419390:
    // 0x419390: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x419390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_419394:
    // 0x419394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x419394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_419398:
    // 0x419398: 0x8c43e98c  lw          $v1, -0x1674($v0)
    ctx->pc = 0x419398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961548)));
label_41939c:
    // 0x41939c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41939cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4193a0:
    // 0x4193a0: 0x60f809  jalr        $v1
label_4193a4:
    if (ctx->pc == 0x4193A4u) {
        ctx->pc = 0x4193A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4193A0u;
        // 0x4193a4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4193A8u;
        goto label_4193a8;
    }
    ctx->pc = 0x4193A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4193A8u);
        ctx->pc = 0x4193A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4193A0u;
        // 0x4193a4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4193A0u, 0x4193A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4193A8u;
label_4193a8:
    // 0x4193a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4193a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4193ac:
    // 0x4193ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4193acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4193b0:
    // 0x4193b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4193b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4193b4:
    // 0x4193b4: 0x3e00008  jr          $ra
label_4193b8:
    if (ctx->pc == 0x4193B8u) {
        ctx->pc = 0x4193B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4193B4u;
        // 0x4193b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4193BCu;
        goto label_4193bc;
    }
    ctx->pc = 0x4193B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4193B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4193B4u;
        // 0x4193b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4193B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4193BCu;
label_4193bc:
    // 0x4193bc: 0x0  nop
    ctx->pc = 0x4193bcu;
    // NOP
    ctx->pc = 0x4193c0u;
}
