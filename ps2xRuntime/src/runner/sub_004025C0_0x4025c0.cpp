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

// Function: sub_004025C0
// Address: 0x4025c0 - 0x402880
void sub_004025C0_0x4025c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004025C0_0x4025c0");
#endif

    switch (ctx->pc) {
        case 0x40260cu: goto label_40260c;
        case 0x402628u: goto label_402628;
        case 0x402640u: goto label_402640;
        case 0x402660u: goto label_402660;
        case 0x402694u: goto label_402694;
        case 0x4026e8u: goto label_4026e8;
        case 0x402700u: goto label_402700;
        case 0x402740u: goto label_402740;
        case 0x402758u: goto label_402758;
        case 0x402798u: goto label_402798;
        case 0x402800u: goto label_402800;
        case 0x402814u: goto label_402814;
        case 0x402828u: goto label_402828;
        case 0x402848u: goto label_402848;
        default: break;
    }

    ctx->pc = 0x4025c0u;

    // 0x4025c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4025c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4025c4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x4025c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x4025c8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4025c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x4025cc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4025ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4025d0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4025d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4025d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4025d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4025d8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x4025d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x4025dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4025dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4025e0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4025e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x4025e4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x4025e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4025e8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4025e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x4025ec: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4025ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x4025f0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x4025f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x4025f4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x4025f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x4025f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4025f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4025fc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4025FCu;
    {
        const bool branch_taken_0x4025fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x402600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4025FCu;
        // 0x402600: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4025fc) {
            ctx->pc = 0x402618u;
            goto label_402618;
        }
    }
    ctx->pc = 0x402604u;
    // 0x402604: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x402604u;
    SET_GPR_U32(ctx, 31, 0x40260Cu);
    ctx->pc = 0x402608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402604u;
    // 0x402608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x402604u, 0x40260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40260Cu;
label_40260c:
    // 0x40260c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x40260cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402610: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x402610u;
    {
        const bool branch_taken_0x402610 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x402614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402610u;
        // 0x402614: 0x26650002  addiu       $a1, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402610) {
            ctx->pc = 0x402630u;
            goto label_402630;
        }
    }
    ctx->pc = 0x402618u;
label_402618:
    // 0x402618: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x402618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x40261c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x40261cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402620: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x402620u;
    SET_GPR_U32(ctx, 31, 0x402628u);
    ctx->pc = 0x402624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402620u;
    // 0x402624: 0x24a50300  addiu       $a1, $a1, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x402620u, 0x402628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402628u;
label_402628:
    // 0x402628: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x402628u;
    {
        const bool branch_taken_0x402628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402628u;
        // 0x40262c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402628) {
            ctx->pc = 0x402850u;
            goto label_402850;
        }
    }
    ctx->pc = 0x402630u;
label_402630:
    // 0x402630: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x402630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402634: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x402634u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x402638: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x402638u;
    SET_GPR_U32(ctx, 31, 0x402640u);
    ctx->pc = 0x40263Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402638u;
    // 0x40263c: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x402638u, 0x402640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402640u;
