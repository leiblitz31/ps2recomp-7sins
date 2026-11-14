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

// Function: sub_003285F8
// Address: 0x3285f8 - 0x328a00
void sub_003285F8_0x3285f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003285F8_0x3285f8");
#endif

    switch (ctx->pc) {
        case 0x328654u: goto label_328654;
        case 0x328668u: goto label_328668;
        case 0x3286a4u: goto label_3286a4;
        case 0x3286c0u: goto label_3286c0;
        case 0x328700u: goto label_328700;
        case 0x328728u: goto label_328728;
        case 0x328878u: goto label_328878;
        default: break;
    }

    ctx->pc = 0x3285f8u;

    // 0x3285f8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3285f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3285fc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3285fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x328600: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x328600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x328604: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x328604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x328608: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x328608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x32860c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32860cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x328610: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x328610u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328614: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x328614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x328618: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x328618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x32861c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x32861cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x328620: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x328620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x328624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x328628: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x328628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x32862c: 0x8e96004c  lw          $s6, 0x4C($s4)
    ctx->pc = 0x32862cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x328630: 0x8e900038  lw          $s0, 0x38($s4)
    ctx->pc = 0x328630u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x328634: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x328634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x328638: 0x2d18818  mult        $s1, $s6, $s1
    ctx->pc = 0x328638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x32863c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x32863cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x328640: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x328640u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x328644: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x328644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x328648: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x328648u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32864c: 0xc0e410c  jal         func_390430
    ctx->pc = 0x32864Cu;
    SET_GPR_U32(ctx, 31, 0x328654u);
    ctx->pc = 0x328650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32864Cu;
    // 0x328650: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390430u, 0x32864Cu, 0x328654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328654u;
label_328654:
    // 0x328654: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x328654u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x328658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32865c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32865cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328660: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x328660u;
    SET_GPR_U32(ctx, 31, 0x328668u);
    ctx->pc = 0x328664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328660u;
    // 0x328664: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x328660u, 0x328668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328668u;
label_328668:
    // 0x328668: 0x26b30010  addiu       $s3, $s5, 0x10
    ctx->pc = 0x328668u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x32866c: 0x8f84bd50  lw          $a0, -0x42B0($gp)
    ctx->pc = 0x32866cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
    // 0x328670: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x328670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x328674: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x328674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x328678: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x328678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x32867c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x32867cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x328680: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x328680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x328684: 0x9082002d  lbu         $v0, 0x2D($a0)
    ctx->pc = 0x328684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
    // 0x328688: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x328688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x32868c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x32868cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x328690: 0xa6b60004  sh          $s6, 0x4($s5)
    ctx->pc = 0x328690u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 22));
    // 0x328694: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x328694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x328698: 0x2718821  addu        $s1, $s3, $s1
    ctx->pc = 0x328698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x32869c: 0xc0e3fee  jal         func_38FFB8
    ctx->pc = 0x32869Cu;
    SET_GPR_U32(ctx, 31, 0x3286A4u);
    ctx->pc = 0x3286A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32869Cu;
    // 0x3286a0: 0xaea50000  sw          $a1, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FFB8u, 0x32869Cu, 0x3286A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3286A4u;
