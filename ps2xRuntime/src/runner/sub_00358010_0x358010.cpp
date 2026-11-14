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

// Function: sub_00358010
// Address: 0x358010 - 0x3585a0
void sub_00358010_0x358010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358010_0x358010");
#endif

    switch (ctx->pc) {
        case 0x3580a0u: goto label_3580a0;
        case 0x358204u: goto label_358204;
        case 0x35827cu: goto label_35827c;
        case 0x3583c0u: goto label_3583c0;
        case 0x3583d0u: goto label_3583d0;
        case 0x3583f8u: goto label_3583f8;
        case 0x358474u: goto label_358474;
        case 0x358488u: goto label_358488;
        case 0x3584a0u: goto label_3584a0;
        case 0x3584d4u: goto label_3584d4;
        case 0x3584e0u: goto label_3584e0;
        case 0x358554u: goto label_358554;
        default: break;
    }

    ctx->pc = 0x358010u;

    // 0x358010: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x358010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x358014: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x358014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x358018: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x358018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x35801c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x35801cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x358020: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x358020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358024: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x358024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x358028: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x358028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x35802c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35802cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358030: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x358030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x358034: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x358034u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358038: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x358038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x35803c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x35803cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x358040: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x358040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x358044: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x358044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x358048: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x358048u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35804c: 0x8f84bd78  lw          $a0, -0x4288($gp)
    ctx->pc = 0x35804cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x358050: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x358050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x358054: 0x8c43e880  lw          $v1, -0x1780($v0)
    ctx->pc = 0x358054u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61E880u));
    // 0x358058: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x358058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x35805c: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x35805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x358060: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x358060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x358064: 0x24720020  addiu       $s2, $v1, 0x20
    ctx->pc = 0x358064u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x358068: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x358068u;
    {
        const bool branch_taken_0x358068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358068u;
        // 0x35806c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358068) {
            ctx->pc = 0x35808Cu;
            goto label_35808c;
        }
    }
    ctx->pc = 0x358070u;
    // 0x358070: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x358070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x358074: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x358074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x358078: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x358078u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35807c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35807Cu;
    {
        const bool branch_taken_0x35807c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x358080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35807Cu;
        // 0x358080: 0x8f84bd78  lw          $a0, -0x4288($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35807c) {
            ctx->pc = 0x358094u;
            goto label_358094;
        }
    }
    ctx->pc = 0x358084u;
    // 0x358084: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x358084u;
    {
        const bool branch_taken_0x358084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358084u;
        // 0x358088: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358084) {
            ctx->pc = 0x3580A0u;
            goto label_3580a0;
        }
    }
    ctx->pc = 0x35808Cu;
label_35808c:
    // 0x35808c: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x35808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x358090: 0x8f84bd78  lw          $a0, -0x4288($gp)
    ctx->pc = 0x358090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
label_358094:
    // 0x358094: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x358094u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x358098: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x358098u;
    SET_GPR_U32(ctx, 31, 0x3580A0u);
    ctx->pc = 0x35809Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358098u;
    // 0x35809c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x358098u, 0x3580A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3580A0u;
