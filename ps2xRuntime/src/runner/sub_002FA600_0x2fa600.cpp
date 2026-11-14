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

// Function: sub_002FA600
// Address: 0x2fa600 - 0x2fab68
void sub_002FA600_0x2fa600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA600_0x2fa600");
#endif

    ctx->pc = 0x2fa600u;

    // 0x2fa600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fa600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fa604: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x2fa604u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2fa608: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x2fa608u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2fa60c: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x2fa60cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fa610: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2fa610u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2fa614: 0x4683c  dsll32      $t5, $a0, 0
    ctx->pc = 0x2fa614u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fa618: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x2fa618u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x2fa61c: 0x152000b0  bnez        $t1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x2FA61Cu;
    {
        const bool branch_taken_0x2fa61c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA61Cu;
        // 0x2fa620: 0x3a0c02d  daddu       $t8, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa61c) {
            ctx->pc = 0x2FA8E0u;
            goto label_2fa8e0;
        }
    }
    ctx->pc = 0x2FA624u;
    // 0x2fa624: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x2fa624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2fa628: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FA628u;
    {
        const bool branch_taken_0x2fa628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA628u;
        // 0x2fa62c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa628) {
            ctx->pc = 0x2FA6A8u;
            goto label_2fa6a8;
        }
    }
    ctx->pc = 0x2FA630u;
    // 0x2fa630: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x2fa630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2fa634: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA634u;
    {
        const bool branch_taken_0x2fa634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA634u;
        // 0x2fa638: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa634) {
            ctx->pc = 0x2FA650u;
            goto label_2fa650;
        }
    }
    ctx->pc = 0x2FA63Cu;
    // 0x2fa63c: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x2fa63cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2fa640: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2fa640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fa644: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA644u;
    {
        const bool branch_taken_0x2fa644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA644u;
        // 0x2fa648: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa644) {
            ctx->pc = 0x2FA664u;
            goto label_2fa664;
        }
    }
    ctx->pc = 0x2FA64Cu;
    // 0x2fa64c: 0x0  nop
    ctx->pc = 0x2fa64cu;
    // NOP
label_2fa650:
    // 0x2fa650: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2fa650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2fa654: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa658: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2fa658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fa65c: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x2fa65cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2fa660: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2fa660u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2fa664:
    // 0x2fa664: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x2fa664u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x2fa668: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2fa668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2fa66c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2fa66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2fa670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fa670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fa674: 0x9042a260  lbu         $v0, -0x5DA0($v0)
    ctx->pc = 0x2fa674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294943328)));
    // 0x2fa678: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2fa678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2fa67c: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x2fa67cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2fa680: 0x11800006  beqz        $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA680u;
    {
        const bool branch_taken_0x2fa680 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA680u;
        // 0x2fa684: 0xac1023  subu        $v0, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa680) {
            ctx->pc = 0x2FA69Cu;
            goto label_2fa69c;
        }
    }
    ctx->pc = 0x2FA688u;
    // 0x2fa688: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x2fa688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x2fa68c: 0x4d1006  srlv        $v0, $t5, $v0
    ctx->pc = 0x2fa68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x2fa690: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x2fa690u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x2fa694: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2fa694u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2fa698: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x2fa698u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
label_2fa69c:
    // 0x2fa69c: 0x73402  srl         $a2, $a3, 16
    ctx->pc = 0x2fa69cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x2fa6a0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2FA6A0u;
    {
        const bool branch_taken_0x2fa6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA6A0u;
        // 0x2fa6a4: 0x30e9ffff  andi        $t1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa6a0) {
            ctx->pc = 0x2FA808u;
            goto label_2fa808;
        }
    }
    ctx->pc = 0x2FA6A8u;
label_2fa6a8:
    // 0x2fa6a8: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FA6A8u;
    {
        const bool branch_taken_0x2fa6a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA6A8u;
        // 0x2fa6ac: 0x47102b  sltu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa6a8) {
            ctx->pc = 0x2FA6D0u;
            goto label_2fa6d0;
        }
    }
    ctx->pc = 0x2FA6B0u;
    // 0x2fa6b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa6b4: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FA6B4u;
    {
        const bool branch_taken_0x2fa6b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa6b4) {
            ctx->pc = 0x2FA6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA6B4u;
            // 0x2fa6b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA6BCu;
            goto label_2fa6bc;
        }
    }
    ctx->pc = 0x2FA6BCu;
