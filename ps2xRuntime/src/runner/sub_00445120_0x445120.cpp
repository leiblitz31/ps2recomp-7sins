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

// Function: sub_00445120
// Address: 0x445120 - 0x445410
void sub_00445120_0x445120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00445120_0x445120");
#endif

    switch (ctx->pc) {
        case 0x4451b8u: goto label_4451b8;
        case 0x44520cu: goto label_44520c;
        case 0x445258u: goto label_445258;
        case 0x445298u: goto label_445298;
        case 0x4452c8u: goto label_4452c8;
        case 0x445314u: goto label_445314;
        case 0x44535cu: goto label_44535c;
        case 0x4453a4u: goto label_4453a4;
        default: break;
    }

    ctx->pc = 0x445120u;

    // 0x445120: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x445120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x445124: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x445124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x445128: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x445128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x44512c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x44512cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x445130: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x445130u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445134: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x445134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x445138: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x445138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44513c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x44513cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x445140: 0x27c50014  addiu       $a1, $fp, 0x14
    ctx->pc = 0x445140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x445144: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x445144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x445148: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x445148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44514c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x44514cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x445150: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x445150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x445154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x445154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x445158: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x445158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x44515c: 0x97d70002  lhu         $s7, 0x2($fp)
    ctx->pc = 0x44515cu;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x445160: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x445160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x445164: 0x171023  negu        $v0, $s7
    ctx->pc = 0x445164u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x445168: 0x30460003  andi        $a2, $v0, 0x3
    ctx->pc = 0x445168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x44516c: 0x10c00043  beqz        $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x44516Cu;
    {
        const bool branch_taken_0x44516c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x445170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44516Cu;
        // 0x445170: 0xac640010  sw          $a0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44516c) {
            ctx->pc = 0x44527Cu;
            goto label_44527c;
        }
    }
    ctx->pc = 0x445174u;
    // 0x445174: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x445174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x445178: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x445178u;
    {
        const bool branch_taken_0x445178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445178u;
        // 0x44517c: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x445178) {
            ctx->pc = 0x445228u;
            goto label_445228;
        }
    }
    ctx->pc = 0x445180u;
    // 0x445180: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x445180u;
    {
        const bool branch_taken_0x445180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x445180) {
            ctx->pc = 0x445184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x445180u;
            // 0x445184: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4451E0u;
            goto label_4451e0;
        }
    }
    ctx->pc = 0x445188u;
    // 0x445188: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x445188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x44518c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x44518Cu;
    {
        const bool branch_taken_0x44518c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44518c) {
            ctx->pc = 0x445190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44518Cu;
            // 0x445190: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4451D4u;
            goto label_4451d4;
        }
    }
    ctx->pc = 0x445194u;
    // 0x445194: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x445194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x445198: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x445198u;
    {
        const bool branch_taken_0x445198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x445198) {
            ctx->pc = 0x44519Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x445198u;
            // 0x44519c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4451C0u;
            goto label_4451c0;
        }
    }
    ctx->pc = 0x4451A0u;
    // 0x4451a0: 0x97c20014  lhu         $v0, 0x14($fp)
    ctx->pc = 0x4451a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x4451a4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4451a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4451a8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4451A8u;
    {
        const bool branch_taken_0x4451a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4451a8) {
            ctx->pc = 0x4451ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4451A8u;
            // 0x4451ac: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4451C0u;
            goto label_4451c0;
        }
    }
    ctx->pc = 0x4451B0u;
    // 0x4451b0: 0xc112fc8  jal         func_44BF20
    ctx->pc = 0x4451B0u;
    SET_GPR_U32(ctx, 31, 0x4451B8u);
    ctx->pc = 0x4451B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4451B0u;
    // 0x4451b4: 0x8f84af20  lw          $a0, -0x50E0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BF20u, 0x4451B0u, 0x4451B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4451B8u;
label_4451b8:
    // 0x4451b8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4451b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x4451bc: 0x0  nop
    ctx->pc = 0x4451bcu;
    // NOP
label_4451c0:
    // 0x4451c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4451c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x4451c4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4451c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x4451c8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x4451c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x4451cc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x4451ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x4451d0: 0x2610001c  addiu       $s0, $s0, 0x1C
    ctx->pc = 0x4451d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_4451d4:
    // 0x4451d4: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x4451d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x4451d8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4451d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4451dc: 0x0  nop
    ctx->pc = 0x4451dcu;
    // NOP
