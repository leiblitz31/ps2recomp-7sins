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

// Function: sub_00328528
// Address: 0x328528 - 0x328588
void sub_00328528_0x328528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328528_0x328528");
#endif

    switch (ctx->pc) {
        case 0x328568u: goto label_328568;
        case 0x328574u: goto label_328574;
        default: break;
    }

    ctx->pc = 0x328528u;

    // 0x328528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32852c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x32852cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x328530: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x328530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x328534: 0x24422318  addiu       $v0, $v0, 0x2318
    ctx->pc = 0x328534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8984));
    // 0x328538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32853c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32853cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328540: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x328540u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4F2320u));
    // 0x328544: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x328544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x328548: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x328548u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4F231Cu));
    // 0x32854c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32854cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x328550: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x328550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x328554: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x328554u;
    {
        const bool branch_taken_0x328554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328554u;
        // 0x328558: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328554) {
            ctx->pc = 0x328574u;
            goto label_328574;
        }
    }
    ctx->pc = 0x32855Cu;
    // 0x32855c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32855cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328560: 0xc0ca0cc  jal         func_328330
    ctx->pc = 0x328560u;
    SET_GPR_U32(ctx, 31, 0x328568u);
    ctx->pc = 0x328564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328560u;
    // 0x328564: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328330u, 0x328560u, 0x328568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328568u;
label_328568:
    // 0x328568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32856c: 0xc0ca0fe  jal         func_3283F8
    ctx->pc = 0x32856Cu;
    SET_GPR_U32(ctx, 31, 0x328574u);
    ctx->pc = 0x328570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32856Cu;
    // 0x328570: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3283F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3283F8u, 0x32856Cu, 0x328574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328574u;
label_328574:
    // 0x328574: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x328574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x328578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32857c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32857cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328580: 0x3e00008  jr          $ra
    ctx->pc = 0x328580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328580u;
        // 0x328584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328588u;
}