label_2fa6bc:
    // 0x2fa6bc: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x2fa6bcu;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2fa6c0: 0x1012  mflo        $v0
    ctx->pc = 0x2fa6c0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fa6c4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2fa6c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa6c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa6cc: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x2fa6ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_2fa6d0:
    // 0x2fa6d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA6D0u;
    {
        const bool branch_taken_0x2fa6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA6D0u;
        // 0x2fa6d4: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa6d0) {
            ctx->pc = 0x2FA6E8u;
            goto label_2fa6e8;
        }
    }
    ctx->pc = 0x2FA6D8u;
    // 0x2fa6d8: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x2fa6d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2fa6dc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2fa6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fa6e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA6E0u;
    {
        const bool branch_taken_0x2fa6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA6E0u;
        // 0x2fa6e4: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa6e0) {
            ctx->pc = 0x2FA6FCu;
            goto label_2fa6fc;
        }
    }
    ctx->pc = 0x2FA6E8u;
label_2fa6e8:
    // 0x2fa6e8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2fa6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2fa6ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa6f0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2fa6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fa6f4: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x2fa6f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2fa6f8: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2fa6f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2fa6fc:
    // 0x2fa6fc: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x2fa6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x2fa700: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2fa700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2fa704: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2fa704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2fa708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fa708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fa70c: 0x9042a260  lbu         $v0, -0x5DA0($v0)
    ctx->pc = 0x2fa70cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294943328)));
    // 0x2fa710: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2fa710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2fa714: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x2fa714u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2fa718: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA718u;
    {
        const bool branch_taken_0x2fa718 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA718u;
        // 0x2fa71c: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa718) {
            ctx->pc = 0x2FA730u;
            goto label_2fa730;
        }
    }
    ctx->pc = 0x2FA720u;
    // 0x2fa720: 0x1475023  subu        $t2, $t2, $a3
    ctx->pc = 0x2fa720u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2fa724: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x2fa724u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x2fa728: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2FA728u;
    {
        const bool branch_taken_0x2fa728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA728u;
        // 0x2fa72c: 0x30eeffff  andi        $t6, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa728) {
            ctx->pc = 0x2FA800u;
            goto label_2fa800;
        }
    }
    ctx->pc = 0x2FA730u;
label_2fa730:
    // 0x2fa730: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x2fa730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x2fa734: 0x1ed1006  srlv        $v0, $t5, $t7
    ctx->pc = 0x2fa734u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x2fa738: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x2fa738u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x2fa73c: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x2fa73cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x2fa740: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2fa740u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2fa744: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x2fa744u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x2fa748: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x2fa748u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x2fa74c: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x2fa74cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2fa750: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x2fa750u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x2fa754: 0x30eeffff  andi        $t6, $a3, 0xFFFF
    ctx->pc = 0x2fa754u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2fa758: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fa758u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa75c: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FA75Cu;
    {
        const bool branch_taken_0x2fa75c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa75c) {
            ctx->pc = 0x2FA760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA75Cu;
            // 0x2fa760: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA764u;
            goto label_2fa764;
        }
    }
    ctx->pc = 0x2FA764u;
label_2fa764:
    // 0x2fa764: 0x1012  mflo        $v0
    ctx->pc = 0x2fa764u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fa768: 0x1810  mfhi        $v1
    ctx->pc = 0x2fa768u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fa76c: 0x4e4018  mult        $t0, $v0, $t6
    ctx->pc = 0x2fa76cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2fa770: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2fa770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2fa774: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x2fa774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fa778: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x2fa778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fa77c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FA77Cu;
    {
        const bool branch_taken_0x2fa77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA77Cu;
        // 0x2fa780: 0x1c0782d  daddu       $t7, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa77c) {
            ctx->pc = 0x2FA7A8u;
            goto label_2fa7a8;
        }
    }
    ctx->pc = 0x2FA784u;
    // 0x2fa784: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2fa784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2fa788: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x2fa788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2fa78c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA78Cu;
    {
        const bool branch_taken_0x2fa78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa78c) {
            ctx->pc = 0x2FA790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA78Cu;
            // 0x2fa790: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA7ACu;
            goto label_2fa7ac;
        }
    }
    ctx->pc = 0x2FA794u;
    // 0x2fa794: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x2fa794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fa798: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x2fa798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2fa79c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2fa79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2fa7a0: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x2fa7a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x2fa7a4: 0x0  nop
    ctx->pc = 0x2fa7a4u;
    // NOP
