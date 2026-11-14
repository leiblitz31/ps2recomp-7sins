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

// Function: sub_002E82B0
// Address: 0x2e82b0 - 0x2e8320
void sub_002E82B0_0x2e82b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E82B0_0x2e82b0");
#endif

    switch (ctx->pc) {
        case 0x2e82fcu: goto label_2e82fc;
        default: break;
    }

    ctx->pc = 0x2e82b0u;

    // 0x2e82b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e82b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e82b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e82b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e82b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e82b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e82bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e82bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e82c0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E82C0u;
    {
        const bool branch_taken_0x2e82c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E82C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82C0u;
        // 0x2e82c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82c0) {
            ctx->pc = 0x2E8300u;
            goto label_2e8300;
        }
    }
    ctx->pc = 0x2E82C8u;
    // 0x2e82c8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e82cc: 0x24426a80  addiu       $v0, $v0, 0x6A80
    ctx->pc = 0x2e82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27264));
    // 0x2e82d0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E82D0u;
    {
        const bool branch_taken_0x2e82d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E82D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82D0u;
        // 0x2e82d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82d0) {
            ctx->pc = 0x2E82E4u;
            goto label_2e82e4;
        }
    }
    ctx->pc = 0x2E82D8u;
    // 0x2e82d8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e82d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e82dc: 0x24426a70  addiu       $v0, $v0, 0x6A70
    ctx->pc = 0x2e82dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27248));
    // 0x2e82e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2e82e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2e82e4:
    // 0x2e82e4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2e82e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2e82e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e82e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e82ec: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E82ECu;
    {
        const bool branch_taken_0x2e82ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82ECu;
        // 0x2e82f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82ec) {
            ctx->pc = 0x2E82FCu;
            goto label_2e82fc;
        }
    }
    ctx->pc = 0x2E82F4u;
    // 0x2e82f4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2E82F4u;
    SET_GPR_U32(ctx, 31, 0x2E82FCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2E82F4u, 0x2E82FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E82FCu;
label_2e82fc:
    // 0x2e82fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e82fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8300:
    // 0x2e8300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e8300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8308: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8308u;
        // 0x2e830c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8310u;
    // 0x2e8310: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e8310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2e8314: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8314u;
        // 0x2e8318: 0x24428db0  addiu       $v0, $v0, -0x7250 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938032));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E831Cu;
    // 0x2e831c: 0x0  nop
    ctx->pc = 0x2e831cu;
    // NOP
    ctx->pc = 0x2e8320u;
}
