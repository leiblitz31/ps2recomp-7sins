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

// Function: sub_002F7AC0
// Address: 0x2f7ac0 - 0x2f7e08
void sub_002F7AC0_0x2f7ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7AC0_0x2f7ac0");
#endif

    switch (ctx->pc) {
        case 0x2f7b14u: goto label_2f7b14;
        case 0x2f7b20u: goto label_2f7b20;
        case 0x2f7b28u: goto label_2f7b28;
        case 0x2f7b5cu: goto label_2f7b5c;
        case 0x2f7b78u: goto label_2f7b78;
        case 0x2f7b94u: goto label_2f7b94;
        case 0x2f7bb0u: goto label_2f7bb0;
        case 0x2f7bc0u: goto label_2f7bc0;
        case 0x2f7bc8u: goto label_2f7bc8;
        case 0x2f7bfcu: goto label_2f7bfc;
        case 0x2f7c28u: goto label_2f7c28;
        case 0x2f7c38u: goto label_2f7c38;
        case 0x2f7c40u: goto label_2f7c40;
        case 0x2f7c6cu: goto label_2f7c6c;
        case 0x2f7cb8u: goto label_2f7cb8;
        case 0x2f7cd0u: goto label_2f7cd0;
        case 0x2f7ce8u: goto label_2f7ce8;
        case 0x2f7d1cu: goto label_2f7d1c;
        case 0x2f7d24u: goto label_2f7d24;
        case 0x2f7d60u: goto label_2f7d60;
        case 0x2f7d98u: goto label_2f7d98;
        case 0x2f7da8u: goto label_2f7da8;
        case 0x2f7decu: goto label_2f7dec;
        default: break;
    }

    ctx->pc = 0x2f7ac0u;

    // 0x2f7ac0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f7ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2f7ac4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7ac8: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2f7ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2f7acc: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2f7accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2f7ad0: 0x3c1e004f  lui         $fp, 0x4F
    ctx->pc = 0x2f7ad0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)79 << 16));
    // 0x2f7ad4: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x2f7ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2f7ad8: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2f7ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2f7adc: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2f7adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2f7ae0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2f7ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2f7ae4: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2f7ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2f7ae8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2f7ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2f7aec: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2f7aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2f7af0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f7af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f7af4: 0x8fc20ac8  lw          $v0, 0xAC8($fp)
    ctx->pc = 0x2f7af4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F0AC8u));
    // 0x2f7af8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7AF8u;
    {
        const bool branch_taken_0x2f7af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F7AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AF8u;
        // 0x2f7afc: 0x3c170061  lui         $s7, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7af8) {
            ctx->pc = 0x2F7B08u;
            goto label_2f7b08;
        }
    }
    ctx->pc = 0x2F7B00u;
    // 0x2f7b00: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2F7B00u;
    {
        const bool branch_taken_0x2f7b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B00u;
        // 0x2f7b04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b00) {
            ctx->pc = 0x2F7D30u;
            goto label_2f7d30;
        }
    }
    ctx->pc = 0x2F7B08u;
label_2f7b08:
    // 0x2f7b08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f7b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7b0c: 0xc0c0448  jal         func_301120
    ctx->pc = 0x2F7B0Cu;
    SET_GPR_U32(ctx, 31, 0x2F7B14u);
    ctx->pc = 0x2F7B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7B0Cu;
    // 0x2f7b10: 0xaee0eb00  sw          $zero, -0x1500($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294961920), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301120u, 0x2F7B0Cu, 0x2F7B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7B14u;
label_2f7b14:
    // 0x2f7b14: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F7B14u;
    {
        const bool branch_taken_0x2f7b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B14u;
        // 0x2f7b18: 0x3c110061  lui         $s1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b14) {
            ctx->pc = 0x2F7B44u;
            goto label_2f7b44;
        }
    }
    ctx->pc = 0x2F7B1Cu;
    // 0x2f7b1c: 0x0  nop
    ctx->pc = 0x2f7b1cu;
    // NOP
