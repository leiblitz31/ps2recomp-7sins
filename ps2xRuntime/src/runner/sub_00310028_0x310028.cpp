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

// Function: sub_00310028
// Address: 0x310028 - 0x3100d0
void sub_00310028_0x310028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310028_0x310028");
#endif

    switch (ctx->pc) {
        case 0x310040u: goto label_310040;
        case 0x310068u: goto label_310068;
        case 0x310090u: goto label_310090;
        case 0x3100a4u: goto label_3100a4;
        default: break;
    }

    ctx->pc = 0x310028u;

    // 0x310028: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x310028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31002c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x31002cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x310030: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x310030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x310034: 0xac432280  sw          $v1, 0x2280($v0)
    ctx->pc = 0x310034u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4F2280u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4F2280u, _value); } while (0);
    // 0x310038: 0x24847e40  addiu       $a0, $a0, 0x7E40
    ctx->pc = 0x310038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32320));
    // 0x31003c: 0x24833340  addiu       $v1, $a0, 0x3340
    ctx->pc = 0x31003cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 13120));
label_310040:
    // 0x310040: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x310040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x310044: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x310044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x310048: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x310048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x31004c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x31004cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x310050: 0x24840334  addiu       $a0, $a0, 0x334
    ctx->pc = 0x310050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 820));
    // 0x310054: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x310054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x310058: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x310058u;
    {
        const bool branch_taken_0x310058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x310058) {
            ctx->pc = 0x310040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310040;
        }
    }
    ctx->pc = 0x310060u;
    // 0x310060: 0x3e00008  jr          $ra
    ctx->pc = 0x310060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310060u;
        // 0x310064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310068u;
label_310068:
    // 0x310068: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x310068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31006c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x31006cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x310070: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x310070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x310074: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x310074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x310078: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x310078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31007c: 0x24717e40  addiu       $s1, $v1, 0x7E40
    ctx->pc = 0x31007cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 32320));
    // 0x310080: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x310080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x310084: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x310084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310088: 0xac402280  sw          $zero, 0x2280($v0)
    ctx->pc = 0x310088u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4F2280u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4F2280u, _value); } while (0);
    // 0x31008c: 0x0  nop
    ctx->pc = 0x31008cu;
    // NOP
label_310090:
    // 0x310090: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x310090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x310094: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x310094u;
    {
        const bool branch_taken_0x310094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310094) {
            ctx->pc = 0x310098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310094u;
            // 0x310098: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3100ACu;
            goto label_3100ac;
        }
    }
    ctx->pc = 0x31009Cu;
    // 0x31009c: 0xc0c4076  jal         func_3101D8
    ctx->pc = 0x31009Cu;
    SET_GPR_U32(ctx, 31, 0x3100A4u);
    ctx->pc = 0x3100A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31009Cu;
    // 0x3100a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3101D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3101D8u, 0x31009Cu, 0x3100A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3100A4u;
label_3100a4:
    // 0x3100a4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3100A4u;
    {
        const bool branch_taken_0x3100a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3100A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100A4u;
        // 0x3100a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100a4) {
            ctx->pc = 0x3100BCu;
            goto label_3100bc;
        }
    }
    ctx->pc = 0x3100ACu;
label_3100ac:
    // 0x3100ac: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x3100acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3100b0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3100B0u;
    {
        const bool branch_taken_0x3100b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3100B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100B0u;
        // 0x3100b4: 0x26310334  addiu       $s1, $s1, 0x334 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100b0) {
            ctx->pc = 0x310090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310090;
        }
    }
    ctx->pc = 0x3100B8u;
    // 0x3100b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3100b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3100bc:
    // 0x3100bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3100bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3100c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3100c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3100c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3100c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3100c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3100C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3100CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100C8u;
        // 0x3100cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3100C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3100D0u;
}
