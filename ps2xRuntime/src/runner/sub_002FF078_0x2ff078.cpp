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

// Function: sub_002FF078
// Address: 0x2ff078 - 0x2ff0a0
void sub_002FF078_0x2ff078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF078_0x2ff078");
#endif

    ctx->pc = 0x2ff078u;

    // 0x2ff078: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2ff078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2ff07c: 0x2443f380  addiu       $v1, $v0, -0xC80
    ctx->pc = 0x2ff07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964096));
    // 0x2ff080: 0xac44f380  sw          $a0, -0xC80($v0)
    ctx->pc = 0x2ff080u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60F380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60F380u, _value); } while (0);
    // 0x2ff084: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x2ff084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2ff088: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ff088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff08c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2ff08cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60F388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60F388u, _value); } while (0);
    // 0x2ff090: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2ff090u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x60F384u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60F384u, _value); } while (0);
    // 0x2ff094: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF094u;
        // 0x2ff098: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF09Cu;
    // 0x2ff09c: 0x0  nop
    ctx->pc = 0x2ff09cu;
    // NOP
    ctx->pc = 0x2ff0a0u;
}
