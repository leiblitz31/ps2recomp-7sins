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

// Function: sub_00200790
// Address: 0x200790 - 0x201100
void sub_00200790_0x200790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200790_0x200790");
#endif

    switch (ctx->pc) {
        case 0x2007d0u: goto label_2007d0;
        case 0x2007e0u: goto label_2007e0;
        case 0x2007f0u: goto label_2007f0;
        case 0x200804u: goto label_200804;
        case 0x200834u: goto label_200834;
        case 0x200864u: goto label_200864;
        case 0x200894u: goto label_200894;
        case 0x2008b8u: goto label_2008b8;
        case 0x2008c8u: goto label_2008c8;
        case 0x2008dcu: goto label_2008dc;
        case 0x200918u: goto label_200918;
        case 0x20092cu: goto label_20092c;
        case 0x20093cu: goto label_20093c;
        case 0x200948u: goto label_200948;
        case 0x200978u: goto label_200978;
        case 0x20098cu: goto label_20098c;
        case 0x20099cu: goto label_20099c;
        case 0x2009a8u: goto label_2009a8;
        case 0x2009d8u: goto label_2009d8;
        case 0x2009ecu: goto label_2009ec;
        case 0x2009fcu: goto label_2009fc;
        case 0x200a2cu: goto label_200a2c;
        case 0x200a40u: goto label_200a40;
        case 0x200a50u: goto label_200a50;
        case 0x200a5cu: goto label_200a5c;
        case 0x200a8cu: goto label_200a8c;
        case 0x200aa8u: goto label_200aa8;
        case 0x200ad0u: goto label_200ad0;
        case 0x200aecu: goto label_200aec;
        case 0x200b14u: goto label_200b14;
        case 0x200b30u: goto label_200b30;
        case 0x200b58u: goto label_200b58;
        case 0x200b6cu: goto label_200b6c;
        case 0x200b7cu: goto label_200b7c;
        case 0x200b88u: goto label_200b88;
        case 0x200bb8u: goto label_200bb8;
        case 0x200bccu: goto label_200bcc;
        case 0x200bdcu: goto label_200bdc;
        case 0x200be8u: goto label_200be8;
        case 0x200c18u: goto label_200c18;
        case 0x200c2cu: goto label_200c2c;
        case 0x200c3cu: goto label_200c3c;
        case 0x200c48u: goto label_200c48;
        case 0x200c74u: goto label_200c74;
        case 0x200c88u: goto label_200c88;
        case 0x200c98u: goto label_200c98;
        case 0x200ca4u: goto label_200ca4;
        case 0x200cd0u: goto label_200cd0;
        case 0x200ce4u: goto label_200ce4;
        case 0x200cf4u: goto label_200cf4;
        case 0x200d00u: goto label_200d00;
        case 0x200d2cu: goto label_200d2c;
        case 0x200d38u: goto label_200d38;
        case 0x200d44u: goto label_200d44;
        case 0x200d50u: goto label_200d50;
        case 0x200d60u: goto label_200d60;
        case 0x200d70u: goto label_200d70;
        case 0x200d7cu: goto label_200d7c;
        case 0x200d8cu: goto label_200d8c;
        case 0x200d9cu: goto label_200d9c;
        case 0x200db4u: goto label_200db4;
        case 0x200dc4u: goto label_200dc4;
        case 0x200ddcu: goto label_200ddc;
        case 0x200decu: goto label_200dec;
        case 0x200e08u: goto label_200e08;
        case 0x200e18u: goto label_200e18;
        case 0x200e48u: goto label_200e48;
        case 0x200e5cu: goto label_200e5c;
        case 0x200e90u: goto label_200e90;
        case 0x200ea4u: goto label_200ea4;
        case 0x200f00u: goto label_200f00;
        case 0x200f2cu: goto label_200f2c;
        case 0x200f54u: goto label_200f54;
        case 0x200fc8u: goto label_200fc8;
        case 0x20100cu: goto label_20100c;
        case 0x201024u: goto label_201024;
        case 0x20103cu: goto label_20103c;
        case 0x201054u: goto label_201054;
        case 0x20106cu: goto label_20106c;
        case 0x201084u: goto label_201084;
        case 0x2010a8u: goto label_2010a8;
        case 0x2010b8u: goto label_2010b8;
        case 0x2010c8u: goto label_2010c8;
        default: break;
    }

    ctx->pc = 0x200790u;

    // 0x200790: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x200790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x200794: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x200794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x200798: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x200798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x20079c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x20079cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2007a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2007a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2007a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2007a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2007a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2007a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2007ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2007acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2007b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2007b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2007b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2007b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2007b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2007b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2007bc: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x2007bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
    // 0x2007c0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2007c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2007c4: 0x278599f4  addiu       $a1, $gp, -0x660C
    ctx->pc = 0x2007c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941172));
    // 0x2007c8: 0xc040304  jal         func_100C10
    ctx->pc = 0x2007C8u;
    SET_GPR_U32(ctx, 31, 0x2007D0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2007C8u, 0x2007D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2007D0u;
label_2007d0:
    // 0x2007d0: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2007d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2007d4: 0x278599f4  addiu       $a1, $gp, -0x660C
    ctx->pc = 0x2007d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941172));
    // 0x2007d8: 0xc040304  jal         func_100C10
    ctx->pc = 0x2007D8u;
    SET_GPR_U32(ctx, 31, 0x2007E0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2007D8u, 0x2007E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2007E0u;
label_2007e0:
    // 0x2007e0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2007e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2007e4: 0x278599f4  addiu       $a1, $gp, -0x660C
    ctx->pc = 0x2007e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941172));
    // 0x2007e8: 0xc040304  jal         func_100C10
    ctx->pc = 0x2007E8u;
    SET_GPR_U32(ctx, 31, 0x2007F0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2007E8u, 0x2007F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2007F0u;
label_2007f0:
    // 0x2007f0: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x2007f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x2007f4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2007f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2007f8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2007F8u;
    {
        const bool branch_taken_0x2007f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2007f8) {
            ctx->pc = 0x200820u;
            goto label_200820;
        }
    }
    ctx->pc = 0x200800u;
    // 0x200800: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x200800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_200804:
    // 0x200804: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x200804u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x200808: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x200808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20080c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x20080cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x200810: 0x0  nop
    ctx->pc = 0x200810u;
    // NOP
    // 0x200814: 0x0  nop
    ctx->pc = 0x200814u;
    // NOP
    // 0x200818: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x200818u;
    {
        const bool branch_taken_0x200818 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x200818) {
            ctx->pc = 0x200804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200804;
        }
    }
    ctx->pc = 0x200820u;
