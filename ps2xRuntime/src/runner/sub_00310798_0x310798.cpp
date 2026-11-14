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

// Function: sub_00310798
// Address: 0x310798 - 0x3107f8
void sub_00310798_0x310798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310798_0x310798");
#endif

    switch (ctx->pc) {
        case 0x3107acu: goto label_3107ac;
        default: break;
    }

    ctx->pc = 0x310798u;

    // 0x310798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x310798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31079c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31079cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3107a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3107a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3107a4: 0xc0c41b2  jal         func_3106C8
    ctx->pc = 0x3107A4u;
    SET_GPR_U32(ctx, 31, 0x3107ACu);
    ctx->pc = 0x3107A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3107A4u;
    // 0x3107a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3106C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3106C8u, 0x3107A4u, 0x3107ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3107ACu;
label_3107ac:
    // 0x3107ac: 0x8c45007c  lw          $a1, 0x7C($v0)
    ctx->pc = 0x3107acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x3107b0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3107B0u;
    {
        const bool branch_taken_0x3107b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3107B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107B0u;
        // 0x3107b4: 0x24040334  addiu       $a0, $zero, 0x334 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107b0) {
            ctx->pc = 0x3107D8u;
            goto label_3107d8;
        }
    }
    ctx->pc = 0x3107B8u;
    // 0x3107b8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3107b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3107bc: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x3107bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3107c0: 0x24427e40  addiu       $v0, $v0, 0x7E40
    ctx->pc = 0x3107c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32320));
    // 0x3107c4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3107c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3107c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3107c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3107cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3107ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3107d0: 0x54a30003  bnel        $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3107D0u;
    {
        const bool branch_taken_0x3107d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3107d0) {
            ctx->pc = 0x3107D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3107D0u;
            // 0x3107d4: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3107E0u;
            goto label_3107e0;
        }
    }
    ctx->pc = 0x3107D8u;
label_3107d8:
    // 0x3107d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3107D8u;
    {
        const bool branch_taken_0x3107d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3107DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107D8u;
        // 0x3107dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107d8) {
            ctx->pc = 0x3107E4u;
            goto label_3107e4;
        }
    }
    ctx->pc = 0x3107E0u;
label_3107e0:
    // 0x3107e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3107e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3107e4:
    // 0x3107e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3107e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3107e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3107e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3107ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3107ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3107F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3107ECu;
        // 0x3107f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3107ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3107F4u;
    // 0x3107f4: 0x0  nop
    ctx->pc = 0x3107f4u;
    // NOP
    ctx->pc = 0x3107f8u;
}