label_2fa7a8:
    // 0x2fa7a8: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x2fa7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_2fa7ac:
    // 0x2fa7ac: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x2fa7acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2fa7b0: 0xc9001b  divu        $zero, $a2, $t1
    ctx->pc = 0x2fa7b0u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x2fa7b4: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FA7B4u;
    {
        const bool branch_taken_0x2fa7b4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa7b4) {
            ctx->pc = 0x2FA7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA7B4u;
            // 0x2fa7b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA7BCu;
            goto label_2fa7bc;
        }
    }
    ctx->pc = 0x2FA7BCu;
label_2fa7bc:
    // 0x2fa7bc: 0x1012  mflo        $v0
    ctx->pc = 0x2fa7bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fa7c0: 0x1810  mfhi        $v1
    ctx->pc = 0x2fa7c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fa7c4: 0x4f4018  mult        $t0, $v0, $t7
    ctx->pc = 0x2fa7c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2fa7c8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2fa7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2fa7cc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2fa7ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fa7d0: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x2fa7d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fa7d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FA7D4u;
    {
        const bool branch_taken_0x2fa7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA7D4u;
        // 0x2fa7d8: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa7d4) {
            ctx->pc = 0x2FA800u;
            goto label_2fa800;
        }
    }
    ctx->pc = 0x2FA7DCu;
    // 0x2fa7dc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2fa7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2fa7e0: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x2fa7e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2fa7e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA7E4u;
    {
        const bool branch_taken_0x2fa7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA7E4u;
        // 0x2fa7e8: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa7e4) {
            ctx->pc = 0x2FA800u;
            goto label_2fa800;
        }
    }
    ctx->pc = 0x2FA7ECu;
    // 0x2fa7ec: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x2fa7ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fa7f0: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x2fa7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2fa7f4: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2fa7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2fa7f8: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2fa7f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x2fa7fc: 0x885023  subu        $t2, $a0, $t0
    ctx->pc = 0x2fa7fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_2fa800:
    // 0x2fa800: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2fa800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa804: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x2fa804u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2fa808:
    // 0x2fa808: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x2fa808u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x2fa80c: 0xd2402  srl         $a0, $t5, 16
    ctx->pc = 0x2fa80cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x2fa810: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FA810u;
    {
        const bool branch_taken_0x2fa810 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa810) {
            ctx->pc = 0x2FA814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA810u;
            // 0x2fa814: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA818u;
            goto label_2fa818;
        }
    }
    ctx->pc = 0x2FA818u;
label_2fa818:
    // 0x2fa818: 0x1012  mflo        $v0
    ctx->pc = 0x2fa818u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fa81c: 0x1810  mfhi        $v1
    ctx->pc = 0x2fa81cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fa820: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x2fa820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2fa824: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2fa824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2fa828: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x2fa828u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fa82c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2fa82cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fa830: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2FA830u;
    {
        const bool branch_taken_0x2fa830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa830) {
            ctx->pc = 0x2FA834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA830u;
            // 0x2fa834: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA85Cu;
            goto label_2fa85c;
        }
    }
    ctx->pc = 0x2FA838u;
    // 0x2fa838: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2fa838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2fa83c: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x2fa83cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2fa840: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA840u;
    {
        const bool branch_taken_0x2fa840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa840) {
            ctx->pc = 0x2FA844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA840u;
            // 0x2fa844: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA85Cu;
            goto label_2fa85c;
        }
    }
    ctx->pc = 0x2FA848u;
    // 0x2fa848: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2fa848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fa84c: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x2fa84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2fa850: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2fa850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2fa854: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x2fa854u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2fa858: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x2fa858u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_2fa85c:
    // 0x2fa85c: 0x31a4ffff  andi        $a0, $t5, 0xFFFF
    ctx->pc = 0x2fa85cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x2fa860: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x2fa860u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2fa864: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FA864u;
    {
        const bool branch_taken_0x2fa864 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa864) {
            ctx->pc = 0x2FA868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA864u;
            // 0x2fa868: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA86Cu;
            goto label_2fa86c;
        }
    }
    ctx->pc = 0x2FA86Cu;
