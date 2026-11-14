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

// Function: sub_0049C450
// Address: 0x49c450 - 0x49c500
void sub_0049C450_0x49c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C450_0x49c450");
#endif

    switch (ctx->pc) {
        case 0x49c4f0u: goto label_49c4f0;
        default: break;
    }

    ctx->pc = 0x49c450u;

    // 0x49c450: 0x3e00008  jr          $ra
    ctx->pc = 0x49C450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C450u;
        // 0x49c454: 0x8f82b7b4  lw          $v0, -0x484C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948788)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C458u;
    // 0x49c458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49c458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49c45c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49c45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49c460: 0x8c870020  lw          $a3, 0x20($a0)
    ctx->pc = 0x49c460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x49c464: 0x10e00012  beqz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x49C464u;
    {
        const bool branch_taken_0x49c464 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C464u;
        // 0x49c468: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c464) {
            ctx->pc = 0x49C4B0u;
            goto label_49c4b0;
        }
    }
    ctx->pc = 0x49C46Cu;
    // 0x49c46c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49c46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x49c470: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x49C470u;
    {
        const bool branch_taken_0x49c470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C470u;
        // 0x49c474: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c470) {
            ctx->pc = 0x49C498u;
            goto label_49c498;
        }
    }
    ctx->pc = 0x49C478u;
    // 0x49c478: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49c478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49c47c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49c47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49c480: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49c480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x49c484: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49c484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49c488: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x49c488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x49c48c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x49C48Cu;
    {
        const bool branch_taken_0x49c48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C48Cu;
        // 0x49c490: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c48c) {
            ctx->pc = 0x49C4C0u;
            goto label_49c4c0;
        }
    }
    ctx->pc = 0x49C494u;
    // 0x49c494: 0x0  nop
    ctx->pc = 0x49c494u;
    // NOP
label_49c498:
    // 0x49c498: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49c498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49c49c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49c49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49c4a0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x49c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x49c4a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49c4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49c4a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x49C4A8u;
    {
        const bool branch_taken_0x49c4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C4A8u;
        // 0x49c4ac: 0xe22021  addu        $a0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c4a8) {
            ctx->pc = 0x49C4C0u;
            goto label_49c4c0;
        }
    }
    ctx->pc = 0x49C4B0u;
label_49c4b0:
    // 0x49c4b0: 0x2483002c  addiu       $v1, $a0, 0x2C
    ctx->pc = 0x49c4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x49c4b4: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x49c4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x49c4b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49c4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x49c4bc: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x49c4bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_49c4c0:
    // 0x49c4c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49c4c4: 0x54c20005  bnel        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49C4C4u;
    {
        const bool branch_taken_0x49c4c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x49c4c4) {
            ctx->pc = 0x49C4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49C4C4u;
            // 0x49c4c8: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49C4DCu;
            goto label_49c4dc;
        }
    }
    ctx->pc = 0x49C4CCu;
    // 0x49c4cc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x49c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x49c4d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49c4d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49C4D4u;
    {
        const bool branch_taken_0x49c4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C4D4u;
        // 0x49c4d8: 0xa21018  mult        $v0, $a1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c4d4) {
            ctx->pc = 0x49C4E0u;
            goto label_49c4e0;
        }
    }
    ctx->pc = 0x49C4DCu;
label_49c4dc:
    // 0x49c4dc: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x49c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_49c4e0:
    // 0x49c4e0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x49c4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49c4e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49c4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c4e8: 0xc12abf8  jal         func_4AAFE0
    ctx->pc = 0x49C4E8u;
    SET_GPR_U32(ctx, 31, 0x49C4F0u);
    ctx->pc = 0x49C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49C4E8u;
    // 0x49c4ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAFE0u, 0x49C4E8u, 0x49C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49C4F0u;
label_49c4f0:
    // 0x49c4f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49c4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49c4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x49C4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C4F4u;
        // 0x49c4f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C4FCu;
    // 0x49c4fc: 0x0  nop
    ctx->pc = 0x49c4fcu;
    // NOP
    ctx->pc = 0x49c500u;
}