label_3286a4:
    // 0x3286a4: 0xa6a20006  sh          $v0, 0x6($s5)
    ctx->pc = 0x3286a4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3286a8: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x3286a8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3286ac: 0xaeb00008  sw          $s0, 0x8($s5)
    ctx->pc = 0x3286acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 16));
    // 0x3286b0: 0x12c000c5  beqz        $s6, . + 4 + (0xC5 << 2)
    ctx->pc = 0x3286B0u;
    {
        const bool branch_taken_0x3286b0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3286B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286B0u;
        // 0x3286b4: 0xaea0000c  sw          $zero, 0xC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3286b0) {
            ctx->pc = 0x3289C8u;
            goto label_3289c8;
        }
    }
    ctx->pc = 0x3286B8u;
    // 0x3286b8: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x3286b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x3286bc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3286bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3286c0:
    // 0x3286c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3286c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3286c4: 0x191080  sll         $v0, $t9, 2
    ctx->pc = 0x3286c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x3286c8: 0x8e850038  lw          $a1, 0x38($s4)
    ctx->pc = 0x3286c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x3286cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3286ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3286d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3286d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3286d4: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x3286d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x3286d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3286d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3286dc: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x3286dcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3286e0: 0x267e000c  addiu       $fp, $s3, 0xC
    ctx->pc = 0x3286e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x3286e4: 0x27370001  addiu       $s7, $t9, 0x1
    ctx->pc = 0x3286e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x3286e8: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x3286E8u;
    {
        const bool branch_taken_0x3286e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3286ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286E8u;
        // 0x3286ec: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3286e8) {
            ctx->pc = 0x328794u;
            goto label_328794;
        }
    }
    ctx->pc = 0x3286F0u;
    // 0x3286f0: 0x8e8e0058  lw          $t6, 0x58($s4)
    ctx->pc = 0x3286f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x3286f4: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x3286f4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3286f8: 0x240d0044  addiu       $t5, $zero, 0x44
    ctx->pc = 0x3286f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3286fc: 0x8d1018  mult        $v0, $a0, $t5
    ctx->pc = 0x3286fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_328700:
    // 0x328700: 0x4e1821  addu        $v1, $v0, $t6
    ctx->pc = 0x328700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x328704: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x328704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x328708: 0x1459001e  bne         $v0, $t9, . + 4 + (0x1E << 2)
    ctx->pc = 0x328708u;
    {
        const bool branch_taken_0x328708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 25));
        ctx->pc = 0x32870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328708u;
        // 0x32870c: 0x248b0001  addiu       $t3, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328708) {
            ctx->pc = 0x328784u;
            goto label_328784;
        }
    }
    ctx->pc = 0x328710u;
    // 0x328710: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x328710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328714: 0x26280020  addiu       $t0, $s1, 0x20
    ctx->pc = 0x328714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x328718: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x328718u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32871c: 0x25ea0010  addiu       $t2, $t7, 0x10
    ctx->pc = 0x32871cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x328720: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x328720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328724: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x328724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_328728:
    // 0x328728: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x328728u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32872c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x32872cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x328730: 0xe9202b  sltu        $a0, $a3, $t1
    ctx->pc = 0x328730u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x328734: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x328734u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x328738: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x328738u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x32873c: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x32873cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x328740: 0x94c30008  lhu         $v1, 0x8($a2)
    ctx->pc = 0x328740u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x328744: 0xa4a30004  sh          $v1, 0x4($a1)
    ctx->pc = 0x328744u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x328748: 0x94c2000c  lhu         $v0, 0xC($a2)
    ctx->pc = 0x328748u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x32874c: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x32874cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x328750: 0x94c30010  lhu         $v1, 0x10($a2)
    ctx->pc = 0x328750u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x328754: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x328754u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x328758: 0x94c20014  lhu         $v0, 0x14($a2)
    ctx->pc = 0x328758u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x32875c: 0xa4a2000a  sh          $v0, 0xA($a1)
    ctx->pc = 0x32875cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x328760: 0x94c30018  lhu         $v1, 0x18($a2)
    ctx->pc = 0x328760u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x328764: 0xa4a3000c  sh          $v1, 0xC($a1)
    ctx->pc = 0x328764u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x328768: 0x94c2001c  lhu         $v0, 0x1C($a2)
    ctx->pc = 0x328768u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x32876c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x32876cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x328770: 0xa4a2000e  sh          $v0, 0xE($a1)
    ctx->pc = 0x328770u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x328774: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x328774u;
    {
        const bool branch_taken_0x328774 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x328778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328774u;
        // 0x328778: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328774) {
            ctx->pc = 0x328728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328728;
        }
    }
    ctx->pc = 0x32877Cu;
    // 0x32877c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x32877cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328780: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x328780u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_328784:
    // 0x328784: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x328784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328788: 0x8c102b  sltu        $v0, $a0, $t4
    ctx->pc = 0x328788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x32878c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x32878Cu;
    {
        const bool branch_taken_0x32878c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32878Cu;
        // 0x328790: 0x8d1018  mult        $v0, $a0, $t5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32878c) {
            ctx->pc = 0x328700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328700;
        }
    }
    ctx->pc = 0x328794u;
label_328794:
    // 0x328794: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x328794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x328798: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x328798u;
    {
        const bool branch_taken_0x328798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328798u;
        // 0x32879c: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328798) {
            ctx->pc = 0x3289B4u;
            goto label_3289b4;
        }
    }
    ctx->pc = 0x3287A0u;
    // 0x3287a0: 0x8e85005c  lw          $a1, 0x5C($s4)
    ctx->pc = 0x3287a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x3287a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3287a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3287a8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x3287a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x3287ac: 0x2624001e  addiu       $a0, $s1, 0x1E
    ctx->pc = 0x3287acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 30));
    // 0x3287b0: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3287B0u;
    {
        const bool branch_taken_0x3287b0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3287B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287B0u;
        // 0x3287b4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3287b0) {
            ctx->pc = 0x3287C0u;
            goto label_3287c0;
        }
    }
    ctx->pc = 0x3287B8u;
    // 0x3287b8: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x3287B8u;
    {
        const bool branch_taken_0x3287b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3287b8) {
            ctx->pc = 0x3287BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3287B8u;
            // 0x3287bc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328850u;
            goto label_328850;
        }
    }
    ctx->pc = 0x3287C0u;
