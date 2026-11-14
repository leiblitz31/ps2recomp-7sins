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

// Function: sub_00353CC8
// Address: 0x353cc8 - 0x354300
void sub_00353CC8_0x353cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353CC8_0x353cc8");
#endif

    switch (ctx->pc) {
        case 0x353d14u: goto label_353d14;
        case 0x353d40u: goto label_353d40;
        case 0x353d90u: goto label_353d90;
        case 0x353db8u: goto label_353db8;
        case 0x353e38u: goto label_353e38;
        case 0x353e5cu: goto label_353e5c;
        case 0x353e80u: goto label_353e80;
        case 0x353ed4u: goto label_353ed4;
        case 0x353f0cu: goto label_353f0c;
        case 0x353f30u: goto label_353f30;
        case 0x353fb4u: goto label_353fb4;
        case 0x353fd8u: goto label_353fd8;
        case 0x354060u: goto label_354060;
        case 0x354088u: goto label_354088;
        case 0x3540d0u: goto label_3540d0;
        case 0x354154u: goto label_354154;
        default: break;
    }

    ctx->pc = 0x353cc8u;

    // 0x353cc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x353cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x353ccc: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x353cccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x353cd0: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x353cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x353cd4: 0x24c3000f  addiu       $v1, $a2, 0xF
    ctx->pc = 0x353cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x353cd8: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x353cd8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x353cdc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x353cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x353ce0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x353ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x353ce4: 0x38103  sra         $s0, $v1, 4
    ctx->pc = 0x353ce4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 4));
    // 0x353ce8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x353ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x353cec: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x353cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x353cf0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x353cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x353cf4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x353cf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353cf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x353cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x353cfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x353cfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d00: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x353d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x353d04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x353d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x353d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x353d0c: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x353D0Cu;
    SET_GPR_U32(ctx, 31, 0x353D14u);
    ctx->pc = 0x353D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353D0Cu;
    // 0x353d10: 0xc2a823  subu        $s5, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x353D0Cu, 0x353D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353D14u;
label_353d14:
    // 0x353d14: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x353d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x353d18: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x353d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x353d1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x353d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x353d20: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x353d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x353d24: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x353D24u;
    {
        const bool branch_taken_0x353d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x353D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353D24u;
        // 0x353d28: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353d24) {
            ctx->pc = 0x353D60u;
            goto label_353d60;
        }
    }
    ctx->pc = 0x353D2Cu;
    // 0x353d2c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x353d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x353d30: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x353d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x353d34: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x353d34u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x353d38: 0xf  sync
    ctx->pc = 0x353d38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353d3c: 0x40f  sync.p
    ctx->pc = 0x353d3cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_353d40:
    // 0x353d40: 0x0  nop
    ctx->pc = 0x353d40u;
    // NOP
    // 0x353d44: 0x0  nop
    ctx->pc = 0x353d44u;
    // NOP
    // 0x353d48: 0x0  nop
    ctx->pc = 0x353d48u;
    // NOP
    // 0x353d4c: 0x0  nop
    ctx->pc = 0x353d4cu;
    // NOP
    // 0x353d50: 0x0  nop
    ctx->pc = 0x353d50u;
    // NOP
    // 0x353d54: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353D54u;
    {
        const bool branch_taken_0x353d54 = (false);
        if (branch_taken_0x353d54) {
            ctx->pc = 0x353D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353d40;
        }
    }
    ctx->pc = 0x353D5Cu;
    // 0x353d5c: 0x0  nop
    ctx->pc = 0x353d5cu;
    // NOP
