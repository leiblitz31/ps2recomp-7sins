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

// Function: sub_003021D8
// Address: 0x3021d8 - 0x302248
void sub_003021D8_0x3021d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003021D8_0x3021d8");
#endif

    switch (ctx->pc) {
        case 0x302218u: goto label_302218;
        case 0x302230u: goto label_302230;
        default: break;
    }

    ctx->pc = 0x3021d8u;

    // 0x3021d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3021d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3021dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3021dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3021e0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3021e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3021e4: 0x3c10004f  lui         $s0, 0x4F
    ctx->pc = 0x3021e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)79 << 16));
    // 0x3021e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3021e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3021ec: 0x8e020c28  lw          $v0, 0xC28($s0)
    ctx->pc = 0x3021ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F0C28u));
    // 0x3021f0: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3021F0u;
    {
        const bool branch_taken_0x3021f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3021F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3021F0u;
        // 0x3021f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3021f0) {
            ctx->pc = 0x30223Cu;
            goto label_30223c;
        }
    }
    ctx->pc = 0x3021F8u;
    // 0x3021f8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3021f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3021fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3021fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302200: 0x2442aa20  addiu       $v0, $v0, -0x55E0
    ctx->pc = 0x302200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945312));
    // 0x302204: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x302204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x302208: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x302208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x30220c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30220cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302210: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x302210u;
    SET_GPR_U32(ctx, 31, 0x302218u);
    ctx->pc = 0x302214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302210u;
    // 0x302214: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x302210u, 0x302218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302218u;
label_302218:
    // 0x302218: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x302218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x30221c: 0xae020c28  sw          $v0, 0xC28($s0)
    ctx->pc = 0x30221cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3112), GPR_U32(ctx, 2));
    // 0x302220: 0x2463aa30  addiu       $v1, $v1, -0x55D0
    ctx->pc = 0x302220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945328));
    // 0x302224: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x302224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302228: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x302228u;
    SET_GPR_U32(ctx, 31, 0x302230u);
    ctx->pc = 0x30222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302228u;
    // 0x30222c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x302228u, 0x302230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302230u;
label_302230:
    // 0x302230: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x302230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x302234: 0xac620c2c  sw          $v0, 0xC2C($v1)
    ctx->pc = 0x302234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4F0C2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4F0C2Cu, _value); } while (0);
    // 0x302238: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x302238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_30223c:
    // 0x30223c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x30223cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302240: 0x3e00008  jr          $ra
    ctx->pc = 0x302240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302240u;
        // 0x302244: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302248u;
}