label_402640:
    // 0x402640: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x402640u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x402644: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x402644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402648: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x402648u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x40264c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x40264Cu;
    {
        const bool branch_taken_0x40264c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x402650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40264Cu;
        // 0x402650: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40264c) {
            ctx->pc = 0x4026BCu;
            goto label_4026bc;
        }
    }
    ctx->pc = 0x402654u;
    // 0x402654: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x402654u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
    // 0x402658: 0x24160020  addiu       $s6, $zero, 0x20
    ctx->pc = 0x402658u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x40265c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x40265cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_402660:
    // 0x402660: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x402660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x402664: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x402664u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x402668: 0x28430020  slti        $v1, $v0, 0x20
    ctx->pc = 0x402668u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x40266c: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x40266Cu;
    {
        const bool branch_taken_0x40266c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x40266c) {
            ctx->pc = 0x402670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40266Cu;
            // 0x402670: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40268Cu;
            goto label_40268c;
        }
    }
    ctx->pc = 0x402674u;
    // 0x402674: 0x2842007f  slti        $v0, $v0, 0x7F
    ctx->pc = 0x402674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x402678: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x402678u;
    {
        const bool branch_taken_0x402678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x402678) {
            ctx->pc = 0x40267Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x402678u;
            // 0x40267c: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4026A0u;
            goto label_4026a0;
        }
    }
    ctx->pc = 0x402680u;
    // 0x402680: 0x2c8200a1  sltiu       $v0, $a0, 0xA1
    ctx->pc = 0x402680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)161) ? 1 : 0);
    // 0x402684: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x402684u;
    {
        const bool branch_taken_0x402684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x402688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402684u;
        // 0x402688: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402684) {
            ctx->pc = 0x40269Cu;
            goto label_40269c;
        }
    }
    ctx->pc = 0x40268Cu;
label_40268c:
    // 0x40268c: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x40268Cu;
    SET_GPR_U32(ctx, 31, 0x402694u);
    ctx->pc = 0x402690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40268Cu;
    // 0x402690: 0x26e50318  addiu       $a1, $s7, 0x318 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x40268Cu, 0x402694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402694u;
label_402694:
    // 0x402694: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x402694u;
    {
        const bool branch_taken_0x402694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402694u;
        // 0x402698: 0xa2560000  sb          $s6, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402694) {
            ctx->pc = 0x4026A4u;
            goto label_4026a4;
        }
    }
    ctx->pc = 0x40269Cu;
label_40269c:
    // 0x40269c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x40269cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_4026a0:
    // 0x4026a0: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x4026a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_4026a4:
    // 0x4026a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4026a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4026a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4026a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4026ac: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x4026acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4026b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4026b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4026b4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x4026B4u;
    {
        const bool branch_taken_0x4026b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4026B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4026B4u;
        // 0x4026b8: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4026b4) {
            ctx->pc = 0x402660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_402660;
        }
    }
    ctx->pc = 0x4026BCu;
label_4026bc:
    // 0x4026bc: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x4026bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4026c0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4026c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4026c4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4026c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4026c8: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x4026c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4026cc: 0x8232ffff  lb          $s2, -0x1($s1)
    ctx->pc = 0x4026ccu;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967295)));
    // 0x4026d0: 0x16430012  bne         $s2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x4026D0u;
    {
        const bool branch_taken_0x4026d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x4026D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4026D0u;
        // 0x4026d4: 0x2630ffff  addiu       $s0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4026d0) {
            ctx->pc = 0x40271Cu;
            goto label_40271c;
        }
    }
    ctx->pc = 0x4026D8u;
    // 0x4026d8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4026d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4026dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4026dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4026e0: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x4026E0u;
    SET_GPR_U32(ctx, 31, 0x4026E8u);
    ctx->pc = 0x4026E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4026E0u;
    // 0x4026e4: 0x24a50338  addiu       $a1, $a1, 0x338 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x4026E0u, 0x4026E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4026E8u;
label_4026e8:
    // 0x4026e8: 0x8222ffff  lb          $v0, -0x1($s1)
    ctx->pc = 0x4026e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967295)));
    // 0x4026ec: 0x5452000c  bnel        $v0, $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x4026ECu;
    {
        const bool branch_taken_0x4026ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x4026ec) {
            ctx->pc = 0x4026F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4026ECu;
            // 0x4026f0: 0x8eb00000  lw          $s0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x402720u;
            goto label_402720;
        }
    }
    ctx->pc = 0x4026F4u;
    // 0x4026f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4026f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4026f8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4026f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4026fc: 0x0  nop
    ctx->pc = 0x4026fcu;
    // NOP
