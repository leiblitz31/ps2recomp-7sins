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

// Function: sub_0049FD00
// Address: 0x49fd00 - 0x4a0320
void sub_0049FD00_0x49fd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049FD00_0x49fd00");
#endif

    switch (ctx->pc) {
        case 0x49fd60u: goto label_49fd60;
        case 0x49fd98u: goto label_49fd98;
        case 0x49fdb0u: goto label_49fdb0;
        case 0x49fdd8u: goto label_49fdd8;
        case 0x49fde8u: goto label_49fde8;
        case 0x49fdf8u: goto label_49fdf8;
        case 0x49fe10u: goto label_49fe10;
        case 0x49fe50u: goto label_49fe50;
        case 0x49fe64u: goto label_49fe64;
        case 0x49fe68u: goto label_49fe68;
        case 0x49fe78u: goto label_49fe78;
        case 0x49fe94u: goto label_49fe94;
        case 0x49fea8u: goto label_49fea8;
        case 0x49fec0u: goto label_49fec0;
        case 0x49ff10u: goto label_49ff10;
        case 0x49ff24u: goto label_49ff24;
        case 0x49ff28u: goto label_49ff28;
        case 0x49ff38u: goto label_49ff38;
        case 0x49ff54u: goto label_49ff54;
        case 0x49ff68u: goto label_49ff68;
        case 0x49ff80u: goto label_49ff80;
        case 0x49ffa8u: goto label_49ffa8;
        case 0x49ffe8u: goto label_49ffe8;
        case 0x49fffcu: goto label_49fffc;
        case 0x4a0000u: goto label_4a0000;
        case 0x4a0010u: goto label_4a0010;
        case 0x4a002cu: goto label_4a002c;
        case 0x4a0040u: goto label_4a0040;
        case 0x4a0058u: goto label_4a0058;
        case 0x4a0074u: goto label_4a0074;
        case 0x4a0090u: goto label_4a0090;
        case 0x4a00d0u: goto label_4a00d0;
        case 0x4a00e4u: goto label_4a00e4;
        case 0x4a00e8u: goto label_4a00e8;
        case 0x4a00f8u: goto label_4a00f8;
        case 0x4a0114u: goto label_4a0114;
        case 0x4a0128u: goto label_4a0128;
        case 0x4a0140u: goto label_4a0140;
        case 0x4a0170u: goto label_4a0170;
        case 0x4a0184u: goto label_4a0184;
        case 0x4a01a0u: goto label_4a01a0;
        case 0x4a01c8u: goto label_4a01c8;
        case 0x4a01d4u: goto label_4a01d4;
        case 0x4a01dcu: goto label_4a01dc;
        case 0x4a0220u: goto label_4a0220;
        case 0x4a0234u: goto label_4a0234;
        case 0x4a0238u: goto label_4a0238;
        case 0x4a0248u: goto label_4a0248;
        case 0x4a0264u: goto label_4a0264;
        case 0x4a0278u: goto label_4a0278;
        case 0x4a0290u: goto label_4a0290;
        case 0x4a02b0u: goto label_4a02b0;
        case 0x4a02e0u: goto label_4a02e0;
        default: break;
    }

    ctx->pc = 0x49fd00u;

    // 0x49fd00: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x49fd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x49fd04: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x49fd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x49fd08: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x49fd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x49fd0c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x49fd0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fd10: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x49fd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x49fd14: 0x169103  sra         $s2, $s6, 4
    ctx->pc = 0x49fd14u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 22), 4));
    // 0x49fd18: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x49fd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x49fd1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x49fd1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fd20: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x49fd20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fd24: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x49fd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x49fd28: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x49fd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x49fd2c: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x49fd2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x49fd30: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x49fd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x49fd34: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x49fd34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fd38: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x49fd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x49fd3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x49fd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fd40: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x49fd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x49fd44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x49fd44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fd48: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x49fd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x49fd4c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x49fd4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fd50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x49fd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x49fd54: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x49fd54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x49fd58: 0xc12af4a  jal         func_4ABD28
    ctx->pc = 0x49FD58u;
    SET_GPR_U32(ctx, 31, 0x49FD60u);
    ctx->pc = 0x49FD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FD58u;
    // 0x49fd5c: 0xafa8002c  sw          $t0, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ABD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABD28u, 0x49FD58u, 0x49FD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FD60u;
label_49fd60:
    // 0x49fd60: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x49FD60u;
    {
        const bool branch_taken_0x49fd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FD60u;
        // 0x49fd64: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fd60) {
            ctx->pc = 0x49FDE8u;
            goto label_49fde8;
        }
    }
    ctx->pc = 0x49FD68u;
    // 0x49fd68: 0x2402080a  addiu       $v0, $zero, 0x80A
    ctx->pc = 0x49fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2058));
    // 0x49fd6c: 0x14620160  bne         $v1, $v0, . + 4 + (0x160 << 2)
    ctx->pc = 0x49FD6Cu;
    {
        const bool branch_taken_0x49fd6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x49FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FD6Cu;
        // 0x49fd70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fd6c) {
            ctx->pc = 0x4A02F0u;
            goto label_4a02f0;
        }
    }
    ctx->pc = 0x49FD74u;
    // 0x49fd74: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x49fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49fd78: 0x1040015d  beqz        $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x49FD78u;
    {
        const bool branch_taken_0x49fd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FD78u;
        // 0x49fd7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fd78) {
            ctx->pc = 0x4A02F0u;
            goto label_4a02f0;
        }
    }
    ctx->pc = 0x49FD80u;
    // 0x49fd80: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x49FD80u;
    {
        const bool branch_taken_0x49fd80 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x49fd80) {
            ctx->pc = 0x49FD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49FD80u;
            // 0x49fd84: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49FDF0u;
            goto label_49fdf0;
        }
    }
    ctx->pc = 0x49FD88u;
    // 0x49fd88: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x49fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x49fd8c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x49fd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x49fd90: 0xc127ca4  jal         func_49F290
    ctx->pc = 0x49FD90u;
    SET_GPR_U32(ctx, 31, 0x49FD98u);
    ctx->pc = 0x49FD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FD90u;
    // 0x49fd94: 0x34a50808  ori         $a1, $a1, 0x808 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2056);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x49FD90u, 0x49FD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FD98u;
label_49fd98:
    // 0x49fd98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x49fd98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fd9c: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x49FD9Cu;
    {
        const bool branch_taken_0x49fd9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FD9Cu;
        // 0x49fda0: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fd9c) {
            ctx->pc = 0x49FDE8u;
            goto label_49fde8;
        }
    }
    ctx->pc = 0x49FDA4u;
    // 0x49fda4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x49fda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fda8: 0xc10480a  jal         func_412028
    ctx->pc = 0x49FDA8u;
    SET_GPR_U32(ctx, 31, 0x49FDB0u);
    ctx->pc = 0x49FDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FDA8u;
    // 0x49fdac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x49FDA8u, 0x49FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FDB0u;
