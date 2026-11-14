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

// Function: sub_00434580
// Address: 0x434580 - 0x434770
void sub_00434580_0x434580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00434580_0x434580");
#endif

    switch (ctx->pc) {
        case 0x4345b0u: goto label_4345b0;
        case 0x4345d0u: goto label_4345d0;
        case 0x434620u: goto label_434620;
        case 0x4346a8u: goto label_4346a8;
        case 0x4346e8u: goto label_4346e8;
        case 0x434720u: goto label_434720;
        default: break;
    }

    ctx->pc = 0x434580u;

    // 0x434580: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x434580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x434584: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x434584u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x434588: 0xa383ae1c  sb          $v1, -0x51E4($gp)
    ctx->pc = 0x434588u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294946332), (uint8_t)GPR_U32(ctx, 3));
    // 0x43458c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x43458cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x434590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x434590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x434594: 0x24423b90  addiu       $v0, $v0, 0x3B90
    ctx->pc = 0x434594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15248));
    // 0x434598: 0x8c47002c  lw          $a3, 0x2C($v0)
    ctx->pc = 0x434598u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x623BBCu));
    // 0x43459c: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x43459cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x623BB0u));
    // 0x4345a0: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x4345a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x623BA8u));
    // 0x4345a4: 0x34e70002  ori         $a3, $a3, 0x2
    ctx->pc = 0x4345a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    // 0x4345a8: 0xc10746c  jal         func_41D1B0
    ctx->pc = 0x4345A8u;
    SET_GPR_U32(ctx, 31, 0x4345B0u);
    ctx->pc = 0x4345ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4345A8u;
    // 0x4345ac: 0x8c45001c  lw          $a1, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x4345A8u, 0x4345B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4345B0u;
label_4345b0:
    // 0x4345b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4345b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4345b4: 0xa380ae1c  sb          $zero, -0x51E4($gp)
    ctx->pc = 0x4345b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294946332), (uint8_t)GPR_U32(ctx, 0));
    // 0x4345b8: 0x24020085  addiu       $v0, $zero, 0x85
    ctx->pc = 0x4345b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x4345bc: 0xa0c20020  sb          $v0, 0x20($a2)
    ctx->pc = 0x4345bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x4345c0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4345c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4345c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4345C4u;
    {
        const bool branch_taken_0x4345c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4345C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4345C4u;
        // 0x4345c8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4345c4) {
            ctx->pc = 0x4345ECu;
            goto label_4345ec;
        }
    }
    ctx->pc = 0x4345CCu;
    // 0x4345cc: 0x0  nop
    ctx->pc = 0x4345ccu;
    // NOP
label_4345d0:
    // 0x4345d0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4345d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4345d4: 0x0  nop
    ctx->pc = 0x4345d4u;
    // NOP
    // 0x4345d8: 0x0  nop
    ctx->pc = 0x4345d8u;
    // NOP
    // 0x4345dc: 0x0  nop
    ctx->pc = 0x4345dcu;
    // NOP
    // 0x4345e0: 0x0  nop
    ctx->pc = 0x4345e0u;
    // NOP
    // 0x4345e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4345E4u;
    {
        const bool branch_taken_0x4345e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4345E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4345E4u;
        // 0x4345e8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4345e4) {
            ctx->pc = 0x4345D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4345d0;
        }
    }
    ctx->pc = 0x4345ECu;
label_4345ec:
    // 0x4345ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4345ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4345f0: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x4345f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4345f4: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x4345f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4345f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4345f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4345fc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x4345fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x434600: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x434600u;
    {
        const bool branch_taken_0x434600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434600u;
        // 0x434604: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434600) {
            ctx->pc = 0x434610u;
            goto label_434610;
        }
    }
    ctx->pc = 0x434608u;
    // 0x434608: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x434608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x43460c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x43460cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_434610:
    // 0x434610: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x434610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x434614: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x434614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434618: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x434618u;
    {
        const bool branch_taken_0x434618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x43461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434618u;
        // 0x43461c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434618) {
            ctx->pc = 0x43463Cu;
            goto label_43463c;
        }
    }
    ctx->pc = 0x434620u;
label_434620:
    // 0x434620: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x434620u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x434624: 0x0  nop
    ctx->pc = 0x434624u;
    // NOP
    // 0x434628: 0x0  nop
    ctx->pc = 0x434628u;
    // NOP
    // 0x43462c: 0x0  nop
    ctx->pc = 0x43462cu;
    // NOP
    // 0x434630: 0x0  nop
    ctx->pc = 0x434630u;
    // NOP
    // 0x434634: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x434634u;
    {
        const bool branch_taken_0x434634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434634u;
        // 0x434638: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434634) {
            ctx->pc = 0x434620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434620;
        }
    }
    ctx->pc = 0x43463Cu;