label_2f7b20:
    // 0x2f7b20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f7b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f7b24: 0x0  nop
    ctx->pc = 0x2f7b24u;
    // NOP
label_2f7b28:
    // 0x2f7b28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f7b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f7b2c: 0x0  nop
    ctx->pc = 0x2f7b2cu;
    // NOP
    // 0x2f7b30: 0x0  nop
    ctx->pc = 0x2f7b30u;
    // NOP
    // 0x2f7b34: 0x0  nop
    ctx->pc = 0x2f7b34u;
    // NOP
    // 0x2f7b38: 0x0  nop
    ctx->pc = 0x2f7b38u;
    // NOP
    // 0x2f7b3c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F7B3Cu;
    {
        const bool branch_taken_0x2f7b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f7b3c) {
            ctx->pc = 0x2F7B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7b28;
        }
    }
    ctx->pc = 0x2F7B44u;
label_2f7b44:
    // 0x2f7b44: 0x2630c648  addiu       $s0, $s1, -0x39B8
    ctx->pc = 0x2f7b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952520));
    // 0x2f7b48: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f7b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f7b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7b50: 0x34a51300  ori         $a1, $a1, 0x1300
    ctx->pc = 0x2f7b50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4864);
    // 0x2f7b54: 0xc0c0632  jal         func_3018C8
    ctx->pc = 0x2F7B54u;
    SET_GPR_U32(ctx, 31, 0x2F7B5Cu);
    ctx->pc = 0x2F7B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7B54u;
    // 0x2f7b58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3018C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3018C8u, 0x2F7B54u, 0x2F7B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7B5Cu;
label_2f7b5c:
    // 0x2f7b5c: 0x440005a  bltz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x2F7B5Cu;
    {
        const bool branch_taken_0x2f7b5c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B5Cu;
        // 0x2f7b60: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b5c) {
            ctx->pc = 0x2F7CC8u;
            goto label_2f7cc8;
        }
    }
    ctx->pc = 0x2F7B64u;
    // 0x2f7b64: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2f7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2f7b68: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2F7B68u;
    {
        const bool branch_taken_0x2f7b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B68u;
        // 0x2f7b6c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b68) {
            ctx->pc = 0x2F7B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7b20;
        }
    }
    ctx->pc = 0x2F7B70u;
    // 0x2f7b70: 0xc0bde9a  jal         func_2F7A68
    ctx->pc = 0x2F7B70u;
    SET_GPR_U32(ctx, 31, 0x2F7B78u);
    ctx->pc = 0x2F7A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7A68u, 0x2F7B70u, 0x2F7B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7B78u;
label_2f7b78:
    // 0x2f7b78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f7b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7b7c: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x2f7b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2f7b80: 0x101103  sra         $v0, $s0, 4
    ctx->pc = 0x2f7b80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 4));
    // 0x2f7b84: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2F7B84u;
    {
        const bool branch_taken_0x2f7b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F7B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B84u;
        // 0x2f7b88: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b84) {
            ctx->pc = 0x2F7BB8u;
            goto label_2f7bb8;
        }
    }
    ctx->pc = 0x2F7B8Cu;
    // 0x2f7b8c: 0xc0c0212  jal         func_300848
    ctx->pc = 0x2F7B8Cu;
    SET_GPR_U32(ctx, 31, 0x2F7B94u);
    ctx->pc = 0x2F7B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7B8Cu;
    // 0x2f7b90: 0x24849c60  addiu       $a0, $a0, -0x63A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x2F7B8Cu, 0x2F7B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7B94u;