label_353d60:
    // 0x353d60: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x353d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x353d64: 0x2a040401  slti        $a0, $s0, 0x401
    ctx->pc = 0x353d64u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x353d68: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x353d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x353d6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x353d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x353d70: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x353d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353d74: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x353D74u;
    {
        const bool branch_taken_0x353d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353D74u;
        // 0x353d78: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353d74) {
            ctx->pc = 0x353DD4u;
            goto label_353dd4;
        }
    }
    ctx->pc = 0x353D7Cu;
    // 0x353d7c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x353d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x353d80: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x353d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x353d84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x353d84u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x353d88: 0xf  sync
    ctx->pc = 0x353d88u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353d8c: 0x40f  sync.p
    ctx->pc = 0x353d8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_353d90:
    // 0x353d90: 0x0  nop
    ctx->pc = 0x353d90u;
    // NOP
    // 0x353d94: 0x0  nop
    ctx->pc = 0x353d94u;
    // NOP
    // 0x353d98: 0x0  nop
    ctx->pc = 0x353d98u;
    // NOP
    // 0x353d9c: 0x0  nop
    ctx->pc = 0x353d9cu;
    // NOP
    // 0x353da0: 0x0  nop
    ctx->pc = 0x353da0u;
    // NOP
    // 0x353da4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353DA4u;
    {
        const bool branch_taken_0x353da4 = (false);
        if (branch_taken_0x353da4) {
            ctx->pc = 0x353D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353d90;
        }
    }
    ctx->pc = 0x353DACu;
    // 0x353dac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x353dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x353db0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x353db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x353db4: 0x0  nop
    ctx->pc = 0x353db4u;
    // NOP
label_353db8:
    // 0x353db8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x353db8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x353dbc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x353dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353dc0: 0x0  nop
    ctx->pc = 0x353dc0u;
    // NOP
    // 0x353dc4: 0x0  nop
    ctx->pc = 0x353dc4u;
    // NOP
    // 0x353dc8: 0x0  nop
    ctx->pc = 0x353dc8u;
    // NOP
    // 0x353dcc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x353DCCu;
    {
        const bool branch_taken_0x353dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353dcc) {
            ctx->pc = 0x353DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353db8;
        }
    }
    ctx->pc = 0x353DD4u;
label_353dd4:
    // 0x353dd4: 0x1480006a  bnez        $a0, . + 4 + (0x6A << 2)
    ctx->pc = 0x353DD4u;
    {
        const bool branch_taken_0x353dd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x353dd4) {
            ctx->pc = 0x353F80u;
            goto label_353f80;
        }
    }
    ctx->pc = 0x353DDCu;
    // 0x353ddc: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x353ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x353de0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x353de0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x353de4: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x353de4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x353de8: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x353de8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x353dec: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x353decu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
    // 0x353df0: 0x3c181000  lui         $t8, 0x1000
    ctx->pc = 0x353df0u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)4096 << 16));
    // 0x353df4: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x353df4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x353df8: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x353df8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x353dfc: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x353dfcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x353e00: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x353e00u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x353e04: 0x34c6d400  ori         $a2, $a2, 0xD400
    ctx->pc = 0x353e04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)54272);
    // 0x353e08: 0x34a5e020  ori         $a1, $a1, 0xE020
    ctx->pc = 0x353e08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57376);
    // 0x353e0c: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x353e0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x353e10: 0x3508e010  ori         $t0, $t0, 0xE010
    ctx->pc = 0x353e10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)57360);
    // 0x353e14: 0x3673d480  ori         $s3, $s3, 0xD480
    ctx->pc = 0x353e14u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)54400);
    // 0x353e18: 0x3739d410  ori         $t9, $t9, 0xD410
    ctx->pc = 0x353e18u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)54288);
    // 0x353e1c: 0x3718d420  ori         $t8, $t8, 0xD420
    ctx->pc = 0x353e1cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)54304);
    // 0x353e20: 0x24140400  addiu       $s4, $zero, 0x400
    ctx->pc = 0x353e20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x353e24: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x353e24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x353e28: 0x34e7d000  ori         $a3, $a3, 0xD000
    ctx->pc = 0x353e28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)53248);
    // 0x353e2c: 0x35efd080  ori         $t7, $t7, 0xD080
    ctx->pc = 0x353e2cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)53376);
    // 0x353e30: 0x35ced010  ori         $t6, $t6, 0xD010
    ctx->pc = 0x353e30u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)53264);
    // 0x353e34: 0x35add020  ori         $t5, $t5, 0xD020
    ctx->pc = 0x353e34u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)53280);