label_402700:
    // 0x402700: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x402700u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x402704: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x402704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x402708: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x402708u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40270c: 0x0  nop
    ctx->pc = 0x40270cu;
    // NOP
    // 0x402710: 0x0  nop
    ctx->pc = 0x402710u;
    // NOP
    // 0x402714: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x402714u;
    {
        const bool branch_taken_0x402714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x402718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402714u;
        // 0x402718: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402714) {
            ctx->pc = 0x402700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_402700;
        }
    }
    ctx->pc = 0x40271Cu;
label_40271c:
    // 0x40271c: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x40271cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_402720:
    // 0x402720: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x402720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x402724: 0x82110000  lb          $s1, 0x0($s0)
    ctx->pc = 0x402724u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x402728: 0x56220013  bnel        $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x402728u;
    {
        const bool branch_taken_0x402728 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x402728) {
            ctx->pc = 0x40272Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x402728u;
            // 0x40272c: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x402778u;
            goto label_402778;
        }
    }
    ctx->pc = 0x402730u;
    // 0x402730: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x402730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x402734: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x402734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402738: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x402738u;
    SET_GPR_U32(ctx, 31, 0x402740u);
    ctx->pc = 0x40273Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402738u;
    // 0x40273c: 0x24a50360  addiu       $a1, $a1, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x402738u, 0x402740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402740u;
label_402740:
    // 0x402740: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x402740u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x402744: 0x5451000d  bnel        $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x402744u;
    {
        const bool branch_taken_0x402744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x402744) {
            ctx->pc = 0x402748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x402744u;
            // 0x402748: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40277Cu;
            goto label_40277c;
        }
    }
    ctx->pc = 0x40274Cu;
    // 0x40274c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x40274cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x402750: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x402750u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402754: 0x0  nop
    ctx->pc = 0x402754u;
    // NOP
label_402758:
    // 0x402758: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x402758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x40275c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x40275cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x402760: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x402760u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x402764: 0x0  nop
    ctx->pc = 0x402764u;
    // NOP
    // 0x402768: 0x0  nop
    ctx->pc = 0x402768u;
    // NOP
    // 0x40276c: 0x1044fffa  beq         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x40276Cu;
    {
        const bool branch_taken_0x40276c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x402770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40276Cu;
        // 0x402770: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40276c) {
            ctx->pc = 0x402758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_402758;
        }
    }
    ctx->pc = 0x402774u;
    // 0x402774: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x402774u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_402778:
    // 0x402778: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x402778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40277c:
    // 0x40277c: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x40277cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x402780: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x402780u;
    {
        const bool branch_taken_0x402780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x402784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402780u;
        // 0x402784: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402780) {
            ctx->pc = 0x4027E8u;
            goto label_4027e8;
        }
    }
    ctx->pc = 0x402788u;
    // 0x402788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x402788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40278c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x40278cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x402790: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x402790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402794: 0x0  nop
    ctx->pc = 0x402794u;
    // NOP
label_402798:
    // 0x402798: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x402798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x40279c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x40279cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x4027a0: 0x5447000a  bnel        $v0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x4027A0u;
    {
        const bool branch_taken_0x4027a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x4027a0) {
            ctx->pc = 0x4027A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4027A0u;
            // 0x4027a4: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4027CCu;
            goto label_4027cc;
        }
    }
    ctx->pc = 0x4027A8u;
    // 0x4027a8: 0x54a00006  bnel        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4027A8u;
    {
        const bool branch_taken_0x4027a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4027a8) {
            ctx->pc = 0x4027ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4027A8u;
            // 0x4027ac: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4027C4u;
            goto label_4027c4;
        }
    }
    ctx->pc = 0x4027B0u;
    // 0x4027b0: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x4027b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4027b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4027b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4027b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4027b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4027bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4027BCu;
    {
        const bool branch_taken_0x4027bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4027C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4027BCu;
        // 0x4027c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4027bc) {
            ctx->pc = 0x4027D8u;
            goto label_4027d8;
        }
    }
    ctx->pc = 0x4027C4u;
