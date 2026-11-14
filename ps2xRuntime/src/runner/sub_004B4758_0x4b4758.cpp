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

// Function: sub_004B4758
// Address: 0x4b4758 - 0x4b4970
void sub_004B4758_0x4b4758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4758_0x4b4758");
#endif

    switch (ctx->pc) {
        case 0x4b47b4u: goto label_4b47b4;
        case 0x4b4890u: goto label_4b4890;
        case 0x4b48b0u: goto label_4b48b0;
        case 0x4b48d4u: goto label_4b48d4;
        case 0x4b48f8u: goto label_4b48f8;
        case 0x4b493cu: goto label_4b493c;
        default: break;
    }

    ctx->pc = 0x4b4758u;

    // 0x4b4758: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4b4758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x4b475c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4b475cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x4b4760: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4b4760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4b4764: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4b4764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4768: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x4b4768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x4b476c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4b476cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4770: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x4b4770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x4b4774: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x4b4774u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4778: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x4b4778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x4b477c: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x4b477cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4780: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x4b4780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x4b4784: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4b4784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x4b4788: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4b4788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x4b478c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x4b478cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x4b4790: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b4790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b4794: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4b4794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4b4798: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x4B4798u;
    {
        const bool branch_taken_0x4b4798 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4798u;
        // 0x4b479c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4798) {
            ctx->pc = 0x4B47C4u;
            goto label_4b47c4;
        }
    }
    ctx->pc = 0x4B47A0u;
    // 0x4b47a0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b47a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4b47a4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4b47a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x4b47a8: 0x2484f690  addiu       $a0, $a0, -0x970
    ctx->pc = 0x4b47a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964880));
    // 0x4b47ac: 0xc12a936  jal         func_4AA4D8
    ctx->pc = 0x4B47ACu;
    SET_GPR_U32(ctx, 31, 0x4B47B4u);
    ctx->pc = 0x4B47B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B47ACu;
    // 0x4b47b0: 0x34a50800  ori         $a1, $a1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x4B47ACu, 0x4B47B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B47B4u;
label_4b47b4:
    // 0x4b47b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b47b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b47b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4b47b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b47bc: 0x1240005f  beqz        $s2, . + 4 + (0x5F << 2)
    ctx->pc = 0x4B47BCu;
    {
        const bool branch_taken_0x4b47bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B47C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B47BCu;
        // 0x4b47c0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b47bc) {
            ctx->pc = 0x4B493Cu;
            goto label_4b493c;
        }
    }
    ctx->pc = 0x4B47C4u;
label_4b47c4:
    // 0x4b47c4: 0x2f5001b  divu        $zero, $s7, $s5
    ctx->pc = 0x4b47c4u;
    { uint32_t divisor = GPR_U32(ctx, 21); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 23) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 23) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,23); } }
    // 0x4b47c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b47c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b47cc: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x4b47ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x4b47d0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b47d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b47d4: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4B47D4u;
    {
        const bool branch_taken_0x4b47d4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b47d4) {
            ctx->pc = 0x4B47D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B47D4u;
            // 0x4b47d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B47DCu;
            goto label_4b47dc;
        }
    }
    ctx->pc = 0x4B47DCu;
label_4b47dc:
    // 0x4b47dc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x4b47dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b47e0: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x4b47e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b47e4: 0x2012  mflo        $a0
    ctx->pc = 0x4b47e4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x4b47e8: 0x24840007  addiu       $a0, $a0, 0x7
    ctx->pc = 0x4b47e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x4b47ec: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x4b47ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b47f0: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x4b47f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x4b47f4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x4B47F4u;
    {
        const bool branch_taken_0x4b47f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B47F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B47F4u;
        // 0x4b47f8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b47f4) {
            ctx->pc = 0x4B4840u;
            goto label_4b4840;
        }
    }
    ctx->pc = 0x4B47FCu;
    // 0x4b47fc: 0x101c02  srl         $v1, $s0, 16
    ctx->pc = 0x4b47fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x4b4800: 0x3062ff00  andi        $v0, $v1, 0xFF00
    ctx->pc = 0x4b4800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x4b4804: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B4804u;
    {
        const bool branch_taken_0x4b4804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4804u;
        // 0x4b4808: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4804) {
            ctx->pc = 0x4B4828u;
            goto label_4b4828;
        }
    }
    ctx->pc = 0x4B480Cu;
    // 0x4b480c: 0x102602  srl         $a0, $s0, 24
    ctx->pc = 0x4b480cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x4b4810: 0x2442c8c8  addiu       $v0, $v0, -0x3738
    ctx->pc = 0x4b4810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
    // 0x4b4814: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4b4814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4b4818: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x4b4818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b481c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x4b481cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x4b4820: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4B4820u;
    {
        const bool branch_taken_0x4b4820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4820u;
        // 0x4b4824: 0x307300ff  andi        $s3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4820) {
            ctx->pc = 0x4B4874u;
            goto label_4b4874;
        }
    }
    ctx->pc = 0x4B4828u;