label_2f7b94:
    // 0x2f7b94: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f7b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f7b98: 0x320800ff  andi        $t0, $s0, 0xFF
    ctx->pc = 0x2f7b98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2f7b9c: 0x24849c88  addiu       $a0, $a0, -0x6378
    ctx->pc = 0x2f7b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941832));
    // 0x2f7ba0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f7ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f7ba4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2f7ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f7ba8: 0xc0c0212  jal         func_300848
    ctx->pc = 0x2F7BA8u;
    SET_GPR_U32(ctx, 31, 0x2F7BB0u);
    ctx->pc = 0x2F7BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7BA8u;
    // 0x2f7bac: 0x103a03  sra         $a3, $s0, 8 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x2F7BA8u, 0x2F7BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7BB0u;
label_2f7bb0:
    // 0x2f7bb0: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2F7BB0u;
    {
        const bool branch_taken_0x2f7bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7BB0u;
        // 0x2f7bb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7bb0) {
            ctx->pc = 0x2F7D30u;
            goto label_2f7d30;
        }
    }
    ctx->pc = 0x2F7BB8u;
label_2f7bb8:
    // 0x2f7bb8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F7BB8u;
    {
        const bool branch_taken_0x2f7bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7BB8u;
        // 0x2f7bbc: 0x3c110061  lui         $s1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7bb8) {
            ctx->pc = 0x2F7BE4u;
            goto label_2f7be4;
        }
    }
    ctx->pc = 0x2F7BC0u;
label_2f7bc0:
    // 0x2f7bc0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2f7bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2f7bc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f7bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f7bc8:
    // 0x2f7bc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f7bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f7bcc: 0x0  nop
    ctx->pc = 0x2f7bccu;
    // NOP
    // 0x2f7bd0: 0x0  nop
    ctx->pc = 0x2f7bd0u;
    // NOP
    // 0x2f7bd4: 0x0  nop
    ctx->pc = 0x2f7bd4u;
    // NOP
    // 0x2f7bd8: 0x0  nop
    ctx->pc = 0x2f7bd8u;
    // NOP
    // 0x2f7bdc: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F7BDCu;
    {
        const bool branch_taken_0x2f7bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f7bdc) {
            ctx->pc = 0x2F7BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7bc8;
        }
    }
    ctx->pc = 0x2F7BE4u;
label_2f7be4:
    // 0x2f7be4: 0x2630c698  addiu       $s0, $s1, -0x3968
    ctx->pc = 0x2f7be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952600));
    // 0x2f7be8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f7be8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f7bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7bf0: 0x34a5131c  ori         $a1, $a1, 0x131C
    ctx->pc = 0x2f7bf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4892);
    // 0x2f7bf4: 0xc0c0632  jal         func_3018C8
    ctx->pc = 0x2F7BF4u;
    SET_GPR_U32(ctx, 31, 0x2F7BFCu);
    ctx->pc = 0x2F7BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7BF4u;
    // 0x2f7bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3018C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3018C8u, 0x2F7BF4u, 0x2F7BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7BFCu;
label_2f7bfc:
    // 0x2f7bfc: 0x4400032  bltz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2F7BFCu;
    {
        const bool branch_taken_0x2f7bfc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F7C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7BFCu;
        // 0x2f7c00: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7bfc) {
            ctx->pc = 0x2F7CC8u;
            goto label_2f7cc8;
        }
    }
    ctx->pc = 0x2F7C04u;
    // 0x2f7c04: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2f7c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2f7c08: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2F7C08u;
    {
        const bool branch_taken_0x2f7c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C08u;
        // 0x2f7c0c: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7c08) {
            ctx->pc = 0x2F7BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7bc0;
        }
    }
    ctx->pc = 0x2F7C10u;
    // 0x2f7c10: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x2f7c10u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x2f7c14: 0x2456c6c0  addiu       $s6, $v0, -0x3940
    ctx->pc = 0x2f7c14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952640));
    // 0x2f7c18: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f7c18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7c1c: 0x3673131e  ori         $s3, $s3, 0x131E
    ctx->pc = 0x2f7c1cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4894);
    // 0x2f7c20: 0x26d50024  addiu       $s5, $s6, 0x24
    ctx->pc = 0x2f7c20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 36));
    // 0x2f7c24: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f7c24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7c28:
    // 0x2f7c28: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x2f7c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7c2c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F7C2Cu;
    {
        const bool branch_taken_0x2f7c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C2Cu;
        // 0x2f7c30: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7c2c) {
            ctx->pc = 0x2F7C5Cu;
            goto label_2f7c5c;
        }
    }
    ctx->pc = 0x2F7C34u;
    // 0x2f7c34: 0x0  nop
    ctx->pc = 0x2f7c34u;
    // NOP
