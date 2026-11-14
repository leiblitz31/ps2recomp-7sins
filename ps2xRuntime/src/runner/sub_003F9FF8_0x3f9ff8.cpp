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

// Function: sub_003F9FF8
// Address: 0x3f9ff8 - 0x3fa098
void sub_003F9FF8_0x3f9ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F9FF8_0x3f9ff8");
#endif

    switch (ctx->pc) {
        case 0x3fa08cu: goto label_3fa08c;
        default: break;
    }

    ctx->pc = 0x3f9ff8u;

    // 0x3f9ff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f9ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f9ffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f9ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3fa000: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3fa000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fa004: 0x2462ffd7  addiu       $v0, $v1, -0x29
    ctx->pc = 0x3fa004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967255));
    // 0x3fa008: 0x2c420052  sltiu       $v0, $v0, 0x52
    ctx->pc = 0x3fa008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)82) ? 1 : 0);
    // 0x3fa00c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3FA00Cu;
    {
        const bool branch_taken_0x3fa00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA00Cu;
        // 0x3fa010: 0x2462ffa5  addiu       $v0, $v1, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa00c) {
            ctx->pc = 0x3FA080u;
            goto label_3fa080;
        }
    }
    ctx->pc = 0x3FA014u;
    // 0x3fa014: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x3fa014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3fa018: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x3FA018u;
    {
        const bool branch_taken_0x3fa018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fa018) {
            ctx->pc = 0x3FA01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FA018u;
            // 0x3fa01c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FA084u;
            goto label_3fa084;
        }
    }
    ctx->pc = 0x3FA020u;
    // 0x3fa020: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3fa020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3fa024: 0x2462ffd7  addiu       $v0, $v1, -0x29
    ctx->pc = 0x3fa024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967255));
    // 0x3fa028: 0x2c420052  sltiu       $v0, $v0, 0x52
    ctx->pc = 0x3fa028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)82) ? 1 : 0);
    // 0x3fa02c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3FA02Cu;
    {
        const bool branch_taken_0x3fa02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA02Cu;
        // 0x3fa030: 0x2462ffa5  addiu       $v0, $v1, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa02c) {
            ctx->pc = 0x3FA080u;
            goto label_3fa080;
        }
    }
    ctx->pc = 0x3FA034u;
    // 0x3fa034: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x3fa034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3fa038: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3FA038u;
    {
        const bool branch_taken_0x3fa038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fa038) {
            ctx->pc = 0x3FA03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FA038u;
            // 0x3fa03c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FA084u;
            goto label_3fa084;
        }
    }
    ctx->pc = 0x3FA040u;
    // 0x3fa040: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x3fa040u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3fa044: 0x2462ffd7  addiu       $v0, $v1, -0x29
    ctx->pc = 0x3fa044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967255));
    // 0x3fa048: 0x2c420052  sltiu       $v0, $v0, 0x52
    ctx->pc = 0x3fa048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)82) ? 1 : 0);
    // 0x3fa04c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3FA04Cu;
    {
        const bool branch_taken_0x3fa04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA04Cu;
        // 0x3fa050: 0x2462ffa5  addiu       $v0, $v1, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa04c) {
            ctx->pc = 0x3FA080u;
            goto label_3fa080;
        }
    }
    ctx->pc = 0x3FA054u;
    // 0x3fa054: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x3fa054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3fa058: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3FA058u;
    {
        const bool branch_taken_0x3fa058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fa058) {
            ctx->pc = 0x3FA05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FA058u;
            // 0x3fa05c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FA084u;
            goto label_3fa084;
        }
    }
    ctx->pc = 0x3FA060u;
    // 0x3fa060: 0x90a50003  lbu         $a1, 0x3($a1)
    ctx->pc = 0x3fa060u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3fa064: 0x24a2ffd7  addiu       $v0, $a1, -0x29
    ctx->pc = 0x3fa064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
    // 0x3fa068: 0x2c420052  sltiu       $v0, $v0, 0x52
    ctx->pc = 0x3fa068u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)82) ? 1 : 0);
    // 0x3fa06c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FA06Cu;
    {
        const bool branch_taken_0x3fa06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA06Cu;
        // 0x3fa070: 0x24a2ffa5  addiu       $v0, $a1, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa06c) {
            ctx->pc = 0x3FA080u;
            goto label_3fa080;
        }
    }
    ctx->pc = 0x3FA074u;
    // 0x3fa074: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x3fa074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3fa078: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FA078u;
    {
        const bool branch_taken_0x3fa078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA078u;
        // 0x3fa07c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa078) {
            ctx->pc = 0x3FA090u;
            goto label_3fa090;
        }
    }
    ctx->pc = 0x3FA080u;
label_3fa080:
    // 0x3fa080: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fa080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3fa084:
    // 0x3fa084: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3FA084u;
    SET_GPR_U32(ctx, 31, 0x3FA08Cu);
    ctx->pc = 0x3FA088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA084u;
    // 0x3fa088: 0x24a5f648  addiu       $a1, $a1, -0x9B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3FA084u, 0x3FA08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA08Cu;
label_3fa08c:
    // 0x3fa08c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fa08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3fa090:
    // 0x3fa090: 0x3e00008  jr          $ra
    ctx->pc = 0x3FA090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FA094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA090u;
        // 0x3fa094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FA090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FA098u;
}
