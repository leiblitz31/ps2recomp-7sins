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

// Function: sub_003867F0
// Address: 0x3867f0 - 0x386b90
void sub_003867F0_0x3867f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003867F0_0x3867f0");
#endif

    switch (ctx->pc) {
        case 0x386838u: goto label_386838;
        case 0x386870u: goto label_386870;
        case 0x38688cu: goto label_38688c;
        case 0x38689cu: goto label_38689c;
        case 0x3868d0u: goto label_3868d0;
        case 0x3868e0u: goto label_3868e0;
        case 0x386940u: goto label_386940;
        case 0x386974u: goto label_386974;
        case 0x386980u: goto label_386980;
        case 0x3869a0u: goto label_3869a0;
        case 0x3869bcu: goto label_3869bc;
        case 0x3869f0u: goto label_3869f0;
        case 0x3869fcu: goto label_3869fc;
        case 0x386a18u: goto label_386a18;
        case 0x386a40u: goto label_386a40;
        case 0x386a74u: goto label_386a74;
        case 0x386a80u: goto label_386a80;
        case 0x386aa0u: goto label_386aa0;
        case 0x386abcu: goto label_386abc;
        case 0x386af0u: goto label_386af0;
        case 0x386afcu: goto label_386afc;
        case 0x386b18u: goto label_386b18;
        case 0x386b4cu: goto label_386b4c;
        case 0x386b5cu: goto label_386b5c;
        default: break;
    }

    ctx->pc = 0x3867f0u;

label_3867f0:
    // 0x3867f0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3867f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x3867f4: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x3867f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x3867f8: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x3867f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x3867fc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3867fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386800: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x386800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x386804: 0x27a70084  addiu       $a3, $sp, 0x84
    ctx->pc = 0x386804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x386808: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x386808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x38680c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38680cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386810: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x386810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x386814: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x386814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386818: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x386818u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38681c: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x38681cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x386820: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x386820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x386824: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x386824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x386828: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x386828u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38682c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38682cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x386830: 0xc103322  jal         func_40CC88
    ctx->pc = 0x386830u;
    SET_GPR_U32(ctx, 31, 0x386838u);
    ctx->pc = 0x386834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386830u;
    // 0x386834: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x386830u, 0x386838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386838u;
label_386838:
    // 0x386838: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x386838u;
    {
        const bool branch_taken_0x386838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386838u;
        // 0x38683c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386838) {
            ctx->pc = 0x3868E0u;
            goto label_3868e0;
        }
    }
    ctx->pc = 0x386840u;
    // 0x386840: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x386840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x386844: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x386844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x386848: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x386848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x38684c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38684cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x386850: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x386850u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x386854: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x386854u;
    {
        const bool branch_taken_0x386854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x386854) {
            ctx->pc = 0x386858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386854u;
            // 0x386858: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386880u;
            goto label_386880;
        }
    }
    ctx->pc = 0x38685Cu;
    // 0x38685c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38685cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x386860: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x386860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x386864: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x386864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x386868: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x386868u;
    SET_GPR_U32(ctx, 31, 0x386870u);
    ctx->pc = 0x38686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386868u;
    // 0x38686c: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x386868u, 0x386870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386870u;
label_386870:
    // 0x386870: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x386870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x386874: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x386874u;
    {
        const bool branch_taken_0x386874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386874u;
        // 0x386878: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386874) {
            ctx->pc = 0x3868D8u;
            goto label_3868d8;
        }
    }
    ctx->pc = 0x38687Cu;
    // 0x38687c: 0x0  nop
    ctx->pc = 0x38687cu;
    // NOP
label_386880:
    // 0x386880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x386880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386884: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x386884u;
    SET_GPR_U32(ctx, 31, 0x38688Cu);
    ctx->pc = 0x386888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386884u;
    // 0x386888: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x386884u, 0x38688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38688Cu;
label_38688c:
    // 0x38688c: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x38688cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x386890: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x386890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386894: 0xc10480a  jal         func_412028
    ctx->pc = 0x386894u;
    SET_GPR_U32(ctx, 31, 0x38689Cu);
    ctx->pc = 0x386898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386894u;
    // 0x386898: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x386894u, 0x38689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38689Cu;
