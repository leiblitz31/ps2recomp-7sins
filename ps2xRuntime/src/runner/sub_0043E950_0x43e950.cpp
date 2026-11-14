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

// Function: sub_0043E950
// Address: 0x43e950 - 0x43eab8
void sub_0043E950_0x43e950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043E950_0x43e950");
#endif

    switch (ctx->pc) {
        case 0x43e950u: goto label_43e950;
        case 0x43e954u: goto label_43e954;
        case 0x43e958u: goto label_43e958;
        case 0x43e95cu: goto label_43e95c;
        case 0x43e960u: goto label_43e960;
        case 0x43e964u: goto label_43e964;
        case 0x43e968u: goto label_43e968;
        case 0x43e96cu: goto label_43e96c;
        case 0x43e970u: goto label_43e970;
        case 0x43e974u: goto label_43e974;
        case 0x43e978u: goto label_43e978;
        case 0x43e97cu: goto label_43e97c;
        case 0x43e980u: goto label_43e980;
        case 0x43e984u: goto label_43e984;
        case 0x43e988u: goto label_43e988;
        case 0x43e98cu: goto label_43e98c;
        case 0x43e990u: goto label_43e990;
        case 0x43e994u: goto label_43e994;
        case 0x43e998u: goto label_43e998;
        case 0x43e99cu: goto label_43e99c;
        case 0x43e9a0u: goto label_43e9a0;
        case 0x43e9a4u: goto label_43e9a4;
        case 0x43e9a8u: goto label_43e9a8;
        case 0x43e9acu: goto label_43e9ac;
        case 0x43e9b0u: goto label_43e9b0;
        case 0x43e9b4u: goto label_43e9b4;
        case 0x43e9b8u: goto label_43e9b8;
        case 0x43e9bcu: goto label_43e9bc;
        case 0x43e9c0u: goto label_43e9c0;
        case 0x43e9c4u: goto label_43e9c4;
        case 0x43e9c8u: goto label_43e9c8;
        case 0x43e9ccu: goto label_43e9cc;
        case 0x43e9d0u: goto label_43e9d0;
        case 0x43e9d4u: goto label_43e9d4;
        case 0x43e9d8u: goto label_43e9d8;
        case 0x43e9dcu: goto label_43e9dc;
        case 0x43e9e0u: goto label_43e9e0;
        case 0x43e9e4u: goto label_43e9e4;
        case 0x43e9e8u: goto label_43e9e8;
        case 0x43e9ecu: goto label_43e9ec;
        case 0x43e9f0u: goto label_43e9f0;
        case 0x43e9f4u: goto label_43e9f4;
        case 0x43e9f8u: goto label_43e9f8;
        case 0x43e9fcu: goto label_43e9fc;
        case 0x43ea00u: goto label_43ea00;
        case 0x43ea04u: goto label_43ea04;
        case 0x43ea08u: goto label_43ea08;
        case 0x43ea0cu: goto label_43ea0c;
        case 0x43ea10u: goto label_43ea10;
        case 0x43ea14u: goto label_43ea14;
        case 0x43ea18u: goto label_43ea18;
        case 0x43ea1cu: goto label_43ea1c;
        case 0x43ea20u: goto label_43ea20;
        case 0x43ea24u: goto label_43ea24;
        case 0x43ea28u: goto label_43ea28;
        case 0x43ea2cu: goto label_43ea2c;
        case 0x43ea30u: goto label_43ea30;
        case 0x43ea34u: goto label_43ea34;
        case 0x43ea38u: goto label_43ea38;
        case 0x43ea3cu: goto label_43ea3c;
        case 0x43ea40u: goto label_43ea40;
        case 0x43ea44u: goto label_43ea44;
        case 0x43ea48u: goto label_43ea48;
        case 0x43ea4cu: goto label_43ea4c;
        case 0x43ea50u: goto label_43ea50;
        case 0x43ea54u: goto label_43ea54;
        case 0x43ea58u: goto label_43ea58;
        case 0x43ea5cu: goto label_43ea5c;
        case 0x43ea60u: goto label_43ea60;
        case 0x43ea64u: goto label_43ea64;
        case 0x43ea68u: goto label_43ea68;
        case 0x43ea6cu: goto label_43ea6c;
        case 0x43ea70u: goto label_43ea70;
        case 0x43ea74u: goto label_43ea74;
        case 0x43ea78u: goto label_43ea78;
        case 0x43ea7cu: goto label_43ea7c;
        case 0x43ea80u: goto label_43ea80;
        case 0x43ea84u: goto label_43ea84;
        case 0x43ea88u: goto label_43ea88;
        case 0x43ea8cu: goto label_43ea8c;
        case 0x43ea90u: goto label_43ea90;
        case 0x43ea94u: goto label_43ea94;
        case 0x43ea98u: goto label_43ea98;
        case 0x43ea9cu: goto label_43ea9c;
        case 0x43eaa0u: goto label_43eaa0;
        case 0x43eaa4u: goto label_43eaa4;
        case 0x43eaa8u: goto label_43eaa8;
        case 0x43eaacu: goto label_43eaac;
        case 0x43eab0u: goto label_43eab0;
        case 0x43eab4u: goto label_43eab4;
        default: break;
    }

    ctx->pc = 0x43e950u;

