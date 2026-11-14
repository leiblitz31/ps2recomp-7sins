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

// Function: sub_00400004
// Address: 0x400004 - 0x400108
void sub_00400004_0x400004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00400004_0x400004");
#endif

    switch (ctx->pc) {
        case 0x400014u: goto label_400014;
        case 0x400088u: goto label_400088;
        case 0x4000fcu: goto label_4000fc;
        default: break;
    }

    ctx->pc = 0x400004u;

    // 0x400004: 0x1500ffea  bnez        $t0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x400004u;
    {
        const bool branch_taken_0x400004 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x400008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400004u;
        // 0x400008: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400004) {
            ctx->pc = 0x3FFFB0u;
            return;
        }
    }
    ctx->pc = 0x40000Cu;
    // 0x40000c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x40000Cu;
    {
        const bool branch_taken_0x40000c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40000c) {
            ctx->pc = 0x4000FCu;
            goto label_4000fc;
        }
    }
    ctx->pc = 0x400014u;
label_400014:
    // 0x400014: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x400014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400018: 0x10800038  beqz        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x400018u;
    {
        const bool branch_taken_0x400018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400018u;
        // 0x40001c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400018) {
            ctx->pc = 0x4000FCu;
            goto label_4000fc;
        }
    }
    ctx->pc = 0x400020u;
    // 0x400020: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x400020u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400024: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x400024u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400028: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x400028u;
    {
        const bool branch_taken_0x400028 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x40002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400028u;
        // 0x40002c: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x400028) {
            ctx->pc = 0x400038u;
            goto label_400038;
        }
    }
    ctx->pc = 0x400030u;
    // 0x400030: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x400030u;
    {
        const bool branch_taken_0x400030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x400034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400030u;
        // 0x400034: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400030) {
            ctx->pc = 0x400080u;
            goto label_400080;
        }
    }
    ctx->pc = 0x400038u;
label_400038:
    // 0x400038: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x400038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x40003c: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x40003cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x400040: 0x90a80000  lbu         $t0, 0x0($a1)
    ctx->pc = 0x400040u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x400044: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x400044u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x400048: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x400048u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x40004c: 0x246b0001  addiu       $t3, $v1, 0x1
    ctx->pc = 0x40004cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x400050: 0x90a70001  lbu         $a3, 0x1($a1)
    ctx->pc = 0x400050u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x400054: 0x124502b  sltu        $t2, $t1, $a0
    ctx->pc = 0x400054u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x400058: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x400058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x40005c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x40005cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x400060: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x400060u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x400064: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x400064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x400068: 0xa0a80000  sb          $t0, 0x0($a1)
    ctx->pc = 0x400068u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x40006c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x40006cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x400070: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x400070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x400074: 0x1140001f  beqz        $t2, . + 4 + (0x1F << 2)
    ctx->pc = 0x400074u;
    {
        const bool branch_taken_0x400074 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x400078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400074u;
        // 0x400078: 0xa0a70000  sb          $a3, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400074) {
            ctx->pc = 0x4000F4u;
            goto label_4000f4;
        }
    }
    ctx->pc = 0x40007Cu;
    // 0x40007c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x40007cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_400080:
    // 0x400080: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x400080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400084: 0x0  nop
    ctx->pc = 0x400084u;
    // NOP
label_400088:
    // 0x400088: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x400088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x40008c: 0x65290002  daddiu      $t1, $t1, 0x2
    ctx->pc = 0x40008cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)2);
    // 0x400090: 0x90a80000  lbu         $t0, 0x0($a1)
    ctx->pc = 0x400090u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x400094: 0x124502b  sltu        $t2, $t1, $a0
    ctx->pc = 0x400094u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x400098: 0x90a70001  lbu         $a3, 0x1($a1)
    ctx->pc = 0x400098u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x40009c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x40009cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4000a0: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x4000a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x4000a4: 0xa0c70003  sb          $a3, 0x3($a2)
    ctx->pc = 0x4000a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x4000a8: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x4000a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x4000ac: 0xa0c80002  sb          $t0, 0x2($a2)
    ctx->pc = 0x4000acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x4000b0: 0x90a80004  lbu         $t0, 0x4($a1)
    ctx->pc = 0x4000b0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4000b4: 0x24a50005  addiu       $a1, $a1, 0x5
    ctx->pc = 0x4000b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x4000b8: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x4000b8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4000bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4000bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4000c0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4000c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4000c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4000c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4000c8: 0xa0c20004  sb          $v0, 0x4($a2)
    ctx->pc = 0x4000c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x4000cc: 0x24c60005  addiu       $a2, $a2, 0x5
    ctx->pc = 0x4000ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x4000d0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4000d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4000d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4000d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4000d8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x4000d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4000dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4000dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4000e0: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x4000e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x4000e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4000e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4000e8: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x4000e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x4000ec: 0x1540ffe6  bnez        $t2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x4000ECu;
    {
        const bool branch_taken_0x4000ec = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x4000F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4000ECu;
        // 0x4000f0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4000ec) {
            ctx->pc = 0x400088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_400088;
        }
    }
    ctx->pc = 0x4000F4u;
label_4000f4:
    // 0x4000f4: 0xa3a70011  sb          $a3, 0x11($sp)
    ctx->pc = 0x4000f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 7));
    // 0x4000f8: 0xa3a80010  sb          $t0, 0x10($sp)
    ctx->pc = 0x4000f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 8));
label_4000fc:
    // 0x4000fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4000FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x400100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4000FCu;
        // 0x400100: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4000FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x400104u;
    // 0x400104: 0x0  nop
    ctx->pc = 0x400104u;
    // NOP
    ctx->pc = 0x400108u;
}