label_353e38:
    // 0x353e38: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x353e38u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x1000d400
    // 0x353e3c: 0x2603fc00  addiu       $v1, $s0, -0x400
    ctx->pc = 0x353e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966272));
    // 0x353e40: 0x262b4000  addiu       $t3, $s1, 0x4000
    ctx->pc = 0x353e40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
    // 0x353e44: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x353e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353e48: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x353E48u;
    {
        const bool branch_taken_0x353e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353E48u;
        // 0x353e4c: 0x264c4000  addiu       $t4, $s2, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353e48) {
            ctx->pc = 0x353E9Cu;
            goto label_353e9c;
        }
    }
    ctx->pc = 0x353E50u;
    // 0x353e50: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x353e50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x353e54: 0xf  sync
    ctx->pc = 0x353e54u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353e58: 0x40f  sync.p
    ctx->pc = 0x353e58u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_353e5c:
    // 0x353e5c: 0x0  nop
    ctx->pc = 0x353e5cu;
    // NOP
    // 0x353e60: 0x0  nop
    ctx->pc = 0x353e60u;
    // NOP
    // 0x353e64: 0x0  nop
    ctx->pc = 0x353e64u;
    // NOP
    // 0x353e68: 0x0  nop
    ctx->pc = 0x353e68u;
    // NOP
    // 0x353e6c: 0x0  nop
    ctx->pc = 0x353e6cu;
    // NOP
    // 0x353e70: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353E70u;
    {
        const bool branch_taken_0x353e70 = (false);
        if (branch_taken_0x353e70) {
            ctx->pc = 0x353E5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353e5c;
        }
    }
    ctx->pc = 0x353E78u;
    // 0x353e78: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x353e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x353e7c: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x353e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
label_353e80:
    // 0x353e80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x353e80u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x1000d400
    // 0x353e84: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x353e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353e88: 0x0  nop
    ctx->pc = 0x353e88u;
    // NOP
    // 0x353e8c: 0x0  nop
    ctx->pc = 0x353e8cu;
    // NOP
    // 0x353e90: 0x0  nop
    ctx->pc = 0x353e90u;
    // NOP
    // 0x353e94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x353E94u;
    {
        const bool branch_taken_0x353e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353e94) {
            ctx->pc = 0x353E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353e80;
        }
    }
    ctx->pc = 0x353E9Cu;
label_353e9c:
    // 0x353e9c: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x353e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x353ea0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x353ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x353ea4: 0xaf310000  sw          $s1, 0x0($t9)
    ctx->pc = 0x353ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 17));
    // 0x353ea8: 0xaf140000  sw          $s4, 0x0($t8)
    ctx->pc = 0x353ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 20));
    // 0x353eac: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x353eacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x353eb0: 0xf  sync
    ctx->pc = 0x353eb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353eb4: 0x40f  sync.p
    ctx->pc = 0x353eb4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353eb8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x353eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x353ebc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x353ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353ec0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x353EC0u;
    {
        const bool branch_taken_0x353ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353ec0) {
            ctx->pc = 0x353EF0u;
            goto label_353ef0;
        }
    }
    ctx->pc = 0x353EC8u;
    // 0x353ec8: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x353ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x353ecc: 0xf  sync
    ctx->pc = 0x353eccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353ed0: 0x40f  sync.p
    ctx->pc = 0x353ed0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_353ed4:
    // 0x353ed4: 0x0  nop
    ctx->pc = 0x353ed4u;
    // NOP
    // 0x353ed8: 0x0  nop
    ctx->pc = 0x353ed8u;
    // NOP
    // 0x353edc: 0x0  nop
    ctx->pc = 0x353edcu;
    // NOP
    // 0x353ee0: 0x0  nop
    ctx->pc = 0x353ee0u;
    // NOP
    // 0x353ee4: 0x0  nop
    ctx->pc = 0x353ee4u;
    // NOP
    // 0x353ee8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353EE8u;
    {
        const bool branch_taken_0x353ee8 = (false);
        if (branch_taken_0x353ee8) {
            ctx->pc = 0x353ED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353ed4;
        }
    }
    ctx->pc = 0x353EF0u;