label_200820:
    // 0x200820: 0x27a20148  addiu       $v0, $sp, 0x148
    ctx->pc = 0x200820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x200824: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x200824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x200828: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x200828u;
    {
        const bool branch_taken_0x200828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200828) {
            ctx->pc = 0x200850u;
            goto label_200850;
        }
    }
    ctx->pc = 0x200830u;
    // 0x200830: 0x402821  addu        $a1, $v0, $zero
    ctx->pc = 0x200830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_200834:
    // 0x200834: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x200834u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x200838: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x200838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20083c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x20083cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x200840: 0x0  nop
    ctx->pc = 0x200840u;
    // NOP
    // 0x200844: 0x0  nop
    ctx->pc = 0x200844u;
    // NOP
    // 0x200848: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x200848u;
    {
        const bool branch_taken_0x200848 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x200848) {
            ctx->pc = 0x200834u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200834;
        }
    }
    ctx->pc = 0x200850u;
label_200850:
    // 0x200850: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x200850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x200854: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x200854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x200858: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x200858u;
    {
        const bool branch_taken_0x200858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200858) {
            ctx->pc = 0x200880u;
            goto label_200880;
        }
    }
    ctx->pc = 0x200860u;
    // 0x200860: 0x402021  addu        $a0, $v0, $zero
    ctx->pc = 0x200860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_200864:
    // 0x200864: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x200864u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x200868: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x200868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20086c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20086cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x200870: 0x0  nop
    ctx->pc = 0x200870u;
    // NOP
    // 0x200874: 0x0  nop
    ctx->pc = 0x200874u;
    // NOP
    // 0x200878: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x200878u;
    {
        const bool branch_taken_0x200878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x200878) {
            ctx->pc = 0x200864u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200864;
        }
    }
    ctx->pc = 0x200880u;
label_200880:
    // 0x200880: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x200880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x200884: 0x24520054  addiu       $s2, $v0, 0x54
    ctx->pc = 0x200884u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x200888: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x200888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20088c: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x20088Cu;
    {
        const bool branch_taken_0x20088c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20088c) {
            ctx->pc = 0x200D08u;
            goto label_200d08;
        }
    }
    ctx->pc = 0x200894u;