label_4027c4:
    // 0x4027c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4027C4u;
    {
        const bool branch_taken_0x4027c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4027C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4027C4u;
        // 0x4027c8: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4027c4) {
            ctx->pc = 0x4027D8u;
            goto label_4027d8;
        }
    }
    ctx->pc = 0x4027CCu;
label_4027cc:
    // 0x4027cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4027ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x4027d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4027d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4027d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4027d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4027d8:
    // 0x4027d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4027d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4027dc: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4027dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4027e0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4027E0u;
    {
        const bool branch_taken_0x4027e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4027E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4027E0u;
        // 0x4027e4: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4027e0) {
            ctx->pc = 0x402798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_402798;
        }
    }
    ctx->pc = 0x4027E8u;
label_4027e8:
    // 0x4027e8: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x4027E8u;
    {
        const bool branch_taken_0x4027e8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x4027ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4027E8u;
        // 0x4027ec: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4027e8) {
            ctx->pc = 0x402800u;
            goto label_402800;
        }
    }
    ctx->pc = 0x4027F0u;
    // 0x4027f0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4027f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4027f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4027f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4027f8: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x4027F8u;
    SET_GPR_U32(ctx, 31, 0x402800u);
    ctx->pc = 0x4027FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4027F8u;
    // 0x4027fc: 0x24a50388  addiu       $a1, $a1, 0x388 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x4027F8u, 0x402800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402800u;
label_402800:
    // 0x402800: 0x1660000a  bnez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x402800u;
    {
        const bool branch_taken_0x402800 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x402804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402800u;
        // 0x402804: 0x2e620050  sltiu       $v0, $s3, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x402800) {
            ctx->pc = 0x40282Cu;
            goto label_40282c;
        }
    }
    ctx->pc = 0x402808u;
    // 0x402808: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x402808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x40280c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x40280Cu;
    SET_GPR_U32(ctx, 31, 0x402814u);
    ctx->pc = 0x402810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40280Cu;
    // 0x402810: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x40280Cu, 0x402814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402814u;
label_402814:
    // 0x402814: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x402814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x402818: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x402818u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x40281c: 0x24a503b8  addiu       $a1, $a1, 0x3B8
    ctx->pc = 0x40281cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 952));
    // 0x402820: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x402820u;
    SET_GPR_U32(ctx, 31, 0x402828u);
    ctx->pc = 0x402824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402820u;
    // 0x402824: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x402820u, 0x402828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402828u;
label_402828:
    // 0x402828: 0x2e620050  sltiu       $v0, $s3, 0x50
    ctx->pc = 0x402828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
label_40282c:
    // 0x40282c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x40282Cu;
    {
        const bool branch_taken_0x40282c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x402830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40282Cu;
        // 0x402830: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40282c) {
            ctx->pc = 0x402850u;
            goto label_402850;
        }
    }
    ctx->pc = 0x402834u;
    // 0x402834: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x402834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x402838: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x402838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40283c: 0x24a503d0  addiu       $a1, $a1, 0x3D0
    ctx->pc = 0x40283cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 976));
    // 0x402840: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x402840u;
    SET_GPR_U32(ctx, 31, 0x402848u);
    ctx->pc = 0x402844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402840u;
    // 0x402844: 0x2413004f  addiu       $s3, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x402840u, 0x402848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402848u;
label_402848:
    // 0x402848: 0xaea0013c  sw          $zero, 0x13C($s5)
    ctx->pc = 0x402848u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 316), GPR_U32(ctx, 0));
    // 0x40284c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x40284cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_402850:
    // 0x402850: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x402850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x402854: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x402854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x402858: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x402858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x40285c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x40285cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x402860: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x402860u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x402864: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x402864u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x402868: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x402868u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40286c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x40286cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x402870: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x402870u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x402874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x402874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x402878: 0x3e00008  jr          $ra
    ctx->pc = 0x402878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402878u;
        // 0x40287c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x402878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x402880u;
}
