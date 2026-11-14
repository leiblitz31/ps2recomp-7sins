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

// Function: sub_00413128
// Address: 0x413128 - 0x413188
void sub_00413128_0x413128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413128_0x413128");
#endif

    switch (ctx->pc) {
        case 0x413150u: goto label_413150;
        default: break;
    }

    ctx->pc = 0x413128u;

    // 0x413128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x413128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41312c: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x41312cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x413130: 0x8f85ad5c  lw          $a1, -0x52A4($gp)
    ctx->pc = 0x413130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946140)));
    // 0x413134: 0x2508e808  addiu       $t0, $t0, -0x17F8
    ctx->pc = 0x413134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961160));
    // 0x413138: 0x8f87ad60  lw          $a3, -0x52A0($gp)
    ctx->pc = 0x413138u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946144)));
    // 0x41313c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x41313cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x413140: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x413140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x413144: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x413144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x413148: 0xc10408c  jal         func_410230
    ctx->pc = 0x413148u;
    SET_GPR_U32(ctx, 31, 0x413150u);
    ctx->pc = 0x41314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413148u;
    // 0x41314c: 0x3c090004  lui         $t1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x413148u, 0x413150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413150u;
label_413150:
    // 0x413150: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x413150u;
    {
        const bool branch_taken_0x413150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413150u;
        // 0x413154: 0xaf82bde0  sw          $v0, -0x4220($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413150) {
            ctx->pc = 0x413164u;
            goto label_413164;
        }
    }
    ctx->pc = 0x413158u;
    // 0x413158: 0xaf80ad58  sw          $zero, -0x52A8($gp)
    ctx->pc = 0x413158u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946136), GPR_U32(ctx, 0));
    // 0x41315c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x41315Cu;
    {
        const bool branch_taken_0x41315c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x413160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41315Cu;
        // 0x413160: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41315c) {
            ctx->pc = 0x413168u;
            goto label_413168;
        }
    }
    ctx->pc = 0x413164u;
label_413164:
    // 0x413164: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x413164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413168:
    // 0x413168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x413168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41316c: 0x3e00008  jr          $ra
    ctx->pc = 0x41316Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41316Cu;
        // 0x413170: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41316Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x413174u;
    // 0x413174: 0x0  nop
    ctx->pc = 0x413174u;
    // NOP
    // 0x413178: 0xaf84ad5c  sw          $a0, -0x52A4($gp)
    ctx->pc = 0x413178u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946140), GPR_U32(ctx, 4));
    // 0x41317c: 0x3e00008  jr          $ra
    ctx->pc = 0x41317Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41317Cu;
        // 0x413180: 0xaf85ad60  sw          $a1, -0x52A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946144), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41317Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x413184u;
    // 0x413184: 0x0  nop
    ctx->pc = 0x413184u;
    // NOP
    ctx->pc = 0x413188u;
}