label_200894:
    // 0x200894: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x200894u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x200898: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x200898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x20089c: 0x24428d10  addiu       $v0, $v0, -0x72F0
    ctx->pc = 0x20089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937872));
    // 0x2008a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2008a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2008a4: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x2008a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x2008a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2008a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2008ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2008acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2008b0: 0xc040304  jal         func_100C10
    ctx->pc = 0x2008B0u;
    SET_GPR_U32(ctx, 31, 0x2008B8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2008B0u, 0x2008B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2008B8u;
label_2008b8:
    // 0x2008b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2008b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2008bc: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x2008bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x2008c0: 0xc05c618  jal         func_171860
    ctx->pc = 0x2008C0u;
    SET_GPR_U32(ctx, 31, 0x2008C8u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x2008C0u, 0x2008C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2008C8u;
label_2008c8:
    // 0x2008c8: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x2008c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x2008cc: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x2008ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x2008d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2008d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2008d4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2008D4u;
    SET_GPR_U32(ctx, 31, 0x2008DCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2008D4u, 0x2008DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2008DCu;
label_2008dc:
    // 0x2008dc: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x2008dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2008e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2008e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2008e4: 0x10a20107  beq         $a1, $v0, . + 4 + (0x107 << 2)
    ctx->pc = 0x2008E4u;
    {
        const bool branch_taken_0x2008e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2008e4) {
            ctx->pc = 0x200D04u;
            goto label_200d04;
        }
    }
    ctx->pc = 0x2008ECu;
    // 0x2008ec: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x2008ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2008f0: 0x24850003  addiu       $a1, $a0, 0x3
    ctx->pc = 0x2008f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2008f4: 0xafa5018c  sw          $a1, 0x18C($sp)
    ctx->pc = 0x2008f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 5));
    // 0x2008f8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2008f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2008fc: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2008fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x200900: 0x24848d10  addiu       $a0, $a0, -0x72F0
    ctx->pc = 0x200900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937872));
    // 0x200904: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x200904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x200908: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x200908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20090c: 0x278599b0  addiu       $a1, $gp, -0x6650
    ctx->pc = 0x20090cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941104));
    // 0x200910: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x200910u;
    SET_GPR_U32(ctx, 31, 0x200918u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x200910u, 0x200918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200918u;
label_200918:
    // 0x200918: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x200918u;
    {
        const bool branch_taken_0x200918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200918) {
            ctx->pc = 0x200958u;
            goto label_200958;
        }
    }
    ctx->pc = 0x200920u;
    // 0x200920: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200924: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x200924u;
    SET_GPR_U32(ctx, 31, 0x20092Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x200924u, 0x20092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20092Cu;
label_20092c:
    // 0x20092c: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x20092cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x200930: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x200930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200934: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x200934u;
    SET_GPR_U32(ctx, 31, 0x20093Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x200934u, 0x20093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20093Cu;
label_20093c:
    // 0x20093c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20093cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200940: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x200940u;
    SET_GPR_U32(ctx, 31, 0x200948u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x200940u, 0x200948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200948u;
label_200948:
    // 0x200948: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x200948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x20094c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x20094cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x200950: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x200950u;
    {
        const bool branch_taken_0x200950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200950) {
            ctx->pc = 0x200D04u;
            goto label_200d04;
        }
    }
    ctx->pc = 0x200958u;
label_200958:
    // 0x200958: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x200958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x20095c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x20095cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x200960: 0x24428d10  addiu       $v0, $v0, -0x72F0
    ctx->pc = 0x200960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937872));
    // 0x200964: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200968: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x200968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20096c: 0x278599b4  addiu       $a1, $gp, -0x664C
    ctx->pc = 0x20096cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941108));
    // 0x200970: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x200970u;
    SET_GPR_U32(ctx, 31, 0x200978u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x200970u, 0x200978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200978u;
label_200978:
    // 0x200978: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x200978u;
    {
        const bool branch_taken_0x200978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200978) {
            ctx->pc = 0x2009B8u;
            goto label_2009b8;
        }
    }
    ctx->pc = 0x200980u;
    // 0x200980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200984: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x200984u;
    SET_GPR_U32(ctx, 31, 0x20098Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x200984u, 0x20098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20098Cu;
label_20098c:
    // 0x20098c: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x20098cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x200990: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x200990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200994: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x200994u;
    SET_GPR_U32(ctx, 31, 0x20099Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x200994u, 0x20099Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20099Cu;
label_20099c:
    // 0x20099c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20099cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2009a0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x2009A0u;
    SET_GPR_U32(ctx, 31, 0x2009A8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2009A0u, 0x2009A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2009A8u;
label_2009a8:
    // 0x2009a8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x2009a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2009ac: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2009acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2009b0: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x2009B0u;
    {
        const bool branch_taken_0x2009b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2009b0) {
            ctx->pc = 0x200D04u;
            goto label_200d04;
        }
    }
    ctx->pc = 0x2009B8u;
label_2009b8:
    // 0x2009b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2009b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2009bc: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2009bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2009c0: 0x24428d10  addiu       $v0, $v0, -0x72F0
    ctx->pc = 0x2009c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937872));
    // 0x2009c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2009c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2009c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2009c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2009cc: 0x278599b8  addiu       $a1, $gp, -0x6648
    ctx->pc = 0x2009ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941112));
    // 0x2009d0: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x2009D0u;
    SET_GPR_U32(ctx, 31, 0x2009D8u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x2009D0u, 0x2009D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2009D8u;
label_2009d8:
    // 0x2009d8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2009D8u;
    {
        const bool branch_taken_0x2009d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2009d8) {
            ctx->pc = 0x200A0Cu;
            goto label_200a0c;
        }
    }
    ctx->pc = 0x2009E0u;
    // 0x2009e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2009e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2009e4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2009E4u;
    SET_GPR_U32(ctx, 31, 0x2009ECu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2009E4u, 0x2009ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2009ECu;
label_2009ec:
    // 0x2009ec: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x2009ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2009f0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2009f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2009f4: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x2009F4u;
    SET_GPR_U32(ctx, 31, 0x2009FCu);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x2009F4u, 0x2009FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2009FCu;
label_2009fc:
    // 0x2009fc: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x2009fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x200a00: 0xac62013c  sw          $v0, 0x13C($v1)
    ctx->pc = 0x200a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 316), GPR_U32(ctx, 2));
    // 0x200a04: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x200A04u;
    {
        const bool branch_taken_0x200a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200a04) {
            ctx->pc = 0x200D04u;
            goto label_200d04;
        }
    }
    ctx->pc = 0x200A0Cu;
label_200a0c:
    // 0x200a0c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x200a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x200a10: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x200a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x200a14: 0x24428d10  addiu       $v0, $v0, -0x72F0
    ctx->pc = 0x200a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937872));
    // 0x200a18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200a1c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x200a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200a20: 0x278599bc  addiu       $a1, $gp, -0x6644
    ctx->pc = 0x200a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941116));
    // 0x200a24: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x200A24u;
    SET_GPR_U32(ctx, 31, 0x200A2Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x200A24u, 0x200A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A2Cu;
label_200a2c:
    // 0x200a2c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x200A2Cu;
    {
        const bool branch_taken_0x200a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200a2c) {
            ctx->pc = 0x200A6Cu;
            goto label_200a6c;
        }
    }
    ctx->pc = 0x200A34u;
    // 0x200a34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a38: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x200A38u;
    SET_GPR_U32(ctx, 31, 0x200A40u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x200A38u, 0x200A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A40u;
label_200a40:
    // 0x200a40: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x200a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x200a44: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x200a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200a48: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x200A48u;
    SET_GPR_U32(ctx, 31, 0x200A50u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x200A48u, 0x200A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A50u;
label_200a50:
    // 0x200a50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a54: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x200A54u;
    SET_GPR_U32(ctx, 31, 0x200A5Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x200A54u, 0x200A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A5Cu;
label_200a5c:
    // 0x200a5c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x200a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x200a60: 0xe4400160  swc1        $f0, 0x160($v0)
    ctx->pc = 0x200a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 352), bits); }
    // 0x200a64: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x200A64u;
    {
        const bool branch_taken_0x200a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200a64) {
            ctx->pc = 0x200D04u;
            goto label_200d04;
        }
    }
    ctx->pc = 0x200A6Cu;