label_353ef0:
    // 0x353ef0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x353ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x353ef4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x353ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353ef8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x353EF8u;
    {
        const bool branch_taken_0x353ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353ef8) {
            ctx->pc = 0x353F4Cu;
            goto label_353f4c;
        }
    }
    ctx->pc = 0x353F00u;
    // 0x353f00: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x353f00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x353f04: 0xf  sync
    ctx->pc = 0x353f04u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353f08: 0x40f  sync.p
    ctx->pc = 0x353f08u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_353f0c:
    // 0x353f0c: 0x0  nop
    ctx->pc = 0x353f0cu;
    // NOP
    // 0x353f10: 0x0  nop
    ctx->pc = 0x353f10u;
    // NOP
    // 0x353f14: 0x0  nop
    ctx->pc = 0x353f14u;
    // NOP
    // 0x353f18: 0x0  nop
    ctx->pc = 0x353f18u;
    // NOP
    // 0x353f1c: 0x0  nop
    ctx->pc = 0x353f1cu;
    // NOP
    // 0x353f20: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353F20u;
    {
        const bool branch_taken_0x353f20 = (false);
        if (branch_taken_0x353f20) {
            ctx->pc = 0x353F0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353f0c;
        }
    }
    ctx->pc = 0x353F28u;
    // 0x353f28: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x353f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x353f2c: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x353f2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
label_353f30:
    // 0x353f30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x353f30u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x1000d400
    // 0x353f34: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x353f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353f38: 0x0  nop
    ctx->pc = 0x353f38u;
    // NOP
    // 0x353f3c: 0x0  nop
    ctx->pc = 0x353f3cu;
    // NOP
    // 0x353f40: 0x0  nop
    ctx->pc = 0x353f40u;
    // NOP
    // 0x353f44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x353F44u;
    {
        const bool branch_taken_0x353f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353f44) {
            ctx->pc = 0x353F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353f30;
        }
    }
    ctx->pc = 0x353F4Cu;
label_353f4c:
    // 0x353f4c: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x353f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x353f50: 0xade00000  sw          $zero, 0x0($t7)
    ctx->pc = 0x353f50u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 0));
    // 0x353f54: 0xadd20000  sw          $s2, 0x0($t6)
    ctx->pc = 0x353f54u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 18));
    // 0x353f58: 0xadb40000  sw          $s4, 0x0($t5)
    ctx->pc = 0x353f58u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 20));
    // 0x353f5c: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x353f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x353f60: 0xf  sync
    ctx->pc = 0x353f60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353f64: 0x40f  sync.p
    ctx->pc = 0x353f64u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353f68: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x353f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353f6c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x353f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353f70: 0x2a020401  slti        $v0, $s0, 0x401
    ctx->pc = 0x353f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x353f74: 0x1040ffb0  beqz        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x353F74u;
    {
        const bool branch_taken_0x353f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353F74u;
        // 0x353f78: 0x180902d  daddu       $s2, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353f74) {
            ctx->pc = 0x353E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353e38;
        }
    }
    ctx->pc = 0x353F7Cu;
    // 0x353f7c: 0x0  nop
    ctx->pc = 0x353f7cu;
    // NOP
label_353f80:
    // 0x353f80: 0x1200006f  beqz        $s0, . + 4 + (0x6F << 2)
    ctx->pc = 0x353F80u;
    {
        const bool branch_taken_0x353f80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x353F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353F80u;
        // 0x353f84: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353f80) {
            ctx->pc = 0x354140u;
            goto label_354140;
        }
    }
    ctx->pc = 0x353F88u;
    // 0x353f88: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x353f88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x353f8c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x353f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x353f90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x353f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x353f94: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x353f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353f98: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x353F98u;
    {
        const bool branch_taken_0x353f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353F98u;
        // 0x353f9c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353f98) {
            ctx->pc = 0x353FF4u;
            goto label_353ff4;
        }
    }
    ctx->pc = 0x353FA0u;
    // 0x353fa0: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x353fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x353fa4: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x353fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x353fa8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x353fa8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x353fac: 0xf  sync
    ctx->pc = 0x353facu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x353fb0: 0x40f  sync.p
    ctx->pc = 0x353fb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_353fb4:
    // 0x353fb4: 0x0  nop
    ctx->pc = 0x353fb4u;
    // NOP
    // 0x353fb8: 0x0  nop
    ctx->pc = 0x353fb8u;
    // NOP
    // 0x353fbc: 0x0  nop
    ctx->pc = 0x353fbcu;
    // NOP
    // 0x353fc0: 0x0  nop
    ctx->pc = 0x353fc0u;
    // NOP
    // 0x353fc4: 0x0  nop
    ctx->pc = 0x353fc4u;
    // NOP
    // 0x353fc8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x353FC8u;
    {
        const bool branch_taken_0x353fc8 = (false);
        if (branch_taken_0x353fc8) {
            ctx->pc = 0x353FB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353fb4;
        }
    }
    ctx->pc = 0x353FD0u;
    // 0x353fd0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x353fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x353fd4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x353fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_353fd8:
    // 0x353fd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x353fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x353fdc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x353fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x353fe0: 0x0  nop
    ctx->pc = 0x353fe0u;
    // NOP
    // 0x353fe4: 0x0  nop
    ctx->pc = 0x353fe4u;
    // NOP
    // 0x353fe8: 0x0  nop
    ctx->pc = 0x353fe8u;
    // NOP
    // 0x353fec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x353FECu;
    {
        const bool branch_taken_0x353fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353fec) {
            ctx->pc = 0x353FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_353fd8;
        }
    }
    ctx->pc = 0x353FF4u;
