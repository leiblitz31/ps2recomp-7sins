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

// Function: sub_00413610
// Address: 0x413610 - 0x413650
void sub_00413610_0x413610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413610_0x413610");
#endif

    switch (ctx->pc) {
        case 0x413610u: goto label_413610;
        case 0x413614u: goto label_413614;
        case 0x413618u: goto label_413618;
        case 0x41361cu: goto label_41361c;
        case 0x413620u: goto label_413620;
        case 0x413624u: goto label_413624;
        case 0x413628u: goto label_413628;
        case 0x41362cu: goto label_41362c;
        case 0x413630u: goto label_413630;
        case 0x413634u: goto label_413634;
        case 0x413638u: goto label_413638;
        case 0x41363cu: goto label_41363c;
        case 0x413640u: goto label_413640;
        case 0x413644u: goto label_413644;
        case 0x413648u: goto label_413648;
        case 0x41364cu: goto label_41364c;
        default: break;
    }

    ctx->pc = 0x413610u;

label_413610:
    // 0x413610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x413610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_413614:
    // 0x413614: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x413614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_413618:
    // 0x413618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x413618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41361c:
    // 0x41361c: 0x8f83bde8  lw          $v1, -0x4218($gp)
    ctx->pc = 0x41361cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950376)));
label_413620:
    // 0x413620: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x413620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_413624:
    // 0x413624: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x413624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_413628:
    // 0x413628: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x413628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_41362c:
    // 0x41362c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x41362cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_413630:
    // 0x413630: 0x40f809  jalr        $v0
label_413634:
    if (ctx->pc == 0x413634u) {
        ctx->pc = 0x413634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413630u;
        // 0x413634: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413638u;
        goto label_413638;
    }
    ctx->pc = 0x413630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x413638u);
        ctx->pc = 0x413634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413630u;
        // 0x413634: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413630u, 0x413638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x413638u;
label_413638:
    // 0x413638: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x413638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41363c:
    // 0x41363c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41363cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_413640:
    // 0x413640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x413640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_413644:
    // 0x413644: 0x3e00008  jr          $ra
label_413648:
    if (ctx->pc == 0x413648u) {
        ctx->pc = 0x413648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413644u;
        // 0x413648: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41364Cu;
        goto label_41364c;
    }
    ctx->pc = 0x413644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413644u;
        // 0x413648: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41364Cu;
label_41364c:
    // 0x41364c: 0x0  nop
    ctx->pc = 0x41364cu;
    // NOP
    ctx->pc = 0x413650u;
}
