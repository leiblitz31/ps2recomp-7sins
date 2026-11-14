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

// Function: sub_00436170
// Address: 0x436170 - 0x436590
void sub_00436170_0x436170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00436170_0x436170");
#endif

    switch (ctx->pc) {
        case 0x4361ecu: goto label_4361ec;
        case 0x43624cu: goto label_43624c;
        case 0x436340u: goto label_436340;
        case 0x43640cu: goto label_43640c;
        case 0x436480u: goto label_436480;
        case 0x4364a0u: goto label_4364a0;
        case 0x436510u: goto label_436510;
        case 0x436530u: goto label_436530;
        default: break;
    }

    ctx->pc = 0x436170u;

    // 0x436170: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x436170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x436174: 0x8f83bef0  lw          $v1, -0x4110($gp)
    ctx->pc = 0x436174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950640)));
    // 0x436178: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x436178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x43617c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x43617cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436180: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x436180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x436184: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x436184u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436188: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x436188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x43618c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x43618cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x436190: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x436190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x436194: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x436194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x436198: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x436198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x43619c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x43619cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x4361a0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x4361a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x4361a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4361a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4361a8: 0x90640020  lbu         $a0, 0x20($v1)
    ctx->pc = 0x4361a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x4361ac: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x4361acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4361b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4361B0u;
    {
        const bool branch_taken_0x4361b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4361B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4361B0u;
        // 0x4361b4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4361b0) {
            ctx->pc = 0x4361D0u;
            goto label_4361d0;
        }
    }
    ctx->pc = 0x4361B8u;
    // 0x4361b8: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x4361B8u;
    {
        const bool branch_taken_0x4361b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4361b8) {
            ctx->pc = 0x4361E4u;
            goto label_4361e4;
        }
    }
    ctx->pc = 0x4361C0u;
    // 0x4361c0: 0x10800094  beqz        $a0, . + 4 + (0x94 << 2)
    ctx->pc = 0x4361C0u;
    {
        const bool branch_taken_0x4361c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4361C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4361C0u;
        // 0x4361c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4361c0) {
            ctx->pc = 0x436414u;
            goto label_436414;
        }
    }
    ctx->pc = 0x4361C8u;
    // 0x4361c8: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x4361C8u;
    {
        const bool branch_taken_0x4361c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4361CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4361C8u;
        // 0x4361cc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4361c8) {
            ctx->pc = 0x436564u;
            goto label_436564;
        }
    }
    ctx->pc = 0x4361D0u;
label_4361d0:
    // 0x4361d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4361d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4361d4: 0x1082008f  beq         $a0, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x4361D4u;
    {
        const bool branch_taken_0x4361d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4361D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4361D4u;
        // 0x4361d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4361d4) {
            ctx->pc = 0x436414u;
            goto label_436414;
        }
    }
    ctx->pc = 0x4361DCu;
    // 0x4361dc: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x4361DCu;
    {
        const bool branch_taken_0x4361dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4361E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4361DCu;
        // 0x4361e0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4361dc) {
            ctx->pc = 0x436564u;
            goto label_436564;
        }
    }
    ctx->pc = 0x4361E4u;
label_4361e4:
    // 0x4361e4: 0xc10d716  jal         func_435C58
    ctx->pc = 0x4361E4u;
    SET_GPR_U32(ctx, 31, 0x4361ECu);
    ctx->pc = 0x4361E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4361E4u;
    // 0x4361e8: 0x7fa90000  sq          $t1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435C58u, 0x4361E4u, 0x4361ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4361ECu;