label_2fa86c:
    // 0x2fa86c: 0x1012  mflo        $v0
    ctx->pc = 0x2fa86cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fa870: 0x1810  mfhi        $v1
    ctx->pc = 0x2fa870u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fa874: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x2fa874u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2fa878: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2fa878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2fa87c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2fa87cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fa880: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x2fa880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fa884: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FA884u;
    {
        const bool branch_taken_0x2fa884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa884) {
            ctx->pc = 0x2FA8A8u;
            goto label_2fa8a8;
        }
    }
    ctx->pc = 0x2FA88Cu;
    // 0x2fa88c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2fa88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2fa890: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x2fa890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2fa894: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA894u;
    {
        const bool branch_taken_0x2fa894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA894u;
        // 0x2fa898: 0x88102b  sltu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa894) {
            ctx->pc = 0x2FA8A8u;
            goto label_2fa8a8;
        }
    }
    ctx->pc = 0x2FA89Cu;
    // 0x2fa89c: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x2fa89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2fa8a0: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2fa8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2fa8a4: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2fa8a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2fa8a8:
    // 0x2fa8a8: 0x130000ac  beqz        $t8, . + 4 + (0xAC << 2)
    ctx->pc = 0x2FA8A8u;
    {
        const bool branch_taken_0x2fa8a8 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA8A8u;
        // 0x2fa8ac: 0x886823  subu        $t5, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa8a8) {
            ctx->pc = 0x2FAB5Cu;
            goto label_2fab5c;
        }
    }
    ctx->pc = 0x2FA8B0u;
    // 0x2fa8b0: 0x18d1006  srlv        $v0, $t5, $t4
    ctx->pc = 0x2fa8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x2fa8b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2fa8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fa8b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2fa8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fa8bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fa8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa8c0: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x2fa8c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x2fa8c4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa8c8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2fa8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2fa8cc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa8d0: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x2fa8d0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x2fa8d4: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x2FA8D4u;
    {
        const bool branch_taken_0x2fa8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA8D4u;
        // 0x2fa8d8: 0x1635824  and         $t3, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa8d4) {
            ctx->pc = 0x2FAB58u;
            goto label_2fab58;
        }
    }
    ctx->pc = 0x2FA8DCu;
    // 0x2fa8dc: 0x0  nop
    ctx->pc = 0x2fa8dcu;
    // NOP
label_2fa8e0:
    // 0x2fa8e0: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x2fa8e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fa8e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2FA8E4u;
    {
        const bool branch_taken_0x2fa8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA8E4u;
        // 0x2fa8e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa8e4) {
            ctx->pc = 0x2FA920u;
            goto label_2fa920;
        }
    }
    ctx->pc = 0x2FA8ECu;
    // 0x2fa8ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2fa8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fa8f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2fa8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fa8f4: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x2fa8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x2fa8f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa8fc: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x2fa8fcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x2fa900: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x2fa900u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x2fa904: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x2fa904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2fa908: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2fa908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2fa90c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa910: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x2fa910u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x2fa914: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x2fa914u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x2fa918: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x2FA918u;
    {
        const bool branch_taken_0x2fa918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA918u;
        // 0x2fa91c: 0xffab0000  sd          $t3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa918) {
            ctx->pc = 0x2FAB5Cu;
            goto label_2fab5c;
        }
    }
    ctx->pc = 0x2FA920u;
