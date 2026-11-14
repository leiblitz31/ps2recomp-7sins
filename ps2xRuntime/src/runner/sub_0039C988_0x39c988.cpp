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

// Function: sub_0039C988
// Address: 0x39c988 - 0x39ca58
void sub_0039C988_0x39c988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C988_0x39c988");
#endif

    switch (ctx->pc) {
        case 0x39c988u: goto label_39c988;
        case 0x39c98cu: goto label_39c98c;
        case 0x39c990u: goto label_39c990;
        case 0x39c994u: goto label_39c994;
        case 0x39c998u: goto label_39c998;
        case 0x39c99cu: goto label_39c99c;
        case 0x39c9a0u: goto label_39c9a0;
        case 0x39c9a4u: goto label_39c9a4;
        case 0x39c9a8u: goto label_39c9a8;
        case 0x39c9acu: goto label_39c9ac;
        case 0x39c9b0u: goto label_39c9b0;
        case 0x39c9b4u: goto label_39c9b4;
        case 0x39c9b8u: goto label_39c9b8;
        case 0x39c9bcu: goto label_39c9bc;
        case 0x39c9c0u: goto label_39c9c0;
        case 0x39c9c4u: goto label_39c9c4;
        case 0x39c9c8u: goto label_39c9c8;
        case 0x39c9ccu: goto label_39c9cc;
        case 0x39c9d0u: goto label_39c9d0;
        case 0x39c9d4u: goto label_39c9d4;
        case 0x39c9d8u: goto label_39c9d8;
        case 0x39c9dcu: goto label_39c9dc;
        case 0x39c9e0u: goto label_39c9e0;
        case 0x39c9e4u: goto label_39c9e4;
        case 0x39c9e8u: goto label_39c9e8;
        case 0x39c9ecu: goto label_39c9ec;
        case 0x39c9f0u: goto label_39c9f0;
        case 0x39c9f4u: goto label_39c9f4;
        case 0x39c9f8u: goto label_39c9f8;
        case 0x39c9fcu: goto label_39c9fc;
        case 0x39ca00u: goto label_39ca00;
        case 0x39ca04u: goto label_39ca04;
        case 0x39ca08u: goto label_39ca08;
        case 0x39ca0cu: goto label_39ca0c;
        case 0x39ca10u: goto label_39ca10;
        case 0x39ca14u: goto label_39ca14;
        case 0x39ca18u: goto label_39ca18;
        case 0x39ca1cu: goto label_39ca1c;
        case 0x39ca20u: goto label_39ca20;
        case 0x39ca24u: goto label_39ca24;
        case 0x39ca28u: goto label_39ca28;
        case 0x39ca2cu: goto label_39ca2c;
        case 0x39ca30u: goto label_39ca30;
        case 0x39ca34u: goto label_39ca34;
        case 0x39ca38u: goto label_39ca38;
        case 0x39ca3cu: goto label_39ca3c;
        case 0x39ca40u: goto label_39ca40;
        case 0x39ca44u: goto label_39ca44;
        case 0x39ca48u: goto label_39ca48;
        case 0x39ca4cu: goto label_39ca4c;
        case 0x39ca50u: goto label_39ca50;
        case 0x39ca54u: goto label_39ca54;
        default: break;
    }

    ctx->pc = 0x39c988u;

label_39c988:
    // 0x39c988: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39c988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_39c98c:
    // 0x39c98c: 0x8f82a9e4  lw          $v0, -0x561C($gp)
    ctx->pc = 0x39c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945252)));
label_39c990:
    // 0x39c990: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x39c990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_39c994:
    // 0x39c994: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39c994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_39c998:
    // 0x39c998: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39c998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c99c:
    // 0x39c99c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x39c99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_39c9a0:
    // 0x39c9a0: 0x26320064  addiu       $s2, $s1, 0x64
    ctx->pc = 0x39c9a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_39c9a4:
    // 0x39c9a4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x39c9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_39c9a8:
    // 0x39c9a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39c9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39c9ac:
    // 0x39c9ac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x39c9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_39c9b0:
    // 0x39c9b0: 0x8e300064  lw          $s0, 0x64($s1)
    ctx->pc = 0x39c9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_39c9b4:
    // 0x39c9b4: 0x1212001d  beq         $s0, $s2, . + 4 + (0x1D << 2)
label_39c9b8:
    if (ctx->pc == 0x39C9B8u) {
        ctx->pc = 0x39C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C9B4u;
        // 0x39c9b8: 0x222a021  addu        $s4, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C9BCu;
        goto label_39c9bc;
    }
    ctx->pc = 0x39C9B4u;
    {
        const bool branch_taken_0x39c9b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x39C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C9B4u;
        // 0x39c9b8: 0x222a021  addu        $s4, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c9b4) {
            ctx->pc = 0x39CA2Cu;
            goto label_39ca2c;
        }
    }
    ctx->pc = 0x39C9BCu;