label_4451e0:
    // 0x4451e0: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x4451E0u;
    {
        const bool branch_taken_0x4451e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4451e0) {
            ctx->pc = 0x4451E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4451E0u;
            // 0x4451e4: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445224u;
            goto label_445224;
        }
    }
    ctx->pc = 0x4451E8u;
    // 0x4451e8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4451e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4451ec: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4451ECu;
    {
        const bool branch_taken_0x4451ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4451ec) {
            ctx->pc = 0x4451F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4451ECu;
            // 0x4451f0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445210u;
            goto label_445210;
        }
    }
    ctx->pc = 0x4451F4u;
    // 0x4451f4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4451f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4451f8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4451f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4451fc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4451FCu;
    {
        const bool branch_taken_0x4451fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4451fc) {
            ctx->pc = 0x445200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4451FCu;
            // 0x445200: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445210u;
            goto label_445210;
        }
    }
    ctx->pc = 0x445204u;
    // 0x445204: 0xc112fc8  jal         func_44BF20
    ctx->pc = 0x445204u;
    SET_GPR_U32(ctx, 31, 0x44520Cu);
    ctx->pc = 0x445208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445204u;
    // 0x445208: 0x8f84af20  lw          $a0, -0x50E0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BF20u, 0x445204u, 0x44520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44520Cu;
label_44520c:
    // 0x44520c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x44520cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_445210:
    // 0x445210: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x445210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x445214: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x445214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x445218: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x445218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x44521c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x44521cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x445220: 0x2610001c  addiu       $s0, $s0, 0x1C
    ctx->pc = 0x445220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_445224:
    // 0x445224: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x445224u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_445228:
    // 0x445228: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x445228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x44522c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x44522Cu;
    {
        const bool branch_taken_0x44522c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44522c) {
            ctx->pc = 0x445230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44522Cu;
            // 0x445230: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445274u;
            goto label_445274;
        }
    }
    ctx->pc = 0x445234u;
    // 0x445234: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x445234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x445238: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x445238u;
    {
        const bool branch_taken_0x445238 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x445238) {
            ctx->pc = 0x44523Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x445238u;
            // 0x44523c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445260u;
            goto label_445260;
        }
    }
    ctx->pc = 0x445240u;
    // 0x445240: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x445240u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x445244: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x445244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x445248: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x445248u;
    {
        const bool branch_taken_0x445248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x445248) {
            ctx->pc = 0x44524Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x445248u;
            // 0x44524c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445260u;
            goto label_445260;
        }
    }
    ctx->pc = 0x445250u;
    // 0x445250: 0xc112fc8  jal         func_44BF20
    ctx->pc = 0x445250u;
    SET_GPR_U32(ctx, 31, 0x445258u);
    ctx->pc = 0x445254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445250u;
    // 0x445254: 0x8f84af20  lw          $a0, -0x50E0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BF20u, 0x445250u, 0x445258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445258u;
label_445258:
    // 0x445258: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x445258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x44525c: 0x0  nop
    ctx->pc = 0x44525cu;
    // NOP
label_445260:
    // 0x445260: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x445260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x445264: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x445264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x445268: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x445268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x44526c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x44526cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x445270: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x445270u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_445274:
    // 0x445274: 0x12e00059  beqz        $s7, . + 4 + (0x59 << 2)
    ctx->pc = 0x445274u;
    {
        const bool branch_taken_0x445274 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x445278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445274u;
        // 0x445278: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445274) {
            ctx->pc = 0x4453DCu;
            goto label_4453dc;
        }
    }
    ctx->pc = 0x44527Cu;
label_44527c:
    // 0x44527c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x44527cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445280: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x445280u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445284: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x445284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445288: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x445288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44528c: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x44528cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445290: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x445290u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x445294: 0x0  nop
    ctx->pc = 0x445294u;
    // NOP