label_353ff4:
    // 0x353ff4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x353ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x353ff8: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x353ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x353ffc: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x353ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x354000: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x354000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x354004: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x354004u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x354008: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x354008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x35400c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x35400cu;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x1000d480
    // 0x354010: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x354010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x354014: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x354014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x354018: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x354018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35401c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x35401cu;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 17)); // MMIO: 0x1000d410
    // 0x354020: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x354020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x354024: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x354024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x354028: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x354028u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 16)); // MMIO: 0x1000d420
    // 0x35402c: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x35402cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x354030: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x354030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x354034: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x354034u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x354038: 0xf  sync
    ctx->pc = 0x354038u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35403c: 0x40f  sync.p
    ctx->pc = 0x35403cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x354040: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x354040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x354044: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x354044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x354048: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x354048u;
    {
        const bool branch_taken_0x354048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354048u;
        // 0x35404c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354048) {
            ctx->pc = 0x3540A4u;
            goto label_3540a4;
        }
    }
    ctx->pc = 0x354050u;
    // 0x354050: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x354050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x354054: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x354054u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x1000e020
    // 0x354058: 0xf  sync
    ctx->pc = 0x354058u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35405c: 0x40f  sync.p
    ctx->pc = 0x35405cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_354060:
    // 0x354060: 0x0  nop
    ctx->pc = 0x354060u;
    // NOP
    // 0x354064: 0x0  nop
    ctx->pc = 0x354064u;
    // NOP
    // 0x354068: 0x0  nop
    ctx->pc = 0x354068u;
    // NOP
    // 0x35406c: 0x0  nop
    ctx->pc = 0x35406cu;
    // NOP
    // 0x354070: 0x0  nop
    ctx->pc = 0x354070u;
    // NOP
    // 0x354074: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x354074u;
    {
        const bool branch_taken_0x354074 = (false);
        if (branch_taken_0x354074) {
            ctx->pc = 0x354060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354060;
        }
    }
    ctx->pc = 0x35407Cu;
    // 0x35407c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35407cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x354080: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x354080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x354084: 0x0  nop
    ctx->pc = 0x354084u;
    // NOP
label_354088:
    // 0x354088: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x354088u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35408c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35408cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x354090: 0x0  nop
    ctx->pc = 0x354090u;
    // NOP
    // 0x354094: 0x0  nop
    ctx->pc = 0x354094u;
    // NOP
    // 0x354098: 0x0  nop
    ctx->pc = 0x354098u;
    // NOP
    // 0x35409c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35409Cu;
    {
        const bool branch_taken_0x35409c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35409c) {
            ctx->pc = 0x354088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354088;
        }
    }
    ctx->pc = 0x3540A4u;