label_2f7c38:
    // 0x2f7c38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f7c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f7c3c: 0x0  nop
    ctx->pc = 0x2f7c3cu;
    // NOP
label_2f7c40:
    // 0x2f7c40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f7c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f7c44: 0x0  nop
    ctx->pc = 0x2f7c44u;
    // NOP
    // 0x2f7c48: 0x0  nop
    ctx->pc = 0x2f7c48u;
    // NOP
    // 0x2f7c4c: 0x0  nop
    ctx->pc = 0x2f7c4cu;
    // NOP
    // 0x2f7c50: 0x0  nop
    ctx->pc = 0x2f7c50u;
    // NOP
    // 0x2f7c54: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F7C54u;
    {
        const bool branch_taken_0x2f7c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f7c54) {
            ctx->pc = 0x2F7C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7c40;
        }
    }
    ctx->pc = 0x2F7C5Cu;
label_2f7c5c:
    // 0x2f7c5c: 0x2362021  addu        $a0, $s1, $s6
    ctx->pc = 0x2f7c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x2f7c60: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x2f7c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2f7c64: 0xc0c0632  jal         func_3018C8
    ctx->pc = 0x2F7C64u;
    SET_GPR_U32(ctx, 31, 0x2F7C6Cu);
    ctx->pc = 0x2F7C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7C64u;
    // 0x2f7c68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3018C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3018C8u, 0x2F7C64u, 0x2F7C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7C6Cu;
label_2f7c6c:
    // 0x2f7c6c: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F7C6Cu;
    {
        const bool branch_taken_0x2f7c6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F7C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C6Cu;
        // 0x2f7c70: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7c6c) {
            ctx->pc = 0x2F7CC8u;
            goto label_2f7cc8;
        }
    }
    ctx->pc = 0x2F7C74u;
    // 0x2f7c74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f7c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f7c78: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2F7C78u;
    {
        const bool branch_taken_0x2f7c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C78u;
        // 0x2f7c7c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7c78) {
            ctx->pc = 0x2F7C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7c38;
        }
    }
    ctx->pc = 0x2F7C80u;
    // 0x2f7c80: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f7c80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f7c84: 0x26b50028  addiu       $s5, $s5, 0x28
    ctx->pc = 0x2f7c84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
    // 0x2f7c88: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2f7c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f7c8c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2F7C8Cu;
    {
        const bool branch_taken_0x2f7c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C8Cu;
        // 0x2f7c90: 0x26940028  addiu       $s4, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7c8c) {
            ctx->pc = 0x2F7C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7c28;
        }
    }
    ctx->pc = 0x2F7C94u;
    // 0x2f7c94: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f7c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2f7c98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7c9c: 0x24429cb8  addiu       $v0, $v0, -0x6348
    ctx->pc = 0x2f7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941880));
    // 0x2f7ca0: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x2f7ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2f7ca4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2f7ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2f7ca8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f7ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7cac: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2f7cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2f7cb0: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x2F7CB0u;
    SET_GPR_U32(ctx, 31, 0x2F7CB8u);
    ctx->pc = 0x2F7CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7CB0u;
    // 0x2f7cb4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x2F7CB0u, 0x2F7CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7CB8u;