label_49fdb0:
    // 0x49fdb0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x49fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x49fdb4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x49FDB4u;
    {
        const bool branch_taken_0x49fdb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x49FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FDB4u;
        // 0x49fdb8: 0x36c30010  ori         $v1, $s6, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fdb4) {
            ctx->pc = 0x49FDE0u;
            goto label_49fde0;
        }
    }
    ctx->pc = 0x49FDBCu;
    // 0x49fdbc: 0x9262001b  lbu         $v0, 0x1B($s3)
    ctx->pc = 0x49fdbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 27)));
    // 0x49fdc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x49fdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fdc4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x49fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x49fdc8: 0x30520001  andi        $s2, $v0, 0x1
    ctx->pc = 0x49fdc8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49fdcc: 0x72b00b  movn        $s6, $v1, $s2
    ctx->pc = 0x49fdccu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 3));
    // 0x49fdd0: 0xc1283fe  jal         func_4A0FF8
    ctx->pc = 0x49FDD0u;
    SET_GPR_U32(ctx, 31, 0x49FDD8u);
    ctx->pc = 0x49FDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FDD0u;
    // 0x49fdd4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0FF8u, 0x49FDD0u, 0x49FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FDD8u;
label_49fdd8:
    // 0x49fdd8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x49FDD8u;
    {
        const bool branch_taken_0x49fdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FDD8u;
        // 0x49fddc: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fdd8) {
            ctx->pc = 0x49FE00u;
            goto label_49fe00;
        }
    }
    ctx->pc = 0x49FDE0u;
label_49fde0:
    // 0x49fde0: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x49FDE0u;
    SET_GPR_U32(ctx, 31, 0x49FDE8u);
    ctx->pc = 0x49FDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FDE0u;
    // 0x49fde4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x49FDE0u, 0x49FDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FDE8u;
label_49fde8:
    // 0x49fde8: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x49FDE8u;
    {
        const bool branch_taken_0x49fde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FDE8u;
        // 0x49fdec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fde8) {
            ctx->pc = 0x4A02F0u;
            goto label_4a02f0;
        }
    }
    ctx->pc = 0x49FDF0u;
label_49fdf0:
    // 0x49fdf0: 0xc1048ec  jal         func_4123B0
    ctx->pc = 0x49FDF0u;
    SET_GPR_U32(ctx, 31, 0x49FDF8u);
    ctx->pc = 0x49FDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FDF0u;
    // 0x49fdf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123B0u, 0x49FDF0u, 0x49FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FDF8u;
label_49fdf8:
    // 0x49fdf8: 0x1040013d  beqz        $v0, . + 4 + (0x13D << 2)
    ctx->pc = 0x49FDF8u;
    {
        const bool branch_taken_0x49fdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FDF8u;
        // 0x49fdfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fdf8) {
            ctx->pc = 0x4A02F0u;
            goto label_4a02f0;
        }
    }
    ctx->pc = 0x49FE00u;
label_49fe00:
    // 0x49fe00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x49fe00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fe04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x49fe04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fe08: 0xc12af4a  jal         func_4ABD28
    ctx->pc = 0x49FE08u;
    SET_GPR_U32(ctx, 31, 0x49FE10u);
    ctx->pc = 0x49FE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FE08u;
    // 0x49fe0c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ABD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABD28u, 0x49FE08u, 0x49FE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FE10u;
label_49fe10:
    // 0x49fe10: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x49FE10u;
    {
        const bool branch_taken_0x49fe10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FE10u;
        // 0x49fe14: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fe10) {
            ctx->pc = 0x49FEC8u;
            goto label_49fec8;
        }
    }
    ctx->pc = 0x49FE18u;
    // 0x49fe18: 0x13c0fff3  beqz        $fp, . + 4 + (-0xD << 2)
    ctx->pc = 0x49FE18u;
    {
        const bool branch_taken_0x49fe18 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FE18u;
        // 0x49fe1c: 0x2675000c  addiu       $s5, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fe18) {
            ctx->pc = 0x49FDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49fde8;
        }
    }
    ctx->pc = 0x49FE20u;
    // 0x49fe20: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x49fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x49fe24: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x49fe24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x49fe28: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x49fe28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x49fe2c: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x49fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x49fe30: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x49fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x49fe34: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x49fe34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x49fe38: 0x8e720010  lw          $s2, 0x10($s3)
    ctx->pc = 0x49fe38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x49fe3c: 0x12550018  beq         $s2, $s5, . + 4 + (0x18 << 2)
    ctx->pc = 0x49FE3Cu;
    {
        const bool branch_taken_0x49fe3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x49FE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FE3Cu;
        // 0x49fe40: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fe3c) {
            ctx->pc = 0x49FEA0u;
            goto label_49fea0;
        }
    }
    ctx->pc = 0x49FE44u;
    // 0x49fe44: 0x2796c1f0  addiu       $s6, $gp, -0x3E10
    ctx->pc = 0x49fe44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951408));
    // 0x49fe48: 0x8f90c1f0  lw          $s0, -0x3E10($gp)
    ctx->pc = 0x49fe48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
    // 0x49fe4c: 0x0  nop
    ctx->pc = 0x49fe4cu;
    // NOP
label_49fe50:
    // 0x49fe50: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x49fe50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fe54: 0x16160004  bne         $s0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x49FE54u;
    {
        const bool branch_taken_0x49fe54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x49FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FE54u;
        // 0x49fe58: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fe54) {
            ctx->pc = 0x49FE68u;
            goto label_49fe68;
        }
    }
    ctx->pc = 0x49FE5Cu;
    // 0x49fe5c: 0xc12a0c4  jal         func_4A8310
    ctx->pc = 0x49FE5Cu;
    SET_GPR_U32(ctx, 31, 0x49FE64u);
    ctx->pc = 0x49FE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FE5Cu;
    // 0x49fe60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8310u, 0x49FE5Cu, 0x49FE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FE64u;
label_49fe64:
    // 0x49fe64: 0x0  nop
    ctx->pc = 0x49fe64u;
    // NOP
label_49fe68:
    // 0x49fe68: 0x12160006  beq         $s0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x49FE68u;
    {
        const bool branch_taken_0x49fe68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x49FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FE68u;
        // 0x49fe6c: 0x2604ffe4  addiu       $a0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fe68) {
            ctx->pc = 0x49FE84u;
            goto label_49fe84;
        }
    }
    ctx->pc = 0x49FE70u;
    // 0x49fe70: 0xc1282be  jal         func_4A0AF8
    ctx->pc = 0x49FE70u;
    SET_GPR_U32(ctx, 31, 0x49FE78u);
    ctx->pc = 0x49FE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FE70u;
    // 0x49fe74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0AF8u, 0x49FE70u, 0x49FE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FE78u;
