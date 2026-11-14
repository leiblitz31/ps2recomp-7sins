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

// Function: sub_003AD058
// Address: 0x3ad058 - 0x3ad088
void sub_003AD058_0x3ad058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD058_0x3ad058");
#endif

    switch (ctx->pc) {
        case 0x3ad058u: goto label_3ad058;
        case 0x3ad05cu: goto label_3ad05c;
        case 0x3ad060u: goto label_3ad060;
        case 0x3ad064u: goto label_3ad064;
        case 0x3ad068u: goto label_3ad068;
        case 0x3ad06cu: goto label_3ad06c;
        case 0x3ad070u: goto label_3ad070;
        case 0x3ad074u: goto label_3ad074;
        case 0x3ad078u: goto label_3ad078;
        case 0x3ad07cu: goto label_3ad07c;
        case 0x3ad080u: goto label_3ad080;
        case 0x3ad084u: goto label_3ad084;
        default: break;
    }

    ctx->pc = 0x3ad058u;

label_3ad058:
    // 0x3ad058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ad058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3ad05c:
    // 0x3ad05c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ad05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ad060:
    // 0x3ad060: 0x8c820138  lw          $v0, 0x138($a0)
    ctx->pc = 0x3ad060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 312)));
label_3ad064:
    // 0x3ad064: 0x40f809  jalr        $v0
label_3ad068:
    if (ctx->pc == 0x3AD068u) {
        ctx->pc = 0x3AD06Cu;
        goto label_3ad06c;
    }
    ctx->pc = 0x3AD064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AD06Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD064u, 0x3AD06Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD06Cu;
label_3ad06c:
    // 0x3ad06c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ad06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ad070:
    // 0x3ad070: 0x3e00008  jr          $ra
label_3ad074:
    if (ctx->pc == 0x3AD074u) {
        ctx->pc = 0x3AD074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD070u;
        // 0x3ad074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD078u;
        goto label_3ad078;
    }
    ctx->pc = 0x3AD070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD070u;
        // 0x3ad074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD078u;
label_3ad078:
    // 0x3ad078: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3ad078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ad07c:
    // 0x3ad07c: 0x3e00008  jr          $ra
label_3ad080:
    if (ctx->pc == 0x3AD080u) {
        ctx->pc = 0x3AD080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD07Cu;
        // 0x3ad080: 0xe44c000c  swc1        $f12, 0xC($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD084u;
        goto label_3ad084;
    }
    ctx->pc = 0x3AD07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD07Cu;
        // 0x3ad080: 0xe44c000c  swc1        $f12, 0xC($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD084u;
label_3ad084:
    // 0x3ad084: 0x0  nop
    ctx->pc = 0x3ad084u;
    // NOP
    ctx->pc = 0x3ad088u;
}