label_43463c:
    // 0x43463c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43463cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x434640: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x434640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x434644: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x434644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x434648: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x434648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x43464c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43464Cu;
    {
        const bool branch_taken_0x43464c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43464Cu;
        // 0x434650: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43464c) {
            ctx->pc = 0x43465Cu;
            goto label_43465c;
        }
    }
    ctx->pc = 0x434654u;
    // 0x434654: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x434654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x434658: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x434658u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_43465c:
    // 0x43465c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x43465cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x434660: 0x8f84beb8  lw          $a0, -0x4148($gp)
    ctx->pc = 0x434660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x434664: 0xdc623180  ld          $v0, 0x3180($v1)
    ctx->pc = 0x434664u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x623180u));
    // 0x434668: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x434668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x43466c: 0x21bfb  dsra        $v1, $v0, 15
    ctx->pc = 0x43466cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 2) >> 15);
    // 0x434670: 0x2127b  dsra        $v0, $v0, 9
    ctx->pc = 0x434670u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 9);
    // 0x434674: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x434674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x434678: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x434678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x43467c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43467cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x434680: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x434680u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x434684: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x434684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x434688: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x434688u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x43468c: 0x31d00  sll         $v1, $v1, 20
    ctx->pc = 0x43468cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x434690: 0x21380  sll         $v0, $v0, 14
    ctx->pc = 0x434690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x434694: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x434694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x434698: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x434698u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x43469c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x43469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4346a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4346A0u;
    {
        const bool branch_taken_0x4346a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4346A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4346A0u;
        // 0x4346a4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4346a0) {
            ctx->pc = 0x4346C4u;
            goto label_4346c4;
        }
    }
    ctx->pc = 0x4346A8u;
label_4346a8:
    // 0x4346a8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4346a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4346ac: 0x0  nop
    ctx->pc = 0x4346acu;
    // NOP
    // 0x4346b0: 0x0  nop
    ctx->pc = 0x4346b0u;
    // NOP
    // 0x4346b4: 0x0  nop
    ctx->pc = 0x4346b4u;
    // NOP
    // 0x4346b8: 0x0  nop
    ctx->pc = 0x4346b8u;
    // NOP
    // 0x4346bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4346BCu;
    {
        const bool branch_taken_0x4346bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4346C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4346BCu;
        // 0x4346c0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4346bc) {
            ctx->pc = 0x4346A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4346a8;
        }
    }
    ctx->pc = 0x4346C4u;
label_4346c4:
    // 0x4346c4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4346c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4346c8: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x4346c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x4346cc: 0x21680  sll         $v0, $v0, 26
    ctx->pc = 0x4346ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 26));
    // 0x4346d0: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x4346d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x4346d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4346d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4346d8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4346d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4346dc: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x4346dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4346e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4346E0u;
    {
        const bool branch_taken_0x4346e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4346E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4346E0u;
        // 0x4346e4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4346e0) {
            ctx->pc = 0x434704u;
            goto label_434704;
        }
    }
    ctx->pc = 0x4346E8u;
label_4346e8:
    // 0x4346e8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4346e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4346ec: 0x0  nop
    ctx->pc = 0x4346ecu;
    // NOP
    // 0x4346f0: 0x0  nop
    ctx->pc = 0x4346f0u;
    // NOP
    // 0x4346f4: 0x0  nop
    ctx->pc = 0x4346f4u;
    // NOP
    // 0x4346f8: 0x0  nop
    ctx->pc = 0x4346f8u;
    // NOP
    // 0x4346fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4346FCu;
    {
        const bool branch_taken_0x4346fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4346FCu;
        // 0x434700: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4346fc) {
            ctx->pc = 0x4346E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4346e8;
        }
    }
    ctx->pc = 0x434704u;
label_434704:
    // 0x434704: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x434704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x434708: 0x41f80  sll         $v1, $a0, 30
    ctx->pc = 0x434708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 30));
    // 0x43470c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43470cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x434710: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x434710u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x434714: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x434714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x434718: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x434718u;
    {
        const bool branch_taken_0x434718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434718u;
        // 0x43471c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434718) {
            ctx->pc = 0x43473Cu;
            goto label_43473c;
        }
    }
    ctx->pc = 0x434720u;
label_434720:
    // 0x434720: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x434720u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x434724: 0x0  nop
    ctx->pc = 0x434724u;
    // NOP
    // 0x434728: 0x0  nop
    ctx->pc = 0x434728u;
    // NOP
    // 0x43472c: 0x0  nop
    ctx->pc = 0x43472cu;
    // NOP
    // 0x434730: 0x0  nop
    ctx->pc = 0x434730u;
    // NOP
    // 0x434734: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x434734u;
    {
        const bool branch_taken_0x434734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434734u;
        // 0x434738: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434734) {
            ctx->pc = 0x434720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434720;
        }
    }
    ctx->pc = 0x43473Cu;
label_43473c:
    // 0x43473c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x43473cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x434740: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x434740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x434744: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x434744u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x434748: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x434748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43474c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43474cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x434750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x434750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x434754: 0xa0a40017  sb          $a0, 0x17($a1)
    ctx->pc = 0x434754u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 23), (uint8_t)GPR_U32(ctx, 4));
    // 0x434758: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x434758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43475c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x43475cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x434760: 0xa0a00016  sb          $zero, 0x16($a1)
    ctx->pc = 0x434760u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x434764: 0x3e00008  jr          $ra
    ctx->pc = 0x434764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x434768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434764u;
        // 0x434768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43476Cu;
    // 0x43476c: 0x0  nop
    ctx->pc = 0x43476cu;
    // NOP
    ctx->pc = 0x434770u;
}