label_4361ec:
    // 0x4361ec: 0x8f82bef0  lw          $v0, -0x4110($gp)
    ctx->pc = 0x4361ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950640)));
    // 0x4361f0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x4361f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4361f4: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x4361f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x4361f8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x4361f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x4361fc: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x4361fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x436200: 0x14640041  bne         $v1, $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x436200u;
    {
        const bool branch_taken_0x436200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x436204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436200u;
        // 0x436204: 0x7ba90000  lq          $t1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436200) {
            ctx->pc = 0x436308u;
            goto label_436308;
        }
    }
    ctx->pc = 0x436208u;
    // 0x436208: 0x8fd6000c  lw          $s6, 0xC($fp)
    ctx->pc = 0x436208u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x43620c: 0x3137001f  andi        $s7, $t1, 0x1F
    ctx->pc = 0x43620cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31);
    // 0x436210: 0x8fd30000  lw          $s3, 0x0($fp)
    ctx->pc = 0x436210u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x436214: 0x313403e0  andi        $s4, $t1, 0x3E0
    ctx->pc = 0x436214u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)992);
    // 0x436218: 0x8fd10004  lw          $s1, 0x4($fp)
    ctx->pc = 0x436218u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x43621c: 0x31327c00  andi        $s2, $t1, 0x7C00
    ctx->pc = 0x43621cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31744);
    // 0x436220: 0x8fd50008  lw          $s5, 0x8($fp)
    ctx->pc = 0x436220u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x436224: 0x31308000  andi        $s0, $t1, 0x8000
    ctx->pc = 0x436224u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)32768);
    // 0x436228: 0x17b8c0  sll         $s7, $s7, 3
    ctx->pc = 0x436228u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x43622c: 0x14a083  sra         $s4, $s4, 2
    ctx->pc = 0x43622cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 20), 2));
    // 0x436230: 0x1291c3  sra         $s2, $s2, 7
    ctx->pc = 0x436230u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 7));
    // 0x436234: 0x108203  sra         $s0, $s0, 8
    ctx->pc = 0x436234u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 8));
    // 0x436238: 0x275a821  addu        $s5, $s3, $s5
    ctx->pc = 0x436238u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x43623c: 0x236b021  addu        $s6, $s1, $s6
    ctx->pc = 0x43623cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x436240: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x436240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x436244: 0xc10a322  jal         func_428C88
    ctx->pc = 0x436244u;
    SET_GPR_U32(ctx, 31, 0x43624Cu);
    ctx->pc = 0x436248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436244u;
    // 0x436248: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x436244u, 0x43624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43624Cu;
label_43624c:
    // 0x43624c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x43624cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x436250: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x436250u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x436254: 0x34c68004  ori         $a2, $a2, 0x8004
    ctx->pc = 0x436254u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32772);
    // 0x436258: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x436258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x43625c: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x43625cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x436260: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x436260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x436264: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x436264u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x436268: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x436268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x43626c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43626cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x436270: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x436270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436274: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x436274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x436278: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x436278u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x43627c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x43627cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x436280: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x436280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x436284: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x436284u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x436288: 0x7ba90000  lq          $t1, 0x0($sp)
    ctx->pc = 0x436288u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43628c: 0x9203c  dsll32      $a0, $t1, 0
    ctx->pc = 0x43628cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 0));
    // 0x436290: 0x118d00  sll         $s1, $s1, 20
    ctx->pc = 0x436290u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 20));
    // 0x436294: 0x139900  sll         $s3, $s3, 4
    ctx->pc = 0x436294u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x436298: 0x2241025  or          $v0, $s1, $a0
    ctx->pc = 0x436298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x43629c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x43629cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4362a0: 0x2623025  or          $a2, $s3, $v0
    ctx->pc = 0x4362a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x4362a4: 0x70a61389  pcpyld      $v0, $a1, $a2
    ctx->pc = 0x4362a4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x4362a8: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x4362a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x4362ac: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x4362acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x4362b0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x4362b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x4362b4: 0x108600  sll         $s0, $s0, 24
    ctx->pc = 0x4362b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x4362b8: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x4362b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4362bc: 0x14a200  sll         $s4, $s4, 8
    ctx->pc = 0x4362bcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 8));
    // 0x4362c0: 0x2128025  or          $s0, $s0, $s2
    ctx->pc = 0x4362c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
    // 0x4362c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4362c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4362c8: 0x2148025  or          $s0, $s0, $s4
    ctx->pc = 0x4362c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 20));
    // 0x4362cc: 0x2178025  or          $s0, $s0, $s7
    ctx->pc = 0x4362ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 23));
    // 0x4362d0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x4362d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x4362d4: 0x10303e  dsrl32      $a2, $s0, 0
    ctx->pc = 0x4362d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x4362d8: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x4362d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x4362dc: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x4362dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x4362e0: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x4362e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x4362e4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x4362e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x4362e8: 0x16b500  sll         $s6, $s6, 20
    ctx->pc = 0x4362e8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 20));
    // 0x4362ec: 0x2c42025  or          $a0, $s6, $a0
    ctx->pc = 0x4362ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) | GPR_U64(ctx, 4));
    // 0x4362f0: 0x15a900  sll         $s5, $s5, 4
    ctx->pc = 0x4362f0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x4362f4: 0x2a43025  or          $a2, $s5, $a0
    ctx->pc = 0x4362f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) | GPR_U64(ctx, 4));
    // 0x4362f8: 0x70a61389  pcpyld      $v0, $a1, $a2
    ctx->pc = 0x4362f8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x4362fc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x4362FCu;
    {
        const bool branch_taken_0x4362fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4362FCu;
        // 0x436300: 0x7c620030  sq          $v0, 0x30($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4362fc) {
            ctx->pc = 0x436400u;
            goto label_436400;
        }
    }
    ctx->pc = 0x436304u;
    // 0x436304: 0x0  nop
    ctx->pc = 0x436304u;
    // NOP
