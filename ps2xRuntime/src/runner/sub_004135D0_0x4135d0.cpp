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

// Function: sub_004135D0
// Address: 0x4135d0 - 0x413610
void sub_004135D0_0x4135d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004135D0_0x4135d0");
#endif

    switch (ctx->pc) {
        case 0x4135d0u: goto label_4135d0;
        case 0x4135d4u: goto label_4135d4;
        case 0x4135d8u: goto label_4135d8;
        case 0x4135dcu: goto label_4135dc;
        case 0x4135e0u: goto label_4135e0;
        case 0x4135e4u: goto label_4135e4;
        case 0x4135e8u: goto label_4135e8;
        case 0x4135ecu: goto label_4135ec;
        case 0x4135f0u: goto label_4135f0;
        case 0x4135f4u: goto label_4135f4;
        case 0x4135f8u: goto label_4135f8;
        case 0x4135fcu: goto label_4135fc;
        case 0x413600u: goto label_413600;
        case 0x413604u: goto label_413604;
        case 0x413608u: goto label_413608;
        case 0x41360cu: goto label_41360c;
        default: break;
    }

    ctx->pc = 0x4135d0u;

label_4135d0:
    // 0x4135d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4135d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4135d4:
    // 0x4135d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4135d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4135d8:
    // 0x4135d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4135d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4135dc:
    // 0x4135dc: 0x8f83bde8  lw          $v1, -0x4218($gp)
    ctx->pc = 0x4135dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950376)));
label_4135e0:
    // 0x4135e0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4135e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4135e4:
    // 0x4135e4: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x4135e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_4135e8:
    // 0x4135e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4135e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4135ec:
    // 0x4135ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4135ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4135f0:
    // 0x4135f0: 0x40f809  jalr        $v0
label_4135f4:
    if (ctx->pc == 0x4135F4u) {
        ctx->pc = 0x4135F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4135F0u;
        // 0x4135f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4135F8u;
        goto label_4135f8;
    }
    ctx->pc = 0x4135F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4135F8u);
        ctx->pc = 0x4135F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4135F0u;
        // 0x4135f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4135F0u, 0x4135F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4135F8u;
label_4135f8:
    // 0x4135f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4135f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4135fc:
    // 0x4135fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4135fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_413600:
    // 0x413600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x413600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_413604:
    // 0x413604: 0x3e00008  jr          $ra
label_413608:
    if (ctx->pc == 0x413608u) {
        ctx->pc = 0x413608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413604u;
        // 0x413608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41360Cu;
        goto label_41360c;
    }
    ctx->pc = 0x413604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413604u;
        // 0x413608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41360Cu;
label_41360c:
    // 0x41360c: 0x0  nop
    ctx->pc = 0x41360cu;
    // NOP
    ctx->pc = 0x413610u;
}