label_2fa920:
    // 0x2fa920: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2fa920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fa924: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA924u;
    {
        const bool branch_taken_0x2fa924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA924u;
        // 0x2fa928: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa924) {
            ctx->pc = 0x2FA940u;
            goto label_2fa940;
        }
    }
    ctx->pc = 0x2FA92Cu;
    // 0x2fa92c: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x2fa92cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2fa930: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2fa930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fa934: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA934u;
    {
        const bool branch_taken_0x2fa934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA934u;
        // 0x2fa938: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa934) {
            ctx->pc = 0x2FA954u;
            goto label_2fa954;
        }
    }
    ctx->pc = 0x2FA93Cu;
    // 0x2fa93c: 0x0  nop
    ctx->pc = 0x2fa93cu;
    // NOP
label_2fa940:
    // 0x2fa940: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2fa940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2fa944: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa948: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2fa948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fa94c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2fa94cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2fa950: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2fa950u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2fa954:
    // 0x2fa954: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x2fa954u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x2fa958: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2fa958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2fa95c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2fa95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2fa960: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fa960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fa964: 0x9042a260  lbu         $v0, -0x5DA0($v0)
    ctx->pc = 0x2fa964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294943328)));
    // 0x2fa968: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2fa968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2fa96c: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x2fa96cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2fa970: 0x15800019  bnez        $t4, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FA970u;
    {
        const bool branch_taken_0x2fa970 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA970u;
        // 0x2fa974: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa970) {
            ctx->pc = 0x2FA9D8u;
            goto label_2fa9d8;
        }
    }
    ctx->pc = 0x2FA978u;
    // 0x2fa978: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x2fa978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2fa97c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA97Cu;
    {
        const bool branch_taken_0x2fa97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA97Cu;
        // 0x2fa980: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa97c) {
            ctx->pc = 0x2FA990u;
            goto label_2fa990;
        }
    }
    ctx->pc = 0x2FA984u;
    // 0x2fa984: 0x1a7102b  sltu        $v0, $t5, $a3
    ctx->pc = 0x2fa984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2fa988: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA988u;
    {
        const bool branch_taken_0x2fa988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA988u;
        // 0x2fa98c: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa988) {
            ctx->pc = 0x2FA9A0u;
            goto label_2fa9a0;
        }
    }
    ctx->pc = 0x2FA990u;
label_2fa990:
    // 0x2fa990: 0x1492023  subu        $a0, $t2, $t1
    ctx->pc = 0x2fa990u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2fa994: 0x1a2182b  sltu        $v1, $t5, $v0
    ctx->pc = 0x2fa994u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fa998: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x2fa998u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa99c: 0x835023  subu        $t2, $a0, $v1
    ctx->pc = 0x2fa99cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2fa9a0:
    // 0x2fa9a0: 0x1300006e  beqz        $t8, . + 4 + (0x6E << 2)
    ctx->pc = 0x2FA9A0u;
    {
        const bool branch_taken_0x2fa9a0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA9A0u;
        // 0x2fa9a4: 0xd103c  dsll32      $v0, $t5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa9a0) {
            ctx->pc = 0x2FAB5Cu;
            goto label_2fab5c;
        }
    }
    ctx->pc = 0x2FA9A8u;
    // 0x2fa9a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2fa9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fa9ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2fa9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fa9b0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa9b4: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x2fa9b4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x2fa9b8: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x2fa9b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x2fa9bc: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x2fa9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2fa9c0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2fa9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2fa9c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa9c8: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x2fa9c8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x2fa9cc: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2FA9CCu;
    {
        const bool branch_taken_0x2fa9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA9CCu;
        // 0x2fa9d0: 0x1625825  or          $t3, $t3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa9cc) {
            ctx->pc = 0x2FAB58u;
            goto label_2fab58;
        }
    }
    ctx->pc = 0x2FA9D4u;
    // 0x2fa9d4: 0x0  nop
    ctx->pc = 0x2fa9d4u;
    // NOP
