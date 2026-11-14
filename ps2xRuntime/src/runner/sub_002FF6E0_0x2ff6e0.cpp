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

// Function: sub_002FF6E0
// Address: 0x2ff6e0 - 0x2ff770
void sub_002FF6E0_0x2ff6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF6E0_0x2ff6e0");
#endif

    ctx->pc = 0x2ff6e0u;

    // 0x2ff6e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ff6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff6e4: 0x51078  dsll        $v0, $a1, 1
    ctx->pc = 0x2ff6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
    // 0x2ff6e8: 0x2357e  dsrl32      $a2, $v0, 21
    ctx->pc = 0x2ff6e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 21));
    // 0x2ff6ec: 0x64c6fbcd  daddiu      $a2, $a2, -0x433
    ctx->pc = 0x2ff6ecu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294966221);
    // 0x2ff6f0: 0x28c2ffcb  slti        $v0, $a2, -0x35
    ctx->pc = 0x2ff6f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x2ff6f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF6F4u;
    {
        const bool branch_taken_0x2ff6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6F4u;
        // 0x2ff6f8: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff6f4) {
            ctx->pc = 0x2FF704u;
            goto label_2ff704;
        }
    }
    ctx->pc = 0x2FF6FCu;
    // 0x2ff6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6FCu;
        // 0x2ff700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF704u;
label_2ff704:
    // 0x2ff704: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF704u;
    {
        const bool branch_taken_0x2ff704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF704u;
        // 0x2ff708: 0x51338  dsll        $v0, $a1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff704) {
            ctx->pc = 0x2FF714u;
            goto label_2ff714;
        }
    }
    ctx->pc = 0x2FF70Cu;
    // 0x2ff70c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF70Cu;
        // 0x2ff710: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF714u;
label_2ff714:
    // 0x2ff714: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2ff714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ff718: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x2ff718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x2ff71c: 0x22b3a  dsrl        $a1, $v0, 12
    ctx->pc = 0x2ff71cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
    // 0x2ff720: 0x4c1000d  bgez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2FF720u;
    {
        const bool branch_taken_0x2ff720 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2FF724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF720u;
        // 0x2ff724: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff720) {
            ctx->pc = 0x2FF758u;
            goto label_2ff758;
        }
    }
    ctx->pc = 0x2FF728u;
    // 0x2ff728: 0x6302f  dsubu       $a2, $zero, $a2
    ctx->pc = 0x2ff728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x2ff72c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ff72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ff730: 0x64c3fffe  daddiu      $v1, $a2, -0x2
    ctx->pc = 0x2ff730u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967294);
    // 0x2ff734: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ff734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ff738: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2ff738u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2ff73c: 0x652816  dsrlv       $a1, $a1, $v1
    ctx->pc = 0x2ff73cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x2ff740: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x2ff740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x2ff744: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF744u;
    {
        const bool branch_taken_0x2ff744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ff744) {
            ctx->pc = 0x2FF748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF744u;
            // 0x2ff748: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF764u;
            goto label_2ff764;
        }
    }
    ctx->pc = 0x2FF74Cu;
    // 0x2ff74c: 0x510ba  dsrl        $v0, $a1, 2
    ctx->pc = 0x2ff74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
    // 0x2ff750: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF750u;
    {
        const bool branch_taken_0x2ff750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF750u;
        // 0x2ff754: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff750) {
            ctx->pc = 0x2FF764u;
            goto label_2ff764;
        }
    }
    ctx->pc = 0x2FF758u;
label_2ff758:
    // 0x2ff758: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2ff758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2ff75c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ff75cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ff760: 0x452814  dsllv       $a1, $a1, $v0
    ctx->pc = 0x2ff760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 2) & 0x3F));
label_2ff764:
    // 0x2ff764: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x2ff764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2ff768: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF768u;
        // 0x2ff76c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF770u;
}