label_49fe78:
    // 0x49fe78: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x49FE78u;
    {
        const bool branch_taken_0x49fe78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49fe78) {
            ctx->pc = 0x49FE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49FE78u;
            // 0x49fe7c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49FE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49fe68;
        }
    }
    ctx->pc = 0x49FE80u;
    // 0x49fe80: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x49fe80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49fe84:
    // 0x49fe84: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x49FE84u;
    {
        const bool branch_taken_0x49fe84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x49fe84) {
            ctx->pc = 0x49FE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49FE84u;
            // 0x49fe88: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49FE98u;
            goto label_49fe98;
        }
    }
    ctx->pc = 0x49FE8Cu;
    // 0x49fe8c: 0xc12a0c4  jal         func_4A8310
    ctx->pc = 0x49FE8Cu;
    SET_GPR_U32(ctx, 31, 0x49FE94u);
    ctx->pc = 0x49FE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FE8Cu;
    // 0x49fe90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8310u, 0x49FE8Cu, 0x49FE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FE94u;
label_49fe94:
    // 0x49fe94: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x49fe94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_49fe98:
    // 0x49fe98: 0x1657ffed  bne         $s2, $s7, . + 4 + (-0x13 << 2)
    ctx->pc = 0x49FE98u;
    {
        const bool branch_taken_0x49fe98 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 23));
        ctx->pc = 0x49FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FE98u;
        // 0x49fe9c: 0x8f90c1f0  lw          $s0, -0x3E10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fe98) {
            ctx->pc = 0x49FE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49fe50;
        }
    }
    ctx->pc = 0x49FEA0u;
label_49fea0:
    // 0x49fea0: 0xc12aba0  jal         func_4AAE80
    ctx->pc = 0x49FEA0u;
    SET_GPR_U32(ctx, 31, 0x49FEA8u);
    ctx->pc = 0x49FEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FEA0u;
    // 0x49fea4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAE80u, 0x49FEA0u, 0x49FEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FEA8u;
label_49fea8:
    // 0x49fea8: 0x8f82b844  lw          $v0, -0x47BC($gp)
    ctx->pc = 0x49fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948932)));
    // 0x49feac: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x49FEACu;
    {
        const bool branch_taken_0x49feac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x49FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FEACu;
        // 0x49feb0: 0x8f82b840  lw          $v0, -0x47C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49feac) {
            ctx->pc = 0x49FEB8u;
            goto label_49feb8;
        }
    }
    ctx->pc = 0x49FEB4u;
    // 0x49feb4: 0xaf82b844  sw          $v0, -0x47BC($gp)
    ctx->pc = 0x49feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948932), GPR_U32(ctx, 2));
label_49feb8:
    // 0x49feb8: 0xc128486  jal         func_4A1218
    ctx->pc = 0x49FEB8u;
    SET_GPR_U32(ctx, 31, 0x49FEC0u);
    ctx->pc = 0x49FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FEB8u;
    // 0x49febc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1218u, 0x49FEB8u, 0x49FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FEC0u;
label_49fec0:
    // 0x49fec0: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x49FEC0u;
    {
        const bool branch_taken_0x49fec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FEC0u;
        // 0x49fec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fec0) {
            ctx->pc = 0x4A02F0u;
            goto label_4a02f0;
        }
    }
    ctx->pc = 0x49FEC8u;
label_49fec8:
    // 0x49fec8: 0x2402080c  addiu       $v0, $zero, 0x80C
    ctx->pc = 0x49fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x49fecc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49FECCu;
    {
        const bool branch_taken_0x49fecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x49FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FECCu;
        // 0x49fed0: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fecc) {
            ctx->pc = 0x49FEDCu;
            goto label_49fedc;
        }
    }
    ctx->pc = 0x49FED4u;
    // 0x49fed4: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x49FED4u;
    {
        const bool branch_taken_0x49fed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FED4u;
        // 0x49fed8: 0x8f82b844  lw          $v0, -0x47BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fed4) {
            ctx->pc = 0x49FF88u;
            goto label_49ff88;
        }
    }
    ctx->pc = 0x49FEDCu;
label_49fedc:
    // 0x49fedc: 0x13c0ffc2  beqz        $fp, . + 4 + (-0x3E << 2)
    ctx->pc = 0x49FEDCu;
    {
        const bool branch_taken_0x49fedc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FEDCu;
        // 0x49fee0: 0x2675000c  addiu       $s5, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fedc) {
            ctx->pc = 0x49FDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49fde8;
        }
    }
    ctx->pc = 0x49FEE4u;
    // 0x49fee4: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x49fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x49fee8: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x49fee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x49feec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x49feecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x49fef0: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x49fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x49fef4: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x49fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x49fef8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x49fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x49fefc: 0x8e720010  lw          $s2, 0x10($s3)
    ctx->pc = 0x49fefcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x49ff00: 0x12550017  beq         $s2, $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x49FF00u;
    {
        const bool branch_taken_0x49ff00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x49FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FF00u;
        // 0x49ff04: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ff00) {
            ctx->pc = 0x49FF60u;
            goto label_49ff60;
        }
    }
    ctx->pc = 0x49FF08u;
    // 0x49ff08: 0x2796c1f0  addiu       $s6, $gp, -0x3E10
    ctx->pc = 0x49ff08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951408));
    // 0x49ff0c: 0x8f90c1f0  lw          $s0, -0x3E10($gp)
    ctx->pc = 0x49ff0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
label_49ff10:
    // 0x49ff10: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x49ff10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ff14: 0x16160004  bne         $s0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x49FF14u;
    {
        const bool branch_taken_0x49ff14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x49FF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FF14u;
        // 0x49ff18: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ff14) {
            ctx->pc = 0x49FF28u;
            goto label_49ff28;
        }
    }
    ctx->pc = 0x49FF1Cu;
    // 0x49ff1c: 0xc12a0c4  jal         func_4A8310
    ctx->pc = 0x49FF1Cu;
    SET_GPR_U32(ctx, 31, 0x49FF24u);
    ctx->pc = 0x49FF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FF1Cu;
    // 0x49ff20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8310u, 0x49FF1Cu, 0x49FF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FF24u;
label_49ff24:
    // 0x49ff24: 0x0  nop
    ctx->pc = 0x49ff24u;
    // NOP