label_2fa9d8:
    // 0x2fa9d8: 0x18a2804  sllv        $a1, $t2, $t4
    ctx->pc = 0x2fa9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x2fa9dc: 0x1892004  sllv        $a0, $t1, $t4
    ctx->pc = 0x2fa9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 12) & 0x1F));
    // 0x2fa9e0: 0x1e71006  srlv        $v0, $a3, $t7
    ctx->pc = 0x2fa9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 15) & 0x1F));
    // 0x2fa9e4: 0x1ed1806  srlv        $v1, $t5, $t7
    ctx->pc = 0x2fa9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x2fa9e8: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x2fa9e8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x2fa9ec: 0x824825  or          $t1, $a0, $v0
    ctx->pc = 0x2fa9ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2fa9f0: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x2fa9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x2fa9f4: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x2fa9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x2fa9f8: 0xa35025  or          $t2, $a1, $v1
    ctx->pc = 0x2fa9f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2fa9fc: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x2fa9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x2faa00: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x2faa00u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2faa04: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x2faa04u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x2faa08: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x2faa08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2faa0c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FAA0Cu;
    {
        const bool branch_taken_0x2faa0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2faa0c) {
            ctx->pc = 0x2FAA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAA0Cu;
            // 0x2faa10: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAA14u;
            goto label_2faa14;
        }
    }
    ctx->pc = 0x2FAA14u;
label_2faa14:
    // 0x2faa14: 0x1012  mflo        $v0
    ctx->pc = 0x2faa14u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2faa18: 0x1810  mfhi        $v1
    ctx->pc = 0x2faa18u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2faa1c: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x2faa1cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faa20: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2faa20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2faa24: 0x1c54018  mult        $t0, $t6, $a1
    ctx->pc = 0x2faa24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2faa28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2faa28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2faa2c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2faa2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2faa30: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2FAA30u;
    {
        const bool branch_taken_0x2faa30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2faa30) {
            ctx->pc = 0x2FAA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAA30u;
            // 0x2faa34: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAA64u;
            goto label_2faa64;
        }
    }
    ctx->pc = 0x2FAA38u;
    // 0x2faa38: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2faa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2faa3c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2faa3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2faa40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FAA40u;
    {
        const bool branch_taken_0x2faa40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAA40u;
        // 0x2faa44: 0x25ceffff  addiu       $t6, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faa40) {
            ctx->pc = 0x2FAA60u;
            goto label_2faa60;
        }
    }
    ctx->pc = 0x2FAA48u;
    // 0x2faa48: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2faa48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2faa4c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FAA4Cu;
    {
        const bool branch_taken_0x2faa4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2faa4c) {
            ctx->pc = 0x2FAA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAA4Cu;
            // 0x2faa50: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAA64u;
            goto label_2faa64;
        }
    }
    ctx->pc = 0x2FAA54u;
    // 0x2faa54: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x2faa54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x2faa58: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2faa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2faa5c: 0x0  nop
    ctx->pc = 0x2faa5cu;
    // NOP
label_2faa60:
    // 0x2faa60: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x2faa60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_2faa64:
    // 0x2faa64: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FAA64u;
    {
        const bool branch_taken_0x2faa64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2faa64) {
            ctx->pc = 0x2FAA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAA64u;
            // 0x2faa68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAA6Cu;
            goto label_2faa6c;
        }
    }
    ctx->pc = 0x2FAA6Cu;