label_38689c:
    // 0x38689c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x38689cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3868a0: 0x144300b0  bne         $v0, $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x3868A0u;
    {
        const bool branch_taken_0x3868a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3868A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3868A0u;
        // 0x3868a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3868a0) {
            ctx->pc = 0x386B64u;
            goto label_386b64;
        }
    }
    ctx->pc = 0x3868A8u;
    // 0x3868a8: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x3868a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3868ac: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x3868acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x3868b0: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x3868B0u;
    {
        const bool branch_taken_0x3868b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3868B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3868B0u;
        // 0x3868b4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3868b0) {
            ctx->pc = 0x3868E8u;
            goto label_3868e8;
        }
    }
    ctx->pc = 0x3868B8u;
    // 0x3868b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3868b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3868bc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3868bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3868c0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3868c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x3868c4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3868c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3868c8: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3868C8u;
    SET_GPR_U32(ctx, 31, 0x3868D0u);
    ctx->pc = 0x3868CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3868C8u;
    // 0x3868cc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3868C8u, 0x3868D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3868D0u;
label_3868d0:
    // 0x3868d0: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3868d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x3868d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3868d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3868d8:
    // 0x3868d8: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x3868D8u;
    SET_GPR_U32(ctx, 31, 0x3868E0u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3868D8u, 0x3868E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3868E0u;
label_3868e0:
    // 0x3868e0: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x3868E0u;
    {
        const bool branch_taken_0x3868e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3868E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3868E0u;
        // 0x3868e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3868e0) {
            ctx->pc = 0x386B64u;
            goto label_386b64;
        }
    }
    ctx->pc = 0x3868E8u;
label_3868e8:
    // 0x3868e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3868e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3868ec: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3868ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3868f0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3868f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3868f4: 0x2831824  and         $v1, $s4, $v1
    ctx->pc = 0x3868f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
    // 0x3868f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3868f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3868fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3868FCu;
    {
        const bool branch_taken_0x3868fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x386900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3868FCu;
        // 0x386900: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3868fc) {
            ctx->pc = 0x386914u;
            goto label_386914;
        }
    }
    ctx->pc = 0x386904u;
    // 0x386904: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x386904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x386908: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x386908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x38690c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38690Cu;
    {
        const bool branch_taken_0x38690c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38690Cu;
        // 0x386910: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38690c) {
            ctx->pc = 0x386920u;
            goto label_386920;
        }
    }
    ctx->pc = 0x386914u;
label_386914:
    // 0x386914: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x386914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x386918: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x386918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x38691c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x38691cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_386920:
    // 0x386920: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x386920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x386924: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x386924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x386928: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x386928u;
    {
        const bool branch_taken_0x386928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386928u;
        // 0x38692c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386928) {
            ctx->pc = 0x3869ACu;
            goto label_3869ac;
        }
    }
    ctx->pc = 0x386930u;
    // 0x386930: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x386930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x386934: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x386934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386938: 0xc103322  jal         func_40CC88
    ctx->pc = 0x386938u;
    SET_GPR_U32(ctx, 31, 0x386940u);
    ctx->pc = 0x38693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386938u;
    // 0x38693c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x386938u, 0x386940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386940u;
label_386940:
    // 0x386940: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x386940u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x386944: 0x12000078  beqz        $s0, . + 4 + (0x78 << 2)
    ctx->pc = 0x386944u;
    {
        const bool branch_taken_0x386944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x386948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386944u;
        // 0x386948: 0x8fa30084  lw          $v1, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386944) {
            ctx->pc = 0x386B28u;
            goto label_386b28;
        }
    }
    ctx->pc = 0x38694Cu;
    // 0x38694c: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x38694cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x386950: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x386950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x386954: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x386954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x386958: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x386958u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x38695c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x38695Cu;
    {
        const bool branch_taken_0x38695c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x386960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38695Cu;
        // 0x386960: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38695c) {
            ctx->pc = 0x386988u;
            goto label_386988;
        }
    }
    ctx->pc = 0x386964u;
    // 0x386964: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x386964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x386968: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x386968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x38696c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x38696Cu;
    SET_GPR_U32(ctx, 31, 0x386974u);
    ctx->pc = 0x386970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38696Cu;
    // 0x386970: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x38696Cu, 0x386974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386974u;