label_200a6c:
    // 0x200a6c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x200a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x200a70: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x200a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x200a74: 0x24428d10  addiu       $v0, $v0, -0x72F0
    ctx->pc = 0x200a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937872));
    // 0x200a78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200a7c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x200a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200a80: 0x278599c0  addiu       $a1, $gp, -0x6640
    ctx->pc = 0x200a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941120));
    // 0x200a84: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x200A84u;
    SET_GPR_U32(ctx, 31, 0x200A8Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x200A84u, 0x200A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A8Cu;
label_200a8c:
    // 0x200a8c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x200A8Cu;
    {
        const bool branch_taken_0x200a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200a8c) {
            ctx->pc = 0x200AB0u;
            goto label_200ab0;
        }
    }
    ctx->pc = 0x200A94u;
    // 0x200a94: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x200a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x200a98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a9c: 0x27a6018c  addiu       $a2, $sp, 0x18C
    ctx->pc = 0x200a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x200aa0: 0xc061d44  jal         func_187510
    ctx->pc = 0x200AA0u;
    SET_GPR_U32(ctx, 31, 0x200AA8u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x200AA0u, 0x200AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200AA8u;
label_200aa8:
    // 0x200aa8: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x200AA8u;
    {
        const bool branch_taken_0x200aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200aa8) {
            ctx->pc = 0x200D04u;
            goto label_200d04;
        }
    }
    ctx->pc = 0x200AB0u;
label_200ab0:
    // 0x200ab0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x200ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x200ab4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x200ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x200ab8: 0x24428d10  addiu       $v0, $v0, -0x72F0
    ctx->pc = 0x200ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937872));
    // 0x200abc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200ac0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x200ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200ac4: 0x278599c4  addiu       $a1, $gp, -0x663C
    ctx->pc = 0x200ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941124));
    // 0x200ac8: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x200AC8u;
    SET_GPR_U32(ctx, 31, 0x200AD0u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x200AC8u, 0x200AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200AD0u;
label_200ad0:
    // 0x200ad0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x200AD0u;
    {
        const bool branch_taken_0x200ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200ad0) {
            ctx->pc = 0x200AF4u;
            goto label_200af4;
        }
    }
    ctx->pc = 0x200AD8u;
    // 0x200ad8: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x200ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x200adc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ae0: 0x27a6018c  addiu       $a2, $sp, 0x18C
    ctx->pc = 0x200ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x200ae4: 0xc061d44  jal         func_187510
    ctx->pc = 0x200AE4u;
    SET_GPR_U32(ctx, 31, 0x200AECu);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x200AE4u, 0x200AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200AECu;
label_200aec:
    // 0x200aec: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x200AECu;
    {
        const bool branch_taken_0x200aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200aec) {
            ctx->pc = 0x200D04u;
            goto label_200d04;
        }
    }
    ctx->pc = 0x200AF4u;
label_200af4:
    // 0x200af4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x200af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x200af8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x200af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x200afc: 0x24428d10  addiu       $v0, $v0, -0x72F0
    ctx->pc = 0x200afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937872));
    // 0x200b00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200b04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x200b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200b08: 0x278599c8  addiu       $a1, $gp, -0x6638
    ctx->pc = 0x200b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941128));
    // 0x200b0c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x200B0Cu;
    SET_GPR_U32(ctx, 31, 0x200B14u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x200B0Cu, 0x200B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B14u;
label_200b14:
    // 0x200b14: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x200B14u;
    {
        const bool branch_taken_0x200b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200b14) {
            ctx->pc = 0x200B38u;
            goto label_200b38;
        }
    }
    ctx->pc = 0x200B1Cu;
    // 0x200b1c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x200b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x200b20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b24: 0x27a6018c  addiu       $a2, $sp, 0x18C
    ctx->pc = 0x200b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x200b28: 0xc061d44  jal         func_187510
    ctx->pc = 0x200B28u;
    SET_GPR_U32(ctx, 31, 0x200B30u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x200B28u, 0x200B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B30u;
label_200b30:
    // 0x200b30: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x200B30u;
    {
        const bool branch_taken_0x200b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200b30) {
            ctx->pc = 0x200D04u;
            goto label_200d04;
        }
    }
    ctx->pc = 0x200B38u;