label_3540a4:
    // 0x3540a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3540a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3540a8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x3540a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x3540ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3540acu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x3540b0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3540b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x3540b4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3540B4u;
    {
        const bool branch_taken_0x3540b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3540B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3540B4u;
        // 0x3540b8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3540b4) {
            ctx->pc = 0x3540F0u;
            goto label_3540f0;
        }
    }
    ctx->pc = 0x3540BCu;
    // 0x3540bc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x3540bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3540c0: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x3540c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x3540c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3540c4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x3540c8: 0xf  sync
    ctx->pc = 0x3540c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3540cc: 0x40f  sync.p
    ctx->pc = 0x3540ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3540d0:
    // 0x3540d0: 0x0  nop
    ctx->pc = 0x3540d0u;
    // NOP
    // 0x3540d4: 0x0  nop
    ctx->pc = 0x3540d4u;
    // NOP
    // 0x3540d8: 0x0  nop
    ctx->pc = 0x3540d8u;
    // NOP
    // 0x3540dc: 0x0  nop
    ctx->pc = 0x3540dcu;
    // NOP
    // 0x3540e0: 0x0  nop
    ctx->pc = 0x3540e0u;
    // NOP
    // 0x3540e4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3540E4u;
    {
        const bool branch_taken_0x3540e4 = (false);
        if (branch_taken_0x3540e4) {
            ctx->pc = 0x3540D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3540d0;
        }
    }
    ctx->pc = 0x3540ECu;
    // 0x3540ec: 0x0  nop
    ctx->pc = 0x3540ecu;
    // NOP
label_3540f0:
    // 0x3540f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3540f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3540f4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3540f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3540f8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x3540f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x3540fc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3540fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x354100: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x354100u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x354104: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x354104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x354108: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x354108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x35410c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x35410cu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0)); // MMIO: 0x1000d080
    // 0x354110: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x354110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x354114: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x354114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x354118: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x354118u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 18)); // MMIO: 0x1000d010
    // 0x35411c: 0x3442d020  ori         $v0, $v0, 0xD020
    ctx->pc = 0x35411cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53280);
    // 0x354120: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x354120u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 16)); // MMIO: 0x1000d020
    // 0x354124: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x354124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x354128: 0xac25d000  sw          $a1, -0x3000($at)
    ctx->pc = 0x354128u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x1000d000
    // 0x35412c: 0xf  sync
    ctx->pc = 0x35412cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x354130: 0x40f  sync.p
    ctx->pc = 0x354130u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x354134: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x354134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x354138: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x354138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x35413c: 0x0  nop
    ctx->pc = 0x35413cu;
    // NOP
label_354140:
    // 0x354140: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x354140u;
    {
        const bool branch_taken_0x354140 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x354144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354140u;
        // 0x354144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354140) {
            ctx->pc = 0x354154u;
            goto label_354154;
        }
    }
    ctx->pc = 0x354148u;
    // 0x354148: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x354148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35414c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x35414Cu;
    SET_GPR_U32(ctx, 31, 0x354154u);
    ctx->pc = 0x354150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35414Cu;
    // 0x354150: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x35414Cu, 0x354154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354154u;
label_354154:
    // 0x354154: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x354154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x354158: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x354158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35415c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x35415cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x354160: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x354160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x354164: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x354164u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x354168: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x354168u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35416c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35416cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354170: 0x3e00008  jr          $ra
    ctx->pc = 0x354170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354170u;
        // 0x354174: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354178u;
    // 0x354178: 0x8f83a858  lw          $v1, -0x57A8($gp)
    ctx->pc = 0x354178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x35417c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x35417cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354180: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x354180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354184: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x354184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x354188: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x354188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x35418c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x35418cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x354190: 0x10c5003b  beq         $a2, $a1, . + 4 + (0x3B << 2)
    ctx->pc = 0x354190u;
    {
        const bool branch_taken_0x354190 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x354194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354190u;
        // 0x354194: 0x8c44009c  lw          $a0, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354190) {
            ctx->pc = 0x354280u;
            goto label_354280;
        }
    }
    ctx->pc = 0x354198u;
    // 0x354198: 0x2cc20011  sltiu       $v0, $a2, 0x11
    ctx->pc = 0x354198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x35419c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35419Cu;
    {
        const bool branch_taken_0x35419c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3541A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35419Cu;
        // 0x3541a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35419c) {
            ctx->pc = 0x3541E0u;
            goto label_3541e0;
        }
    }
    ctx->pc = 0x3541A4u;
    // 0x3541a4: 0x10c20024  beq         $a2, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3541A4u;
    {
        const bool branch_taken_0x3541a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3541A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3541A4u;
        // 0x3541a8: 0x2cc20003  sltiu       $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3541a4) {
            ctx->pc = 0x354238u;
            goto label_354238;
        }
    }
    ctx->pc = 0x3541ACu;
    // 0x3541ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3541ACu;
    {
        const bool branch_taken_0x3541ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3541B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3541ACu;
        // 0x3541b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3541ac) {
            ctx->pc = 0x3541C4u;
            goto label_3541c4;
        }
    }
    ctx->pc = 0x3541B4u;
    // 0x3541b4: 0x10c2001a  beq         $a2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3541B4u;
    {
        const bool branch_taken_0x3541b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3541B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3541B4u;
        // 0x3541b8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3541b4) {
            ctx->pc = 0x354220u;
            goto label_354220;
        }
    }
    ctx->pc = 0x3541BCu;
    // 0x3541bc: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x3541BCu;
    {
        const bool branch_taken_0x3541bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3541bc) {
            ctx->pc = 0x3542F8u;
            goto label_3542f8;
        }
    }
    ctx->pc = 0x3541C4u;
