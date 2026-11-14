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

// Function: sub_003F7580
// Address: 0x3f7580 - 0x3f77b8
void sub_003F7580_0x3f7580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F7580_0x3f7580");
#endif

    switch (ctx->pc) {
        case 0x3f75c4u: goto label_3f75c4;
        case 0x3f75e8u: goto label_3f75e8;
        case 0x3f7604u: goto label_3f7604;
        case 0x3f7618u: goto label_3f7618;
        case 0x3f7620u: goto label_3f7620;
        case 0x3f766cu: goto label_3f766c;
        case 0x3f7680u: goto label_3f7680;
        case 0x3f7694u: goto label_3f7694;
        case 0x3f76b8u: goto label_3f76b8;
        case 0x3f76f0u: goto label_3f76f0;
        case 0x3f7718u: goto label_3f7718;
        case 0x3f773cu: goto label_3f773c;
        case 0x3f774cu: goto label_3f774c;
        case 0x3f777cu: goto label_3f777c;
        case 0x3f7788u: goto label_3f7788;
        case 0x3f7794u: goto label_3f7794;
        default: break;
    }

    ctx->pc = 0x3f7580u;

    // 0x3f7580: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3f7580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3f7584: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3f7584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3f7588: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3f7588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3f758c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f758cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7590: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3f7590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3f7594: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f7594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7598: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3f7598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3f759c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3f759cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3f75a0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3f75a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3f75a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f75a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f75a8: 0xde4200f8  ld          $v0, 0xF8($s2)
    ctx->pc = 0x3f75a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3f75ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f75acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3f75b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F75B0u;
    {
        const bool branch_taken_0x3f75b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F75B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F75B0u;
        // 0x3f75b4: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f75b0) {
            ctx->pc = 0x3F75C4u;
            goto label_3f75c4;
        }
    }
    ctx->pc = 0x3F75B8u;
    // 0x3f75b8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f75b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f75bc: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F75BCu;
    SET_GPR_U32(ctx, 31, 0x3F75C4u);
    ctx->pc = 0x3F75C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F75BCu;
    // 0x3f75c0: 0x24a5f5d0  addiu       $a1, $a1, -0xA30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F75BCu, 0x3F75C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F75C4u;
label_3f75c4:
    // 0x3f75c4: 0xde4300f8  ld          $v1, 0xF8($s2)
    ctx->pc = 0x3f75c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3f75c8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3f75c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3f75cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F75CCu;
    {
        const bool branch_taken_0x3f75cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F75D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F75CCu;
        // 0x3f75d0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f75cc) {
            ctx->pc = 0x3F75DCu;
            goto label_3f75dc;
        }
    }
    ctx->pc = 0x3F75D4u;
    // 0x3f75d4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3f75d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f75d8: 0xfe4200f8  sd          $v0, 0xF8($s2)
    ctx->pc = 0x3f75d8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 248), GPR_U64(ctx, 2));
label_3f75dc:
    // 0x3f75dc: 0x66050001  daddiu      $a1, $s0, 0x1
    ctx->pc = 0x3f75dcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    // 0x3f75e0: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F75E0u;
    SET_GPR_U32(ctx, 31, 0x3F75E8u);
    ctx->pc = 0x3F75E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F75E0u;
    // 0x3f75e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F75E0u, 0x3F75E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F75E8u;
label_3f75e8:
    // 0x3f75e8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x3f75e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f75ec: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3f75ecu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3f75f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f75f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f75f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f75f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f75f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f75f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f75fc: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F75FCu;
    SET_GPR_U32(ctx, 31, 0x3F7604u);
    ctx->pc = 0x3F7600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F75FCu;
    // 0x3f7600: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F75FCu, 0x3F7604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7604u;
label_3f7604:
    // 0x3f7604: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3f7604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f760c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f760cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7610: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F7610u;
    SET_GPR_U32(ctx, 31, 0x3F7618u);
    ctx->pc = 0x3F7614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7610u;
    // 0x3f7614: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F7610u, 0x3F7618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7618u;
label_3f7618:
    // 0x3f7618: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F7618u;
    SET_GPR_U32(ctx, 31, 0x3F7620u);
    ctx->pc = 0x3F761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7618u;
    // 0x3f761c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F7618u, 0x3F7620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7620u;