label_49ff28:
    // 0x49ff28: 0x12160006  beq         $s0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x49FF28u;
    {
        const bool branch_taken_0x49ff28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x49FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FF28u;
        // 0x49ff2c: 0x2604ffe4  addiu       $a0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ff28) {
            ctx->pc = 0x49FF44u;
            goto label_49ff44;
        }
    }
    ctx->pc = 0x49FF30u;
    // 0x49ff30: 0xc1282be  jal         func_4A0AF8
    ctx->pc = 0x49FF30u;
    SET_GPR_U32(ctx, 31, 0x49FF38u);
    ctx->pc = 0x49FF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FF30u;
    // 0x49ff34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0AF8u, 0x49FF30u, 0x49FF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FF38u;
label_49ff38:
    // 0x49ff38: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x49FF38u;
    {
        const bool branch_taken_0x49ff38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ff38) {
            ctx->pc = 0x49FF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49FF38u;
            // 0x49ff3c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49FF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ff28;
        }
    }
    ctx->pc = 0x49FF40u;
    // 0x49ff40: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x49ff40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49ff44:
    // 0x49ff44: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x49FF44u;
    {
        const bool branch_taken_0x49ff44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x49ff44) {
            ctx->pc = 0x49FF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49FF44u;
            // 0x49ff48: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49FF58u;
            goto label_49ff58;
        }
    }
    ctx->pc = 0x49FF4Cu;
    // 0x49ff4c: 0xc12a0c4  jal         func_4A8310
    ctx->pc = 0x49FF4Cu;
    SET_GPR_U32(ctx, 31, 0x49FF54u);
    ctx->pc = 0x49FF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FF4Cu;
    // 0x49ff50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8310u, 0x49FF4Cu, 0x49FF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FF54u;
label_49ff54:
    // 0x49ff54: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x49ff54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_49ff58:
    // 0x49ff58: 0x1657ffed  bne         $s2, $s7, . + 4 + (-0x13 << 2)
    ctx->pc = 0x49FF58u;
    {
        const bool branch_taken_0x49ff58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 23));
        ctx->pc = 0x49FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FF58u;
        // 0x49ff5c: 0x8f90c1f0  lw          $s0, -0x3E10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ff58) {
            ctx->pc = 0x49FF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ff10;
        }
    }
    ctx->pc = 0x49FF60u;
label_49ff60:
    // 0x49ff60: 0xc12aba0  jal         func_4AAE80
    ctx->pc = 0x49FF60u;
    SET_GPR_U32(ctx, 31, 0x49FF68u);
    ctx->pc = 0x49FF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FF60u;
    // 0x49ff64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAE80u, 0x49FF60u, 0x49FF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FF68u;
label_49ff68:
    // 0x49ff68: 0x8f82b844  lw          $v0, -0x47BC($gp)
    ctx->pc = 0x49ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948932)));
    // 0x49ff6c: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x49FF6Cu;
    {
        const bool branch_taken_0x49ff6c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x49FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FF6Cu;
        // 0x49ff70: 0x8f82b840  lw          $v0, -0x47C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ff6c) {
            ctx->pc = 0x49FF78u;
            goto label_49ff78;
        }
    }
    ctx->pc = 0x49FF74u;
    // 0x49ff74: 0xaf82b844  sw          $v0, -0x47BC($gp)
    ctx->pc = 0x49ff74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948932), GPR_U32(ctx, 2));
label_49ff78:
    // 0x49ff78: 0xc128486  jal         func_4A1218
    ctx->pc = 0x49FF78u;
    SET_GPR_U32(ctx, 31, 0x49FF80u);
    ctx->pc = 0x49FF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FF78u;
    // 0x49ff7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1218u, 0x49FF78u, 0x49FF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FF80u;
label_49ff80:
    // 0x49ff80: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x49FF80u;
    {
        const bool branch_taken_0x49ff80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FF80u;
        // 0x49ff84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ff80) {
            ctx->pc = 0x4A02F0u;
            goto label_4a02f0;
        }
    }
    ctx->pc = 0x49FF88u;
label_49ff88:
    // 0x49ff88: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x49ff88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x49ff8c: 0xaf93b844  sw          $s3, -0x47BC($gp)
    ctx->pc = 0x49ff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948932), GPR_U32(ctx, 19));
    // 0x49ff90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x49ff90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ff94: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x49ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x49ff98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49ff98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ff9c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x49ff9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x49ffa0: 0xc10480a  jal         func_412028
    ctx->pc = 0x49FFA0u;
    SET_GPR_U32(ctx, 31, 0x49FFA8u);
    ctx->pc = 0x49FFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FFA0u;
    // 0x49ffa4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x49FFA0u, 0x49FFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FFA8u;
label_49ffa8:
    // 0x49ffa8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x49ffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x49ffac: 0x1043002d  beq         $v0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x49FFACu;
    {
        const bool branch_taken_0x49ffac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x49FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FFACu;
        // 0x49ffb0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ffac) {
            ctx->pc = 0x4A0064u;
            goto label_4a0064;
        }
    }
    ctx->pc = 0x49FFB4u;
    // 0x49ffb4: 0x13c0ff8c  beqz        $fp, . + 4 + (-0x74 << 2)
    ctx->pc = 0x49FFB4u;
    {
        const bool branch_taken_0x49ffb4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FFB4u;
        // 0x49ffb8: 0x2675000c  addiu       $s5, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ffb4) {
            ctx->pc = 0x49FDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49fde8;
        }
    }
    ctx->pc = 0x49FFBCu;
    // 0x49ffbc: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x49ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x49ffc0: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x49ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x49ffc4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x49ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x49ffc8: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x49ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x49ffcc: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x49ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x49ffd0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x49ffd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x49ffd4: 0x8e720010  lw          $s2, 0x10($s3)
    ctx->pc = 0x49ffd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x49ffd8: 0x12550017  beq         $s2, $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x49FFD8u;
    {
        const bool branch_taken_0x49ffd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x49FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FFD8u;
        // 0x49ffdc: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ffd8) {
            ctx->pc = 0x4A0038u;
            goto label_4a0038;
        }
    }
    ctx->pc = 0x49FFE0u;
    // 0x49ffe0: 0x2796c1f0  addiu       $s6, $gp, -0x3E10
    ctx->pc = 0x49ffe0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951408));
    // 0x49ffe4: 0x8f90c1f0  lw          $s0, -0x3E10($gp)
    ctx->pc = 0x49ffe4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
label_49ffe8:
    // 0x49ffe8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x49ffe8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ffec: 0x16160004  bne         $s0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x49FFECu;
    {
        const bool branch_taken_0x49ffec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x49FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FFECu;
        // 0x49fff0: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ffec) {
            ctx->pc = 0x4A0000u;
            goto label_4a0000;
        }
    }
    ctx->pc = 0x49FFF4u;
    // 0x49fff4: 0xc12a0c4  jal         func_4A8310
    ctx->pc = 0x49FFF4u;
    SET_GPR_U32(ctx, 31, 0x49FFFCu);
    ctx->pc = 0x49FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FFF4u;
    // 0x49fff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8310u, 0x49FFF4u, 0x49FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FFFCu;