label_386974:
    // 0x386974: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x386974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x386978: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x386978u;
    SET_GPR_U32(ctx, 31, 0x386980u);
    ctx->pc = 0x38697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386978u;
    // 0x38697c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x386978u, 0x386980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386980u;
label_386980:
    // 0x386980: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x386980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386984: 0x0  nop
    ctx->pc = 0x386984u;
    // NOP
label_386988:
    // 0x386988: 0x12000067  beqz        $s0, . + 4 + (0x67 << 2)
    ctx->pc = 0x386988u;
    {
        const bool branch_taken_0x386988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386988u;
        // 0x38698c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386988) {
            ctx->pc = 0x386B28u;
            goto label_386b28;
        }
    }
    ctx->pc = 0x386990u;
    // 0x386990: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x386990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386994: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x386994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386998: 0xc0e17fc  jal         func_385FF0
    ctx->pc = 0x386998u;
    SET_GPR_U32(ctx, 31, 0x3869A0u);
    ctx->pc = 0x38699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386998u;
    // 0x38699c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385FF0u, 0x386998u, 0x3869A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3869A0u;
label_3869a0:
    // 0x3869a0: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x3869a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x3869a4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3869A4u;
    {
        const bool branch_taken_0x3869a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3869A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3869A4u;
        // 0x3869a8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3869a4) {
            ctx->pc = 0x386A20u;
            goto label_386a20;
        }
    }
    ctx->pc = 0x3869ACu;
label_3869ac:
    // 0x3869ac: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3869acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3869b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3869b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3869b4: 0xc103322  jal         func_40CC88
    ctx->pc = 0x3869B4u;
    SET_GPR_U32(ctx, 31, 0x3869BCu);
    ctx->pc = 0x3869B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3869B4u;
    // 0x3869b8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3869B4u, 0x3869BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3869BCu;
label_3869bc:
    // 0x3869bc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x3869bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x3869c0: 0x12000059  beqz        $s0, . + 4 + (0x59 << 2)
    ctx->pc = 0x3869C0u;
    {
        const bool branch_taken_0x3869c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3869C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3869C0u;
        // 0x3869c4: 0x8fa30084  lw          $v1, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3869c0) {
            ctx->pc = 0x386B28u;
            goto label_386b28;
        }
    }
    ctx->pc = 0x3869C8u;
    // 0x3869c8: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x3869c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x3869cc: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x3869ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x3869d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3869d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3869d4: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x3869d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x3869d8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3869D8u;
    {
        const bool branch_taken_0x3869d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3869DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3869D8u;
        // 0x3869dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3869d8) {
            ctx->pc = 0x386A00u;
            goto label_386a00;
        }
    }
    ctx->pc = 0x3869E0u;
    // 0x3869e0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3869e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3869e4: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x3869e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x3869e8: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3869E8u;
    SET_GPR_U32(ctx, 31, 0x3869F0u);
    ctx->pc = 0x3869ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3869E8u;
    // 0x3869ec: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3869E8u, 0x3869F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3869F0u;
label_3869f0:
    // 0x3869f0: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x3869f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x3869f4: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x3869F4u;
    SET_GPR_U32(ctx, 31, 0x3869FCu);
    ctx->pc = 0x3869F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3869F4u;
    // 0x3869f8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3869F4u, 0x3869FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3869FCu;
label_3869fc:
    // 0x3869fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3869fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386a00:
    // 0x386a00: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
    ctx->pc = 0x386A00u;
    {
        const bool branch_taken_0x386a00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x386A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A00u;
        // 0x386a04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386a00) {
            ctx->pc = 0x386B28u;
            goto label_386b28;
        }
    }
    ctx->pc = 0x386A08u;
    // 0x386a08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x386a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386a0c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x386a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386a10: 0xc0e19fc  jal         func_3867F0
    ctx->pc = 0x386A10u;
    SET_GPR_U32(ctx, 31, 0x386A18u);
    ctx->pc = 0x386A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386A10u;
    // 0x386a14: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3867F0u;
    goto label_3867f0;
    ctx->pc = 0x386A18u;