label_3580a0:
    // 0x3580a0: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x3580a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3580a4: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x3580a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
    // 0x3580a8: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x3580a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3580ac: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x3580acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x3580b0: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x3580b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3580b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3580b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3580b8: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x3580B8u;
    {
        const bool branch_taken_0x3580b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3580b8) {
            ctx->pc = 0x3580BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3580B8u;
            // 0x3580bc: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3581B8u;
            goto label_3581b8;
        }
    }
    ctx->pc = 0x3580C0u;
    // 0x3580c0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x3580c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3580c4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3580c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x3580c8: 0x90e20008  lbu         $v0, 0x8($a3)
    ctx->pc = 0x3580c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3580cc: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x3580ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x3580d0: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3580d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3580d4: 0x90e40018  lbu         $a0, 0x18($a3)
    ctx->pc = 0x3580d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3580d8: 0x3042009f  andi        $v0, $v0, 0x9F
    ctx->pc = 0x3580d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)159);
    // 0x3580dc: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x3580dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3580e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3580e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3580e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3580e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3580e8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x3580e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x3580ec: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x3580ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x3580f0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x3580f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3580f4: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x3580f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3580f8: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x3580f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
    // 0x3580fc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3580FCu;
    {
        const bool branch_taken_0x3580fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3580FCu;
        // 0x358100: 0xae050018  sw          $a1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3580fc) {
            ctx->pc = 0x3581B0u;
            goto label_3581b0;
        }
    }
    ctx->pc = 0x358104u;
    // 0x358104: 0x24490018  addiu       $t1, $v0, 0x18
    ctx->pc = 0x358104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x358108: 0x8d240010  lw          $a0, 0x10($t1)
    ctx->pc = 0x358108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x35810c: 0x10a4000d  beq         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x35810Cu;
    {
        const bool branch_taken_0x35810c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x358110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35810Cu;
        // 0x358110: 0x2628004c  addiu       $t0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35810c) {
            ctx->pc = 0x358144u;
            goto label_358144;
        }
    }
    ctx->pc = 0x358114u;
    // 0x358114: 0x51c02  srl         $v1, $a1, 16
    ctx->pc = 0x358114u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x358118: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x358118u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x35811c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x35811cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x358120: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x358120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x358124: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x358124u;
    {
        const bool branch_taken_0x358124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x358128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358124u;
        // 0x358128: 0x34c20008  ori         $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358124) {
            ctx->pc = 0x358140u;
            goto label_358140;
        }
    }
    ctx->pc = 0x35812Cu;
    // 0x35812c: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x35812cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x358130: 0x41602  srl         $v0, $a0, 24
    ctx->pc = 0x358130u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x358134: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x358134u;
    {
        const bool branch_taken_0x358134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x358138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358134u;
        // 0x358138: 0x34c20008  ori         $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358134) {
            ctx->pc = 0x358140u;
            goto label_358140;
        }
    }
    ctx->pc = 0x35813Cu;
    // 0x35813c: 0x34c20004  ori         $v0, $a2, 0x4
    ctx->pc = 0x35813cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
label_358140:
    // 0x358140: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x358140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_358144:
    // 0x358144: 0x94e2000c  lhu         $v0, 0xC($a3)
    ctx->pc = 0x358144u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x358148: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x358148u;
    {
        const bool branch_taken_0x358148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358148u;
        // 0x35814c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358148) {
            ctx->pc = 0x358174u;
            goto label_358174;
        }
    }
    ctx->pc = 0x358150u;
    // 0x358150: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x358150u;
    {
        const bool branch_taken_0x358150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358150u;
        // 0x358154: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358150) {
            ctx->pc = 0x358160u;
            goto label_358160;
        }
    }
    ctx->pc = 0x358158u;
    // 0x358158: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x358158u;
    {
        const bool branch_taken_0x358158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358158u;
        // 0x35815c: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358158) {
            ctx->pc = 0x358170u;
            goto label_358170;
        }
    }
    ctx->pc = 0x358160u;
label_358160:
    // 0x358160: 0x94e3000c  lhu         $v1, 0xC($a3)
    ctx->pc = 0x358160u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x358164: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x358164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x358168: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x358168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x35816c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x35816cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_358170:
    // 0x358170: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x358170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_358174:
    // 0x358174: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x358174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x358178: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x358178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35817c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x35817Cu;
    {
        const bool branch_taken_0x35817c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35817c) {
            ctx->pc = 0x358180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35817Cu;
            // 0x358180: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3581B8u;
            goto label_3581b8;
        }
    }
    ctx->pc = 0x358184u;
    // 0x358184: 0x85030006  lh          $v1, 0x6($t0)
    ctx->pc = 0x358184u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x358188: 0x8d220028  lw          $v0, 0x28($t1)
    ctx->pc = 0x358188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x35818c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35818Cu;
    {
        const bool branch_taken_0x35818c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35818c) {
            ctx->pc = 0x358190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35818Cu;
            // 0x358190: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3581A8u;
            goto label_3581a8;
        }
    }
    ctx->pc = 0x358194u;
    // 0x358194: 0x85030004  lh          $v1, 0x4($t0)
    ctx->pc = 0x358194u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x358198: 0x8d220024  lw          $v0, 0x24($t1)
    ctx->pc = 0x358198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x35819c: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35819Cu;
    {
        const bool branch_taken_0x35819c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x35819c) {
            ctx->pc = 0x3581A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35819Cu;
            // 0x3581a0: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3581B8u;
            goto label_3581b8;
        }
    }
    ctx->pc = 0x3581A4u;
    // 0x3581a4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3581a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3581a8:
    // 0x3581a8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3581a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x3581ac: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x3581acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_3581b0:
    // 0x3581b0: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x3581b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x3581b4: 0x0  nop
    ctx->pc = 0x3581b4u;
    // NOP