label_4b4828:
    // 0x4b4828: 0x2442c8c8  addiu       $v0, $v0, -0x3738
    ctx->pc = 0x4b4828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
    // 0x4b482c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4b482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b4830: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4b4830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b4834: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4b4834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4b4838: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4B4838u;
    {
        const bool branch_taken_0x4b4838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4838u;
        // 0x4b483c: 0x307300ff  andi        $s3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4838) {
            ctx->pc = 0x4B4874u;
            goto label_4b4874;
        }
    }
    ctx->pc = 0x4B4840u;
label_4b4840:
    // 0x4b4840: 0x3082ff00  andi        $v0, $a0, 0xFF00
    ctx->pc = 0x4b4840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x4b4844: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B4844u;
    {
        const bool branch_taken_0x4b4844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4844u;
        // 0x4b4848: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4844) {
            ctx->pc = 0x4B4868u;
            goto label_4b4868;
        }
    }
    ctx->pc = 0x4B484Cu;
    // 0x4b484c: 0x102202  srl         $a0, $s0, 8
    ctx->pc = 0x4b484cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x4b4850: 0x2442c8c8  addiu       $v0, $v0, -0x3738
    ctx->pc = 0x4b4850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
    // 0x4b4854: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4b4854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4b4858: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x4b4858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b485c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x4b485cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x4b4860: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4860u;
    {
        const bool branch_taken_0x4b4860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4860u;
        // 0x4b4864: 0x307300ff  andi        $s3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4860) {
            ctx->pc = 0x4B4874u;
            goto label_4b4874;
        }
    }
    ctx->pc = 0x4B4868u;
label_4b4868:
    // 0x4b4868: 0x2442c8c8  addiu       $v0, $v0, -0x3738
    ctx->pc = 0x4b4868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
    // 0x4b486c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4b486cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4b4870: 0x90530000  lbu         $s3, 0x0($v0)
    ctx->pc = 0x4b4870u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4b4874:
    // 0x4b4874: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B4874u;
    {
        const bool branch_taken_0x4b4874 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4874u;
        // 0x4b4878: 0x1080c2  srl         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4874) {
            ctx->pc = 0x4B489Cu;
            goto label_4b489c;
        }
    }
    ctx->pc = 0x4B487Cu;
    // 0x4b487c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b487cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4b4880: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4b4880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x4b4884: 0x2484f668  addiu       $a0, $a0, -0x998
    ctx->pc = 0x4b4884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964840));
    // 0x4b4888: 0xc12a936  jal         func_4AA4D8
    ctx->pc = 0x4B4888u;
    SET_GPR_U32(ctx, 31, 0x4B4890u);
    ctx->pc = 0x4B488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4888u;
    // 0x4b488c: 0x34a50800  ori         $a1, $a1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x4B4888u, 0x4B4890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4890u;
label_4b4890:
    // 0x4b4890: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b4890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4894: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x4B4894u;
    {
        const bool branch_taken_0x4b4894 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4894u;
        // 0x4b4898: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4894) {
            ctx->pc = 0x4B4928u;
            goto label_4b4928;
        }
    }
    ctx->pc = 0x4B489Cu;
label_4b489c:
    // 0x4b489c: 0x57c00008  bnel        $fp, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B489Cu;
    {
        const bool branch_taken_0x4b489c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b489c) {
            ctx->pc = 0x4B48A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B489Cu;
            // 0x4b48a0: 0xa2330008  sb          $s3, 0x8($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B48C0u;
            goto label_4b48c0;
        }
    }
    ctx->pc = 0x4B48A4u;
    // 0x4b48a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b48a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b48a8: 0xc127ca4  jal         func_49F290
    ctx->pc = 0x4B48A8u;
    SET_GPR_U32(ctx, 31, 0x4B48B0u);
    ctx->pc = 0x4B48ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B48A8u;
    // 0x4b48ac: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4B48A8u, 0x4B48B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B48B0u;