label_386a18:
    // 0x386a18: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x386a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x386a1c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x386a1cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_386a20:
    // 0x386a20: 0x12000041  beqz        $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x386A20u;
    {
        const bool branch_taken_0x386a20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x386A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A20u;
        // 0x386a24: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386a20) {
            ctx->pc = 0x386B28u;
            goto label_386b28;
        }
    }
    ctx->pc = 0x386A28u;
    // 0x386a28: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x386A28u;
    {
        const bool branch_taken_0x386a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A28u;
        // 0x386a2c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386a28) {
            ctx->pc = 0x386AACu;
            goto label_386aac;
        }
    }
    ctx->pc = 0x386A30u;
    // 0x386a30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x386a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386a34: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x386a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x386a38: 0xc103322  jal         func_40CC88
    ctx->pc = 0x386A38u;
    SET_GPR_U32(ctx, 31, 0x386A40u);
    ctx->pc = 0x386A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386A38u;
    // 0x386a3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x386A38u, 0x386A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386A40u;
label_386a40:
    // 0x386a40: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x386a40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x386a44: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x386A44u;
    {
        const bool branch_taken_0x386a44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x386A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A44u;
        // 0x386a48: 0x8fa30084  lw          $v1, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386a44) {
            ctx->pc = 0x386B28u;
            goto label_386b28;
        }
    }
    ctx->pc = 0x386A4Cu;
    // 0x386a4c: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x386a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x386a50: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x386a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x386a54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x386a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x386a58: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x386a58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x386a5c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x386A5Cu;
    {
        const bool branch_taken_0x386a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x386A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A5Cu;
        // 0x386a60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386a5c) {
            ctx->pc = 0x386A88u;
            goto label_386a88;
        }
    }
    ctx->pc = 0x386A64u;
    // 0x386a64: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x386a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x386a68: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x386a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x386a6c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x386A6Cu;
    SET_GPR_U32(ctx, 31, 0x386A74u);
    ctx->pc = 0x386A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386A6Cu;
    // 0x386a70: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x386A6Cu, 0x386A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386A74u;
label_386a74:
    // 0x386a74: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x386a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x386a78: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x386A78u;
    SET_GPR_U32(ctx, 31, 0x386A80u);
    ctx->pc = 0x386A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386A78u;
    // 0x386a7c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x386A78u, 0x386A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386A80u;
label_386a80:
    // 0x386a80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x386a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386a84: 0x0  nop
    ctx->pc = 0x386a84u;
    // NOP
label_386a88:
    // 0x386a88: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x386A88u;
    {
        const bool branch_taken_0x386a88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x386A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A88u;
        // 0x386a8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386a88) {
            ctx->pc = 0x386B28u;
            goto label_386b28;
        }
    }
    ctx->pc = 0x386A90u;
    // 0x386a90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x386a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386a94: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x386a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386a98: 0xc0e17fc  jal         func_385FF0
    ctx->pc = 0x386A98u;
    SET_GPR_U32(ctx, 31, 0x386AA0u);
    ctx->pc = 0x386A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386A98u;
    // 0x386a9c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385FF0u, 0x386A98u, 0x386AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386AA0u;
label_386aa0:
    // 0x386aa0: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x386aa0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x386aa4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x386AA4u;
    {
        const bool branch_taken_0x386aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386AA4u;
        // 0x386aa8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386aa4) {
            ctx->pc = 0x386B20u;
            goto label_386b20;
        }
    }
    ctx->pc = 0x386AACu;
label_386aac:
    // 0x386aac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x386aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386ab0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x386ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x386ab4: 0xc103322  jal         func_40CC88
    ctx->pc = 0x386AB4u;
    SET_GPR_U32(ctx, 31, 0x386ABCu);
    ctx->pc = 0x386AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386AB4u;
    // 0x386ab8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x386AB4u, 0x386ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386ABCu;
label_386abc:
    // 0x386abc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x386abcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x386ac0: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x386AC0u;
    {
        const bool branch_taken_0x386ac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x386AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386AC0u;
        // 0x386ac4: 0x8fa30084  lw          $v1, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386ac0) {
            ctx->pc = 0x386B28u;
            goto label_386b28;
        }
    }
    ctx->pc = 0x386AC8u;
    // 0x386ac8: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x386ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x386acc: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x386accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x386ad0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x386ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x386ad4: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x386ad4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x386ad8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x386AD8u;
    {
        const bool branch_taken_0x386ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x386ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386AD8u;
        // 0x386adc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386ad8) {
            ctx->pc = 0x386B00u;
            goto label_386b00;
        }
    }
    ctx->pc = 0x386AE0u;
    // 0x386ae0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x386ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x386ae4: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x386ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x386ae8: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x386AE8u;
    SET_GPR_U32(ctx, 31, 0x386AF0u);
    ctx->pc = 0x386AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386AE8u;
    // 0x386aec: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x386AE8u, 0x386AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386AF0u;