label_3581b8:
    // 0x3581b8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3581b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3581bc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x3581bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3581c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3581c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3581c4: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x3581c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x3581c8: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x3581c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x3581cc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x3581ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3581d0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3581d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3581d4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3581d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x3581d8: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x3581d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3581dc: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x3581dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x3581e0: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x3581e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3581e4: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x3581e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x3581e8: 0x7a430030  lq          $v1, 0x30($s2)
    ctx->pc = 0x3581e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x3581ec: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x3581ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x3581f0: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x3581f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3581f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3581f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3581f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3581f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3581fc: 0xc0e2048  jal         func_388120
    ctx->pc = 0x3581FCu;
    SET_GPR_U32(ctx, 31, 0x358204u);
    ctx->pc = 0x358200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3581FCu;
    // 0x358200: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x3581FCu, 0x358204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358204u;
label_358204:
    // 0x358204: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x358204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358208: 0x8f83bebc  lw          $v1, -0x4144($gp)
    ctx->pc = 0x358208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950588)));
    // 0x35820c: 0x8e62e880  lw          $v0, -0x1780($s3)
    ctx->pc = 0x35820cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294961280)));
    // 0x358210: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x358210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x358214: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x358214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358218: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x358218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35821c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35821cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x358220: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x358220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x358224: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x358224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x358228: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x358228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35822c: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x35822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x358230: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x358230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x358234: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x358234u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x358238: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x358238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35823c: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x35823cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x358240: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x358240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x358244: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x358244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x358248: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x358248u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x35824c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x35824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358250: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x358250u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x358254: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x358254u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x358258: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x358258u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x35825c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x35825cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x358260: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x358260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x358264: 0x0  nop
    ctx->pc = 0x358264u;
    // NOP
    // 0x358268: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x358268u;
    {
        const bool branch_taken_0x358268 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358268u;
        // 0x35826c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358268) {
            ctx->pc = 0x358278u;
            goto label_358278;
        }
    }
    ctx->pc = 0x358270u;
    // 0x358270: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x358270u;
    {
        const bool branch_taken_0x358270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358270u;
        // 0x358274: 0xafa70070  sw          $a3, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358270) {
            ctx->pc = 0x3582D4u;
            goto label_3582d4;
        }
    }
    ctx->pc = 0x358278u;
label_358278:
    // 0x358278: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x358278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_35827c:
    // 0x35827c: 0x10c50015  beq         $a2, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x35827Cu;
    {
        const bool branch_taken_0x35827c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x358280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35827Cu;
        // 0x358280: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35827c) {
            ctx->pc = 0x3582D4u;
            goto label_3582d4;
        }
    }
    ctx->pc = 0x358284u;
    // 0x358284: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x358284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358288: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x358288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x35828c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x35828cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358290: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x358290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x358294: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x358294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x358298: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x358298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35829c: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x35829cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x3582a0: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x3582a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3582a4: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x3582a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3582a8: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x3582a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3582ac: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x3582acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3582b0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3582b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3582b4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3582b4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3582b8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3582b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3582bc: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x3582bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x3582c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3582c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3582c4: 0x0  nop
    ctx->pc = 0x3582c4u;
    // NOP
    // 0x3582c8: 0x4502ffec  bc1fl       . + 4 + (-0x14 << 2)
    ctx->pc = 0x3582C8u;
    {
        const bool branch_taken_0x3582c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3582c8) {
            ctx->pc = 0x3582CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3582C8u;
            // 0x3582cc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35827Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35827c;
        }
    }
    ctx->pc = 0x3582D0u;
    // 0x3582d0: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x3582d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
label_3582d4:
    // 0x3582d4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3582d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3582d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3582d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3582dc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3582dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3582e0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3582E0u;
    {
        const bool branch_taken_0x3582e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3582E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3582E0u;
        // 0x3582e4: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3582e0) {
            ctx->pc = 0x358320u;
            goto label_358320;
        }
    }
    ctx->pc = 0x3582E8u;
    // 0x3582e8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3582e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3582ec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3582ECu;
    {
        const bool branch_taken_0x3582ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3582ec) {
            ctx->pc = 0x3582F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3582ECu;
            // 0x3582f0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358308u;
            goto label_358308;
        }
    }
    ctx->pc = 0x3582F4u;
    // 0x3582f4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3582f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3582f8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3582F8u;
    {
        const bool branch_taken_0x3582f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3582f8) {
            ctx->pc = 0x3582FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3582F8u;
            // 0x3582fc: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x358318u;
            goto label_358318;
        }
    }
    ctx->pc = 0x358300u;
    // 0x358300: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x358300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x358304: 0x0  nop
    ctx->pc = 0x358304u;
    // NOP