label_436308:
    // 0x436308: 0x8fd5000c  lw          $s5, 0xC($fp)
    ctx->pc = 0x436308u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x43630c: 0x3133ff00  andi        $s3, $t1, 0xFF00
    ctx->pc = 0x43630cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65280);
    // 0x436310: 0x8fd10000  lw          $s1, 0x0($fp)
    ctx->pc = 0x436310u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x436314: 0x99402  srl         $s2, $t1, 16
    ctx->pc = 0x436314u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x436318: 0x8fd00004  lw          $s0, 0x4($fp)
    ctx->pc = 0x436318u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x43631c: 0x139a03  sra         $s3, $s3, 8
    ctx->pc = 0x43631cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 8));
    // 0x436320: 0x8fd40008  lw          $s4, 0x8($fp)
    ctx->pc = 0x436320u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x436324: 0x325200ff  andi        $s2, $s2, 0xFF
    ctx->pc = 0x436324u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x436328: 0x215a821  addu        $s5, $s0, $s5
    ctx->pc = 0x436328u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x43632c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x43632cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x436330: 0x234a021  addu        $s4, $s1, $s4
    ctx->pc = 0x436330u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x436334: 0x7fa90000  sq          $t1, 0x0($sp)
    ctx->pc = 0x436334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 9));
    // 0x436338: 0xc10a322  jal         func_428C88
    ctx->pc = 0x436338u;
    SET_GPR_U32(ctx, 31, 0x436340u);
    ctx->pc = 0x43633Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436338u;
    // 0x43633c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x436338u, 0x436340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x436340u;
label_436340:
    // 0x436340: 0x7ba90000  lq          $t1, 0x0($sp)
    ctx->pc = 0x436340u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x436344: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x436344u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
    // 0x436348: 0x17b83c  dsll32      $s7, $s7, 0
    ctx->pc = 0x436348u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 0));
    // 0x43634c: 0x36f78004  ori         $s7, $s7, 0x8004
    ctx->pc = 0x43634cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)32772);
    // 0x436350: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x436350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x436354: 0x312700ff  andi        $a3, $t1, 0xFF
    ctx->pc = 0x436354u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x436358: 0x70571389  pcpyld      $v0, $v0, $s7
    ctx->pc = 0x436358u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 23)));
    // 0x43635c: 0x92602  srl         $a0, $t1, 24
    ctx->pc = 0x43635cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x436360: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x436360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x436364: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x436364u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x436368: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x436368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x43636c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43636cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x436370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x436370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436374: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x436374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x436378: 0x70a21389  pcpyld      $v0, $a1, $v0
    ctx->pc = 0x436378u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x43637c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x43637cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x436380: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x436380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x436384: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x436384u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x436388: 0x9283c  dsll32      $a1, $t1, 0
    ctx->pc = 0x436388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) << (32 + 0));
    // 0x43638c: 0x108500  sll         $s0, $s0, 20
    ctx->pc = 0x43638cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 20));
    // 0x436390: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x436390u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x436394: 0x2051025  or          $v0, $s0, $a1
    ctx->pc = 0x436394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x436398: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x436398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x43639c: 0x222b825  or          $s7, $s1, $v0
    ctx->pc = 0x43639cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x4363a0: 0x70d71389  pcpyld      $v0, $a2, $s7
    ctx->pc = 0x4363a0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 23)));
    // 0x4363a4: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x4363a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x4363a8: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x4363a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x4363ac: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x4363acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x4363b0: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x4363b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x4363b4: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x4363b4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4363b8: 0x139a00  sll         $s3, $s3, 8
    ctx->pc = 0x4363b8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x4363bc: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x4363bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4363c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4363c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4363c4: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x4363c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x4363c8: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x4363c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x4363cc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4363ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4363d0: 0x4b83e  dsrl32      $s7, $a0, 0
    ctx->pc = 0x4363d0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x4363d4: 0x70571389  pcpyld      $v0, $v0, $s7
    ctx->pc = 0x4363d4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 23)));
    // 0x4363d8: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x4363d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x4363dc: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x4363dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x4363e0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x4363e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x4363e4: 0x15ad00  sll         $s5, $s5, 20
    ctx->pc = 0x4363e4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 20));
    // 0x4363e8: 0x2a52825  or          $a1, $s5, $a1
    ctx->pc = 0x4363e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 5));
    // 0x4363ec: 0x14a100  sll         $s4, $s4, 4
    ctx->pc = 0x4363ecu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x4363f0: 0x285b825  or          $s7, $s4, $a1
    ctx->pc = 0x4363f0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 20) | GPR_U64(ctx, 5));
    // 0x4363f4: 0x70d71389  pcpyld      $v0, $a2, $s7
    ctx->pc = 0x4363f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 23)));
    // 0x4363f8: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x4363f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x4363fc: 0x0  nop
    ctx->pc = 0x4363fcu;
    // NOP
