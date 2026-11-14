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

// Function: sub_004A5628
// Address: 0x4a5628 - 0x4a5758
void sub_004A5628_0x4a5628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5628_0x4a5628");
#endif

    switch (ctx->pc) {
        case 0x4a5688u: goto label_4a5688;
        case 0x4a56b8u: goto label_4a56b8;
        case 0x4a56ecu: goto label_4a56ec;
        default: break;
    }

    ctx->pc = 0x4a5628u;

    // 0x4a5628: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4a5628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x4a562c: 0x24c2003f  addiu       $v0, $a2, 0x3F
    ctx->pc = 0x4a562cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x4a5630: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4a5630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x4a5634: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x4a5634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4a5638: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4a5638u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a563c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x4a563cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x4a5640: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4a5640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x4a5644: 0x23182  srl         $a2, $v0, 6
    ctx->pc = 0x4a5644u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x4a5648: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x4a5648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x4a564c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a564cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5650: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x4a5650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x4a5654: 0xc3f018  mult        $fp, $a2, $v1
    ctx->pc = 0x4a5654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x4a5658: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4a5658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x4a565c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4a565cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5660: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4a5660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4a5664: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x4a5664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x4a5668: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x4a5668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x4a566c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a566cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a5670: 0x10c0002b  beqz        $a2, . + 4 + (0x2B << 2)
    ctx->pc = 0x4A5670u;
    {
        const bool branch_taken_0x4a5670 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5670u;
        // 0x4a5674: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5670) {
            ctx->pc = 0x4A5720u;
            goto label_4a5720;
        }
    }
    ctx->pc = 0x4A5678u;
    // 0x4a5678: 0x27b60004  addiu       $s6, $sp, 0x4
    ctx->pc = 0x4a5678u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4a567c: 0x24170007  addiu       $s7, $zero, 0x7
    ctx->pc = 0x4a567cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4a5680: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4a5680u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a5684: 0x0  nop
    ctx->pc = 0x4a5684u;
    // NOP
label_4a5688:
    // 0x4a5688: 0x24d5ffff  addiu       $s5, $a2, -0x1
    ctx->pc = 0x4a5688u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4a568c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4a568cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a5690: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x4a5690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x4a5694: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a5694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4a5698: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x4a5698u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x4a569c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a569cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a56a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a56a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a56a4: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4a56a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a56a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4a56a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a56ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a56acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a56b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a56b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4a56b4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4a56b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4a56b8:
    // 0x4a56b8: 0x1a800008  blez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A56B8u;
    {
        const bool branch_taken_0x4a56b8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x4A56BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A56B8u;
        // 0x4a56bc: 0x118902  srl         $s1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a56b8) {
            ctx->pc = 0x4A56DCu;
            goto label_4a56dc;
        }
    }
    ctx->pc = 0x4A56C0u;
    // 0x4a56c0: 0x2a62003f  slti        $v0, $s3, 0x3F
    ctx->pc = 0x4a56c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x4a56c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A56C4u;
    {
        const bool branch_taken_0x4a56c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A56C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A56C4u;
        // 0x4a56c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a56c4) {
            ctx->pc = 0x4A56E0u;
            goto label_4a56e0;
        }
    }
    ctx->pc = 0x4A56CCu;
    // 0x4a56cc: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x4a56ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a56d0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x4a56d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x4a56d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A56D4u;
    {
        const bool branch_taken_0x4a56d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A56D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A56D4u;
        // 0x4a56d8: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a56d4) {
            ctx->pc = 0x4A56E0u;
            goto label_4a56e0;
        }
    }
    ctx->pc = 0x4A56DCu;
label_4a56dc:
    // 0x4a56dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4a56dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a56e0:
    // 0x4a56e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4a56e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a56e4: 0xc129544  jal         func_4A5510
    ctx->pc = 0x4A56E4u;
    SET_GPR_U32(ctx, 31, 0x4A56ECu);
    ctx->pc = 0x4A56E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A56E4u;
    // 0x4a56e8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5510u, 0x4A56E4u, 0x4A56ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A56ECu;
label_4a56ec:
    // 0x4a56ec: 0x21700  sll         $v0, $v0, 28
    ctx->pc = 0x4a56ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x4a56f0: 0x32630007  andi        $v1, $s3, 0x7
    ctx->pc = 0x4a56f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x4a56f4: 0x14770004  bne         $v1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A56F4u;
    {
        const bool branch_taken_0x4a56f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x4A56F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A56F4u;
        // 0x4a56f8: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a56f4) {
            ctx->pc = 0x4A5708u;
            goto label_4a5708;
        }
    }
    ctx->pc = 0x4A56FCu;
    // 0x4a56fc: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x4a56fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x4a5700: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4a5700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4a5704: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a5704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a5708:
    // 0x4a5708: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4a5708u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4a570c: 0x2a620040  slti        $v0, $s3, 0x40
    ctx->pc = 0x4a570cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x4a5710: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x4A5710u;
    {
        const bool branch_taken_0x4a5710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5710u;
        // 0x4a5714: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5710) {
            ctx->pc = 0x4A56B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a56b8;
        }
    }
    ctx->pc = 0x4A5718u;
    // 0x4a5718: 0x54c0ffdb  bnel        $a2, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x4A5718u;
    {
        const bool branch_taken_0x4a5718 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5718) {
            ctx->pc = 0x4A571Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5718u;
            // 0x4a571c: 0x86420000  lh          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5688;
        }
    }
    ctx->pc = 0x4A5720u;
label_4a5720:
    // 0x4a5720: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x4a5720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5724: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4a5724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a5728: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4a5728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a572c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4a572cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a5730: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4a5730u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a5734: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4a5734u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a5738: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4a5738u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a573c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4a573cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a5740: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x4a5740u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a5744: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x4a5744u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a5748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a5748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a574c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A574Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A574Cu;
        // 0x4a5750: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A574Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5754u;
    // 0x4a5754: 0x0  nop
    ctx->pc = 0x4a5754u;
    // NOP
    ctx->pc = 0x4a5758u;
}