label_3f7620:
    // 0x3f7620: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3F7620u;
    {
        const bool branch_taken_0x3f7620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7620u;
        // 0x3f7624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7620) {
            ctx->pc = 0x3F7684u;
            goto label_3f7684;
        }
    }
    ctx->pc = 0x3F7628u;
    // 0x3f7628: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f7628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f762c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f762cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f7630: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F7630u;
    {
        const bool branch_taken_0x3f7630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7630u;
        // 0x3f7634: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7630) {
            ctx->pc = 0x3F7650u;
            goto label_3f7650;
        }
    }
    ctx->pc = 0x3F7638u;
    // 0x3f7638: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f7638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f763c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F763Cu;
    {
        const bool branch_taken_0x3f763c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F763Cu;
        // 0x3f7640: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f763c) {
            ctx->pc = 0x3F765Cu;
            goto label_3f765c;
        }
    }
    ctx->pc = 0x3F7644u;
    // 0x3f7644: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3F7644u;
    {
        const bool branch_taken_0x3f7644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7644u;
        // 0x3f7648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7644) {
            ctx->pc = 0x3F7678u;
            goto label_3f7678;
        }
    }
    ctx->pc = 0x3F764Cu;
    // 0x3f764c: 0x0  nop
    ctx->pc = 0x3f764cu;
    // NOP
label_3f7650:
    // 0x3f7650: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f7650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f7654: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F7654u;
    {
        const bool branch_taken_0x3f7654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7654u;
        // 0x3f7658: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7654) {
            ctx->pc = 0x3F7674u;
            goto label_3f7674;
        }
    }
    ctx->pc = 0x3F765Cu;
label_3f765c:
    // 0x3f765c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f765cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f7660: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7664: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F7664u;
    SET_GPR_U32(ctx, 31, 0x3F766Cu);
    ctx->pc = 0x3F7668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7664u;
    // 0x3f7668: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F7664u, 0x3F766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F766Cu;
label_3f766c:
    // 0x3f766c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F766Cu;
    {
        const bool branch_taken_0x3f766c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F766Cu;
        // 0x3f7670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f766c) {
            ctx->pc = 0x3F7684u;
            goto label_3f7684;
        }
    }
    ctx->pc = 0x3F7674u;
label_3f7674:
    // 0x3f7674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f7678:
    // 0x3f7678: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F7678u;
    SET_GPR_U32(ctx, 31, 0x3F7680u);
    ctx->pc = 0x3F767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7678u;
    // 0x3f767c: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F7678u, 0x3F7680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7680u;
label_3f7680:
    // 0x3f7680: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f7680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f7684:
    // 0x3f7684: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F7684u;
    {
        const bool branch_taken_0x3f7684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7684u;
        // 0x3f7688: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7684) {
            ctx->pc = 0x3F769Cu;
            goto label_3f769c;
        }
    }
    ctx->pc = 0x3F768Cu;
    // 0x3f768c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F768Cu;
    SET_GPR_U32(ctx, 31, 0x3F7694u);
    ctx->pc = 0x3F7690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F768Cu;
    // 0x3f7690: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F768Cu, 0x3F7694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7694u;
label_3f7694:
    // 0x3f7694: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3F7694u;
    {
        const bool branch_taken_0x3f7694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7694u;
        // 0x3f7698: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7694) {
            ctx->pc = 0x3F7798u;
            goto label_3f7798;
        }
    }
    ctx->pc = 0x3F769Cu;
label_3f769c:
    // 0x3f769c: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x3f769cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x3f76a0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3f76a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f76a4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3f76a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f76a8: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x3f76a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3f76ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F76ACu;
    {
        const bool branch_taken_0x3f76ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F76B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F76ACu;
        // 0x3f76b0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f76ac) {
            ctx->pc = 0x3F76D4u;
            goto label_3f76d4;
        }
    }
    ctx->pc = 0x3F76B4u;
    // 0x3f76b4: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x3f76b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f76b8:
    // 0x3f76b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f76b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f76bc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3f76bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f76c0: 0x0  nop
    ctx->pc = 0x3f76c0u;
    // NOP
    // 0x3f76c4: 0x0  nop
    ctx->pc = 0x3f76c4u;
    // NOP
    // 0x3f76c8: 0x0  nop
    ctx->pc = 0x3f76c8u;
    // NOP
    // 0x3f76cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3F76CCu;
    {
        const bool branch_taken_0x3f76cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F76CCu;
        // 0x3f76d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f76cc) {
            ctx->pc = 0x3F76B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f76b8;
        }
    }
    ctx->pc = 0x3F76D4u;