label_386af0:
    // 0x386af0: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x386af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x386af4: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x386AF4u;
    SET_GPR_U32(ctx, 31, 0x386AFCu);
    ctx->pc = 0x386AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386AF4u;
    // 0x386af8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x386AF4u, 0x386AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386AFCu;
label_386afc:
    // 0x386afc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x386afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386b00:
    // 0x386b00: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x386B00u;
    {
        const bool branch_taken_0x386b00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x386B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B00u;
        // 0x386b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386b00) {
            ctx->pc = 0x386B28u;
            goto label_386b28;
        }
    }
    ctx->pc = 0x386B08u;
    // 0x386b08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x386b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386b0c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x386b0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386b10: 0xc0e19fc  jal         func_3867F0
    ctx->pc = 0x386B10u;
    SET_GPR_U32(ctx, 31, 0x386B18u);
    ctx->pc = 0x386B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386B10u;
    // 0x386b14: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3867F0u;
    goto label_3867f0;
    ctx->pc = 0x386B18u;
label_386b18:
    // 0x386b18: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x386b18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x386b1c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x386b1cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_386b20:
    // 0x386b20: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x386B20u;
    {
        const bool branch_taken_0x386b20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x386B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B20u;
        // 0x386b24: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386b20) {
            ctx->pc = 0x386B64u;
            goto label_386b64;
        }
    }
    ctx->pc = 0x386B28u;
label_386b28:
    // 0x386b28: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x386b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x386b2c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x386B2Cu;
    {
        const bool branch_taken_0x386b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x386B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B2Cu;
        // 0x386b30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386b2c) {
            ctx->pc = 0x386B64u;
            goto label_386b64;
        }
    }
    ctx->pc = 0x386B34u;
    // 0x386b34: 0x92a20003  lbu         $v0, 0x3($s5)
    ctx->pc = 0x386b34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x386b38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x386b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x386b3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x386B3Cu;
    {
        const bool branch_taken_0x386b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x386b3c) {
            ctx->pc = 0x386B54u;
            goto label_386b54;
        }
    }
    ctx->pc = 0x386B44u;
    // 0x386b44: 0xc0e6796  jal         func_399E58
    ctx->pc = 0x386B44u;
    SET_GPR_U32(ctx, 31, 0x386B4Cu);
    ctx->pc = 0x399E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E58u, 0x386B44u, 0x386B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386B4Cu;
label_386b4c:
    // 0x386b4c: 0x1000ff64  b           . + 4 + (-0x9C << 2)
    ctx->pc = 0x386B4Cu;
    {
        const bool branch_taken_0x386b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B4Cu;
        // 0x386b50: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386b4c) {
            ctx->pc = 0x3868E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3868e0;
        }
    }
    ctx->pc = 0x386B54u;
label_386b54:
    // 0x386b54: 0xc0e6490  jal         func_399240
    ctx->pc = 0x386B54u;
    SET_GPR_U32(ctx, 31, 0x386B5Cu);
    ctx->pc = 0x399240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399240u, 0x386B54u, 0x386B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386B5Cu;
label_386b5c:
    // 0x386b5c: 0x1000ff60  b           . + 4 + (-0xA0 << 2)
    ctx->pc = 0x386B5Cu;
    {
        const bool branch_taken_0x386b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B5Cu;
        // 0x386b60: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386b5c) {
            ctx->pc = 0x3868E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3868e0;
        }
    }
    ctx->pc = 0x386B64u;
label_386b64:
    // 0x386b64: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x386b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x386b68: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x386b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x386b6c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x386b6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x386b70: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x386b70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x386b74: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x386b74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x386b78: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x386b78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x386b7c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x386b7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x386b80: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x386b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x386b84: 0x3e00008  jr          $ra
    ctx->pc = 0x386B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B84u;
        // 0x386b88: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386B8Cu;
    // 0x386b8c: 0x0  nop
    ctx->pc = 0x386b8cu;
    // NOP
    ctx->pc = 0x386b90u;
}