label_200b38:
    // 0x200b38: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x200b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x200b3c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x200b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x200b40: 0x24428d10  addiu       $v0, $v0, -0x72F0
    ctx->pc = 0x200b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937872));
    // 0x200b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200b48: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x200b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200b4c: 0x278599cc  addiu       $a1, $gp, -0x6634
    ctx->pc = 0x200b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941132));
    // 0x200b50: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x200B50u;
    SET_GPR_U32(ctx, 31, 0x200B58u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x200B50u, 0x200B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B58u;
label_200b58:
    // 0x200b58: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x200B58u;
    {
        const bool branch_taken_0x200b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200b58) {
            ctx->pc = 0x200B98u;
            goto label_200b98;
        }
    }
    ctx->pc = 0x200B60u;
    // 0x200b60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b64: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x200B64u;
    SET_GPR_U32(ctx, 31, 0x200B6Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x200B64u, 0x200B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B6Cu;
label_200b6c:
    // 0x200b6c: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x200b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x200b70: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x200b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200b74: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x200B74u;
    SET_GPR_U32(ctx, 31, 0x200B7Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x200B74u, 0x200B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B7Cu;
label_200b7c:
    // 0x200b7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b80: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x200B80u;
    SET_GPR_U32(ctx, 31, 0x200B88u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x200B80u, 0x200B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B88u;
label_200b88:
    // 0x200b88: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x200b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x200b8c: 0xe4400114  swc1        $f0, 0x114($v0)
    ctx->pc = 0x200b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x200b90: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x200B90u;
    {
        const bool branch_taken_0x200b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200b90) {
            ctx->pc = 0x200D04u;
            goto label_200d04;
        }
    }
    ctx->pc = 0x200B98u;
label_200b98:
    // 0x200b98: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x200b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x200b9c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x200b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x200ba0: 0x24428d10  addiu       $v0, $v0, -0x72F0
    ctx->pc = 0x200ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937872));
    // 0x200ba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200ba8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x200ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200bac: 0x278599d0  addiu       $a1, $gp, -0x6630
    ctx->pc = 0x200bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941136));
    // 0x200bb0: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x200BB0u;
    SET_GPR_U32(ctx, 31, 0x200BB8u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x200BB0u, 0x200BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200BB8u;
label_200bb8:
    // 0x200bb8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x200BB8u;
    {
        const bool branch_taken_0x200bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200bb8) {
            ctx->pc = 0x200BF8u;
            goto label_200bf8;
        }
    }
    ctx->pc = 0x200BC0u;
    // 0x200bc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200bc4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x200BC4u;
    SET_GPR_U32(ctx, 31, 0x200BCCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x200BC4u, 0x200BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200BCCu;
label_200bcc:
    // 0x200bcc: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x200bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x200bd0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x200bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200bd4: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x200BD4u;
    SET_GPR_U32(ctx, 31, 0x200BDCu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x200BD4u, 0x200BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200BDCu;
label_200bdc:
    // 0x200bdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200be0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x200BE0u;
    SET_GPR_U32(ctx, 31, 0x200BE8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x200BE0u, 0x200BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200BE8u;
label_200be8:
    // 0x200be8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x200be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x200bec: 0xe4400118  swc1        $f0, 0x118($v0)
    ctx->pc = 0x200becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
    // 0x200bf0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x200BF0u;
    {
        const bool branch_taken_0x200bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200bf0) {
            ctx->pc = 0x200D04u;
            goto label_200d04;
        }
    }
    ctx->pc = 0x200BF8u;
label_200bf8:
    // 0x200bf8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x200bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x200bfc: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x200bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x200c00: 0x24428d10  addiu       $v0, $v0, -0x72F0
    ctx->pc = 0x200c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937872));
    // 0x200c04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200c08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x200c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200c0c: 0x278599d4  addiu       $a1, $gp, -0x662C
    ctx->pc = 0x200c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941140));
    // 0x200c10: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x200C10u;
    SET_GPR_U32(ctx, 31, 0x200C18u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x200C10u, 0x200C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C18u;
label_200c18:
    // 0x200c18: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x200C18u;
    {
        const bool branch_taken_0x200c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200c18) {
            ctx->pc = 0x200C54u;
            goto label_200c54;
        }
    }
    ctx->pc = 0x200C20u;
    // 0x200c20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200c24: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x200C24u;
    SET_GPR_U32(ctx, 31, 0x200C2Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x200C24u, 0x200C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C2Cu;
label_200c2c:
    // 0x200c2c: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x200c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x200c30: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x200c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200c34: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x200C34u;
    SET_GPR_U32(ctx, 31, 0x200C3Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x200C34u, 0x200C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C3Cu;
label_200c3c:
    // 0x200c3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200c40: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x200C40u;
    SET_GPR_U32(ctx, 31, 0x200C48u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x200C40u, 0x200C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C48u;
label_200c48:
    // 0x200c48: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x200c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x200c4c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x200C4Cu;
    {
        const bool branch_taken_0x200c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200c4c) {
            ctx->pc = 0x200D04u;
            goto label_200d04;
        }
    }
    ctx->pc = 0x200C54u;
label_200c54:
    // 0x200c54: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x200c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x200c58: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x200c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x200c5c: 0x24428d10  addiu       $v0, $v0, -0x72F0
    ctx->pc = 0x200c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937872));
    // 0x200c60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200c64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x200c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200c68: 0x278599d8  addiu       $a1, $gp, -0x6628
    ctx->pc = 0x200c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941144));
    // 0x200c6c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x200C6Cu;
    SET_GPR_U32(ctx, 31, 0x200C74u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x200C6Cu, 0x200C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C74u;
label_200c74:
    // 0x200c74: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x200C74u;
    {
        const bool branch_taken_0x200c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200c74) {
            ctx->pc = 0x200CB0u;
            goto label_200cb0;
        }
    }
    ctx->pc = 0x200C7Cu;
    // 0x200c7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200c80: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x200C80u;
    SET_GPR_U32(ctx, 31, 0x200C88u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x200C80u, 0x200C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C88u;
label_200c88:
    // 0x200c88: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x200c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x200c8c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x200c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200c90: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x200C90u;
    SET_GPR_U32(ctx, 31, 0x200C98u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x200C90u, 0x200C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C98u;
label_200c98:
    // 0x200c98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200c9c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x200C9Cu;
    SET_GPR_U32(ctx, 31, 0x200CA4u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x200C9Cu, 0x200CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CA4u;
label_200ca4:
    // 0x200ca4: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x200ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x200ca8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x200CA8u;
    {
        const bool branch_taken_0x200ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200ca8) {
            ctx->pc = 0x200D04u;
            goto label_200d04;
        }
    }
    ctx->pc = 0x200CB0u;
label_200cb0:
    // 0x200cb0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x200cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x200cb4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x200cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x200cb8: 0x24428d10  addiu       $v0, $v0, -0x72F0
    ctx->pc = 0x200cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937872));
    // 0x200cbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200cc0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x200cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200cc4: 0x278599dc  addiu       $a1, $gp, -0x6624
    ctx->pc = 0x200cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941148));
    // 0x200cc8: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x200CC8u;
    SET_GPR_U32(ctx, 31, 0x200CD0u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x200CC8u, 0x200CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CD0u;
label_200cd0:
    // 0x200cd0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x200CD0u;
    {
        const bool branch_taken_0x200cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200cd0) {
            ctx->pc = 0x200D04u;
            goto label_200d04;
        }
    }
    ctx->pc = 0x200CD8u;
    // 0x200cd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200cdc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x200CDCu;
    SET_GPR_U32(ctx, 31, 0x200CE4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x200CDCu, 0x200CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CE4u;
label_200ce4:
    // 0x200ce4: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x200ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x200ce8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x200ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200cec: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x200CECu;
    SET_GPR_U32(ctx, 31, 0x200CF4u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x200CECu, 0x200CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CF4u;
label_200cf4:
    // 0x200cf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200cf8: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x200CF8u;
    SET_GPR_U32(ctx, 31, 0x200D00u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x200CF8u, 0x200D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D00u;
label_200d00:
    // 0x200d00: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x200d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_200d04:
    // 0x200d04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x200d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_200d08:
    // 0x200d08: 0x2e02000c  sltiu       $v0, $s0, 0xC
    ctx->pc = 0x200d08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x200d0c: 0x1440fee1  bnez        $v0, . + 4 + (-0x11F << 2)
    ctx->pc = 0x200D0Cu;
    {
        const bool branch_taken_0x200d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200d0c) {
            ctx->pc = 0x200894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200894;
        }
    }
    ctx->pc = 0x200D14u;
    // 0x200d14: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x200d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x200d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x200d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200d1c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x200d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x200d20: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x200d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x200d24: 0xc0434e0  jal         func_10D380
    ctx->pc = 0x200D24u;
    SET_GPR_U32(ctx, 31, 0x200D2Cu);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x200D24u, 0x200D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D2Cu;
label_200d2c:
    // 0x200d2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d30: 0xc0434d8  jal         func_10D360
    ctx->pc = 0x200D30u;
    SET_GPR_U32(ctx, 31, 0x200D38u);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x200D30u, 0x200D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D38u;
label_200d38:
    // 0x200d38: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x200d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x200d3c: 0xc090864  jal         func_242190
    ctx->pc = 0x200D3Cu;
    SET_GPR_U32(ctx, 31, 0x200D44u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x200D3Cu, 0x200D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D44u;
label_200d44:
    // 0x200d44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d48: 0xc090590  jal         func_241640
    ctx->pc = 0x200D48u;
    SET_GPR_U32(ctx, 31, 0x200D50u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x200D48u, 0x200D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D50u;
label_200d50:
    // 0x200d50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d54: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x200d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x200d58: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x200D58u;
    SET_GPR_U32(ctx, 31, 0x200D60u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x200D58u, 0x200D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D60u;
label_200d60:
    // 0x200d60: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x200d60u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d64: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x200d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d68: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x200D68u;
    SET_GPR_U32(ctx, 31, 0x200D70u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x200D68u, 0x200D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D70u;
label_200d70:
    // 0x200d70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x200d70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d74: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x200D74u;
    {
        const bool branch_taken_0x200d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200d74) {
            ctx->pc = 0x200F20u;
            goto label_200f20;
        }
    }
    ctx->pc = 0x200D7Cu;
label_200d7c:
    // 0x200d7c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x200d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x200d80: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x200d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x200d84: 0xc085538  jal         func_2154E0
    ctx->pc = 0x200D84u;
    SET_GPR_U32(ctx, 31, 0x200D8Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x200D84u, 0x200D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D8Cu;
label_200d8c:
    // 0x200d8c: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x200d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x200d90: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x200d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x200d94: 0xc094178  jal         func_2505E0
    ctx->pc = 0x200D94u;
    SET_GPR_U32(ctx, 31, 0x200D9Cu);
    ctx->pc = 0x2505E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2505E0u, 0x200D94u, 0x200D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D9Cu;
label_200d9c:
    // 0x200d9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x200d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x200da0: 0x1443005e  bne         $v0, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x200DA0u;
    {
        const bool branch_taken_0x200da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x200da0) {
            ctx->pc = 0x200F1Cu;
            goto label_200f1c;
        }
    }
    ctx->pc = 0x200DA8u;
    // 0x200da8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x200da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x200dac: 0xc09138c  jal         func_244E30
    ctx->pc = 0x200DACu;
    SET_GPR_U32(ctx, 31, 0x200DB4u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x200DACu, 0x200DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200DB4u;
label_200db4:
    // 0x200db4: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x200db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x200db8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x200db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200dbc: 0xc044da4  jal         func_113690
    ctx->pc = 0x200DBCu;
    SET_GPR_U32(ctx, 31, 0x200DC4u);
    ctx->pc = 0x113690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113690u, 0x200DBCu, 0x200DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200DC4u;
label_200dc4:
    // 0x200dc4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x200dc4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200dc8: 0x12e00054  beqz        $s7, . + 4 + (0x54 << 2)
    ctx->pc = 0x200DC8u;
    {
        const bool branch_taken_0x200dc8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x200dc8) {
            ctx->pc = 0x200F1Cu;
            goto label_200f1c;
        }
    }
    ctx->pc = 0x200DD0u;
    // 0x200dd0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x200dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200dd4: 0xc0457e0  jal         func_115F80
    ctx->pc = 0x200DD4u;
    SET_GPR_U32(ctx, 31, 0x200DDCu);
    ctx->pc = 0x115F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F80u, 0x200DD4u, 0x200DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200DDCu;
label_200ddc:
    // 0x200ddc: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x200ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x200de0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x200de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200de4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x200DE4u;
    {
        const bool branch_taken_0x200de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200de4) {
            ctx->pc = 0x200F10u;
            goto label_200f10;
        }
    }
    ctx->pc = 0x200DECu;
label_200dec:
    // 0x200dec: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x200decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x200df0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x200df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x200df4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x200df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x200df8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x200df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x200dfc: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x200dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x200e00: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x200E00u;
    SET_GPR_U32(ctx, 31, 0x200E08u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x200E00u, 0x200E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E08u;
label_200e08:
    // 0x200e08: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x200e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x200e0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x200e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e10: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x200E10u;
    SET_GPR_U32(ctx, 31, 0x200E18u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x200E10u, 0x200E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E18u;
label_200e18:
    // 0x200e18: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x200E18u;
    {
        const bool branch_taken_0x200e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200e18) {
            ctx->pc = 0x200F0Cu;
            goto label_200f0c;
        }
    }
    ctx->pc = 0x200E20u;
    // 0x200e20: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x200e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x200e24: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x200e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x200e28: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x200e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x200e2c: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x200e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
    // 0x200e30: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x200e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x200e34: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x200e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x200e38: 0x8c440158  lw          $a0, 0x158($v0)
    ctx->pc = 0x200e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x200e3c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x200e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x200e40: 0xc085538  jal         func_2154E0
    ctx->pc = 0x200E40u;
    SET_GPR_U32(ctx, 31, 0x200E48u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x200E40u, 0x200E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E48u;
label_200e48:
    // 0x200e48: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x200e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    // 0x200e4c: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x200e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x200e50: 0x8fa5017c  lw          $a1, 0x17C($sp)
    ctx->pc = 0x200e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x200e54: 0xc090f80  jal         func_243E00
    ctx->pc = 0x200E54u;
    SET_GPR_U32(ctx, 31, 0x200E5Cu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x200E54u, 0x200E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E5Cu;
label_200e5c:
    // 0x200e5c: 0x27a300e8  addiu       $v1, $sp, 0xE8
    ctx->pc = 0x200e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x200e60: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x200e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x200e64: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x200e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x200e68: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x200e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200e6c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x200e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200e70: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x200e70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x200e74: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x200e74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x200e78: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x200e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x200e7c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x200e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x200e80: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x200e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x200e84: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x200e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x200e88: 0xc085538  jal         func_2154E0
    ctx->pc = 0x200E88u;
    SET_GPR_U32(ctx, 31, 0x200E90u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x200E88u, 0x200E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E90u;
label_200e90:
    // 0x200e90: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x200e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x200e94: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x200e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x200e98: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x200e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x200e9c: 0xc090f80  jal         func_243E00
    ctx->pc = 0x200E9Cu;
    SET_GPR_U32(ctx, 31, 0x200EA4u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x200E9Cu, 0x200EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EA4u;
label_200ea4:
    // 0x200ea4: 0x27a300d8  addiu       $v1, $sp, 0xD8
    ctx->pc = 0x200ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x200ea8: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x200ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x200eac: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x200eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x200eb0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x200eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200eb4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x200eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200eb8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x200eb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x200ebc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x200ebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x200ec0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x200ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x200ec4: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x200ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200ec8: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x200ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200ecc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x200eccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x200ed0: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x200ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x200ed4: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x200ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200ed8: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x200ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200edc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x200edcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x200ee0: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x200ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x200ee4: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x200ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200ee8: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x200ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200eec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x200eecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x200ef0: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x200ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x200ef4: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x200ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x200ef8: 0xc104d24  jal         func_413490
    ctx->pc = 0x200EF8u;
    SET_GPR_U32(ctx, 31, 0x200F00u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x200EF8u, 0x200F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F00u;
label_200f00:
    // 0x200f00: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x200f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x200f04: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x200f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x200f08: 0xe4400148  swc1        $f0, 0x148($v0)
    ctx->pc = 0x200f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 328), bits); }
label_200f0c:
    // 0x200f0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x200f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_200f10:
    // 0x200f10: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x200f10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x200f14: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x200F14u;
    {
        const bool branch_taken_0x200f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200f14) {
            ctx->pc = 0x200DECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200dec;
        }
    }
    ctx->pc = 0x200F1Cu;
label_200f1c:
    // 0x200f1c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x200f1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_200f20:
    // 0x200f20: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x200f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f24: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x200F24u;
    SET_GPR_U32(ctx, 31, 0x200F2Cu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x200F24u, 0x200F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F2Cu;
label_200f2c:
    // 0x200f2c: 0x1662ff93  bne         $s3, $v0, . + 4 + (-0x6D << 2)
    ctx->pc = 0x200F2Cu;
    {
        const bool branch_taken_0x200f2c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x200f2c) {
            ctx->pc = 0x200D7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200d7c;
        }
    }
    ctx->pc = 0x200F34u;
    // 0x200f34: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x200f34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f38: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x200f38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200f3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x200f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200f40: 0x0  nop
    ctx->pc = 0x200f40u;
    // NOP
    // 0x200f44: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x200f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x200f48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x200f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f4c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x200F4Cu;
    {
        const bool branch_taken_0x200f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200f4c) {
            ctx->pc = 0x200FA0u;
            goto label_200fa0;
        }
    }
    ctx->pc = 0x200F54u;
label_200f54:
    // 0x200f54: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x200f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x200f58: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x200f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x200f5c: 0x8c420158  lw          $v0, 0x158($v0)
    ctx->pc = 0x200f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x200f60: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x200F60u;
    {
        const bool branch_taken_0x200f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200f60) {
            ctx->pc = 0x200FACu;
            goto label_200fac;
        }
    }
    ctx->pc = 0x200F68u;
    // 0x200f68: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x200f68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x200f6c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x200f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x200f70: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x200f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x200f74: 0xc4410148  lwc1        $f1, 0x148($v0)
    ctx->pc = 0x200f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200f78: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x200f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200f7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x200f7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200f80: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x200F80u;
    {
        const bool branch_taken_0x200f80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x200f80) {
            ctx->pc = 0x200F9Cu;
            goto label_200f9c;
        }
    }
    ctx->pc = 0x200F88u;
    // 0x200f88: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x200f88u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f8c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x200f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x200f90: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x200f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x200f94: 0xc4400148  lwc1        $f0, 0x148($v0)
    ctx->pc = 0x200f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200f98: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x200f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_200f9c:
    // 0x200f9c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x200f9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_200fa0:
    // 0x200fa0: 0x2e240003  sltiu       $a0, $s1, 0x3
    ctx->pc = 0x200fa0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x200fa4: 0x1480ffeb  bnez        $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x200FA4u;
    {
        const bool branch_taken_0x200fa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x200fa4) {
            ctx->pc = 0x200F54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200f54;
        }
    }
    ctx->pc = 0x200FACu;
label_200fac:
    // 0x200fac: 0x1280001f  beqz        $s4, . + 4 + (0x1F << 2)
    ctx->pc = 0x200FACu;
    {
        const bool branch_taken_0x200fac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x200fac) {
            ctx->pc = 0x20102Cu;
            goto label_20102c;
        }
    }
    ctx->pc = 0x200FB4u;
    // 0x200fb4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x200fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200fb8: 0x16c50008  bne         $s6, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x200FB8u;
    {
        const bool branch_taken_0x200fb8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 5));
        if (branch_taken_0x200fb8) {
            ctx->pc = 0x200FDCu;
            goto label_200fdc;
        }
    }
    ctx->pc = 0x200FC0u;
    // 0x200fc0: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x200FC0u;
    SET_GPR_U32(ctx, 31, 0x200FC8u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x200FC0u, 0x200FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200FC8u;
label_200fc8:
    // 0x200fc8: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x200fc8u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x200fcc: 0x2010  mfhi        $a0
    ctx->pc = 0x200fccu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x200fd0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x200fd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x200FD4u;
    {
        const bool branch_taken_0x200fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200fd4) {
            ctx->pc = 0x200FE0u;
            goto label_200fe0;
        }
    }
    ctx->pc = 0x200FDCu;
