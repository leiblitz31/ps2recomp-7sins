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

// Function: sub_00309800
// Address: 0x309800 - 0x309850
void sub_00309800_0x309800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309800_0x309800");
#endif

    switch (ctx->pc) {
        case 0x309820u: goto label_309820;
        default: break;
    }

    ctx->pc = 0x309800u;

    // 0x309800: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x309800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x309804: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x309804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x309808: 0x24a26200  addiu       $v0, $a1, 0x6200
    ctx->pc = 0x309808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 25088));
    // 0x30980c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x30980cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x309810: 0xac626600  sw          $v0, 0x6600($v1)
    ctx->pc = 0x309810u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x616600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x616600u, _value); } while (0);
    // 0x309814: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x309814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x309818: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x309818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x30981c: 0x0  nop
    ctx->pc = 0x30981cu;
    // NOP
label_309820:
    // 0x309820: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x309820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x309824: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x309824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x309828: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x309828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x30982c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x30982cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x309830: 0x0  nop
    ctx->pc = 0x309830u;
    // NOP
    // 0x309834: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x309834u;
    {
        const bool branch_taken_0x309834 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x309834) {
            ctx->pc = 0x309820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309820;
        }
    }
    ctx->pc = 0x30983Cu;
    // 0x30983c: 0x24a36200  addiu       $v1, $a1, 0x6200
    ctx->pc = 0x30983cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 25088));
    // 0x309840: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x309840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309844: 0x3e00008  jr          $ra
    ctx->pc = 0x309844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309844u;
        // 0x309848: 0xac6003f0  sw          $zero, 0x3F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30984Cu;
    // 0x30984c: 0x0  nop
    ctx->pc = 0x30984cu;
    // NOP
    ctx->pc = 0x309850u;
}
