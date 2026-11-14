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

// Function: sub_003FF038
// Address: 0x3ff038 - 0x3ff0c0
void sub_003FF038_0x3ff038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FF038_0x3ff038");
#endif

    switch (ctx->pc) {
        case 0x3ff078u: goto label_3ff078;
        case 0x3ff098u: goto label_3ff098;
        case 0x3ff0a8u: goto label_3ff0a8;
        default: break;
    }

    ctx->pc = 0x3ff038u;

    // 0x3ff038: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3ff038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3ff03c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3ff03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3ff040: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3ff040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3ff044: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3ff044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff048: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ff048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3ff04c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3ff04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff050: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ff050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ff054: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3ff054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff058: 0x2e220300  sltiu       $v0, $s1, 0x300
    ctx->pc = 0x3ff058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)768) ? 1 : 0);
    // 0x3ff05c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FF05Cu;
    {
        const bool branch_taken_0x3ff05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF05Cu;
        // 0x3ff060: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff05c) {
            ctx->pc = 0x3FF078u;
            goto label_3ff078;
        }
    }
    ctx->pc = 0x3FF064u;
    // 0x3ff064: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3ff064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff068: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3ff068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3ff06c: 0x24a5fb10  addiu       $a1, $a1, -0x4F0
    ctx->pc = 0x3ff06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966032));
    // 0x3ff070: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3FF070u;
    SET_GPR_U32(ctx, 31, 0x3FF078u);
    ctx->pc = 0x3FF074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF070u;
    // 0x3ff074: 0xac4000d0  sw          $zero, 0xD0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3FF070u, 0x3FF078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF078u;
label_3ff078:
    // 0x3ff078: 0x2e020190  sltiu       $v0, $s0, 0x190
    ctx->pc = 0x3ff078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)400) ? 1 : 0);
    // 0x3ff07c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FF07Cu;
    {
        const bool branch_taken_0x3ff07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF07Cu;
        // 0x3ff080: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff07c) {
            ctx->pc = 0x3FF098u;
            goto label_3ff098;
        }
    }
    ctx->pc = 0x3FF084u;
    // 0x3ff084: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3ff084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3ff088: 0x24a5fb58  addiu       $a1, $a1, -0x4A8
    ctx->pc = 0x3ff088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966104));
    // 0x3ff08c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ff08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff090: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3FF090u;
    SET_GPR_U32(ctx, 31, 0x3FF098u);
    ctx->pc = 0x3FF094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF090u;
    // 0x3ff094: 0xac4000d0  sw          $zero, 0xD0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3FF090u, 0x3FF098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF098u;
label_3ff098:
    // 0x3ff098: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ff098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff09c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3ff09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff0a0: 0xc0ffbb8  jal         func_3FEEE0
    ctx->pc = 0x3FF0A0u;
    SET_GPR_U32(ctx, 31, 0x3FF0A8u);
    ctx->pc = 0x3FF0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF0A0u;
    // 0x3ff0a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FEEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FEEE0u, 0x3FF0A0u, 0x3FF0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF0A8u;
label_3ff0a8:
    // 0x3ff0a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3ff0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ff0ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3ff0acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ff0b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ff0b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ff0b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ff0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ff0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3FF0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FF0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF0B8u;
        // 0x3ff0bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FF0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FF0C0u;
}