label_200fdc:
    // 0x200fdc: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x200fdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_200fe0:
    // 0x200fe0: 0x152880  sll         $a1, $s5, 2
    ctx->pc = 0x200fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x200fe4: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x200fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x200fe8: 0xc4400138  lwc1        $f0, 0x138($v0)
    ctx->pc = 0x200fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200fec: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x200fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x200ff0: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x200ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x200ff4: 0x152880  sll         $a1, $s5, 2
    ctx->pc = 0x200ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x200ff8: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x200ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x200ffc: 0x8c440158  lw          $a0, 0x158($v0)
    ctx->pc = 0x200ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x201000: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x201000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x201004: 0xc085538  jal         func_2154E0
    ctx->pc = 0x201004u;
    SET_GPR_U32(ctx, 31, 0x20100Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x201004u, 0x20100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20100Cu;
label_20100c:
    // 0x20100c: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x20100cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x201010: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x201010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x201014: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x201014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x201018: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x201018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x20101c: 0xc090f6c  jal         func_243DB0
    ctx->pc = 0x20101Cu;
    SET_GPR_U32(ctx, 31, 0x201024u);
    ctx->pc = 0x243DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243DB0u, 0x20101Cu, 0x201024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201024u;
label_201024:
    // 0x201024: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x201024u;
    {
        const bool branch_taken_0x201024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201024) {
            ctx->pc = 0x201094u;
            goto label_201094;
        }
    }
    ctx->pc = 0x20102Cu;