label_49fffc:
    // 0x49fffc: 0x0  nop
    ctx->pc = 0x49fffcu;
    // NOP
label_4a0000:
    // 0x4a0000: 0x12160006  beq         $s0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A0000u;
    {
        const bool branch_taken_0x4a0000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x4A0004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0000u;
        // 0x4a0004: 0x2604ffe4  addiu       $a0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0000) {
            ctx->pc = 0x4A001Cu;
            goto label_4a001c;
        }
    }
    ctx->pc = 0x4A0008u;
    // 0x4a0008: 0xc1282be  jal         func_4A0AF8
    ctx->pc = 0x4A0008u;
    SET_GPR_U32(ctx, 31, 0x4A0010u);
    ctx->pc = 0x4A000Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0008u;
    // 0x4a000c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0AF8u, 0x4A0008u, 0x4A0010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0010u;
label_4a0010:
    // 0x4a0010: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4A0010u;
    {
        const bool branch_taken_0x4a0010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0010) {
            ctx->pc = 0x4A0014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0010u;
            // 0x4a0014: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0000;
        }
    }
    ctx->pc = 0x4A0018u;
    // 0x4a0018: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x4a0018u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a001c:
    // 0x4a001c: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A001Cu;
    {
        const bool branch_taken_0x4a001c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a001c) {
            ctx->pc = 0x4A0020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A001Cu;
            // 0x4a0020: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0030u;
            goto label_4a0030;
        }
    }
    ctx->pc = 0x4A0024u;
    // 0x4a0024: 0xc12a0c4  jal         func_4A8310
    ctx->pc = 0x4A0024u;
    SET_GPR_U32(ctx, 31, 0x4A002Cu);
    ctx->pc = 0x4A0028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0024u;
    // 0x4a0028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8310u, 0x4A0024u, 0x4A002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A002Cu;
label_4a002c:
    // 0x4a002c: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x4a002cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a0030:
    // 0x4a0030: 0x1657ffed  bne         $s2, $s7, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4A0030u;
    {
        const bool branch_taken_0x4a0030 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 23));
        ctx->pc = 0x4A0034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0030u;
        // 0x4a0034: 0x8f90c1f0  lw          $s0, -0x3E10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0030) {
            ctx->pc = 0x49FFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ffe8;
        }
    }
    ctx->pc = 0x4A0038u;
label_4a0038:
    // 0x4a0038: 0xc12aba0  jal         func_4AAE80
    ctx->pc = 0x4A0038u;
    SET_GPR_U32(ctx, 31, 0x4A0040u);
    ctx->pc = 0x4A003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0038u;
    // 0x4a003c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAE80u, 0x4A0038u, 0x4A0040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0040u;
label_4a0040:
    // 0x4a0040: 0x8f82b844  lw          $v0, -0x47BC($gp)
    ctx->pc = 0x4a0040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948932)));
    // 0x4a0044: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A0044u;
    {
        const bool branch_taken_0x4a0044 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A0048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0044u;
        // 0x4a0048: 0x8f82b840  lw          $v0, -0x47C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0044) {
            ctx->pc = 0x4A0050u;
            goto label_4a0050;
        }
    }
    ctx->pc = 0x4A004Cu;
    // 0x4a004c: 0xaf82b844  sw          $v0, -0x47BC($gp)
    ctx->pc = 0x4a004cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948932), GPR_U32(ctx, 2));
label_4a0050:
    // 0x4a0050: 0xc128486  jal         func_4A1218
    ctx->pc = 0x4A0050u;
    SET_GPR_U32(ctx, 31, 0x4A0058u);
    ctx->pc = 0x4A0054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0050u;
    // 0x4a0054: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1218u, 0x4A0050u, 0x4A0058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0058u;
label_4a0058:
    // 0x4a0058: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4a0058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a005c: 0x1000ff62  b           . + 4 + (-0x9E << 2)
    ctx->pc = 0x4A005Cu;
    {
        const bool branch_taken_0x4a005c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A005Cu;
        // 0x4a0060: 0xaf82b844  sw          $v0, -0x47BC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a005c) {
            ctx->pc = 0x49FDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49fde8;
        }
    }
    ctx->pc = 0x4A0064u;
label_4a0064:
    // 0x4a0064: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A0064u;
    {
        const bool branch_taken_0x4a0064 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0064u;
        // 0x4a0068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0064) {
            ctx->pc = 0x4A0074u;
            goto label_4a0074;
        }
    }
    ctx->pc = 0x4A006Cu;
    // 0x4a006c: 0xc12ac8e  jal         func_4AB238
    ctx->pc = 0x4A006Cu;
    SET_GPR_U32(ctx, 31, 0x4A0074u);
    ctx->pc = 0x4A0070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A006Cu;
    // 0x4a0070: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB238u, 0x4A006Cu, 0x4A0074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0074u;
label_4a0074:
    // 0x4a0074: 0x8f82b830  lw          $v0, -0x47D0($gp)
    ctx->pc = 0x4a0074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948912)));
    // 0x4a0078: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x4A0078u;
    {
        const bool branch_taken_0x4a0078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0078u;
        // 0x4a007c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0078) {
            ctx->pc = 0x4A015Cu;
            goto label_4a015c;
        }
    }
    ctx->pc = 0x4A0080u;
    // 0x4a0080: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a0080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x4a0084: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x4a0084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x4a0088: 0xc127ccc  jal         func_49F330
    ctx->pc = 0x4A0088u;
    SET_GPR_U32(ctx, 31, 0x4A0090u);
    ctx->pc = 0x4A008Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0088u;
    // 0x4a008c: 0x34a50808  ori         $a1, $a1, 0x808 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2056);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F330u, 0x4A0088u, 0x4A0090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0090u;