label_2f7cb8:
    // 0x2f7cb8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F7CB8u;
    {
        const bool branch_taken_0x2f7cb8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F7CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7CB8u;
        // 0x2f7cbc: 0xaee2eb00  sw          $v0, -0x1500($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294961920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7cb8) {
            ctx->pc = 0x2F7CD8u;
            goto label_2f7cd8;
        }
    }
    ctx->pc = 0x2F7CC0u;
    // 0x2f7cc0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2F7CC0u;
    {
        const bool branch_taken_0x2f7cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7CC0u;
        // 0x2f7cc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7cc0) {
            ctx->pc = 0x2F7D30u;
            goto label_2f7d30;
        }
    }
    ctx->pc = 0x2F7CC8u;
label_2f7cc8:
    // 0x2f7cc8: 0xc0be29c  jal         func_2F8A70
    ctx->pc = 0x2F7CC8u;
    SET_GPR_U32(ctx, 31, 0x2F7CD0u);
    ctx->pc = 0x2F7CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7CC8u;
    // 0x2f7ccc: 0x24849c48  addiu       $a0, $a0, -0x63B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8A70u, 0x2F7CC8u, 0x2F7CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7CD0u;
label_2f7cd0:
    // 0x2f7cd0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2F7CD0u;
    {
        const bool branch_taken_0x2f7cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7CD0u;
        // 0x2f7cd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7cd0) {
            ctx->pc = 0x2F7D30u;
            goto label_2f7d30;
        }
    }
    ctx->pc = 0x2F7CD8u;
label_2f7cd8:
    // 0x2f7cd8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2f7cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2f7cdc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2f7cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2f7ce0: 0x2442eac0  addiu       $v0, $v0, -0x1540
    ctx->pc = 0x2f7ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961856));
    // 0x2f7ce4: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x2f7ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_2f7ce8:
    // 0x2f7ce8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2f7ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2f7cec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f7cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f7cf0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2f7cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2f7cf4: 0x0  nop
    ctx->pc = 0x2f7cf4u;
    // NOP
    // 0x2f7cf8: 0x0  nop
    ctx->pc = 0x2f7cf8u;
    // NOP
    // 0x2f7cfc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F7CFCu;
    {
        const bool branch_taken_0x2f7cfc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2f7cfc) {
            ctx->pc = 0x2F7CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7ce8;
        }
    }
    ctx->pc = 0x2F7D04u;
    // 0x2f7d04: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x2f7d04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
    // 0x2f7d08: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f7d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f7d0c: 0x2610ea40  addiu       $s0, $s0, -0x15C0
    ctx->pc = 0x2f7d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961728));
    // 0x2f7d10: 0x24849cc8  addiu       $a0, $a0, -0x6338
    ctx->pc = 0x2f7d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941896));
    // 0x2f7d14: 0xc0be29c  jal         func_2F8A70
    ctx->pc = 0x2F7D14u;
    SET_GPR_U32(ctx, 31, 0x2F7D1Cu);
    ctx->pc = 0x2F7D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7D14u;
    // 0x2f7d18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8A70u, 0x2F7D14u, 0x2F7D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7D1Cu;
label_2f7d1c:
    // 0x2f7d1c: 0xc0bdf82  jal         func_2F7E08
    ctx->pc = 0x2F7D1Cu;
    SET_GPR_U32(ctx, 31, 0x2F7D24u);
    ctx->pc = 0x2F7D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7D1Cu;
    // 0x2f7d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7E08u, 0x2F7D1Cu, 0x2F7D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7D24u;
label_2f7d24:
    // 0x2f7d24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7d28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f7d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7d2c: 0xafc30ac8  sw          $v1, 0xAC8($fp)
    ctx->pc = 0x2f7d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 2760), GPR_U32(ctx, 3));