label_436400:
    // 0x436400: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x436400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x436404: 0xc10d80a  jal         func_436028
    ctx->pc = 0x436404u;
    SET_GPR_U32(ctx, 31, 0x43640Cu);
    ctx->pc = 0x436408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x436404u;
    // 0x436408: 0xaf83be20  sw          $v1, -0x41E0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x436028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436028u, 0x436404u, 0x43640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43640Cu;
label_43640c:
    // 0x43640c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x43640Cu;
    {
        const bool branch_taken_0x43640c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x436410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43640Cu;
        // 0x436410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43640c) {
            ctx->pc = 0x436560u;
            goto label_436560;
        }
    }
    ctx->pc = 0x436414u;
label_436414:
    // 0x436414: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x436414u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x436418: 0x11000051  beqz        $t0, . + 4 + (0x51 << 2)
    ctx->pc = 0x436418u;
    {
        const bool branch_taken_0x436418 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x43641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436418u;
        // 0x43641c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436418) {
            ctx->pc = 0x436560u;
            goto label_436560;
        }
    }
    ctx->pc = 0x436420u;
    // 0x436420: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x436420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x436424: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x436424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x436428: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x436428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x43642c: 0x220c3  sra         $a0, $v0, 3
    ctx->pc = 0x43642cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
    // 0x436430: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x436430u;
    {
        const bool branch_taken_0x436430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x436434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436430u;
        // 0x436434: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436430) {
            ctx->pc = 0x4364D4u;
            goto label_4364d4;
        }
    }
    ctx->pc = 0x436438u;
    // 0x436438: 0x14820049  bne         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x436438u;
    {
        const bool branch_taken_0x436438 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x43643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436438u;
        // 0x43643c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436438) {
            ctx->pc = 0x436560u;
            goto label_436560;
        }
    }
    ctx->pc = 0x436440u;
    // 0x436440: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x436440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x436444: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x436444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x436448: 0x33082  srl         $a2, $v1, 2
    ctx->pc = 0x436448u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x43644c: 0x8fc7000c  lw          $a3, 0xC($fp)
    ctx->pc = 0x43644cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x436450: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x436450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x436454: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x436454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x436458: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x436458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43645c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x43645cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x436460: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x436460u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x436464: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x436464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x436468: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x436468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x43646c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x43646cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x436470: 0x10a0003a  beqz        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x436470u;
    {
        const bool branch_taken_0x436470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x436474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436470u;
        // 0x436474: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436470) {
            ctx->pc = 0x43655Cu;
            goto label_43655c;
        }
    }
    ctx->pc = 0x436478u;
    // 0x436478: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x436478u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x43647c: 0x0  nop
    ctx->pc = 0x43647cu;
    // NOP