label_3541c4:
    // 0x3541c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3541c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3541c8: 0x10c20021  beq         $a2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3541C8u;
    {
        const bool branch_taken_0x3541c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3541CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3541C8u;
        // 0x3541cc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3541c8) {
            ctx->pc = 0x354250u;
            goto label_354250;
        }
    }
    ctx->pc = 0x3541D0u;
    // 0x3541d0: 0x10c20025  beq         $a2, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3541D0u;
    {
        const bool branch_taken_0x3541d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3541D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3541D0u;
        // 0x3541d4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3541d0) {
            ctx->pc = 0x354268u;
            goto label_354268;
        }
    }
    ctx->pc = 0x3541D8u;
    // 0x3541d8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x3541D8u;
    {
        const bool branch_taken_0x3541d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3541d8) {
            ctx->pc = 0x3542F8u;
            goto label_3542f8;
        }
    }
    ctx->pc = 0x3541E0u;
label_3541e0:
    // 0x3541e0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x3541e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3541e4: 0x10c20032  beq         $a2, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3541E4u;
    {
        const bool branch_taken_0x3541e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3541E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3541E4u;
        // 0x3541e8: 0x2cc20041  sltiu       $v0, $a2, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3541e4) {
            ctx->pc = 0x3542B0u;
            goto label_3542b0;
        }
    }
    ctx->pc = 0x3541ECu;
    // 0x3541ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3541ECu;
    {
        const bool branch_taken_0x3541ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3541F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3541ECu;
        // 0x3541f0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3541ec) {
            ctx->pc = 0x354204u;
            goto label_354204;
        }
    }
    ctx->pc = 0x3541F4u;
    // 0x3541f4: 0x10c20028  beq         $a2, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3541F4u;
    {
        const bool branch_taken_0x3541f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3541F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3541F4u;
        // 0x3541f8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3541f4) {
            ctx->pc = 0x354298u;
            goto label_354298;
        }
    }
    ctx->pc = 0x3541FCu;
    // 0x3541fc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3541FCu;
    {
        const bool branch_taken_0x3541fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3541fc) {
            ctx->pc = 0x3542F8u;
            goto label_3542f8;
        }
    }
    ctx->pc = 0x354204u;
label_354204:
    // 0x354204: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x354204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x354208: 0x10c2002f  beq         $a2, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x354208u;
    {
        const bool branch_taken_0x354208 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x35420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354208u;
        // 0x35420c: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354208) {
            ctx->pc = 0x3542C8u;
            goto label_3542c8;
        }
    }
    ctx->pc = 0x354210u;
    // 0x354210: 0x10c20033  beq         $a2, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x354210u;
    {
        const bool branch_taken_0x354210 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x354214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354210u;
        // 0x354214: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354210) {
            ctx->pc = 0x3542E0u;
            goto label_3542e0;
        }
    }
    ctx->pc = 0x354218u;
    // 0x354218: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x354218u;
    {
        const bool branch_taken_0x354218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354218) {
            ctx->pc = 0x3542F8u;
            goto label_3542f8;
        }
    }
    ctx->pc = 0x354220u;
label_354220:
    // 0x354220: 0x8c8200e4  lw          $v0, 0xE4($a0)
    ctx->pc = 0x354220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x354224: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x354224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x354228: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x354228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x35422c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x35422cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x354230: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x354230u;
    {
        const bool branch_taken_0x354230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354230u;
        // 0x354234: 0x8c470140  lw          $a3, 0x140($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354230) {
            ctx->pc = 0x3542F4u;
            goto label_3542f4;
        }
    }
    ctx->pc = 0x354238u;