label_358308:
    // 0x358308: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x358308u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x35830c: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x35830cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x358310: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x358310u;
    {
        const bool branch_taken_0x358310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358310u;
        // 0x358314: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358310) {
            ctx->pc = 0x35835Cu;
            goto label_35835c;
        }
    }
    ctx->pc = 0x358318u;
label_358318:
    // 0x358318: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x358318u;
    {
        const bool branch_taken_0x358318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358318u;
        // 0x35831c: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358318) {
            ctx->pc = 0x358334u;
            goto label_358334;
        }
    }
    ctx->pc = 0x358320u;
label_358320:
    // 0x358320: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x358320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x358324: 0xa2020029  sb          $v0, 0x29($s0)
    ctx->pc = 0x358324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x358328: 0x9383aed0  lbu         $v1, -0x5130($gp)
    ctx->pc = 0x358328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x35832c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x35832Cu;
    {
        const bool branch_taken_0x35832c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35832Cu;
        // 0x358330: 0xa2030028  sb          $v1, 0x28($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35832c) {
            ctx->pc = 0x358360u;
            goto label_358360;
        }
    }
    ctx->pc = 0x358334u;
label_358334:
    // 0x358334: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x358334u;
    {
        const bool branch_taken_0x358334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358334u;
        // 0x358338: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358334) {
            ctx->pc = 0x35834Cu;
            goto label_35834c;
        }
    }
    ctx->pc = 0x35833Cu;
    // 0x35833c: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x35833cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x358340: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x358340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x358344: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x358344u;
    {
        const bool branch_taken_0x358344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358344u;
        // 0x358348: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358344) {
            ctx->pc = 0x35835Cu;
            goto label_35835c;
        }
    }
    ctx->pc = 0x35834Cu;
label_35834c:
    // 0x35834c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35834cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358350: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x358350u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x358354: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x358354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x358358: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x358358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_35835c:
    // 0x35835c: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x35835cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
label_358360:
    // 0x358360: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x358360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x358364: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x358364u;
    {
        const bool branch_taken_0x358364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x358368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358364u;
        // 0x358368: 0x92020028  lbu         $v0, 0x28($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358364) {
            ctx->pc = 0x358378u;
            goto label_358378;
        }
    }
    ctx->pc = 0x35836Cu;
    // 0x35836c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x35836cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x358370: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x358370u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x358374: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x358374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_358378:
    // 0x358378: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x358378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x35837c: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x35837cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x358380: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x358380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x358384: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x358384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x358388: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x358388u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x35838c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35838cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x358390: 0xa202002a  sb          $v0, 0x2A($s0)
    ctx->pc = 0x358390u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 2));
    // 0x358394: 0x8e140008  lw          $s4, 0x8($s0)
    ctx->pc = 0x358394u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x358398: 0x8e910018  lw          $s1, 0x18($s4)
    ctx->pc = 0x358398u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x35839c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x35839cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3583a0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3583a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3583a4: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x3583A4u;
    {
        const bool branch_taken_0x3583a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3583A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3583A4u;
        // 0x3583a8: 0x2663e880  addiu       $v1, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3583a4) {
            ctx->pc = 0x35856Cu;
            goto label_35856c;
        }
    }
    ctx->pc = 0x3583ACu;
    // 0x3583ac: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x3583acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3583b0: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x3583b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x3583b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3583b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3583b8: 0xc106784  jal         func_419E10
    ctx->pc = 0x3583B8u;
    SET_GPR_U32(ctx, 31, 0x3583C0u);
    ctx->pc = 0x3583BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3583B8u;
    // 0x3583bc: 0xa462000a  sh          $v0, 0xA($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x3583B8u, 0x3583C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3583C0u;
label_3583c0:
    // 0x3583c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3583c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3583c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3583c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3583c8: 0xc103c28  jal         func_40F0A0
    ctx->pc = 0x3583C8u;
    SET_GPR_U32(ctx, 31, 0x3583D0u);
    ctx->pc = 0x3583CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3583C8u;
    // 0x3583cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F0A0u, 0x3583C8u, 0x3583D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3583D0u;