label_4a0090:
    // 0x4a0090: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4a0090u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0094: 0x16e0002e  bnez        $s7, . + 4 + (0x2E << 2)
    ctx->pc = 0x4A0094u;
    {
        const bool branch_taken_0x4a0094 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0094u;
        // 0x4a0098: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0094) {
            ctx->pc = 0x4A0150u;
            goto label_4a0150;
        }
    }
    ctx->pc = 0x4A009Cu;
    // 0x4a009c: 0x13c0ff52  beqz        $fp, . + 4 + (-0xAE << 2)
    ctx->pc = 0x4A009Cu;
    {
        const bool branch_taken_0x4a009c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A009Cu;
        // 0x4a00a0: 0x2675000c  addiu       $s5, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a009c) {
            ctx->pc = 0x49FDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49fde8;
        }
    }
    ctx->pc = 0x4A00A4u;
    // 0x4a00a4: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x4a00a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x4a00a8: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x4a00a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x4a00ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a00acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a00b0: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x4a00b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x4a00b4: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x4a00b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x4a00b8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4a00b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x4a00bc: 0x8e720010  lw          $s2, 0x10($s3)
    ctx->pc = 0x4a00bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4a00c0: 0x12550017  beq         $s2, $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x4A00C0u;
    {
        const bool branch_taken_0x4a00c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x4A00C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A00C0u;
        // 0x4a00c4: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a00c0) {
            ctx->pc = 0x4A0120u;
            goto label_4a0120;
        }
    }
    ctx->pc = 0x4A00C8u;
    // 0x4a00c8: 0x2796c1f0  addiu       $s6, $gp, -0x3E10
    ctx->pc = 0x4a00c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951408));
    // 0x4a00cc: 0x8f90c1f0  lw          $s0, -0x3E10($gp)
    ctx->pc = 0x4a00ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
label_4a00d0:
    // 0x4a00d0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4a00d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a00d4: 0x16160004  bne         $s0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A00D4u;
    {
        const bool branch_taken_0x4a00d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x4A00D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A00D4u;
        // 0x4a00d8: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a00d4) {
            ctx->pc = 0x4A00E8u;
            goto label_4a00e8;
        }
    }
    ctx->pc = 0x4A00DCu;
    // 0x4a00dc: 0xc12a0c4  jal         func_4A8310
    ctx->pc = 0x4A00DCu;
    SET_GPR_U32(ctx, 31, 0x4A00E4u);
    ctx->pc = 0x4A00E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A00DCu;
    // 0x4a00e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8310u, 0x4A00DCu, 0x4A00E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A00E4u;
label_4a00e4:
    // 0x4a00e4: 0x0  nop
    ctx->pc = 0x4a00e4u;
    // NOP
label_4a00e8:
    // 0x4a00e8: 0x12160006  beq         $s0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A00E8u;
    {
        const bool branch_taken_0x4a00e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x4A00ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A00E8u;
        // 0x4a00ec: 0x2604ffe4  addiu       $a0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a00e8) {
            ctx->pc = 0x4A0104u;
            goto label_4a0104;
        }
    }
    ctx->pc = 0x4A00F0u;
    // 0x4a00f0: 0xc1282be  jal         func_4A0AF8
    ctx->pc = 0x4A00F0u;
    SET_GPR_U32(ctx, 31, 0x4A00F8u);
    ctx->pc = 0x4A00F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A00F0u;
    // 0x4a00f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0AF8u, 0x4A00F0u, 0x4A00F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A00F8u;
label_4a00f8:
    // 0x4a00f8: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4A00F8u;
    {
        const bool branch_taken_0x4a00f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a00f8) {
            ctx->pc = 0x4A00FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A00F8u;
            // 0x4a00fc: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A00E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a00e8;
        }
    }
    ctx->pc = 0x4A0100u;
    // 0x4a0100: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x4a0100u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a0104:
    // 0x4a0104: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A0104u;
    {
        const bool branch_taken_0x4a0104 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a0104) {
            ctx->pc = 0x4A0108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0104u;
            // 0x4a0108: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0118u;
            goto label_4a0118;
        }
    }
    ctx->pc = 0x4A010Cu;
    // 0x4a010c: 0xc12a0c4  jal         func_4A8310
    ctx->pc = 0x4A010Cu;
    SET_GPR_U32(ctx, 31, 0x4A0114u);
    ctx->pc = 0x4A0110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A010Cu;
    // 0x4a0110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8310u, 0x4A010Cu, 0x4A0114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0114u;
label_4a0114:
    // 0x4a0114: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x4a0114u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a0118:
    // 0x4a0118: 0x1657ffed  bne         $s2, $s7, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4A0118u;
    {
        const bool branch_taken_0x4a0118 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 23));
        ctx->pc = 0x4A011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0118u;
        // 0x4a011c: 0x8f90c1f0  lw          $s0, -0x3E10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0118) {
            ctx->pc = 0x4A00D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a00d0;
        }
    }
    ctx->pc = 0x4A0120u;
label_4a0120:
    // 0x4a0120: 0xc12aba0  jal         func_4AAE80
    ctx->pc = 0x4A0120u;
    SET_GPR_U32(ctx, 31, 0x4A0128u);
    ctx->pc = 0x4A0124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0120u;
    // 0x4a0124: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAE80u, 0x4A0120u, 0x4A0128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0128u;
label_4a0128:
    // 0x4a0128: 0x8f82b844  lw          $v0, -0x47BC($gp)
    ctx->pc = 0x4a0128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948932)));
    // 0x4a012c: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A012Cu;
    {
        const bool branch_taken_0x4a012c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A012Cu;
        // 0x4a0130: 0x8f82b840  lw          $v0, -0x47C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a012c) {
            ctx->pc = 0x4A0138u;
            goto label_4a0138;
        }
    }
    ctx->pc = 0x4A0134u;
    // 0x4a0134: 0xaf82b844  sw          $v0, -0x47BC($gp)
    ctx->pc = 0x4a0134u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948932), GPR_U32(ctx, 2));
label_4a0138:
    // 0x4a0138: 0xc128486  jal         func_4A1218
    ctx->pc = 0x4A0138u;
    SET_GPR_U32(ctx, 31, 0x4A0140u);
    ctx->pc = 0x4A013Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0138u;
    // 0x4a013c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1218u, 0x4A0138u, 0x4A0140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0140u;
label_4a0140:
    // 0x4a0140: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4a0140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a0144: 0x1000ff28  b           . + 4 + (-0xD8 << 2)
    ctx->pc = 0x4A0144u;
    {
        const bool branch_taken_0x4a0144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0144u;
        // 0x4a0148: 0xaf82b844  sw          $v0, -0x47BC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0144) {
            ctx->pc = 0x49FDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49fde8;
        }
    }
    ctx->pc = 0x4A014Cu;
    // 0x4a014c: 0x0  nop
    ctx->pc = 0x4a014cu;
    // NOP
label_4a0150:
    // 0x4a0150: 0xaf97b830  sw          $s7, -0x47D0($gp)
    ctx->pc = 0x4a0150u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948912), GPR_U32(ctx, 23));
    // 0x4a0154: 0xaf82b834  sw          $v0, -0x47CC($gp)
    ctx->pc = 0x4a0154u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948916), GPR_U32(ctx, 2));
    // 0x4a0158: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4a0158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4a015c:
    // 0x4a015c: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x4A015Cu;
    {
        const bool branch_taken_0x4a015c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A015Cu;
        // 0x4a0160: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a015c) {
            ctx->pc = 0x4A02C8u;
            goto label_4a02c8;
        }
    }
    ctx->pc = 0x4A0164u;
    // 0x4a0164: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x4a0164u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a0168: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4a0168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a016c: 0x0  nop
    ctx->pc = 0x4a016cu;
    // NOP
