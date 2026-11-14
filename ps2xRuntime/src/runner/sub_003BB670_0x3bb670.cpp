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

// Function: sub_003BB670
// Address: 0x3bb670 - 0x3bb6a0
void sub_003BB670_0x3bb670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB670_0x3bb670");
#endif

    ctx->pc = 0x3bb670u;

    // 0x3bb670: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3bb670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3bb674: 0x2442ce80  addiu       $v0, $v0, -0x3180
    ctx->pc = 0x3bb674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
    // 0x3bb678: 0xac4007e8  sw          $zero, 0x7E8($v0)
    ctx->pc = 0x3bb678u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61D668u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D668u, _value); } while (0);
    // 0x3bb67c: 0xac4007d4  sw          $zero, 0x7D4($v0)
    ctx->pc = 0x3bb67cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61D654u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D654u, _value); } while (0);
    // 0x3bb680: 0xac4007d8  sw          $zero, 0x7D8($v0)
    ctx->pc = 0x3bb680u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61D658u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D658u, _value); } while (0);
    // 0x3bb684: 0xac4007dc  sw          $zero, 0x7DC($v0)
    ctx->pc = 0x3bb684u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61D65Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D65Cu, _value); } while (0);
    // 0x3bb688: 0xac4007e0  sw          $zero, 0x7E0($v0)
    ctx->pc = 0x3bb688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61D660u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D660u, _value); } while (0);
    // 0x3bb68c: 0xac4007ec  sw          $zero, 0x7EC($v0)
    ctx->pc = 0x3bb68cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61D66Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D66Cu, _value); } while (0);
    // 0x3bb690: 0xac4007f0  sw          $zero, 0x7F0($v0)
    ctx->pc = 0x3bb690u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61D670u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D670u, _value); } while (0);
    // 0x3bb694: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB694u;
        // 0x3bb698: 0xac4007e4  sw          $zero, 0x7E4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2020), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB69Cu;
    // 0x3bb69c: 0x0  nop
    ctx->pc = 0x3bb69cu;
    // NOP
    ctx->pc = 0x3bb6a0u;
}