label_436480:
    // 0x436480: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x436480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x436484: 0x24e8ffff  addiu       $t0, $a3, -0x1
    ctx->pc = 0x436484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x436488: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x436488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43648c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x43648Cu;
    {
        const bool branch_taken_0x43648c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43648Cu;
        // 0x436490: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43648c) {
            ctx->pc = 0x4364BCu;
            goto label_4364bc;
        }
    }
    ctx->pc = 0x436494u;
    // 0x436494: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x436494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436498: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x436498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43649c: 0x0  nop
    ctx->pc = 0x43649cu;
    // NOP
label_4364a0:
    // 0x4364a0: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4364a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x4364a4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4364a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4364a8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4364a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4364ac: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4364acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4364b0: 0x0  nop
    ctx->pc = 0x4364b0u;
    // NOP
    // 0x4364b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4364B4u;
    {
        const bool branch_taken_0x4364b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4364B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4364B4u;
        // 0x4364b8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4364b4) {
            ctx->pc = 0x4364A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4364a0;
        }
    }
    ctx->pc = 0x4364BCu;
label_4364bc:
    // 0x4364bc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x4364bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4364c0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4364c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4364c4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4364C4u;
    {
        const bool branch_taken_0x4364c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4364C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4364C4u;
        // 0x4364c8: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4364c4) {
            ctx->pc = 0x436480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436480;
        }
    }
    ctx->pc = 0x4364CCu;
    // 0x4364cc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x4364CCu;
    {
        const bool branch_taken_0x4364cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4364D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4364CCu;
        // 0x4364d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4364cc) {
            ctx->pc = 0x436560u;
            goto label_436560;
        }
    }
    ctx->pc = 0x4364D4u;
label_4364d4:
    // 0x4364d4: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x4364d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x4364d8: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x4364d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x4364dc: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x4364dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x4364e0: 0x8fc7000c  lw          $a3, 0xC($fp)
    ctx->pc = 0x4364e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x4364e4: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x4364e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4364e8: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x4364e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x4364ec: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4364ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4364f0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4364f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4364f4: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x4364f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x4364f8: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x4364f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4364fc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4364fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x436500: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x436500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x436504: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x436504u;
    {
        const bool branch_taken_0x436504 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x436508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436504u;
        // 0x436508: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436504) {
            ctx->pc = 0x43655Cu;
            goto label_43655c;
        }
    }
    ctx->pc = 0x43650Cu;
    // 0x43650c: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x43650cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_436510:
    // 0x436510: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x436510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x436514: 0x24e8ffff  addiu       $t0, $a3, -0x1
    ctx->pc = 0x436514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x436518: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x436518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43651c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x43651Cu;
    {
        const bool branch_taken_0x43651c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x436520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43651Cu;
        // 0x436520: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43651c) {
            ctx->pc = 0x43654Cu;
            goto label_43654c;
        }
    }
    ctx->pc = 0x436524u;
    // 0x436524: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x436524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436528: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x436528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43652c: 0x0  nop
    ctx->pc = 0x43652cu;
    // NOP
label_436530:
    // 0x436530: 0xa4890000  sh          $t1, 0x0($a0)
    ctx->pc = 0x436530u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x436534: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x436534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436538: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x436538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x43653c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x43653cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x436540: 0x0  nop
    ctx->pc = 0x436540u;
    // NOP
    // 0x436544: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x436544u;
    {
        const bool branch_taken_0x436544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x436548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436544u;
        // 0x436548: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436544) {
            ctx->pc = 0x436530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436530;
        }
    }
    ctx->pc = 0x43654Cu;
label_43654c:
    // 0x43654c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x43654cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x436550: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x436550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x436554: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x436554u;
    {
        const bool branch_taken_0x436554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x436558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436554u;
        // 0x436558: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x436554) {
            ctx->pc = 0x436510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_436510;
        }
    }
    ctx->pc = 0x43655Cu;
label_43655c:
    // 0x43655c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x43655cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_436560:
    // 0x436560: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x436560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_436564:
    // 0x436564: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x436564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x436568: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x436568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x43656c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x43656cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x436570: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x436570u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x436574: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x436574u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x436578: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x436578u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43657c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x43657cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x436580: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x436580u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x436584: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x436584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x436588: 0x3e00008  jr          $ra
    ctx->pc = 0x436588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x436588u;
        // 0x43658c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x436588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x436590u;
}