label_3287c0:
    // 0x3287c0: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x3287c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x3287c4: 0x1459001e  bne         $v0, $t9, . + 4 + (0x1E << 2)
    ctx->pc = 0x3287C4u;
    {
        const bool branch_taken_0x3287c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 25));
        ctx->pc = 0x3287C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287C4u;
        // 0x3287c8: 0x24180001  addiu       $t8, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3287c4) {
            ctx->pc = 0x328840u;
            goto label_328840;
        }
    }
    ctx->pc = 0x3287CCu;
    // 0x3287cc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x3287ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3287d0: 0xa482ffe2  sh          $v0, -0x1E($a0)
    ctx->pc = 0x3287d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967266), (uint16_t)GPR_U32(ctx, 2));
    // 0x3287d4: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x3287d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3287d8: 0xa483ffe4  sh          $v1, -0x1C($a0)
    ctx->pc = 0x3287d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967268), (uint16_t)GPR_U32(ctx, 3));
    // 0x3287dc: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x3287dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3287e0: 0xa482ffe6  sh          $v0, -0x1A($a0)
    ctx->pc = 0x3287e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967270), (uint16_t)GPR_U32(ctx, 2));
    // 0x3287e4: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x3287e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3287e8: 0xa483ffe8  sh          $v1, -0x18($a0)
    ctx->pc = 0x3287e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967272), (uint16_t)GPR_U32(ctx, 3));
    // 0x3287ec: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x3287ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3287f0: 0xa482ffea  sh          $v0, -0x16($a0)
    ctx->pc = 0x3287f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967274), (uint16_t)GPR_U32(ctx, 2));
    // 0x3287f4: 0x94a30014  lhu         $v1, 0x14($a1)
    ctx->pc = 0x3287f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3287f8: 0xa483ffec  sh          $v1, -0x14($a0)
    ctx->pc = 0x3287f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967276), (uint16_t)GPR_U32(ctx, 3));
    // 0x3287fc: 0x94a20018  lhu         $v0, 0x18($a1)
    ctx->pc = 0x3287fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x328800: 0xa482ffee  sh          $v0, -0x12($a0)
    ctx->pc = 0x328800u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967278), (uint16_t)GPR_U32(ctx, 2));
    // 0x328804: 0x94a3001c  lhu         $v1, 0x1C($a1)
    ctx->pc = 0x328804u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x328808: 0xa483fff0  sh          $v1, -0x10($a0)
    ctx->pc = 0x328808u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967280), (uint16_t)GPR_U32(ctx, 3));
    // 0x32880c: 0x94a20020  lhu         $v0, 0x20($a1)
    ctx->pc = 0x32880cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x328810: 0xa482fff2  sh          $v0, -0xE($a0)
    ctx->pc = 0x328810u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967282), (uint16_t)GPR_U32(ctx, 2));
    // 0x328814: 0x94a30024  lhu         $v1, 0x24($a1)
    ctx->pc = 0x328814u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x328818: 0xa480fffe  sh          $zero, -0x2($a0)
    ctx->pc = 0x328818u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967294), (uint16_t)GPR_U32(ctx, 0));
    // 0x32881c: 0xa483fff4  sh          $v1, -0xC($a0)
    ctx->pc = 0x32881cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967284), (uint16_t)GPR_U32(ctx, 3));
    // 0x328820: 0xa480fff6  sh          $zero, -0xA($a0)
    ctx->pc = 0x328820u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967286), (uint16_t)GPR_U32(ctx, 0));
    // 0x328824: 0xa480fff8  sh          $zero, -0x8($a0)
    ctx->pc = 0x328824u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967288), (uint16_t)GPR_U32(ctx, 0));
    // 0x328828: 0xa480fffa  sh          $zero, -0x6($a0)
    ctx->pc = 0x328828u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967290), (uint16_t)GPR_U32(ctx, 0));
    // 0x32882c: 0xa480fffc  sh          $zero, -0x4($a0)
    ctx->pc = 0x32882cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x328830: 0xa620001e  sh          $zero, 0x1E($s1)
    ctx->pc = 0x328830u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x328834: 0x2624003e  addiu       $a0, $s1, 0x3E
    ctx->pc = 0x328834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 62));
    // 0x328838: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x328838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x32883c: 0x25ef0010  addiu       $t7, $t7, 0x10
    ctx->pc = 0x32883cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
