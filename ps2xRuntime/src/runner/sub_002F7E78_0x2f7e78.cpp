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

// Function: sub_002F7E78
// Address: 0x2f7e78 - 0x2f7f50
void sub_002F7E78_0x2f7e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7E78_0x2f7e78");
#endif

    switch (ctx->pc) {
        case 0x2f7ed8u: goto label_2f7ed8;
        case 0x2f7f28u: goto label_2f7f28;
        case 0x2f7f3cu: goto label_2f7f3c;
        default: break;
    }

    ctx->pc = 0x2f7e78u;

    // 0x2f7e78: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f7e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f7e7c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f7e7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f7e80: 0x8c430ac8  lw          $v1, 0xAC8($v0)
    ctx->pc = 0x2f7e80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F0AC8u));
    // 0x2f7e84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f7e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f7e88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f7e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f7e8c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2F7E8Cu;
    {
        const bool branch_taken_0x2f7e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7E8Cu;
        // 0x2f7e90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7e8c) {
            ctx->pc = 0x2F7F40u;
            goto label_2f7f40;
        }
    }
    ctx->pc = 0x2F7E94u;
    // 0x2f7e94: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f7e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f7e98: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x2f7e98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
    // 0x2f7e9c: 0x24f0c740  addiu       $s0, $a3, -0x38C0
    ctx->pc = 0x2f7e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952768));
    // 0x2f7ea0: 0x24880014  addiu       $t0, $a0, 0x14
    ctx->pc = 0x2f7ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2f7ea4: 0xace2c740  sw          $v0, -0x38C0($a3)
    ctx->pc = 0x2f7ea4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60C740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C740u, _value); } while (0);
    // 0x2f7ea8: 0x26090014  addiu       $t1, $s0, 0x14
    ctx->pc = 0x2f7ea8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2f7eac: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x2f7eacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x60C768u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C768u, _value); } while (0);
    // 0x2f7eb0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2f7eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f7eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f7eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7eb8: 0xae06002c  sw          $a2, 0x2C($s0)
    ctx->pc = 0x2f7eb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x60C76Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C76Cu, _value); } while (0);
    // 0x2f7ebc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2f7ebcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60C744u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C744u, _value); } while (0);
    // 0x2f7ec0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2f7ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f7ec4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2f7ec4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60C748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C748u, _value); } while (0);
    // 0x2f7ec8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f7ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f7ecc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2f7eccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60C74Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C74Cu, _value); } while (0);
    // 0x2f7ed0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2f7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f7ed4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2f7ed4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60C750u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C750u, _value); } while (0);
label_2f7ed8:
    // 0x2f7ed8: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x2f7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2f7edc: 0x1252021  addu        $a0, $t1, $a1
    ctx->pc = 0x2f7edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x2f7ee0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2f7ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f7ee4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f7ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f7ee8: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x2f7ee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2f7eec: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2f7eecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f7ef0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F7EF0u;
    {
        const bool branch_taken_0x2f7ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7ef0) {
            ctx->pc = 0x2F7ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7ed8;
        }
    }
    ctx->pc = 0x2F7EF8u;
    // 0x2f7ef8: 0x24e7c740  addiu       $a3, $a3, -0x38C0
    ctx->pc = 0x2f7ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952768));
    // 0x2f7efc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f7efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f7f00: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2f7f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2f7f04: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f7f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f7f08: 0x2484c648  addiu       $a0, $a0, -0x39B8
    ctx->pc = 0x2f7f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952520));
    // 0x2f7f0c: 0x34a51301  ori         $a1, $a1, 0x1301
    ctx->pc = 0x2f7f0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4865);
    // 0x2f7f10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f7f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7f14: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2f7f14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f7f18: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2f7f18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7f1c: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x2f7f1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f7f20: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x2F7F20u;
    SET_GPR_U32(ctx, 31, 0x2F7F28u);
    ctx->pc = 0x2F7F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7F20u;
    // 0x2f7f24: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x2F7F20u, 0x2F7F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7F28u;
label_2f7f28:
    // 0x2f7f28: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7F28u;
    {
        const bool branch_taken_0x2f7f28 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f7f28) {
            ctx->pc = 0x2F7F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7F28u;
            // 0x2f7f2c: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7F40u;
            goto label_2f7f40;
        }
    }
    ctx->pc = 0x2F7F30u;
    // 0x2f7f30: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f7f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f7f34: 0xc0be29c  jal         func_2F8A70
    ctx->pc = 0x2F7F34u;
    SET_GPR_U32(ctx, 31, 0x2F7F3Cu);
    ctx->pc = 0x2F7F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7F34u;
    // 0x2f7f38: 0x24849d08  addiu       $a0, $a0, -0x62F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8A70u, 0x2F7F34u, 0x2F7F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7F3Cu;
label_2f7f3c:
    // 0x2f7f3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7f40:
    // 0x2f7f40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f7f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7f44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f7f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7f48: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F48u;
        // 0x2f7f4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7F50u;
}
