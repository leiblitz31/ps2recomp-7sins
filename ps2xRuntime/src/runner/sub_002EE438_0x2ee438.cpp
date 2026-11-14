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

// Function: sub_002EE438
// Address: 0x2ee438 - 0x2ee4b8
void sub_002EE438_0x2ee438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE438_0x2ee438");
#endif

    ctx->pc = 0x2ee438u;

    // 0x2ee438: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ee438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2ee43c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ee43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ee440: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE440u;
    {
        const bool branch_taken_0x2ee440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE440u;
        // 0x2ee444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee440) {
            ctx->pc = 0x2EE450u;
            goto label_2ee450;
        }
    }
    ctx->pc = 0x2EE448u;
    // 0x2ee448: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ee448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ee44c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2ee44cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_2ee450:
    // 0x2ee450: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x2ee450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x2ee454: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ee454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ee458: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE458u;
    {
        const bool branch_taken_0x2ee458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE458u;
        // 0x2ee45c: 0x3c02f000  lui         $v0, 0xF000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee458) {
            ctx->pc = 0x2EE468u;
            goto label_2ee468;
        }
    }
    ctx->pc = 0x2EE460u;
    // 0x2ee460: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2ee460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2ee464: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2ee464u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_2ee468:
    // 0x2ee468: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ee468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ee46c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE46Cu;
    {
        const bool branch_taken_0x2ee46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE46Cu;
        // 0x2ee470: 0x3c02c000  lui         $v0, 0xC000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee46c) {
            ctx->pc = 0x2EE47Cu;
            goto label_2ee47c;
        }
    }
    ctx->pc = 0x2EE474u;
    // 0x2ee474: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2ee474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2ee478: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2ee478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2ee47c:
    // 0x2ee47c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ee47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ee480: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE480u;
    {
        const bool branch_taken_0x2ee480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee480) {
            ctx->pc = 0x2EE490u;
            goto label_2ee490;
        }
    }
    ctx->pc = 0x2EE488u;
    // 0x2ee488: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2ee488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2ee48c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ee48cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2ee490:
    // 0x2ee490: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EE490u;
    {
        const bool branch_taken_0x2ee490 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2EE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE490u;
        // 0x2ee494: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee490) {
            ctx->pc = 0x2EE4B0u;
            goto label_2ee4b0;
        }
    }
    ctx->pc = 0x2EE498u;
    // 0x2ee498: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2ee498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2ee49c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ee49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ee4a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2ee4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ee4a4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE4A4u;
    {
        const bool branch_taken_0x2ee4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4A4u;
        // 0x2ee4a8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee4a4) {
            ctx->pc = 0x2EE4B0u;
            goto label_2ee4b0;
        }
    }
    ctx->pc = 0x2EE4ACu;
    // 0x2ee4ac: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2ee4acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ee4b0:
    // 0x2ee4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE4B8u;
}