label_2f7d30:
    // 0x2f7d30: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2f7d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f7d34: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2f7d34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f7d38: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x2f7d38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f7d3c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2f7d3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f7d40: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2f7d40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f7d44: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2f7d44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f7d48: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2f7d48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f7d4c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2f7d4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f7d50: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2f7d50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7d54: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f7d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7d58: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D58u;
        // 0x2f7d5c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7D60u;
label_2f7d60:
    // 0x2f7d60: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2f7d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x2f7d64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f7d64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f7d68: 0x8c620ac8  lw          $v0, 0xAC8($v1)
    ctx->pc = 0x2f7d68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F0AC8u));
    // 0x2f7d6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7D6Cu;
    {
        const bool branch_taken_0x2f7d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D6Cu;
        // 0x2f7d70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7d6c) {
            ctx->pc = 0x2F7D7Cu;
            goto label_2f7d7c;
        }
    }
    ctx->pc = 0x2F7D74u;
    // 0x2f7d74: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F7D74u;
    {
        const bool branch_taken_0x2f7d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D74u;
        // 0x2f7d78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7d74) {
            ctx->pc = 0x2F7D9Cu;
            goto label_2f7d9c;
        }
    }
    ctx->pc = 0x2F7D7Cu;
label_2f7d7c:
    // 0x2f7d7c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2f7d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2f7d80: 0xac600ac8  sw          $zero, 0xAC8($v1)
    ctx->pc = 0x2f7d80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2760), GPR_U32(ctx, 0));
    // 0x2f7d84: 0x8c44eb00  lw          $a0, -0x1500($v0)
    ctx->pc = 0x2f7d84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x60EB00u));
    // 0x2f7d88: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7D88u;
    {
        const bool branch_taken_0x2f7d88 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2F7D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D88u;
        // 0x2f7d8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7d88) {
            ctx->pc = 0x2F7D9Cu;
            goto label_2f7d9c;
        }
    }
    ctx->pc = 0x2F7D90u;
    // 0x2f7d90: 0xc0bf6dc  jal         func_2FDB70
    ctx->pc = 0x2F7D90u;
    SET_GPR_U32(ctx, 31, 0x2F7D98u);
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x2F7D90u, 0x2F7D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7D98u;
label_2f7d98:
    // 0x2f7d98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f7d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f7d9c:
    // 0x2f7d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f7d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7da0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7DA0u;
        // 0x2f7da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7DA8u;
label_2f7da8:
    // 0x2f7da8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f7da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f7dac: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2f7dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2f7db0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f7db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f7db4: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2f7db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2f7db8: 0x2450c740  addiu       $s0, $v0, -0x38C0
    ctx->pc = 0x2f7db8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952768));
    // 0x2f7dbc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f7dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f7dc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f7dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f7dc4: 0x2484c648  addiu       $a0, $a0, -0x39B8
    ctx->pc = 0x2f7dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952520));
    // 0x2f7dc8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f7dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f7dcc: 0x34a51305  ori         $a1, $a1, 0x1305
    ctx->pc = 0x2f7dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4869);
    // 0x2f7dd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f7dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7dd4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2f7dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7dd8: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2f7dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f7ddc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f7ddcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7de0: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x2f7de0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f7de4: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x2F7DE4u;
    SET_GPR_U32(ctx, 31, 0x2F7DECu);
    ctx->pc = 0x2F7DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7DE4u;
    // 0x2f7de8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x2F7DE4u, 0x2F7DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7DECu;
label_2f7dec:
    // 0x2f7dec: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F7DECu;
    {
        const bool branch_taken_0x2f7dec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f7dec) {
            ctx->pc = 0x2F7DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7DECu;
            // 0x2f7df0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7DF8u;
            goto label_2f7df8;
        }
    }
    ctx->pc = 0x2F7DF4u;
    // 0x2f7df4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7df8:
    // 0x2f7df8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f7df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7dfc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f7dfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7e00: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7E00u;
        // 0x2f7e04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7E08u;
}