label_328840:
    // 0x328840: 0x312102b  sltu        $v0, $t8, $s2
    ctx->pc = 0x328840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x328844: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x328844u;
    {
        const bool branch_taken_0x328844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328844u;
        // 0x328848: 0x24a3002c  addiu       $v1, $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328844) {
            ctx->pc = 0x3289B4u;
            goto label_3289b4;
        }
    }
    ctx->pc = 0x32884Cu;
    // 0x32884c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x32884cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_328850:
    // 0x328850: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x328850u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328854: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x328854u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328858: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x328858u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32885c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x32885cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328860: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x328860u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328864: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x328864u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328868: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x328868u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32886c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x32886cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328870: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x328870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328874: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x328874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_328878:
    // 0x328878: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x328878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x32887c: 0x54590020  bnel        $v0, $t9, . + 4 + (0x20 << 2)
    ctx->pc = 0x32887Cu;
    {
        const bool branch_taken_0x32887c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 25));
        if (branch_taken_0x32887c) {
            ctx->pc = 0x328880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32887Cu;
            // 0x328880: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328900u;
            goto label_328900;
        }
    }
    ctx->pc = 0x328884u;
    // 0x328884: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x328884u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x328888: 0xa482ffe2  sh          $v0, -0x1E($a0)
    ctx->pc = 0x328888u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967266), (uint16_t)GPR_U32(ctx, 2));
    // 0x32888c: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x32888cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x328890: 0xa483ffe4  sh          $v1, -0x1C($a0)
    ctx->pc = 0x328890u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967268), (uint16_t)GPR_U32(ctx, 3));
    // 0x328894: 0x95020008  lhu         $v0, 0x8($t0)
    ctx->pc = 0x328894u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x328898: 0xa482ffe6  sh          $v0, -0x1A($a0)
    ctx->pc = 0x328898u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967270), (uint16_t)GPR_U32(ctx, 2));
    // 0x32889c: 0x9523000c  lhu         $v1, 0xC($t1)
    ctx->pc = 0x32889cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x3288a0: 0xa483ffe8  sh          $v1, -0x18($a0)
    ctx->pc = 0x3288a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967272), (uint16_t)GPR_U32(ctx, 3));
    // 0x3288a4: 0x95420010  lhu         $v0, 0x10($t2)
    ctx->pc = 0x3288a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x3288a8: 0xa482ffea  sh          $v0, -0x16($a0)
    ctx->pc = 0x3288a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967274), (uint16_t)GPR_U32(ctx, 2));
    // 0x3288ac: 0x95630014  lhu         $v1, 0x14($t3)
    ctx->pc = 0x3288acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x3288b0: 0xa483ffec  sh          $v1, -0x14($a0)
    ctx->pc = 0x3288b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967276), (uint16_t)GPR_U32(ctx, 3));
    // 0x3288b4: 0x95820018  lhu         $v0, 0x18($t4)
    ctx->pc = 0x3288b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x3288b8: 0xa482ffee  sh          $v0, -0x12($a0)
    ctx->pc = 0x3288b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967278), (uint16_t)GPR_U32(ctx, 2));
    // 0x3288bc: 0x95a3001c  lhu         $v1, 0x1C($t5)
    ctx->pc = 0x3288bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 28)));
    // 0x3288c0: 0xa483fff0  sh          $v1, -0x10($a0)
    ctx->pc = 0x3288c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967280), (uint16_t)GPR_U32(ctx, 3));
    // 0x3288c4: 0x95c20020  lhu         $v0, 0x20($t6)
    ctx->pc = 0x3288c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 32)));
    // 0x3288c8: 0xa482fff2  sh          $v0, -0xE($a0)
    ctx->pc = 0x3288c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967282), (uint16_t)GPR_U32(ctx, 2));
    // 0x3288cc: 0x94a30024  lhu         $v1, 0x24($a1)
    ctx->pc = 0x3288ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x3288d0: 0xa480fff6  sh          $zero, -0xA($a0)
    ctx->pc = 0x3288d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967286), (uint16_t)GPR_U32(ctx, 0));
    // 0x3288d4: 0xa483fff4  sh          $v1, -0xC($a0)
    ctx->pc = 0x3288d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967284), (uint16_t)GPR_U32(ctx, 3));
    // 0x3288d8: 0xa480fff8  sh          $zero, -0x8($a0)
    ctx->pc = 0x3288d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967288), (uint16_t)GPR_U32(ctx, 0));
    // 0x3288dc: 0xa480fffa  sh          $zero, -0x6($a0)
    ctx->pc = 0x3288dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967290), (uint16_t)GPR_U32(ctx, 0));
    // 0x3288e0: 0xa480fffc  sh          $zero, -0x4($a0)
    ctx->pc = 0x3288e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x3288e4: 0xa480fffe  sh          $zero, -0x2($a0)
    ctx->pc = 0x3288e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967294), (uint16_t)GPR_U32(ctx, 0));
    // 0x3288e8: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x3288e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3288ec: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3288ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3288f0: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x3288f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3288f4: 0x25ef0010  addiu       $t7, $t7, 0x10
    ctx->pc = 0x3288f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x3288f8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3288f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3288fc: 0x0  nop
    ctx->pc = 0x3288fcu;
    // NOP