label_3583d0:
    // 0x3583d0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3583d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3583d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3583d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3583d8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3583d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3583dc: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3583DCu;
    {
        const bool branch_taken_0x3583dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3583E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3583DCu;
        // 0x3583e0: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3583dc) {
            ctx->pc = 0x35840Cu;
            goto label_35840c;
        }
    }
    ctx->pc = 0x3583E4u;
    // 0x3583e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3583e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3583e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3583e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3583ec: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3583ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3583f0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3583F0u;
    {
        const bool branch_taken_0x3583f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3583F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3583F0u;
        // 0x3583f4: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3583f0) {
            ctx->pc = 0x358448u;
            goto label_358448;
        }
    }
    ctx->pc = 0x3583F8u;
label_3583f8:
    // 0x3583f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3583f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3583fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3583fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358400: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x358400u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x358404: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x358404u;
    {
        const bool branch_taken_0x358404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358404u;
        // 0x358408: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x358404) {
            ctx->pc = 0x358448u;
            goto label_358448;
        }
    }
    ctx->pc = 0x35840Cu;
label_35840c:
    // 0x35840c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x35840cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x358410: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x358410u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x358414: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x358414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358418: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x358418u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x35841c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x35841cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x358420: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x358420u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x358424: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x358424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x358428: 0x46000084  c1          0x84
    ctx->pc = 0x358428u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x35842c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x35842cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x358430: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x358430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x358434: 0x0  nop
    ctx->pc = 0x358434u;
    // NOP
    // 0x358438: 0x4501ffef  bc1t        . + 4 + (-0x11 << 2)
    ctx->pc = 0x358438u;
    {
        const bool branch_taken_0x358438 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x35843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358438u;
        // 0x35843c: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x358438) {
            ctx->pc = 0x3583F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3583f8;
        }
    }
    ctx->pc = 0x358440u;
    // 0x358440: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x358440u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x358444: 0x0  nop
    ctx->pc = 0x358444u;
    // NOP
label_358448:
    // 0x358448: 0x8e260054  lw          $a2, 0x54($s1)
    ctx->pc = 0x358448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x35844c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x35844cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x358450: 0x24843b60  addiu       $a0, $a0, 0x3B60
    ctx->pc = 0x358450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15200));
    // 0x358454: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x358454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358458: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x358458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x35845c: 0x26950064  addiu       $s5, $s4, 0x64
    ctx->pc = 0x35845cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 100));
    // 0x358460: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x358460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x358464: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x358464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x358468: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x358468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x35846c: 0xc0e67d6  jal         func_399F58
    ctx->pc = 0x35846Cu;
    SET_GPR_U32(ctx, 31, 0x358474u);
    ctx->pc = 0x358470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35846Cu;
    // 0x358470: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399F58u, 0x35846Cu, 0x358474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358474u;
label_358474:
    // 0x358474: 0x8e920064  lw          $s2, 0x64($s4)
    ctx->pc = 0x358474u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x358478: 0x1255003c  beq         $s2, $s5, . + 4 + (0x3C << 2)
    ctx->pc = 0x358478u;
    {
        const bool branch_taken_0x358478 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x35847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358478u;
        // 0x35847c: 0x3c170062  lui         $s7, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358478) {
            ctx->pc = 0x35856Cu;
            goto label_35856c;
        }
    }
    ctx->pc = 0x358480u;
    // 0x358480: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x358480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x358484: 0x0  nop
    ctx->pc = 0x358484u;
    // NOP