label_4a0170:
    // 0x4a0170: 0x24050802  addiu       $a1, $zero, 0x802
    ctx->pc = 0x4a0170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
    // 0x4a0174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a0174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0178: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a0178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a017c: 0xc12af84  jal         func_4ABE10
    ctx->pc = 0x4A017Cu;
    SET_GPR_U32(ctx, 31, 0x4A0184u);
    ctx->pc = 0x4A0180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A017Cu;
    // 0x4a0180: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ABE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABE10u, 0x4A017Cu, 0x4A0184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0184u;
label_4a0184:
    // 0x4a0184: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x4a0184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a0188: 0x2a2880a  movz        $s1, $s5, $v0
    ctx->pc = 0x4a0188u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 21));
    // 0x4a018c: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x4a018cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4a0190: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4a0190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0194: 0x8fa7002c  lw          $a3, 0x2C($sp)
    ctx->pc = 0x4a0194u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x4a0198: 0xc129d72  jal         func_4A75C8
    ctx->pc = 0x4A0198u;
    SET_GPR_U32(ctx, 31, 0x4A01A0u);
    ctx->pc = 0x4A019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0198u;
    // 0x4a019c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A75C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A75C8u, 0x4A0198u, 0x4A01A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A01A0u;
label_4a01a0:
    // 0x4a01a0: 0x2a2880a  movz        $s1, $s5, $v0
    ctx->pc = 0x4a01a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 21));
    // 0x4a01a4: 0x12200044  beqz        $s1, . + 4 + (0x44 << 2)
    ctx->pc = 0x4A01A4u;
    {
        const bool branch_taken_0x4a01a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A01A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A01A4u;
        // 0x4a01a8: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a01a4) {
            ctx->pc = 0x4A02B8u;
            goto label_4a02b8;
        }
    }
    ctx->pc = 0x4A01ACu;
    // 0x4a01ac: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x4a01acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4a01b0: 0x2675000c  addiu       $s5, $s3, 0xC
    ctx->pc = 0x4a01b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x4a01b4: 0x1055000c  beq         $v0, $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x4A01B4u;
    {
        const bool branch_taken_0x4a01b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x4a01b4) {
            ctx->pc = 0x4A01E8u;
            goto label_4a01e8;
        }
    }
    ctx->pc = 0x4A01BCu;
    // 0x4a01bc: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x4a01bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a01c0: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x4a01c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a01c4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x4a01c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4a01c8:
    // 0x4a01c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a01c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a01cc: 0xc12ab46  jal         func_4AAD18
    ctx->pc = 0x4A01CCu;
    SET_GPR_U32(ctx, 31, 0x4A01D4u);
    ctx->pc = 0x4A01D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A01CCu;
    // 0x4a01d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAD18u, 0x4A01CCu, 0x4A01D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A01D4u;
label_4a01d4:
    // 0x4a01d4: 0xc12a0c4  jal         func_4A8310
    ctx->pc = 0x4A01D4u;
    SET_GPR_U32(ctx, 31, 0x4A01DCu);
    ctx->pc = 0x4A01D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A01D4u;
    // 0x4a01d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8310u, 0x4A01D4u, 0x4A01DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A01DCu;
label_4a01dc:
    // 0x4a01dc: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x4a01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4a01e0: 0x5451fff9  bnel        $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4A01E0u;
    {
        const bool branch_taken_0x4a01e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x4a01e0) {
            ctx->pc = 0x4A01E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A01E0u;
            // 0x4a01e4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A01C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a01c8;
        }
    }
    ctx->pc = 0x4A01E8u;
label_4a01e8:
    // 0x4a01e8: 0x13c0002b  beqz        $fp, . + 4 + (0x2B << 2)
    ctx->pc = 0x4A01E8u;
    {
        const bool branch_taken_0x4a01e8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a01e8) {
            ctx->pc = 0x4A0298u;
            goto label_4a0298;
        }
    }
    ctx->pc = 0x4A01F0u;
    // 0x4a01f0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x4a01f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x4a01f4: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x4a01f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x4a01f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a01f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a01fc: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x4a01fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x4a0200: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x4a0200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x4a0204: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4a0204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x4a0208: 0x8e710010  lw          $s1, 0x10($s3)
    ctx->pc = 0x4a0208u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4a020c: 0x12350018  beq         $s1, $s5, . + 4 + (0x18 << 2)
    ctx->pc = 0x4A020Cu;
    {
        const bool branch_taken_0x4a020c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        if (branch_taken_0x4a020c) {
            ctx->pc = 0x4A0270u;
            goto label_4a0270;
        }
    }
    ctx->pc = 0x4A0214u;
    // 0x4a0214: 0x2796c1f0  addiu       $s6, $gp, -0x3E10
    ctx->pc = 0x4a0214u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951408));
    // 0x4a0218: 0x8f90c1f0  lw          $s0, -0x3E10($gp)
    ctx->pc = 0x4a0218u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
    // 0x4a021c: 0x0  nop
    ctx->pc = 0x4a021cu;
    // NOP
label_4a0220:
    // 0x4a0220: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4a0220u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0224: 0x16160004  bne         $s0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A0224u;
    {
        const bool branch_taken_0x4a0224 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x4A0228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0224u;
        // 0x4a0228: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0224) {
            ctx->pc = 0x4A0238u;
            goto label_4a0238;
        }
    }
    ctx->pc = 0x4A022Cu;
    // 0x4a022c: 0xc12a0c4  jal         func_4A8310
    ctx->pc = 0x4A022Cu;
    SET_GPR_U32(ctx, 31, 0x4A0234u);
    ctx->pc = 0x4A0230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A022Cu;
    // 0x4a0230: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8310u, 0x4A022Cu, 0x4A0234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0234u;
label_4a0234:
    // 0x4a0234: 0x0  nop
    ctx->pc = 0x4a0234u;
    // NOP
label_4a0238:
    // 0x4a0238: 0x12160006  beq         $s0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A0238u;
    {
        const bool branch_taken_0x4a0238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x4A023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0238u;
        // 0x4a023c: 0x2604ffe4  addiu       $a0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0238) {
            ctx->pc = 0x4A0254u;
            goto label_4a0254;
        }
    }
    ctx->pc = 0x4A0240u;
    // 0x4a0240: 0xc1282be  jal         func_4A0AF8
    ctx->pc = 0x4A0240u;
    SET_GPR_U32(ctx, 31, 0x4A0248u);
    ctx->pc = 0x4A0244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0240u;
    // 0x4a0244: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0AF8u, 0x4A0240u, 0x4A0248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0248u;