label_4b48b0:
    // 0x4b48b0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4b48b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b48b4: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x4B48B4u;
    {
        const bool branch_taken_0x4b48b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B48B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B48B4u;
        // 0x4b48b8: 0x36d60002  ori         $s6, $s6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b48b4) {
            ctx->pc = 0x4B48E0u;
            goto label_4b48e0;
        }
    }
    ctx->pc = 0x4B48BCu;
    // 0x4b48bc: 0xa2330008  sb          $s3, 0x8($s1)
    ctx->pc = 0x4b48bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 19));
label_4b48c0:
    // 0x4b48c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b48c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b48c4: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x4b48c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x4b48c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b48c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b48cc: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4B48CCu;
    SET_GPR_U32(ctx, 31, 0x4B48D4u);
    ctx->pc = 0x4B48D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B48CCu;
    // 0x4b48d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4B48CCu, 0x4B48D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B48D4u;
label_4b48d4:
    // 0x4b48d4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x4b48d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x4b48d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B48D8u;
    {
        const bool branch_taken_0x4b48d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B48DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B48D8u;
        // 0x4b48dc: 0xa2360009  sb          $s6, 0x9($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b48d8) {
            ctx->pc = 0x4B48FCu;
            goto label_4b48fc;
        }
    }
    ctx->pc = 0x4B48E0u;
label_4b48e0:
    // 0x4b48e0: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x4b48e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x4b48e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B48E4u;
    {
        const bool branch_taken_0x4b48e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B48E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B48E4u;
        // 0x4b48e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b48e4) {
            ctx->pc = 0x4B48F8u;
            goto label_4b48f8;
        }
    }
    ctx->pc = 0x4B48ECu;
    // 0x4b48ec: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b48ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4b48f0: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x4B48F0u;
    SET_GPR_U32(ctx, 31, 0x4B48F8u);
    ctx->pc = 0x4B48F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B48F0u;
    // 0x4b48f4: 0x2484f668  addiu       $a0, $a0, -0x998 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4B48F0u, 0x4B48F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B48F8u;
label_4b48f8:
    // 0x4b48f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b48f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b48fc:
    // 0x4b48fc: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x4B48FCu;
    {
        const bool branch_taken_0x4b48fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B48FCu;
        // 0x4b4900: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b48fc) {
            ctx->pc = 0x4B492Cu;
            goto label_4b492c;
        }
    }
    ctx->pc = 0x4B4904u;
    // 0x4b4904: 0xae550014  sw          $s5, 0x14($s2)
    ctx->pc = 0x4b4904u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 21));
    // 0x4b4908: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x4b4908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x4b490c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4b490cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b4910: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4b4910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4b4914: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4b4914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4918: 0xa2420009  sb          $v0, 0x9($s2)
    ctx->pc = 0x4b4918u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x4b491c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x4b491cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x4b4920: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4B4920u;
    {
        const bool branch_taken_0x4b4920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4920u;
        // 0x4b4924: 0xae570010  sw          $s7, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4920) {
            ctx->pc = 0x4B493Cu;
            goto label_4b493c;
        }
    }
    ctx->pc = 0x4B4928u;
label_4b4928:
    // 0x4b4928: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b4928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4b492c:
    // 0x4b492c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4b492cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4930: 0x2484f690  addiu       $a0, $a0, -0x970
    ctx->pc = 0x4b4930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964880));
    // 0x4b4934: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x4B4934u;
    SET_GPR_U32(ctx, 31, 0x4B493Cu);
    ctx->pc = 0x4B4938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4934u;
    // 0x4b4938: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4B4934u, 0x4B493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B493Cu;
label_4b493c:
    // 0x4b493c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4b493cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4940: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4b4940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4b4944: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4b4944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4b4948: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4b4948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4b494c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4b494cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4b4950: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4b4950u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b4954: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4b4954u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b4958: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4b4958u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b495c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x4b495cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b4960: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x4b4960u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b4964: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b4964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b4968: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4968u;
        // 0x4b496c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4970u;
}
