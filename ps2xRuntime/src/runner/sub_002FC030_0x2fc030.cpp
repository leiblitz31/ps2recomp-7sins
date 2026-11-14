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

// Function: sub_002FC030
// Address: 0x2fc030 - 0x2fc0d0
void sub_002FC030_0x2fc030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC030_0x2fc030");
#endif

    switch (ctx->pc) {
        case 0x2fc054u: goto label_2fc054;
        case 0x2fc070u: goto label_2fc070;
        case 0x2fc08cu: goto label_2fc08c;
        case 0x2fc0a0u: goto label_2fc0a0;
        case 0x2fc0acu: goto label_2fc0ac;
        default: break;
    }

    ctx->pc = 0x2fc030u;

    // 0x2fc030: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2fc030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2fc034: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2fc034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2fc038: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x2fc038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x2fc03c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fc03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc040: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x2fc040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x2fc044: 0x2484a378  addiu       $a0, $a0, -0x5C88
    ctx->pc = 0x2fc044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943608));
    // 0x2fc048: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x2fc048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x2fc04c: 0xc0c0bba  jal         func_302EE8
    ctx->pc = 0x2FC04Cu;
    SET_GPR_U32(ctx, 31, 0x2FC054u);
    ctx->pc = 0x2FC050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC04Cu;
    // 0x2fc050: 0xffb00100  sd          $s0, 0x100($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EE8u, 0x2FC04Cu, 0x2FC054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC054u;
label_2fc054:
    // 0x2fc054: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2fc054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc058: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC058u;
    {
        const bool branch_taken_0x2fc058 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2FC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC058u;
        // 0x2fc05c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc058) {
            ctx->pc = 0x2FC068u;
            goto label_2fc068;
        }
    }
    ctx->pc = 0x2FC060u;
    // 0x2fc060: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2FC060u;
    {
        const bool branch_taken_0x2fc060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC060u;
        // 0x2fc064: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc060) {
            ctx->pc = 0x2FC0B8u;
            goto label_2fc0b8;
        }
    }
    ctx->pc = 0x2FC068u;
label_2fc068:
    // 0x2fc068: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FC068u;
    {
        const bool branch_taken_0x2fc068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC068u;
        // 0x2fc06c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc068) {
            ctx->pc = 0x2FC074u;
            goto label_2fc074;
        }
    }
    ctx->pc = 0x2FC070u;
label_2fc070:
    // 0x2fc070: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2fc070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2fc074:
    // 0x2fc074: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x2fc074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2fc078: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FC078u;
    {
        const bool branch_taken_0x2fc078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC078u;
        // 0x2fc07c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc078) {
            ctx->pc = 0x2FC098u;
            goto label_2fc098;
        }
    }
    ctx->pc = 0x2FC080u;
    // 0x2fc080: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fc080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc084: 0xc0c0d4c  jal         func_303530
    ctx->pc = 0x2FC084u;
    SET_GPR_U32(ctx, 31, 0x2FC08Cu);
    ctx->pc = 0x2FC088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC084u;
    // 0x2fc088: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303530u, 0x2FC084u, 0x2FC08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC08Cu;
label_2fc08c:
    // 0x2fc08c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2fc08cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fc090: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2FC090u;
    {
        const bool branch_taken_0x2fc090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC090u;
        // 0x2fc094: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc090) {
            ctx->pc = 0x2FC070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fc070;
        }
    }
    ctx->pc = 0x2FC098u;
label_2fc098:
    // 0x2fc098: 0xc0c0c5e  jal         func_303178
    ctx->pc = 0x2FC098u;
    SET_GPR_U32(ctx, 31, 0x2FC0A0u);
    ctx->pc = 0x2FC09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC098u;
    // 0x2fc09c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303178u, 0x2FC098u, 0x2FC0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC0A0u;
label_2fc0a0:
    // 0x2fc0a0: 0x2624fff7  addiu       $a0, $s1, -0x9
    ctx->pc = 0x2fc0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967287));
    // 0x2fc0a4: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x2FC0A4u;
    SET_GPR_U32(ctx, 31, 0x2FC0ACu);
    ctx->pc = 0x2FC0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC0A4u;
    // 0x2fc0a8: 0x3a42021  addu        $a0, $sp, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x2FC0A4u, 0x2FC0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC0ACu;
label_2fc0ac:
    // 0x2fc0ac: 0x3c030131  lui         $v1, 0x131
    ctx->pc = 0x2fc0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)305 << 16));
    // 0x2fc0b0: 0x34635670  ori         $v1, $v1, 0x5670
    ctx->pc = 0x2fc0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22128);
    // 0x2fc0b4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2fc0b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2fc0b8:
    // 0x2fc0b8: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x2fc0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2fc0bc: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x2fc0bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2fc0c0: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x2fc0c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2fc0c4: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2fc0c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2fc0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0C8u;
        // 0x2fc0cc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC0D0u;
}