label_20102c:
    // 0x20102c: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x20102cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x201030: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x201030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201034: 0xc0913e4  jal         func_244F90
    ctx->pc = 0x201034u;
    SET_GPR_U32(ctx, 31, 0x20103Cu);
    ctx->pc = 0x244F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F90u, 0x201034u, 0x20103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20103Cu;
label_20103c:
    // 0x20103c: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x20103cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x201040: 0x8fb2016c  lw          $s2, 0x16C($sp)
    ctx->pc = 0x201040u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x201044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x201044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201048: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x201048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20104c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x20104Cu;
    SET_GPR_U32(ctx, 31, 0x201054u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x20104Cu, 0x201054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201054u;
label_201054:
    // 0x201054: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x201054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x201058: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x201058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x20105c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20105cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201060: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x201060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x201064: 0xc0b754c  jal         func_2DD530
    ctx->pc = 0x201064u;
    SET_GPR_U32(ctx, 31, 0x20106Cu);
    ctx->pc = 0x2DD530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD530u, 0x201064u, 0x20106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20106Cu;
label_20106c:
    // 0x20106c: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x20106cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x201070: 0x24a200c0  addiu       $v0, $a1, 0xC0
    ctx->pc = 0x201070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x201074: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x201074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201078: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x201078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x20107c: 0xc041d58  jal         func_107560
    ctx->pc = 0x20107Cu;
    SET_GPR_U32(ctx, 31, 0x201084u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x20107Cu, 0x201084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201084u;
label_201084:
    // 0x201084: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x201084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
    // 0x201088: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x201088u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20108c: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x20108cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x201090: 0xe4a000d4  swc1        $f0, 0xD4($a1)
    ctx->pc = 0x201090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 212), bits); }
label_201094:
    // 0x201094: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x201094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x201098: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x201098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20109c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x20109cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2010a0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2010A0u;
    SET_GPR_U32(ctx, 31, 0x2010A8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2010A0u, 0x2010A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2010A8u;
label_2010a8:
    // 0x2010a8: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2010a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2010ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2010acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2010b0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2010B0u;
    SET_GPR_U32(ctx, 31, 0x2010B8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2010B0u, 0x2010B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2010B8u;
label_2010b8:
    // 0x2010b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2010b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2010bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2010bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2010c0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2010C0u;
    SET_GPR_U32(ctx, 31, 0x2010C8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2010C0u, 0x2010C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2010C8u;
label_2010c8:
    // 0x2010c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2010c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2010cc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2010ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2010d0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2010d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2010d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2010d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2010d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2010d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2010dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2010dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2010e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2010e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2010e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2010e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2010e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2010e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2010ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2010ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2010f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2010f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2010f4: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x2010f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2010f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2010F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2010F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201100u;
}
