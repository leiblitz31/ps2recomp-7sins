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

// Function: sub_002EE4B8
// Address: 0x2ee4b8 - 0x2ee578
void sub_002EE4B8_0x2ee4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE4B8_0x2ee4b8");
#endif

    ctx->pc = 0x2ee4b8u;

    // 0x2ee4b8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2ee4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee4bc: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x2ee4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x2ee4c0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EE4C0u;
    {
        const bool branch_taken_0x2ee4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4C0u;
        // 0x2ee4c4: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee4c0) {
            ctx->pc = 0x2EE4F8u;
            goto label_2ee4f8;
        }
    }
    ctx->pc = 0x2EE4C8u;
    // 0x2ee4c8: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2EE4C8u;
    {
        const bool branch_taken_0x2ee4c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4C8u;
        // 0x2ee4cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee4c8) {
            ctx->pc = 0x2EE56Cu;
            goto label_2ee56c;
        }
    }
    ctx->pc = 0x2EE4D0u;
    // 0x2ee4d0: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x2ee4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x2ee4d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE4D4u;
    {
        const bool branch_taken_0x2ee4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4D4u;
        // 0x2ee4d8: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee4d4) {
            ctx->pc = 0x2EE4E8u;
            goto label_2ee4e8;
        }
    }
    ctx->pc = 0x2EE4DCu;
    // 0x2ee4dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ee4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4E0u;
        // 0x2ee4e4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE4E8u;
label_2ee4e8:
    // 0x2ee4e8: 0x51882  srl         $v1, $a1, 2
    ctx->pc = 0x2ee4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x2ee4ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ee4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4F0u;
        // 0x2ee4f4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE4F8u;
label_2ee4f8:
    // 0x2ee4f8: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2ee4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2ee4fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE4FCu;
    {
        const bool branch_taken_0x2ee4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4FCu;
        // 0x2ee500: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee4fc) {
            ctx->pc = 0x2EE50Cu;
            goto label_2ee50c;
        }
    }
    ctx->pc = 0x2EE504u;
    // 0x2ee504: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2ee504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ee508: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x2ee508u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_2ee50c:
    // 0x2ee50c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2ee50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ee510: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE510u;
    {
        const bool branch_taken_0x2ee510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE510u;
        // 0x2ee514: 0x30a2000f  andi        $v0, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee510) {
            ctx->pc = 0x2EE524u;
            goto label_2ee524;
        }
    }
    ctx->pc = 0x2EE518u;
    // 0x2ee518: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2ee518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2ee51c: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x2ee51cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x2ee520: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x2ee520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_2ee524:
    // 0x2ee524: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE524u;
    {
        const bool branch_taken_0x2ee524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE524u;
        // 0x2ee528: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee524) {
            ctx->pc = 0x2EE538u;
            goto label_2ee538;
        }
    }
    ctx->pc = 0x2EE52Cu;
    // 0x2ee52c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2ee52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2ee530: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x2ee530u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x2ee534: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x2ee534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_2ee538:
    // 0x2ee538: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE538u;
    {
        const bool branch_taken_0x2ee538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE538u;
        // 0x2ee53c: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee538) {
            ctx->pc = 0x2EE54Cu;
            goto label_2ee54c;
        }
    }
    ctx->pc = 0x2EE540u;
    // 0x2ee540: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2ee540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2ee544: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x2ee544u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x2ee548: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2ee548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2ee54c:
    // 0x2ee54c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE54Cu;
    {
        const bool branch_taken_0x2ee54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee54c) {
            ctx->pc = 0x2EE550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE54Cu;
            // 0x2ee550: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE568u;
            goto label_2ee568;
        }
    }
    ctx->pc = 0x2EE554u;
    // 0x2ee554: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x2ee554u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2ee558: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ee558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ee55c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE55Cu;
    {
        const bool branch_taken_0x2ee55c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE55Cu;
        // 0x2ee560: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee55c) {
            ctx->pc = 0x2EE56Cu;
            goto label_2ee56c;
        }
    }
    ctx->pc = 0x2EE564u;
    // 0x2ee564: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2ee564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_2ee568:
    // 0x2ee568: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ee568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ee56c:
    // 0x2ee56c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE574u;
    // 0x2ee574: 0x0  nop
    ctx->pc = 0x2ee574u;
    // NOP
    ctx->pc = 0x2ee578u;
}