label_43e950:
    // 0x43e950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x43e950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_43e954:
    // 0x43e954: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x43e954u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43e958:
    // 0x43e958: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x43e958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_43e95c:
    // 0x43e95c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x43e95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_43e960:
    // 0x43e960: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x43e960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_43e964:
    // 0x43e964: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x43e964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_43e968:
    // 0x43e968: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x43e968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_43e96c:
    // 0x43e96c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43e96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_43e970:
    // 0x43e970: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x43e970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_43e974:
    // 0x43e974: 0x8f90aee8  lw          $s0, -0x5118($gp)
    ctx->pc = 0x43e974u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946536)));
label_43e978:
    // 0x43e978: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x43e978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43e97c:
    // 0x43e97c: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x43e97cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_43e980:
    // 0x43e980: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x43e980u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_43e984:
    // 0x43e984: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x43e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43e988:
    // 0x43e988: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x43e988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43e98c:
    // 0x43e98c: 0x40f809  jalr        $v0
label_43e990:
    if (ctx->pc == 0x43E990u) {
        ctx->pc = 0x43E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E98Cu;
        // 0x43e990: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E994u;
        goto label_43e994;
    }
    ctx->pc = 0x43E98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x43E994u);
        ctx->pc = 0x43E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E98Cu;
        // 0x43e990: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43E98Cu, 0x43E994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43E994u;
label_43e994:
    // 0x43e994: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x43e994u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_43e998:
    // 0x43e998: 0x12000041  beqz        $s0, . + 4 + (0x41 << 2)
label_43e99c:
    if (ctx->pc == 0x43E99Cu) {
        ctx->pc = 0x43E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E998u;
        // 0x43e99c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E9A0u;
        goto label_43e9a0;
    }
    ctx->pc = 0x43E998u;
    {
        const bool branch_taken_0x43e998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E998u;
        // 0x43e99c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e998) {
            ctx->pc = 0x43EAA0u;
            goto label_43eaa0;
        }
    }
    ctx->pc = 0x43E9A0u;
label_43e9a0:
    // 0x43e9a0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x43e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_43e9a4:
    // 0x43e9a4: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x43e9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_43e9a8:
    // 0x43e9a8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x43e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_43e9ac:
    // 0x43e9ac: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x43e9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
label_43e9b0:
    // 0x43e9b0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43e9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_43e9b4:
    // 0x43e9b4: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x43e9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_43e9b8:
    // 0x43e9b8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x43e9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_43e9bc:
    // 0x43e9bc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x43e9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_43e9c0:
    // 0x43e9c0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x43e9c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_43e9c4:
    // 0x43e9c4: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x43e9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_43e9c8:
    // 0x43e9c8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43e9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_43e9cc:
    // 0x43e9cc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x43e9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_43e9d0:
    // 0x43e9d0: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x43e9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_43e9d4:
    // 0x43e9d4: 0x3403f811  ori         $v1, $zero, 0xF811
    ctx->pc = 0x43e9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63505);
label_43e9d8:
    // 0x43e9d8: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x43e9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
