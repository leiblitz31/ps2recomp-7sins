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

// Function: sub_00326218
// Address: 0x326218 - 0x326268
void sub_00326218_0x326218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326218_0x326218");
#endif

    switch (ctx->pc) {
        case 0x326230u: goto label_326230;
        default: break;
    }

    ctx->pc = 0x326218u;

    // 0x326218: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x326218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x32621c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x32621cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x326220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x326220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326224: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x326224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326228: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x326228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32622c: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x32622cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_326230:
    // 0x326230: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x326230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x326234: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x326234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x326238: 0x50670008  beql        $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x326238u;
    {
        const bool branch_taken_0x326238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x326238) {
            ctx->pc = 0x32623Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326238u;
            // 0x32623c: 0xe44c0008  swc1        $f12, 0x8($v0) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x32625Cu;
            goto label_32625c;
        }
    }
    ctx->pc = 0x326240u;
    // 0x326240: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x326240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x326244: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x326244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x326248: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x326248u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x32624c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32624Cu;
    {
        const bool branch_taken_0x32624c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32624c) {
            ctx->pc = 0x326250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32624Cu;
            // 0x326250: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326230;
        }
    }
    ctx->pc = 0x326254u;
    // 0x326254: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x326254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326258: 0xe44c0008  swc1        $f12, 0x8($v0)
    ctx->pc = 0x326258u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8u, _value); } while (0); }
label_32625c:
    // 0x32625c: 0x3e00008  jr          $ra
    ctx->pc = 0x32625Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32625Cu;
        // 0x326260: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32625Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326264u;
    // 0x326264: 0x0  nop
    ctx->pc = 0x326264u;
    // NOP
    ctx->pc = 0x326268u;
}