label_354238:
    // 0x354238: 0x8c8200e4  lw          $v0, 0xE4($a0)
    ctx->pc = 0x354238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x35423c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x35423cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x354240: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x354240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x354244: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x354244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x354248: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x354248u;
    {
        const bool branch_taken_0x354248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354248u;
        // 0x35424c: 0x8c470150  lw          $a3, 0x150($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354248) {
            ctx->pc = 0x3542F4u;
            goto label_3542f4;
        }
    }
    ctx->pc = 0x354250u;
label_354250:
    // 0x354250: 0x8c8200e4  lw          $v0, 0xE4($a0)
    ctx->pc = 0x354250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x354254: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x354254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x354258: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x354258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x35425c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x35425cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x354260: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x354260u;
    {
        const bool branch_taken_0x354260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354260u;
        // 0x354264: 0x8c47014c  lw          $a3, 0x14C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354260) {
            ctx->pc = 0x3542F4u;
            goto label_3542f4;
        }
    }
    ctx->pc = 0x354268u;
label_354268:
    // 0x354268: 0x8c8200e4  lw          $v0, 0xE4($a0)
    ctx->pc = 0x354268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x35426c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x35426cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x354270: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x354270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x354274: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x354274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x354278: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x354278u;
    {
        const bool branch_taken_0x354278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354278u;
        // 0x35427c: 0x8c470144  lw          $a3, 0x144($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354278) {
            ctx->pc = 0x3542F4u;
            goto label_3542f4;
        }
    }
    ctx->pc = 0x354280u;
label_354280:
    // 0x354280: 0x8c8200e4  lw          $v0, 0xE4($a0)
    ctx->pc = 0x354280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x354284: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x354284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x354288: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x354288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x35428c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x35428cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x354290: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x354290u;
    {
        const bool branch_taken_0x354290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354290u;
        // 0x354294: 0x8c470148  lw          $a3, 0x148($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354290) {
            ctx->pc = 0x3542F4u;
            goto label_3542f4;
        }
    }
    ctx->pc = 0x354298u;
label_354298:
    // 0x354298: 0x8c8200e4  lw          $v0, 0xE4($a0)
    ctx->pc = 0x354298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x35429c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x35429cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3542a0: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x3542a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3542a4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x3542a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3542a8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3542A8u;
    {
        const bool branch_taken_0x3542a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3542ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3542A8u;
        // 0x3542ac: 0x8c470158  lw          $a3, 0x158($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3542a8) {
            ctx->pc = 0x3542F4u;
            goto label_3542f4;
        }
    }
    ctx->pc = 0x3542B0u;
label_3542b0:
    // 0x3542b0: 0x8c8200e4  lw          $v0, 0xE4($a0)
    ctx->pc = 0x3542b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x3542b4: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x3542b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3542b8: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x3542b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3542bc: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x3542bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3542c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3542C0u;
    {
        const bool branch_taken_0x3542c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3542C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3542C0u;
        // 0x3542c4: 0x8c470154  lw          $a3, 0x154($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3542c0) {
            ctx->pc = 0x3542F4u;
            goto label_3542f4;
        }
    }
    ctx->pc = 0x3542C8u;
label_3542c8:
    // 0x3542c8: 0x8c8200e4  lw          $v0, 0xE4($a0)
    ctx->pc = 0x3542c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x3542cc: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x3542ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3542d0: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x3542d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3542d4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x3542d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3542d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3542D8u;
    {
        const bool branch_taken_0x3542d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3542DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3542D8u;
        // 0x3542dc: 0x8c47015c  lw          $a3, 0x15C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3542d8) {
            ctx->pc = 0x3542F4u;
            goto label_3542f4;
        }
    }
    ctx->pc = 0x3542E0u;
label_3542e0:
    // 0x3542e0: 0x8c8200e4  lw          $v0, 0xE4($a0)
    ctx->pc = 0x3542e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x3542e4: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x3542e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3542e8: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x3542e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3542ec: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x3542ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3542f0: 0x8c470160  lw          $a3, 0x160($v0)
    ctx->pc = 0x3542f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
label_3542f4:
    // 0x3542f4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x3542f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3542f8:
    // 0x3542f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3542F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3542F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354300u;
}
