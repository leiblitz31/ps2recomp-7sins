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

// Function: sub_003269C0
// Address: 0x3269c0 - 0x326a20
void sub_003269C0_0x3269c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003269C0_0x3269c0");
#endif

    switch (ctx->pc) {
        case 0x3269e4u: goto label_3269e4;
        case 0x326a04u: goto label_326a04;
        default: break;
    }

    ctx->pc = 0x3269c0u;

    // 0x3269c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3269c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3269c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3269c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3269c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3269c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3269cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3269ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3269d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3269d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3269d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3269d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3269d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3269d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3269dc: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x3269DCu;
    SET_GPR_U32(ctx, 31, 0x3269E4u);
    ctx->pc = 0x3269E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3269DCu;
    // 0x3269e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3269DCu, 0x3269E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3269E4u;
label_3269e4:
    // 0x3269e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3269E4u;
    {
        const bool branch_taken_0x3269e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3269E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269E4u;
        // 0x3269e8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3269e4) {
            ctx->pc = 0x3269F4u;
            goto label_3269f4;
        }
    }
    ctx->pc = 0x3269ECu;
    // 0x3269ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3269ECu;
    {
        const bool branch_taken_0x3269ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3269F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269ECu;
        // 0x3269f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3269ec) {
            ctx->pc = 0x326A08u;
            goto label_326a08;
        }
    }
    ctx->pc = 0x3269F4u;
label_3269f4:
    // 0x3269f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3269F4u;
    {
        const bool branch_taken_0x3269f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3269F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269F4u;
        // 0x3269f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3269f4) {
            ctx->pc = 0x326A08u;
            goto label_326a08;
        }
    }
    ctx->pc = 0x3269FCu;
    // 0x3269fc: 0xc0c9722  jal         func_325C88
    ctx->pc = 0x3269FCu;
    SET_GPR_U32(ctx, 31, 0x326A04u);
    ctx->pc = 0x326A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3269FCu;
    // 0x326a00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325C88u, 0x3269FCu, 0x326A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326A04u;
label_326a04:
    // 0x326a04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x326a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_326a08:
    // 0x326a08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x326a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326a0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x326a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326a10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x326a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326a14: 0x3e00008  jr          $ra
    ctx->pc = 0x326A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A14u;
        // 0x326a18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326A1Cu;
    // 0x326a1c: 0x0  nop
    ctx->pc = 0x326a1cu;
    // NOP
    ctx->pc = 0x326a20u;
}
