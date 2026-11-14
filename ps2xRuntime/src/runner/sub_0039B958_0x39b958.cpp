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

// Function: sub_0039B958
// Address: 0x39b958 - 0x39ba40
void sub_0039B958_0x39b958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B958_0x39b958");
#endif

    switch (ctx->pc) {
        case 0x39b958u: goto label_39b958;
        case 0x39b95cu: goto label_39b95c;
        case 0x39b960u: goto label_39b960;
        case 0x39b964u: goto label_39b964;
        case 0x39b968u: goto label_39b968;
        case 0x39b96cu: goto label_39b96c;
        case 0x39b970u: goto label_39b970;
        case 0x39b974u: goto label_39b974;
        case 0x39b978u: goto label_39b978;
        case 0x39b97cu: goto label_39b97c;
        case 0x39b980u: goto label_39b980;
        case 0x39b984u: goto label_39b984;
        case 0x39b988u: goto label_39b988;
        case 0x39b98cu: goto label_39b98c;
        case 0x39b990u: goto label_39b990;
        case 0x39b994u: goto label_39b994;
        case 0x39b998u: goto label_39b998;
        case 0x39b99cu: goto label_39b99c;
        case 0x39b9a0u: goto label_39b9a0;
        case 0x39b9a4u: goto label_39b9a4;
        case 0x39b9a8u: goto label_39b9a8;
        case 0x39b9acu: goto label_39b9ac;
        case 0x39b9b0u: goto label_39b9b0;
        case 0x39b9b4u: goto label_39b9b4;
        case 0x39b9b8u: goto label_39b9b8;
        case 0x39b9bcu: goto label_39b9bc;
        case 0x39b9c0u: goto label_39b9c0;
        case 0x39b9c4u: goto label_39b9c4;
        case 0x39b9c8u: goto label_39b9c8;
        case 0x39b9ccu: goto label_39b9cc;
        case 0x39b9d0u: goto label_39b9d0;
        case 0x39b9d4u: goto label_39b9d4;
        case 0x39b9d8u: goto label_39b9d8;
        case 0x39b9dcu: goto label_39b9dc;
        case 0x39b9e0u: goto label_39b9e0;
        case 0x39b9e4u: goto label_39b9e4;
        case 0x39b9e8u: goto label_39b9e8;
        case 0x39b9ecu: goto label_39b9ec;
        case 0x39b9f0u: goto label_39b9f0;
        case 0x39b9f4u: goto label_39b9f4;
        case 0x39b9f8u: goto label_39b9f8;
        case 0x39b9fcu: goto label_39b9fc;
        case 0x39ba00u: goto label_39ba00;
        case 0x39ba04u: goto label_39ba04;
        case 0x39ba08u: goto label_39ba08;
        case 0x39ba0cu: goto label_39ba0c;
        case 0x39ba10u: goto label_39ba10;
        case 0x39ba14u: goto label_39ba14;
        case 0x39ba18u: goto label_39ba18;
        case 0x39ba1cu: goto label_39ba1c;
        case 0x39ba20u: goto label_39ba20;
        case 0x39ba24u: goto label_39ba24;
        case 0x39ba28u: goto label_39ba28;
        case 0x39ba2cu: goto label_39ba2c;
        case 0x39ba30u: goto label_39ba30;
        case 0x39ba34u: goto label_39ba34;
        case 0x39ba38u: goto label_39ba38;
        case 0x39ba3cu: goto label_39ba3c;
        default: break;
    }

    ctx->pc = 0x39b958u;

label_39b958:
    // 0x39b958: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39b958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_39b95c:
    // 0x39b95c: 0x8f82a9e4  lw          $v0, -0x561C($gp)
    ctx->pc = 0x39b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945252)));
label_39b960:
    // 0x39b960: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x39b960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_39b964:
    // 0x39b964: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x39b964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_39b968:
    // 0x39b968: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39b968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39b96c:
    // 0x39b96c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x39b96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_39b970:
    // 0x39b970: 0x2229821  addu        $s3, $s1, $v0
    ctx->pc = 0x39b970u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39b974:
    // 0x39b974: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x39b974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_39b978:
    // 0x39b978: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39b978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_39b97c:
    // 0x39b97c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39b97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39b980:
    // 0x39b980: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x39b980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_39b984:
    // 0x39b984: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_39b988:
    if (ctx->pc == 0x39B988u) {
        ctx->pc = 0x39B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B984u;
        // 0x39b988: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B98Cu;
        goto label_39b98c;
    }
    ctx->pc = 0x39B984u;
    {
        const bool branch_taken_0x39b984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B984u;
        // 0x39b988: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b984) {
            ctx->pc = 0x39B994u;
            goto label_39b994;
        }
    }
    ctx->pc = 0x39B98Cu;
label_39b98c:
    // 0x39b98c: 0xc104702  jal         func_411C08
label_39b990:
    if (ctx->pc == 0x39B990u) {
        ctx->pc = 0x39B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B98Cu;
        // 0x39b990: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B994u;
        goto label_39b994;
    }
    ctx->pc = 0x39B98Cu;
    SET_GPR_U32(ctx, 31, 0x39B994u);
    ctx->pc = 0x39B990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B98Cu;
    // 0x39b990: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x39B98Cu, 0x39B994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B994u;
label_39b994:
    // 0x39b994: 0x8e300064  lw          $s0, 0x64($s1)
    ctx->pc = 0x39b994u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_39b998:
    // 0x39b998: 0x26310064  addiu       $s1, $s1, 0x64
    ctx->pc = 0x39b998u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_39b99c:
    // 0x39b99c: 0x1211001d  beq         $s0, $s1, . + 4 + (0x1D << 2)