label_358488:
    // 0x358488: 0x8c510040  lw          $s1, 0x40($v0)
    ctx->pc = 0x358488u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x35848c: 0x24530040  addiu       $s3, $v0, 0x40
    ctx->pc = 0x35848cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x358490: 0x52330034  beql        $s1, $s3, . + 4 + (0x34 << 2)
    ctx->pc = 0x358490u;
    {
        const bool branch_taken_0x358490 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        if (branch_taken_0x358490) {
            ctx->pc = 0x358494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358490u;
            // 0x358494: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358564u;
            goto label_358564;
        }
    }
    ctx->pc = 0x358498u;
    // 0x358498: 0x26f6e880  addiu       $s6, $s7, -0x1780
    ctx->pc = 0x358498u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
    // 0x35849c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x35849cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3584a0:
    // 0x3584a0: 0x5060002d  beql        $v1, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x3584A0u;
    {
        const bool branch_taken_0x3584a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3584a0) {
            ctx->pc = 0x3584A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3584A0u;
            // 0x3584a4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358558u;
            goto label_358558;
        }
    }
    ctx->pc = 0x3584A8u;
    // 0x3584a8: 0x96c5000a  lhu         $a1, 0xA($s6)
    ctx->pc = 0x3584a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x3584ac: 0x9462003c  lhu         $v0, 0x3C($v1)
    ctx->pc = 0x3584acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x3584b0: 0x50450029  beql        $v0, $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3584B0u;
    {
        const bool branch_taken_0x3584b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3584b0) {
            ctx->pc = 0x3584B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3584B0u;
            // 0x3584b4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358558u;
            goto label_358558;
        }
    }
    ctx->pc = 0x3584B8u;
    // 0x3584b8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3584b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3584bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3584bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3584c0: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x3584C0u;
    {
        const bool branch_taken_0x3584c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3584c0) {
            ctx->pc = 0x3584C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3584C0u;
            // 0x3584c4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358558u;
            goto label_358558;
        }
    }
    ctx->pc = 0x3584C8u;
    // 0x3584c8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3584c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3584cc: 0xc106784  jal         func_419E10
    ctx->pc = 0x3584CCu;
    SET_GPR_U32(ctx, 31, 0x3584D4u);
    ctx->pc = 0x3584D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584CCu;
    // 0x3584d0: 0xa465003c  sh          $a1, 0x3C($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x3584CCu, 0x3584D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584D4u;
label_3584d4:
    // 0x3584d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3584d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3584d8: 0xc0e2048  jal         func_388120
    ctx->pc = 0x3584D8u;
    SET_GPR_U32(ctx, 31, 0x3584E0u);
    ctx->pc = 0x3584DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584D8u;
    // 0x3584dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x3584D8u, 0x3584E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584E0u;
label_3584e0:
    // 0x3584e0: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x3584e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3584e4: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x3584e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3584e8: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x3584e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3584ec: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x3584ecu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x3584f0: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x3584f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3584f4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3584f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3584f8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x3584f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3584fc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3584fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x358500: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x358500u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x358504: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x358504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358508: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x358508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35850c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x35850cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x358510: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x358510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x358514: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x358514u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x358518: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x358518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x35851c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x35851cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x358520: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x358520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x358524: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x358524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x358528: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x358528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35852c: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x35852cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x358530: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x358530u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x358534: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x358534u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x358538: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x358538u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x35853c: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x35853cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x358540: 0x0  nop
    ctx->pc = 0x358540u;
    // NOP
    // 0x358544: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x358544u;
    {
        const bool branch_taken_0x358544 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x358544) {
            ctx->pc = 0x358548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358544u;
            // 0x358548: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358558u;
            goto label_358558;
        }
    }
    ctx->pc = 0x35854Cu;
    // 0x35854c: 0xc0e8ed8  jal         func_3A3B60
    ctx->pc = 0x35854Cu;
    SET_GPR_U32(ctx, 31, 0x358554u);
    ctx->pc = 0x358550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35854Cu;
    // 0x358550: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3B60u, 0x35854Cu, 0x358554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358554u;
label_358554:
    // 0x358554: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x358554u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_358558:
    // 0x358558: 0x5633ffd1  bnel        $s1, $s3, . + 4 + (-0x2F << 2)
    ctx->pc = 0x358558u;
    {
        const bool branch_taken_0x358558 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x358558) {
            ctx->pc = 0x35855Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358558u;
            // 0x35855c: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3584A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3584a0;
        }
    }
    ctx->pc = 0x358560u;
    // 0x358560: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x358560u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_358564:
    // 0x358564: 0x5655ffc8  bnel        $s2, $s5, . + 4 + (-0x38 << 2)
    ctx->pc = 0x358564u;
    {
        const bool branch_taken_0x358564 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        if (branch_taken_0x358564) {
            ctx->pc = 0x358568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358564u;
            // 0x358568: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358488;
        }
    }
    ctx->pc = 0x35856Cu;
label_35856c:
    // 0x35856c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x35856cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x358570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x358570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358574: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x358574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x358578: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x358578u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x35857c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x35857cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x358580: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x358580u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x358584: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x358584u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x358588: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x358588u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x35858c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x35858cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x358590: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x358590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x358594: 0x3e00008  jr          $ra
    ctx->pc = 0x358594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358594u;
        // 0x358598: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35859Cu;
    // 0x35859c: 0x0  nop
    ctx->pc = 0x35859cu;
    // NOP
    ctx->pc = 0x3585a0u;
}