label_328900:
    // 0x328900: 0x1459001f  bne         $v0, $t9, . + 4 + (0x1F << 2)
    ctx->pc = 0x328900u;
    {
        const bool branch_taken_0x328900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 25));
        ctx->pc = 0x328904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328900u;
        // 0x328904: 0x27180002  addiu       $t8, $t8, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328900) {
            ctx->pc = 0x328980u;
            goto label_328980;
        }
    }
    ctx->pc = 0x328908u;
    // 0x328908: 0x94c2002c  lhu         $v0, 0x2C($a2)
    ctx->pc = 0x328908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x32890c: 0xa482ffe2  sh          $v0, -0x1E($a0)
    ctx->pc = 0x32890cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967266), (uint16_t)GPR_U32(ctx, 2));
    // 0x328910: 0x94e30030  lhu         $v1, 0x30($a3)
    ctx->pc = 0x328910u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x328914: 0xa483ffe4  sh          $v1, -0x1C($a0)
    ctx->pc = 0x328914u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967268), (uint16_t)GPR_U32(ctx, 3));
    // 0x328918: 0x95020034  lhu         $v0, 0x34($t0)
    ctx->pc = 0x328918u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x32891c: 0xa482ffe6  sh          $v0, -0x1A($a0)
    ctx->pc = 0x32891cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967270), (uint16_t)GPR_U32(ctx, 2));
    // 0x328920: 0x95230038  lhu         $v1, 0x38($t1)
    ctx->pc = 0x328920u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x328924: 0xa483ffe8  sh          $v1, -0x18($a0)
    ctx->pc = 0x328924u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967272), (uint16_t)GPR_U32(ctx, 3));
    // 0x328928: 0x9542003c  lhu         $v0, 0x3C($t2)
    ctx->pc = 0x328928u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 60)));
    // 0x32892c: 0xa482ffea  sh          $v0, -0x16($a0)
    ctx->pc = 0x32892cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967274), (uint16_t)GPR_U32(ctx, 2));
    // 0x328930: 0x95630040  lhu         $v1, 0x40($t3)
    ctx->pc = 0x328930u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 64)));
    // 0x328934: 0xa483ffec  sh          $v1, -0x14($a0)
    ctx->pc = 0x328934u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967276), (uint16_t)GPR_U32(ctx, 3));
    // 0x328938: 0x95820044  lhu         $v0, 0x44($t4)
    ctx->pc = 0x328938u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x32893c: 0xa482ffee  sh          $v0, -0x12($a0)
    ctx->pc = 0x32893cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967278), (uint16_t)GPR_U32(ctx, 2));
    // 0x328940: 0x95a30048  lhu         $v1, 0x48($t5)
    ctx->pc = 0x328940u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 72)));
    // 0x328944: 0xa483fff0  sh          $v1, -0x10($a0)
    ctx->pc = 0x328944u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967280), (uint16_t)GPR_U32(ctx, 3));
    // 0x328948: 0x95c2004c  lhu         $v0, 0x4C($t6)
    ctx->pc = 0x328948u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 76)));
    // 0x32894c: 0xa482fff2  sh          $v0, -0xE($a0)
    ctx->pc = 0x32894cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967282), (uint16_t)GPR_U32(ctx, 2));
    // 0x328950: 0x94a30050  lhu         $v1, 0x50($a1)
    ctx->pc = 0x328950u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x328954: 0xa480fff6  sh          $zero, -0xA($a0)
    ctx->pc = 0x328954u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967286), (uint16_t)GPR_U32(ctx, 0));
    // 0x328958: 0xa483fff4  sh          $v1, -0xC($a0)
    ctx->pc = 0x328958u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967284), (uint16_t)GPR_U32(ctx, 3));
    // 0x32895c: 0xa480fff8  sh          $zero, -0x8($a0)
    ctx->pc = 0x32895cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967288), (uint16_t)GPR_U32(ctx, 0));
    // 0x328960: 0xa480fffa  sh          $zero, -0x6($a0)
    ctx->pc = 0x328960u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967290), (uint16_t)GPR_U32(ctx, 0));
    // 0x328964: 0xa480fffc  sh          $zero, -0x4($a0)
    ctx->pc = 0x328964u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x328968: 0xa480fffe  sh          $zero, -0x2($a0)
    ctx->pc = 0x328968u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294967294), (uint16_t)GPR_U32(ctx, 0));
    // 0x32896c: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x32896cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x328970: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x328970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x328974: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x328974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x328978: 0x25ef0010  addiu       $t7, $t7, 0x10
    ctx->pc = 0x328978u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x32897c: 0x0  nop
    ctx->pc = 0x32897cu;
    // NOP