label_39b9a0:
    if (ctx->pc == 0x39B9A0u) {
        ctx->pc = 0x39B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B99Cu;
        // 0x39b9a0: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B9A4u;
        goto label_39b9a4;
    }
    ctx->pc = 0x39B99Cu;
    {
        const bool branch_taken_0x39b99c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x39B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B99Cu;
        // 0x39b9a0: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b99c) {
            ctx->pc = 0x39BA14u;
            goto label_39ba14;
        }
    }
    ctx->pc = 0x39B9A4u;
label_39b9a4:
    // 0x39b9a4: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x39b9a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_39b9a8:
    // 0x39b9a8: 0x2609fff4  addiu       $t1, $s0, -0xC
    ctx->pc = 0x39b9a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
label_39b9ac:
    // 0x39b9ac: 0x0  nop
    ctx->pc = 0x39b9acu;
    // NOP
label_39b9b0:
    // 0x39b9b0: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x39b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_39b9b4:
    // 0x39b9b4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_39b9b8:
    if (ctx->pc == 0x39B9B8u) {
        ctx->pc = 0x39B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B9B4u;
        // 0x39b9b8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B9BCu;
        goto label_39b9bc;
    }
    ctx->pc = 0x39B9B4u;
    {
        const bool branch_taken_0x39b9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B9B4u;
        // 0x39b9b8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b9b4) {
            ctx->pc = 0x39BA0Cu;
            goto label_39ba0c;
        }
    }
    ctx->pc = 0x39B9BCu;
label_39b9bc:
    // 0x39b9bc: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x39b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
label_39b9c0:
    // 0x39b9c0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_39b9c4:
    if (ctx->pc == 0x39B9C4u) {
        ctx->pc = 0x39B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B9C0u;
        // 0x39b9c4: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B9C8u;
        goto label_39b9c8;
    }
    ctx->pc = 0x39B9C0u;
    {
        const bool branch_taken_0x39b9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B9C0u;
        // 0x39b9c4: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b9c0) {
            ctx->pc = 0x39BA0Cu;
            goto label_39ba0c;
        }
    }
    ctx->pc = 0x39B9C8u;
label_39b9c8:
    // 0x39b9c8: 0x8d240010  lw          $a0, 0x10($t1)
    ctx->pc = 0x39b9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_39b9cc:
    // 0x39b9cc: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x39b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_39b9d0:
    // 0x39b9d0: 0x8f83bd68  lw          $v1, -0x4298($gp)
    ctx->pc = 0x39b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
label_39b9d4:
    // 0x39b9d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x39b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_39b9d8:
    // 0x39b9d8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x39b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_39b9dc:
    // 0x39b9dc: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x39b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_39b9e0:
    // 0x39b9e0: 0x8d260010  lw          $a2, 0x10($t1)
    ctx->pc = 0x39b9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_39b9e4:
    // 0x39b9e4: 0x8d28000c  lw          $t0, 0xC($t1)
    ctx->pc = 0x39b9e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_39b9e8:
    // 0x39b9e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39b9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39b9ec:
    // 0x39b9ec: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x39b9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
label_39b9f0:
    // 0x39b9f0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x39b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_39b9f4:
    // 0x39b9f4: 0x8d270004  lw          $a3, 0x4($t1)
    ctx->pc = 0x39b9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_39b9f8:
    // 0x39b9f8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x39b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_39b9fc:
    // 0x39b9fc: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x39b9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_39ba00:
    // 0x39ba00: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x39ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_39ba04:
    // 0x39ba04: 0x40f809  jalr        $v0
label_39ba08:
    if (ctx->pc == 0x39BA08u) {
        ctx->pc = 0x39BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA04u;
        // 0x39ba08: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BA0Cu;
        goto label_39ba0c;
    }
    ctx->pc = 0x39BA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39BA0Cu);
        ctx->pc = 0x39BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA04u;
        // 0x39ba08: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BA04u, 0x39BA0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39BA0Cu;
label_39ba0c:
    // 0x39ba0c: 0x1611ffe8  bne         $s0, $s1, . + 4 + (-0x18 << 2)
label_39ba10:
    if (ctx->pc == 0x39BA10u) {
        ctx->pc = 0x39BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA0Cu;
        // 0x39ba10: 0x2609fff4  addiu       $t1, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BA14u;
        goto label_39ba14;
    }
    ctx->pc = 0x39BA0Cu;
    {
        const bool branch_taken_0x39ba0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x39BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA0Cu;
        // 0x39ba10: 0x2609fff4  addiu       $t1, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ba0c) {
            ctx->pc = 0x39B9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39b9b0;
        }
    }
    ctx->pc = 0x39BA14u;
label_39ba14:
    // 0x39ba14: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x39ba14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_39ba18:
    // 0x39ba18: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x39ba18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39ba1c:
    // 0x39ba1c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x39ba1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39ba20:
    // 0x39ba20: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x39ba20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39ba24:
    // 0x39ba24: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39ba24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39ba28:
    // 0x39ba28: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x39ba28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39ba2c:
    // 0x39ba2c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x39ba2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39ba30:
    // 0x39ba30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39ba30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39ba34:
    // 0x39ba34: 0x3e00008  jr          $ra
label_39ba38:
    if (ctx->pc == 0x39BA38u) {
        ctx->pc = 0x39BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA34u;
        // 0x39ba38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39BA3Cu;
        goto label_39ba3c;
    }
    ctx->pc = 0x39BA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA34u;
        // 0x39ba38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BA3Cu;
label_39ba3c:
    // 0x39ba3c: 0x0  nop
    ctx->pc = 0x39ba3cu;
    // NOP
    ctx->pc = 0x39ba40u;
}
