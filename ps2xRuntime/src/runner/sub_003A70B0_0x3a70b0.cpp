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

// Function: sub_003A70B0
// Address: 0x3a70b0 - 0x3a7118
void sub_003A70B0_0x3a70b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A70B0_0x3a70b0");
#endif

    switch (ctx->pc) {
        case 0x3a70fcu: goto label_3a70fc;
        default: break;
    }

    ctx->pc = 0x3a70b0u;

    // 0x3a70b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a70b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a70b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a70b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a70b8: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x3a70b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x3a70bc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3A70BCu;
    {
        const bool branch_taken_0x3a70bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A70C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70BCu;
        // 0x3a70c0: 0x8f82bd80  lw          $v0, -0x4280($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a70bc) {
            ctx->pc = 0x3A7108u;
            goto label_3a7108;
        }
    }
    ctx->pc = 0x3A70C4u;
    // 0x3a70c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a70c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a70c8: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x3a70c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a70cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a70ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a70d0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A70D0u;
    {
        const bool branch_taken_0x3a70d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a70d0) {
            ctx->pc = 0x3A70D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A70D0u;
            // 0x3a70d4: 0x8c820078  lw          $v0, 0x78($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A70F0u;
            goto label_3a70f0;
        }
    }
    ctx->pc = 0x3A70D8u;
    // 0x3a70d8: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x3a70d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3a70dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a70dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a70e0: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A70E0u;
    {
        const bool branch_taken_0x3a70e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a70e0) {
            ctx->pc = 0x3A70E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A70E0u;
            // 0x3a70e4: 0x8c820078  lw          $v0, 0x78($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A70F0u;
            goto label_3a70f0;
        }
    }
    ctx->pc = 0x3A70E8u;
    // 0x3a70e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A70E8u;
    {
        const bool branch_taken_0x3a70e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A70ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70E8u;
        // 0x3a70ec: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a70e8) {
            ctx->pc = 0x3A70FCu;
            goto label_3a70fc;
        }
    }
    ctx->pc = 0x3A70F0u;
label_3a70f0:
    // 0x3a70f0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3a70f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3a70f4: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x3A70F4u;
    SET_GPR_U32(ctx, 31, 0x3A70FCu);
    ctx->pc = 0x3A70F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A70F4u;
    // 0x3a70f8: 0x94450004  lhu         $a1, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x3A70F4u, 0x3A70FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A70FCu;
label_3a70fc:
    // 0x3a70fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a70fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a7100: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A7100u;
    {
        const bool branch_taken_0x3a7100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7100u;
        // 0x3a7104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7100) {
            ctx->pc = 0x3A710Cu;
            goto label_3a710c;
        }
    }
    ctx->pc = 0x3A7108u;
label_3a7108:
    // 0x3a7108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a7108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a710c:
    // 0x3a710c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a710cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7110: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7110u;
        // 0x3a7114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7118u;
}