label_3f76d4:
    // 0x3f76d4: 0x56040008  bnel        $s0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F76D4u;
    {
        const bool branch_taken_0x3f76d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x3f76d4) {
            ctx->pc = 0x3F76D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F76D4u;
            // 0x3f76d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F76F8u;
            goto label_3f76f8;
        }
    }
    ctx->pc = 0x3F76DCu;
    // 0x3f76dc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f76dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f76e0: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x3f76e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3f76e4: 0x24a5f5f0  addiu       $a1, $a1, -0xA10
    ctx->pc = 0x3f76e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964720));
    // 0x3f76e8: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F76E8u;
    SET_GPR_U32(ctx, 31, 0x3F76F0u);
    ctx->pc = 0x3F76ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F76E8u;
    // 0x3f76ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F76E8u, 0x3F76F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F76F0u;
label_3f76f0:
    // 0x3f76f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F76F0u;
    {
        const bool branch_taken_0x3f76f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F76F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F76F0u;
        // 0x3f76f4: 0x2138023  subu        $s0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f76f0) {
            ctx->pc = 0x3F7720u;
            goto label_3f7720;
        }
    }
    ctx->pc = 0x3F76F8u;
label_3f76f8:
    // 0x3f76f8: 0x82140000  lb          $s4, 0x0($s0)
    ctx->pc = 0x3f76f8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f76fc: 0x52800007  beql        $s4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F76FCu;
    {
        const bool branch_taken_0x3f76fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f76fc) {
            ctx->pc = 0x3F7700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F76FCu;
            // 0x3f7700: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F771Cu;
            goto label_3f771c;
        }
    }
    ctx->pc = 0x3F7704u;
    // 0x3f7704: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f7704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f7708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f770c: 0x24a5f608  addiu       $a1, $a1, -0x9F8
    ctx->pc = 0x3f770cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964744));
    // 0x3f7710: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F7710u;
    SET_GPR_U32(ctx, 31, 0x3F7718u);
    ctx->pc = 0x3F7714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7710u;
    // 0x3f7714: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F7710u, 0x3F7718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7718u;
label_3f7718:
    // 0x3f7718: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3f7718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3f771c:
    // 0x3f771c: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x3f771cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_3f7720:
    // 0x3f7720: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f7720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7724: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3f7724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7728: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3f7728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f772c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x3f772cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7730: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7734: 0xc0fc88c  jal         func_3F2230
    ctx->pc = 0x3F7734u;
    SET_GPR_U32(ctx, 31, 0x3F773Cu);
    ctx->pc = 0x3F7738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7734u;
    // 0x3f7738: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2230u, 0x3F7734u, 0x3F773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F773Cu;
label_3f773c:
    // 0x3f773c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f773cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7740: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7744: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F7744u;
    SET_GPR_U32(ctx, 31, 0x3F774Cu);
    ctx->pc = 0x3F7748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7744u;
    // 0x3f7748: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F7744u, 0x3F774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F774Cu;
label_3f774c:
    // 0x3f774c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f774cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7750: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x3f7750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x3f7754: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x3f7754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x3f7758: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3f7758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f775c: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x3f775cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x3f7760: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7764: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3f7764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7768: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3f7768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f776c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3f776cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f7770: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x3f7770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x3f7774: 0xc0fea00  jal         func_3FA800
    ctx->pc = 0x3F7774u;
    SET_GPR_U32(ctx, 31, 0x3F777Cu);
    ctx->pc = 0x3F7778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7774u;
    // 0x3f7778: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FA800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FA800u, 0x3F7774u, 0x3F777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F777Cu;
label_3f777c:
    // 0x3f777c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f777cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7780: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F7780u;
    SET_GPR_U32(ctx, 31, 0x3F7788u);
    ctx->pc = 0x3F7784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7780u;
    // 0x3f7784: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F7780u, 0x3F7788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7788u;
label_3f7788:
    // 0x3f7788: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f778c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F778Cu;
    SET_GPR_U32(ctx, 31, 0x3F7794u);
    ctx->pc = 0x3F7790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F778Cu;
    // 0x3f7790: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F778Cu, 0x3F7794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7794u;
label_3f7794:
    // 0x3f7794: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3f7794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f7798:
    // 0x3f7798: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3f7798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f779c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3f779cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f77a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3f77a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f77a4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3f77a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f77a8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3f77a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f77ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f77acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f77b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3F77B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F77B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F77B0u;
        // 0x3f77b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F77B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F77B8u;
}