label_4a0248:
    // 0x4a0248: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4A0248u;
    {
        const bool branch_taken_0x4a0248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0248) {
            ctx->pc = 0x4A024Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0248u;
            // 0x4a024c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0238;
        }
    }
    ctx->pc = 0x4A0250u;
    // 0x4a0250: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x4a0250u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a0254:
    // 0x4a0254: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A0254u;
    {
        const bool branch_taken_0x4a0254 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a0254) {
            ctx->pc = 0x4A0258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0254u;
            // 0x4a0258: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0268u;
            goto label_4a0268;
        }
    }
    ctx->pc = 0x4A025Cu;
    // 0x4a025c: 0xc12a0c4  jal         func_4A8310
    ctx->pc = 0x4A025Cu;
    SET_GPR_U32(ctx, 31, 0x4A0264u);
    ctx->pc = 0x4A0260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A025Cu;
    // 0x4a0260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8310u, 0x4A025Cu, 0x4A0264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0264u;
label_4a0264:
    // 0x4a0264: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x4a0264u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4a0268:
    // 0x4a0268: 0x5635ffed  bnel        $s1, $s5, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4A0268u;
    {
        const bool branch_taken_0x4a0268 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        if (branch_taken_0x4a0268) {
            ctx->pc = 0x4A026Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0268u;
            // 0x4a026c: 0x8f90c1f0  lw          $s0, -0x3E10($gp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0220;
        }
    }
    ctx->pc = 0x4A0270u;
label_4a0270:
    // 0x4a0270: 0xc12aba0  jal         func_4AAE80
    ctx->pc = 0x4A0270u;
    SET_GPR_U32(ctx, 31, 0x4A0278u);
    ctx->pc = 0x4A0274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0270u;
    // 0x4a0274: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAE80u, 0x4A0270u, 0x4A0278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0278u;
label_4a0278:
    // 0x4a0278: 0x8f82b844  lw          $v0, -0x47BC($gp)
    ctx->pc = 0x4a0278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948932)));
    // 0x4a027c: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A027Cu;
    {
        const bool branch_taken_0x4a027c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A0280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A027Cu;
        // 0x4a0280: 0x8f82b840  lw          $v0, -0x47C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a027c) {
            ctx->pc = 0x4A0288u;
            goto label_4a0288;
        }
    }
    ctx->pc = 0x4A0284u;
    // 0x4a0284: 0xaf82b844  sw          $v0, -0x47BC($gp)
    ctx->pc = 0x4a0284u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948932), GPR_U32(ctx, 2));
label_4a0288:
    // 0x4a0288: 0xc128486  jal         func_4A1218
    ctx->pc = 0x4A0288u;
    SET_GPR_U32(ctx, 31, 0x4A0290u);
    ctx->pc = 0x4A028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0288u;
    // 0x4a028c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1218u, 0x4A0288u, 0x4A0290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0290u;
label_4a0290:
    // 0x4a0290: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4a0290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a0294: 0xaf82b844  sw          $v0, -0x47BC($gp)
    ctx->pc = 0x4a0294u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948932), GPR_U32(ctx, 2));
label_4a0298:
    // 0x4a0298: 0x12e00015  beqz        $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x4A0298u;
    {
        const bool branch_taken_0x4a0298 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0298u;
        // 0x4a029c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0298) {
            ctx->pc = 0x4A02F0u;
            goto label_4a02f0;
        }
    }
    ctx->pc = 0x4A02A0u;
    // 0x4a02a0: 0xaf80b830  sw          $zero, -0x47D0($gp)
    ctx->pc = 0x4a02a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948912), GPR_U32(ctx, 0));
    // 0x4a02a4: 0xaf80b834  sw          $zero, -0x47CC($gp)
    ctx->pc = 0x4a02a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948916), GPR_U32(ctx, 0));
    // 0x4a02a8: 0xc127cdc  jal         func_49F370
    ctx->pc = 0x4A02A8u;
    SET_GPR_U32(ctx, 31, 0x4A02B0u);
    ctx->pc = 0x4A02ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A02A8u;
    // 0x4a02ac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F370u, 0x4A02A8u, 0x4A02B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A02B0u;
label_4a02b0:
    // 0x4a02b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4A02B0u;
    {
        const bool branch_taken_0x4a02b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A02B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A02B0u;
        // 0x4a02b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a02b0) {
            ctx->pc = 0x4A02F0u;
            goto label_4a02f0;
        }
    }
    ctx->pc = 0x4A02B8u;
label_4a02b8:
    // 0x4a02b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4a02b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4a02bc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x4a02bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a02c0: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x4A02C0u;
    {
        const bool branch_taken_0x4a02c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A02C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A02C0u;
        // 0x4a02c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a02c0) {
            ctx->pc = 0x4A0170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0170;
        }
    }
    ctx->pc = 0x4A02C8u;
label_4a02c8:
    // 0x4a02c8: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A02C8u;
    {
        const bool branch_taken_0x4a02c8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A02C8u;
        // 0x4a02cc: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a02c8) {
            ctx->pc = 0x4A02E8u;
            goto label_4a02e8;
        }
    }
    ctx->pc = 0x4A02D0u;
    // 0x4a02d0: 0xaf80b830  sw          $zero, -0x47D0($gp)
    ctx->pc = 0x4a02d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948912), GPR_U32(ctx, 0));
    // 0x4a02d4: 0xaf80b834  sw          $zero, -0x47CC($gp)
    ctx->pc = 0x4a02d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948916), GPR_U32(ctx, 0));
    // 0x4a02d8: 0xc127cdc  jal         func_49F370
    ctx->pc = 0x4A02D8u;
    SET_GPR_U32(ctx, 31, 0x4A02E0u);
    ctx->pc = 0x4A02DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A02D8u;
    // 0x4a02dc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F370u, 0x4A02D8u, 0x4A02E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A02E0u;
label_4a02e0:
    // 0x4a02e0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4a02e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a02e4: 0x0  nop
    ctx->pc = 0x4a02e4u;
    // NOP
label_4a02e8:
    // 0x4a02e8: 0xaf82b844  sw          $v0, -0x47BC($gp)
    ctx->pc = 0x4a02e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948932), GPR_U32(ctx, 2));
    // 0x4a02ec: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4a02ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a02f0:
    // 0x4a02f0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x4a02f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4a02f4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x4a02f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4a02f8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x4a02f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4a02fc: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x4a02fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a0300: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x4a0300u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a0304: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x4a0304u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a0308: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4a0308u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a030c: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x4a030cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a0310: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x4a0310u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a0314: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4a0314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a0318: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0318u;
        // 0x4a031c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0320u;
}