label_328980:
    // 0x328980: 0x24a50058  addiu       $a1, $a1, 0x58
    ctx->pc = 0x328980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x328984: 0x25ce0058  addiu       $t6, $t6, 0x58
    ctx->pc = 0x328984u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 88));
    // 0x328988: 0x25ad0058  addiu       $t5, $t5, 0x58
    ctx->pc = 0x328988u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 88));
    // 0x32898c: 0x258c0058  addiu       $t4, $t4, 0x58
    ctx->pc = 0x32898cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 88));
    // 0x328990: 0x256b0058  addiu       $t3, $t3, 0x58
    ctx->pc = 0x328990u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 88));
    // 0x328994: 0x254a0058  addiu       $t2, $t2, 0x58
    ctx->pc = 0x328994u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 88));
    // 0x328998: 0x25290058  addiu       $t1, $t1, 0x58
    ctx->pc = 0x328998u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 88));
    // 0x32899c: 0x25080058  addiu       $t0, $t0, 0x58
    ctx->pc = 0x32899cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 88));
    // 0x3289a0: 0x24e70058  addiu       $a3, $a3, 0x58
    ctx->pc = 0x3289a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 88));
    // 0x3289a4: 0x24c60058  addiu       $a2, $a2, 0x58
    ctx->pc = 0x3289a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 88));
    // 0x3289a8: 0x312102b  sltu        $v0, $t8, $s2
    ctx->pc = 0x3289a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3289ac: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x3289ACu;
    {
        const bool branch_taken_0x3289ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3289B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289ACu;
        // 0x3289b0: 0x26100058  addiu       $s0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3289ac) {
            ctx->pc = 0x328878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328878;
        }
    }
    ctx->pc = 0x3289B4u;
label_3289b4:
    // 0x3289b4: 0xae6f0004  sw          $t7, 0x4($s3)
    ctx->pc = 0x3289b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 15));
    // 0x3289b8: 0x2e0c82d  daddu       $t9, $s7, $zero
    ctx->pc = 0x3289b8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3289bc: 0x336102b  sltu        $v0, $t9, $s6
    ctx->pc = 0x3289bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x3289c0: 0x1440ff3f  bnez        $v0, . + 4 + (-0xC1 << 2)
    ctx->pc = 0x3289C0u;
    {
        const bool branch_taken_0x3289c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3289C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289C0u;
        // 0x3289c4: 0x3c0982d  daddu       $s3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3289c0) {
            ctx->pc = 0x3286C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3286c0;
        }
    }
    ctx->pc = 0x3289C8u;
label_3289c8:
    // 0x3289c8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3289c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3289cc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3289ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3289d0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3289d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3289d4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3289d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3289d8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3289d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3289dc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3289dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3289e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3289e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3289e4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3289e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3289e8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3289e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3289ec: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3289ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3289f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3289f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3289f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3289F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3289F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289F4u;
        // 0x3289f8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3289F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3289FCu;
    // 0x3289fc: 0x0  nop
    ctx->pc = 0x3289fcu;
    // NOP
    ctx->pc = 0x328a00u;
}
