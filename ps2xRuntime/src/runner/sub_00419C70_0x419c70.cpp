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

// Function: sub_00419C70
// Address: 0x419c70 - 0x419d80
void sub_00419C70_0x419c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419C70_0x419c70");
#endif

    switch (ctx->pc) {
        case 0x419ca0u: goto label_419ca0;
        case 0x419cc8u: goto label_419cc8;
        case 0x419cd0u: goto label_419cd0;
        default: break;
    }

    ctx->pc = 0x419c70u;

    // 0x419c70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x419c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x419c74: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x419c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x419c78: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x419c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x419c7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x419c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419c80: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x419c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x419c84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x419c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x419c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x419c8c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x419c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x419c90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x419C90u;
    {
        const bool branch_taken_0x419c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x419C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419C90u;
        // 0x419c94: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419c90) {
            ctx->pc = 0x419CA0u;
            goto label_419ca0;
        }
    }
    ctx->pc = 0x419C98u;
    // 0x419c98: 0xc1066de  jal         func_419B78
    ctx->pc = 0x419C98u;
    SET_GPR_U32(ctx, 31, 0x419CA0u);
    ctx->pc = 0x419C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419C98u;
    // 0x419c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x419C98u, 0x419CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419CA0u;
label_419ca0:
    // 0x419ca0: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x419ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x419ca4: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x419ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x419ca8: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x419ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x419cac: 0xae710098  sw          $s1, 0x98($s3)
    ctx->pc = 0x419cacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 17));
    // 0x419cb0: 0x8e7200a0  lw          $s2, 0xA0($s3)
    ctx->pc = 0x419cb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
    // 0x419cb4: 0x8e300098  lw          $s0, 0x98($s1)
    ctx->pc = 0x419cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x419cb8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x419CB8u;
    {
        const bool branch_taken_0x419cb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x419CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419CB8u;
        // 0x419cbc: 0xae3200a0  sw          $s2, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419cb8) {
            ctx->pc = 0x419CDCu;
            goto label_419cdc;
        }
    }
    ctx->pc = 0x419CC0u;
    // 0x419cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x419cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419cc4: 0x0  nop
    ctx->pc = 0x419cc4u;
    // NOP
label_419cc8:
    // 0x419cc8: 0xc1068e0  jal         func_41A380
    ctx->pc = 0x419CC8u;
    SET_GPR_U32(ctx, 31, 0x419CD0u);
    ctx->pc = 0x419CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419CC8u;
    // 0x419ccc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A380u, 0x419CC8u, 0x419CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419CD0u;
label_419cd0:
    // 0x419cd0: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x419cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x419cd4: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x419CD4u;
    {
        const bool branch_taken_0x419cd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x419CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419CD4u;
        // 0x419cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419cd4) {
            ctx->pc = 0x419CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_419cc8;
        }
    }
    ctx->pc = 0x419CDCu;
label_419cdc:
    // 0x419cdc: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x419cdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x419ce0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x419ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x419ce4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x419CE4u;
    {
        const bool branch_taken_0x419ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x419ce4) {
            ctx->pc = 0x419CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419CE4u;
            // 0x419ce8: 0x8e2600a0  lw          $a2, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419D14u;
            goto label_419d14;
        }
    }
    ctx->pc = 0x419CECu;
    // 0x419cec: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x419cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x419cf0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x419cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x419cf4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x419cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x419cf8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x419cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x419cfc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x419cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x419d00: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x419d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x419d04: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x419d04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x419d08: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x419d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
    // 0x419d0c: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x419d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x419d10: 0x8e2600a0  lw          $a2, 0xA0($s1)
    ctx->pc = 0x419d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_419d14:
    // 0x419d14: 0x90c70003  lbu         $a3, 0x3($a2)
    ctx->pc = 0x419d14u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x419d18: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x419d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x419d1c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x419D1Cu;
    {
        const bool branch_taken_0x419d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x419d1c) {
            ctx->pc = 0x419D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419D1Cu;
            // 0x419d20: 0x8e2500a0  lw          $a1, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419D4Cu;
            goto label_419d4c;
        }
    }
    ctx->pc = 0x419D24u;
    // 0x419d24: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x419d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x419d28: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x419d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x419d2c: 0x8c64e93c  lw          $a0, -0x16C4($v1)
    ctx->pc = 0x419d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61E93Cu));
    // 0x419d30: 0x2462e93c  addiu       $v0, $v1, -0x16C4
    ctx->pc = 0x419d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961468));
    // 0x419d34: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x419d34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x419d38: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x419d38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x419d3c: 0x8c62e93c  lw          $v0, -0x16C4($v1)
    ctx->pc = 0x419d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61E93Cu));
    // 0x419d40: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x419d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x419d44: 0xac65e93c  sw          $a1, -0x16C4($v1)
    ctx->pc = 0x419d44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x61E93Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E93Cu, _value); } while (0);
    // 0x419d48: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x419d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_419d4c:
    // 0x419d4c: 0x34e40003  ori         $a0, $a3, 0x3
    ctx->pc = 0x419d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3);
    // 0x419d50: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x419d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419d54: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x419d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x419d58: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x419d58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x419d5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x419d5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x419d60: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x419d60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x419d64: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x419d64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x419d68: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x419d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x419d6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x419d70: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x419d70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x419d74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x419d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x419d78: 0x3e00008  jr          $ra
    ctx->pc = 0x419D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419D78u;
        // 0x419d7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419D80u;
}