label_43e9dc:
    // 0x43e9dc: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x43e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_43e9e0:
    // 0x43e9e0: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x43e9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_43e9e4:
    // 0x43e9e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x43e9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_43e9e8:
    // 0x43e9e8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x43e9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_43e9ec:
    // 0x43e9ec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x43e9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_43e9f0:
    // 0x43e9f0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x43e9f0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_43e9f4:
    // 0x43e9f4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x43e9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_43e9f8:
    // 0x43e9f8: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x43e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_43e9fc:
    // 0x43e9fc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43e9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ea00:
    // 0x43ea00: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x43ea00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_43ea04:
    // 0x43ea04: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x43ea04u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_43ea08:
    // 0x43ea08: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x43ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_43ea0c:
    // 0x43ea0c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ea10:
    // 0x43ea10: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x43ea10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_43ea14:
    // 0x43ea14: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x43ea14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_43ea18:
    // 0x43ea18: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x43ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_43ea1c:
    // 0x43ea1c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ea20:
    // 0x43ea20: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x43ea20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_43ea24:
    // 0x43ea24: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x43ea24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_43ea28:
    // 0x43ea28: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x43ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_43ea2c:
    // 0x43ea2c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ea30:
    // 0x43ea30: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x43ea30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_43ea34:
    // 0x43ea34: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x43ea34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_43ea38:
    // 0x43ea38: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x43ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_43ea3c:
    // 0x43ea3c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ea40:
    // 0x43ea40: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x43ea40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_43ea44:
    // 0x43ea44: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x43ea44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_43ea48:
    // 0x43ea48: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x43ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_43ea4c:
    // 0x43ea4c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ea50:
    // 0x43ea50: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x43ea50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_43ea54:
    // 0x43ea54: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x43ea54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_43ea58:
    // 0x43ea58: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x43ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_43ea5c:
    // 0x43ea5c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ea60:
    // 0x43ea60: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x43ea60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_43ea64:
    // 0x43ea64: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x43ea64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_43ea68:
    // 0x43ea68: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x43ea68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_43ea6c:
    // 0x43ea6c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ea6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ea70:
    // 0x43ea70: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x43ea70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_43ea74:
    // 0x43ea74: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x43ea74u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_43ea78:
    // 0x43ea78: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x43ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_43ea7c:
    // 0x43ea7c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x43ea7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_43ea80:
    // 0x43ea80: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x43ea80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_43ea84:
    // 0x43ea84: 0x24a5d620  addiu       $a1, $a1, -0x29E0
    ctx->pc = 0x43ea84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956576));
label_43ea88:
    // 0x43ea88: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x43ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_43ea8c:
    // 0x43ea8c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x43ea8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_43ea90:
    // 0x43ea90: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x43ea90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
label_43ea94:
    // 0x43ea94: 0xc10f954  jal         func_43E550
label_43ea98:
    if (ctx->pc == 0x43EA98u) {
        ctx->pc = 0x43EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EA94u;
        // 0x43ea98: 0xaf83be20  sw          $v1, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EA9Cu;
        goto label_43ea9c;
    }
    ctx->pc = 0x43EA94u;
    SET_GPR_U32(ctx, 31, 0x43EA9Cu);
    ctx->pc = 0x43EA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43EA94u;
    // 0x43ea98: 0xaf83be20  sw          $v1, -0x41E0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43E550u, 0x43EA94u, 0x43EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43EA9Cu;
label_43ea9c:
    // 0x43ea9c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x43ea9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43eaa0:
    // 0x43eaa0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x43eaa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43eaa4:
    // 0x43eaa4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x43eaa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43eaa8:
    // 0x43eaa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43eaa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_43eaac:
    // 0x43eaac: 0x3e00008  jr          $ra
label_43eab0:
    if (ctx->pc == 0x43EAB0u) {
        ctx->pc = 0x43EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EAACu;
        // 0x43eab0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EAB4u;
        goto label_43eab4;
    }
    ctx->pc = 0x43EAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EAACu;
        // 0x43eab0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43EAACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43EAB4u;
label_43eab4:
    // 0x43eab4: 0x0  nop
    ctx->pc = 0x43eab4u;
    // NOP
    ctx->pc = 0x43eab8u;
}