label_445298:
    // 0x445298: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x445298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x44529c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x44529Cu;
    {
        const bool branch_taken_0x44529c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44529c) {
            ctx->pc = 0x4452A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44529Cu;
            // 0x4452a0: 0x8ea20030  lw          $v0, 0x30($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4452E8u;
            goto label_4452e8;
        }
    }
    ctx->pc = 0x4452A4u;
    // 0x4452a4: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x4452a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x4452a8: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4452A8u;
    {
        const bool branch_taken_0x4452a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4452a8) {
            ctx->pc = 0x4452ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4452A8u;
            // 0x4452ac: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4452D0u;
            goto label_4452d0;
        }
    }
    ctx->pc = 0x4452B0u;
    // 0x4452b0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4452b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4452b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4452b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4452b8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4452B8u;
    {
        const bool branch_taken_0x4452b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4452b8) {
            ctx->pc = 0x4452BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4452B8u;
            // 0x4452bc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4452D0u;
            goto label_4452d0;
        }
    }
    ctx->pc = 0x4452C0u;
    // 0x4452c0: 0xc112fc8  jal         func_44BF20
    ctx->pc = 0x4452C0u;
    SET_GPR_U32(ctx, 31, 0x4452C8u);
    ctx->pc = 0x4452C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4452C0u;
    // 0x4452c4: 0x8f84af20  lw          $a0, -0x50E0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BF20u, 0x4452C0u, 0x4452C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4452C8u;
label_4452c8:
    // 0x4452c8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4452c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x4452cc: 0x0  nop
    ctx->pc = 0x4452ccu;
    // NOP
label_4452d0:
    // 0x4452d0: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x4452d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x4452d4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x4452d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x4452d8: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x4452d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
    // 0x4452dc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x4452dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x4452e0: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x4452e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x4452e4: 0x0  nop
    ctx->pc = 0x4452e4u;
    // NOP
label_4452e8:
    // 0x4452e8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x4452E8u;
    {
        const bool branch_taken_0x4452e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4452e8) {
            ctx->pc = 0x4452ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4452E8u;
            // 0x4452ec: 0x8ea2004c  lw          $v0, 0x4C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445330u;
            goto label_445330;
        }
    }
    ctx->pc = 0x4452F0u;
    // 0x4452f0: 0x8ec50020  lw          $a1, 0x20($s6)
    ctx->pc = 0x4452f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x4452f4: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4452F4u;
    {
        const bool branch_taken_0x4452f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4452f4) {
            ctx->pc = 0x4452F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4452F4u;
            // 0x4452f8: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445318u;
            goto label_445318;
        }
    }
    ctx->pc = 0x4452FCu;
    // 0x4452fc: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x4452fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x445300: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x445300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x445304: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x445304u;
    {
        const bool branch_taken_0x445304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x445304) {
            ctx->pc = 0x445308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x445304u;
            // 0x445308: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445318u;
            goto label_445318;
        }
    }
    ctx->pc = 0x44530Cu;
    // 0x44530c: 0xc112fc8  jal         func_44BF20
    ctx->pc = 0x44530Cu;
    SET_GPR_U32(ctx, 31, 0x445314u);
    ctx->pc = 0x445310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44530Cu;
    // 0x445310: 0x8f84af20  lw          $a0, -0x50E0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BF20u, 0x44530Cu, 0x445314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445314u;
label_445314:
    // 0x445314: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x445314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_445318:
    // 0x445318: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x445318u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
    // 0x44531c: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x44531cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x445320: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x445320u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
    // 0x445324: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x445324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x445328: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x445328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x44532c: 0x0  nop
    ctx->pc = 0x44532cu;
    // NOP
label_445330:
    // 0x445330: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x445330u;
    {
        const bool branch_taken_0x445330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x445330) {
            ctx->pc = 0x445334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x445330u;
            // 0x445334: 0x8ea20068  lw          $v0, 0x68($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445378u;
            goto label_445378;
        }
    }
    ctx->pc = 0x445338u;
    // 0x445338: 0x8ec5003c  lw          $a1, 0x3C($s6)
    ctx->pc = 0x445338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
    // 0x44533c: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x44533Cu;
    {
        const bool branch_taken_0x44533c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x44533c) {
            ctx->pc = 0x445340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44533Cu;
            // 0x445340: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445360u;
            goto label_445360;
        }
    }
    ctx->pc = 0x445344u;
    // 0x445344: 0x96020038  lhu         $v0, 0x38($s0)
    ctx->pc = 0x445344u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x445348: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x445348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x44534c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x44534Cu;
    {
        const bool branch_taken_0x44534c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44534c) {
            ctx->pc = 0x445350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44534Cu;
            // 0x445350: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445360u;
            goto label_445360;
        }
    }
    ctx->pc = 0x445354u;
    // 0x445354: 0xc112fc8  jal         func_44BF20
    ctx->pc = 0x445354u;
    SET_GPR_U32(ctx, 31, 0x44535Cu);
    ctx->pc = 0x445358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445354u;
    // 0x445358: 0x8f84af20  lw          $a0, -0x50E0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BF20u, 0x445354u, 0x44535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44535Cu;