label_39c9bc:
    // 0x39c9bc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_39c9c0:
    // 0x39c9c0: 0x2453e880  addiu       $s3, $v0, -0x1780
    ctx->pc = 0x39c9c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_39c9c4:
    // 0x39c9c4: 0x2609fff4  addiu       $t1, $s0, -0xC
    ctx->pc = 0x39c9c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
label_39c9c8:
    // 0x39c9c8: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x39c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_39c9cc:
    // 0x39c9cc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_39c9d0:
    if (ctx->pc == 0x39C9D0u) {
        ctx->pc = 0x39C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C9CCu;
        // 0x39c9d0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C9D4u;
        goto label_39c9d4;
    }
    ctx->pc = 0x39C9CCu;
    {
        const bool branch_taken_0x39c9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C9CCu;
        // 0x39c9d0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c9cc) {
            ctx->pc = 0x39CA24u;
            goto label_39ca24;
        }
    }
    ctx->pc = 0x39C9D4u;
label_39c9d4:
    // 0x39c9d4: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x39c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
label_39c9d8:
    // 0x39c9d8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_39c9dc:
    if (ctx->pc == 0x39C9DCu) {
        ctx->pc = 0x39C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C9D8u;
        // 0x39c9dc: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C9E0u;
        goto label_39c9e0;
    }
    ctx->pc = 0x39C9D8u;
    {
        const bool branch_taken_0x39c9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C9D8u;
        // 0x39c9dc: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c9d8) {
            ctx->pc = 0x39CA24u;
            goto label_39ca24;
        }
    }
    ctx->pc = 0x39C9E0u;
label_39c9e0:
    // 0x39c9e0: 0x8d240010  lw          $a0, 0x10($t1)
    ctx->pc = 0x39c9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_39c9e4:
    // 0x39c9e4: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x39c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_39c9e8:
    // 0x39c9e8: 0x8f83bd68  lw          $v1, -0x4298($gp)
    ctx->pc = 0x39c9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
label_39c9ec:
    // 0x39c9ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x39c9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_39c9f0:
    // 0x39c9f0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x39c9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_39c9f4:
    // 0x39c9f4: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x39c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_39c9f8:
    // 0x39c9f8: 0x8d260010  lw          $a2, 0x10($t1)
    ctx->pc = 0x39c9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_39c9fc:
    // 0x39c9fc: 0x8d28000c  lw          $t0, 0xC($t1)
    ctx->pc = 0x39c9fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_39ca00:
    // 0x39ca00: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39ca00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39ca04:
    // 0x39ca04: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x39ca04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
label_39ca08:
    // 0x39ca08: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x39ca08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_39ca0c:
    // 0x39ca0c: 0x8d270004  lw          $a3, 0x4($t1)
    ctx->pc = 0x39ca0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_39ca10:
    // 0x39ca10: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x39ca10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_39ca14:
    // 0x39ca14: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x39ca14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_39ca18:
    // 0x39ca18: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x39ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_39ca1c:
    // 0x39ca1c: 0x40f809  jalr        $v0
label_39ca20:
    if (ctx->pc == 0x39CA20u) {
        ctx->pc = 0x39CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CA1Cu;
        // 0x39ca20: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CA24u;
        goto label_39ca24;
    }
    ctx->pc = 0x39CA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39CA24u);
        ctx->pc = 0x39CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CA1Cu;
        // 0x39ca20: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CA1Cu, 0x39CA24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39CA24u;
label_39ca24:
    // 0x39ca24: 0x1612ffe8  bne         $s0, $s2, . + 4 + (-0x18 << 2)
label_39ca28:
    if (ctx->pc == 0x39CA28u) {
        ctx->pc = 0x39CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CA24u;
        // 0x39ca28: 0x2609fff4  addiu       $t1, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CA2Cu;
        goto label_39ca2c;
    }
    ctx->pc = 0x39CA24u;
    {
        const bool branch_taken_0x39ca24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x39CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CA24u;
        // 0x39ca28: 0x2609fff4  addiu       $t1, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ca24) {
            ctx->pc = 0x39C9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c9c8;
        }
    }
    ctx->pc = 0x39CA2Cu;
label_39ca2c:
    // 0x39ca2c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x39ca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_39ca30:
    // 0x39ca30: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39ca30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39ca34:
    // 0x39ca34: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x39ca34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39ca38:
    // 0x39ca38: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x39ca38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_39ca3c:
    // 0x39ca3c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x39ca3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39ca40:
    // 0x39ca40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39ca40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39ca44:
    // 0x39ca44: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x39ca44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39ca48:
    // 0x39ca48: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x39ca48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39ca4c:
    // 0x39ca4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39ca4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39ca50:
    // 0x39ca50: 0x3e00008  jr          $ra
label_39ca54:
    if (ctx->pc == 0x39CA54u) {
        ctx->pc = 0x39CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CA50u;
        // 0x39ca54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39CA58u;
        goto label_fallthrough_0x39ca50;
    }
    ctx->pc = 0x39CA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CA50u;
        // 0x39ca54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39ca50:
    ctx->pc = 0x39CA58u;
}