label_2faa6c:
    // 0x2faa6c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x2faa6cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2faa70: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x2faa70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2faa74: 0x1012  mflo        $v0
    ctx->pc = 0x2faa74u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2faa78: 0x1810  mfhi        $v1
    ctx->pc = 0x2faa78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2faa7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2faa7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faa80: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2faa80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2faa84: 0xc54018  mult        $t0, $a2, $a1
    ctx->pc = 0x2faa84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2faa88: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x2faa88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2faa8c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2faa8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2faa90: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2FAA90u;
    {
        const bool branch_taken_0x2faa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2faa90) {
            ctx->pc = 0x2FAA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAA90u;
            // 0x2faa94: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAAC0u;
            goto label_2faac0;
        }
    }
    ctx->pc = 0x2FAA98u;
    // 0x2faa98: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x2faa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2faa9c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2faa9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2faaa0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FAAA0u;
    {
        const bool branch_taken_0x2faaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAAA0u;
        // 0x2faaa4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faaa0) {
            ctx->pc = 0x2FAABCu;
            goto label_2faabc;
        }
    }
    ctx->pc = 0x2FAAA8u;
    // 0x2faaa8: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2faaa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2faaac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FAAACu;
    {
        const bool branch_taken_0x2faaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2faaac) {
            ctx->pc = 0x2FAAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAAACu;
            // 0x2faab0: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAAC0u;
            goto label_2faac0;
        }
    }
    ctx->pc = 0x2FAAB4u;
    // 0x2faab4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2faab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2faab8: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x2faab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_2faabc:
    // 0x2faabc: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x2faabcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_2faac0:
    // 0x2faac0: 0xe1400  sll         $v0, $t6, 16
    ctx->pc = 0x2faac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x2faac4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2faac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2faac8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2faac8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faacc: 0x470019  multu       $v0, $a3
    ctx->pc = 0x2faaccu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2faad0: 0x3010  mfhi        $a2
    ctx->pc = 0x2faad0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2faad4: 0x4012  mflo        $t0
    ctx->pc = 0x2faad4u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x2faad8: 0x146182b  sltu        $v1, $t2, $a2
    ctx->pc = 0x2faad8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2faadc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FAADCu;
    {
        const bool branch_taken_0x2faadc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAADCu;
        // 0x2faae0: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faadc) {
            ctx->pc = 0x2FAAF8u;
            goto label_2faaf8;
        }
    }
    ctx->pc = 0x2FAAE4u;
    // 0x2faae4: 0x14ca0008  bne         $a2, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FAAE4u;
    {
        const bool branch_taken_0x2faae4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        ctx->pc = 0x2FAAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAAE4u;
        // 0x2faae8: 0x1a8102b  sltu        $v0, $t5, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faae4) {
            ctx->pc = 0x2FAB08u;
            goto label_2fab08;
        }
    }
    ctx->pc = 0x2FAAECu;
    // 0x2faaec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FAAECu;
    {
        const bool branch_taken_0x2faaec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAAECu;
        // 0x2faaf0: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faaec) {
            ctx->pc = 0x2FAB08u;
            goto label_2fab08;
        }
    }
    ctx->pc = 0x2FAAF4u;
    // 0x2faaf4: 0x0  nop
    ctx->pc = 0x2faaf4u;
    // NOP
label_2faaf8:
    // 0x2faaf8: 0xc92023  subu        $a0, $a2, $t1
    ctx->pc = 0x2faaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2faafc: 0x102182b  sltu        $v1, $t0, $v0
    ctx->pc = 0x2faafcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fab00: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2fab00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fab04: 0x833023  subu        $a2, $a0, $v1
    ctx->pc = 0x2fab04u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2fab08:
    // 0x2fab08: 0x13000014  beqz        $t8, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FAB08u;
    {
        const bool branch_taken_0x2fab08 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB08u;
        // 0x2fab0c: 0x1a82023  subu        $a0, $t5, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab08) {
            ctx->pc = 0x2FAB5Cu;
            goto label_2fab5c;
        }
    }
    ctx->pc = 0x2FAB10u;
    // 0x2fab10: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x2fab10u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2fab14: 0x1a4182b  sltu        $v1, $t5, $a0
    ctx->pc = 0x2fab14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2fab18: 0xa35023  subu        $t2, $a1, $v1
    ctx->pc = 0x2fab18u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2fab1c: 0x1ea1004  sllv        $v0, $t2, $t7
    ctx->pc = 0x2fab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x2fab20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2fab20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fab24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2fab24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fab28: 0x1842006  srlv        $a0, $a0, $t4
    ctx->pc = 0x2fab28u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 12) & 0x1F));
    // 0x2fab2c: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x2fab2cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x2fab30: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2fab30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2fab34: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2fab34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2fab38: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2fab38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2fab3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fab3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fab40: 0x18a1806  srlv        $v1, $t2, $t4
    ctx->pc = 0x2fab40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x2fab44: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fab44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fab48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2fab48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fab4c: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x2fab4cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x2fab50: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x2fab50u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x2fab54: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x2fab54u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
label_2fab58:
    // 0x2fab58: 0xff0b0000  sd          $t3, 0x0($t8)
    ctx->pc = 0x2fab58u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 11));
label_2fab5c:
    // 0x2fab5c: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x2fab5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fab60: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB60u;
        // 0x2fab64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAB68u;
}