label_44535c:
    // 0x44535c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x44535cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_445360:
    // 0x445360: 0xae600044  sw          $zero, 0x44($s3)
    ctx->pc = 0x445360u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
    // 0x445364: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x445364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x445368: 0xae800048  sw          $zero, 0x48($s4)
    ctx->pc = 0x445368u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 0));
    // 0x44536c: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x44536cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x445370: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x445370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x445374: 0x0  nop
    ctx->pc = 0x445374u;
    // NOP
label_445378:
    // 0x445378: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x445378u;
    {
        const bool branch_taken_0x445378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x445378) {
            ctx->pc = 0x44537Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x445378u;
            // 0x44537c: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4453BCu;
            goto label_4453bc;
        }
    }
    ctx->pc = 0x445380u;
    // 0x445380: 0x8ec50058  lw          $a1, 0x58($s6)
    ctx->pc = 0x445380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x445384: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x445384u;
    {
        const bool branch_taken_0x445384 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x445384) {
            ctx->pc = 0x445388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x445384u;
            // 0x445388: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4453A8u;
            goto label_4453a8;
        }
    }
    ctx->pc = 0x44538Cu;
    // 0x44538c: 0x96020054  lhu         $v0, 0x54($s0)
    ctx->pc = 0x44538cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x445390: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x445390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x445394: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x445394u;
    {
        const bool branch_taken_0x445394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x445394) {
            ctx->pc = 0x445398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x445394u;
            // 0x445398: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4453A8u;
            goto label_4453a8;
        }
    }
    ctx->pc = 0x44539Cu;
    // 0x44539c: 0xc112fc8  jal         func_44BF20
    ctx->pc = 0x44539Cu;
    SET_GPR_U32(ctx, 31, 0x4453A4u);
    ctx->pc = 0x4453A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44539Cu;
    // 0x4453a0: 0x8f84af20  lw          $a0, -0x50E0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BF20u, 0x44539Cu, 0x4453A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4453A4u;
label_4453a4:
    // 0x4453a4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x4453a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_4453a8:
    // 0x4453a8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4453a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x4453ac: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x4453acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x4453b0: 0xae800064  sw          $zero, 0x64($s4)
    ctx->pc = 0x4453b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 0));
    // 0x4453b4: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x4453b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x4453b8: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x4453b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_4453bc:
    // 0x4453bc: 0x26940070  addiu       $s4, $s4, 0x70
    ctx->pc = 0x4453bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x4453c0: 0x26730070  addiu       $s3, $s3, 0x70
    ctx->pc = 0x4453c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x4453c4: 0x26520070  addiu       $s2, $s2, 0x70
    ctx->pc = 0x4453c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x4453c8: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x4453c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x4453cc: 0x26d60070  addiu       $s6, $s6, 0x70
    ctx->pc = 0x4453ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
    // 0x4453d0: 0x26f7fffc  addiu       $s7, $s7, -0x4
    ctx->pc = 0x4453d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967292));
    // 0x4453d4: 0x16e0ffb0  bnez        $s7, . + 4 + (-0x50 << 2)
    ctx->pc = 0x4453D4u;
    {
        const bool branch_taken_0x4453d4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x4453D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4453D4u;
        // 0x4453d8: 0x26b50070  addiu       $s5, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4453d4) {
            ctx->pc = 0x445298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_445298;
        }
    }
    ctx->pc = 0x4453DCu;
label_4453dc:
    // 0x4453dc: 0xa7c00000  sh          $zero, 0x0($fp)
    ctx->pc = 0x4453dcu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4453e0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x4453e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4453e4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x4453e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4453e8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x4453e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4453ec: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4453ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4453f0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4453f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4453f4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x4453f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4453f8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x4453f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4453fc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x4453fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x445400: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x445400u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x445404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x445404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x445408: 0x3e00008  jr          $ra
    ctx->pc = 0x445408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445408u;
        // 0x44540c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x445410u;
}
