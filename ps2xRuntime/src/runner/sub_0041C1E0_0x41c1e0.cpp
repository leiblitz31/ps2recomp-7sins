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

// Function: sub_0041C1E0
// Address: 0x41c1e0 - 0x41c2f0
void sub_0041C1E0_0x41c1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041C1E0_0x41c1e0");
#endif

    switch (ctx->pc) {
        case 0x41c1e0u: goto label_41c1e0;
        case 0x41c1e4u: goto label_41c1e4;
        case 0x41c1e8u: goto label_41c1e8;
        case 0x41c1ecu: goto label_41c1ec;
        case 0x41c1f0u: goto label_41c1f0;
        case 0x41c1f4u: goto label_41c1f4;
        case 0x41c1f8u: goto label_41c1f8;
        case 0x41c1fcu: goto label_41c1fc;
        case 0x41c200u: goto label_41c200;
        case 0x41c204u: goto label_41c204;
        case 0x41c208u: goto label_41c208;
        case 0x41c20cu: goto label_41c20c;
        case 0x41c210u: goto label_41c210;
        case 0x41c214u: goto label_41c214;
        case 0x41c218u: goto label_41c218;
        case 0x41c21cu: goto label_41c21c;
        case 0x41c220u: goto label_41c220;
        case 0x41c224u: goto label_41c224;
        case 0x41c228u: goto label_41c228;
        case 0x41c22cu: goto label_41c22c;
        case 0x41c230u: goto label_41c230;
        case 0x41c234u: goto label_41c234;
        case 0x41c238u: goto label_41c238;
        case 0x41c23cu: goto label_41c23c;
        case 0x41c240u: goto label_41c240;
        case 0x41c244u: goto label_41c244;
        case 0x41c248u: goto label_41c248;
        case 0x41c24cu: goto label_41c24c;
        case 0x41c250u: goto label_41c250;
        case 0x41c254u: goto label_41c254;
        case 0x41c258u: goto label_41c258;
        case 0x41c25cu: goto label_41c25c;
        case 0x41c260u: goto label_41c260;
        case 0x41c264u: goto label_41c264;
        case 0x41c268u: goto label_41c268;
        case 0x41c26cu: goto label_41c26c;
        case 0x41c270u: goto label_41c270;
        case 0x41c274u: goto label_41c274;
        case 0x41c278u: goto label_41c278;
        case 0x41c27cu: goto label_41c27c;
        case 0x41c280u: goto label_41c280;
        case 0x41c284u: goto label_41c284;
        case 0x41c288u: goto label_41c288;
        case 0x41c28cu: goto label_41c28c;
        case 0x41c290u: goto label_41c290;
        case 0x41c294u: goto label_41c294;
        case 0x41c298u: goto label_41c298;
        case 0x41c29cu: goto label_41c29c;
        case 0x41c2a0u: goto label_41c2a0;
        case 0x41c2a4u: goto label_41c2a4;
        case 0x41c2a8u: goto label_41c2a8;
        case 0x41c2acu: goto label_41c2ac;
        case 0x41c2b0u: goto label_41c2b0;
        case 0x41c2b4u: goto label_41c2b4;
        case 0x41c2b8u: goto label_41c2b8;
        case 0x41c2bcu: goto label_41c2bc;
        case 0x41c2c0u: goto label_41c2c0;
        case 0x41c2c4u: goto label_41c2c4;
        case 0x41c2c8u: goto label_41c2c8;
        case 0x41c2ccu: goto label_41c2cc;
        case 0x41c2d0u: goto label_41c2d0;
        case 0x41c2d4u: goto label_41c2d4;
        case 0x41c2d8u: goto label_41c2d8;
        case 0x41c2dcu: goto label_41c2dc;
        case 0x41c2e0u: goto label_41c2e0;
        case 0x41c2e4u: goto label_41c2e4;
        case 0x41c2e8u: goto label_41c2e8;
        case 0x41c2ecu: goto label_41c2ec;
        default: break;
    }

    ctx->pc = 0x41c1e0u;

label_41c1e0:
    // 0x41c1e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x41c1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_41c1e4:
    // 0x41c1e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x41c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41c1e8:
    // 0x41c1e8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x41c1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_41c1ec:
    // 0x41c1ec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x41c1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_41c1f0:
    // 0x41c1f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41c1f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41c1f4:
    // 0x41c1f4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x41c1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_41c1f8:
    // 0x41c1f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x41c1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_41c1fc:
    // 0x41c1fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41c1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41c200:
    // 0x41c200: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x41c200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_41c204:
    // 0x41c204: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_41c208:
    if (ctx->pc == 0x41C208u) {
        ctx->pc = 0x41C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C204u;
        // 0x41c208: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C20Cu;
        goto label_41c20c;
    }
    ctx->pc = 0x41C204u;
    {
        const bool branch_taken_0x41c204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C204u;
        // 0x41c208: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c204) {
            ctx->pc = 0x41C218u;
            goto label_41c218;
        }
    }
    ctx->pc = 0x41C20Cu;
label_41c20c:
    // 0x41c20c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x41c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_41c210:
    // 0x41c210: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_41c214:
    if (ctx->pc == 0x41C214u) {
        ctx->pc = 0x41C218u;
        goto label_41c218;
    }
    ctx->pc = 0x41C210u;
    {
        const bool branch_taken_0x41c210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x41c210) {
            ctx->pc = 0x41C21Cu;
            goto label_41c21c;
        }
    }
    ctx->pc = 0x41C218u;
label_41c218:
    // 0x41c218: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x41c218u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41c21c:
    // 0x41c21c: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_41c220:
    if (ctx->pc == 0x41C220u) {
        ctx->pc = 0x41C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C21Cu;
        // 0x41c220: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C224u;
        goto label_41c224;
    }
    ctx->pc = 0x41C21Cu;
    {
        const bool branch_taken_0x41c21c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C21Cu;
        // 0x41c220: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c21c) {
            ctx->pc = 0x41C238u;
            goto label_41c238;
        }
    }
    ctx->pc = 0x41C224u;
label_41c224:
    // 0x41c224: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x41c224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
label_41c228:
    // 0x41c228: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x41c228u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
label_41c22c:
    // 0x41c22c: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x41c22cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
label_41c230:
    // 0x41c230: 0x10000003  b           . + 4 + (0x3 << 2)
label_41c234:
    if (ctx->pc == 0x41C234u) {
        ctx->pc = 0x41C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C230u;
        // 0x41c234: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C238u;
        goto label_41c238;
    }
    ctx->pc = 0x41C230u;
    {
        const bool branch_taken_0x41c230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C230u;
        // 0x41c234: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c230) {
            ctx->pc = 0x41C240u;
            goto label_41c240;
        }
    }
    ctx->pc = 0x41C238u;
label_41c238:
    // 0x41c238: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x41c238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41c23c:
    // 0x41c23c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x41c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_41c240:
    // 0x41c240: 0x2407fffc  addiu       $a3, $zero, -0x4
    ctx->pc = 0x41c240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_41c244:
    // 0x41c244: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x41c244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_41c248:
    // 0x41c248: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x41c248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_41c24c:
    // 0x41c24c: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x41c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_41c250:
    // 0x41c250: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x41c250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_41c254:
    // 0x41c254: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x41c254u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_41c258:
    // 0x41c258: 0x8c82e988  lw          $v0, -0x1678($a0)
    ctx->pc = 0x41c258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961544)));
label_41c25c:
    // 0x41c25c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x41c25cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_41c260:
    // 0x41c260: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x41c260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_41c264:
    // 0x41c264: 0x34a50018  ori         $a1, $a1, 0x18
    ctx->pc = 0x41c264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
label_41c268:
    // 0x41c268: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x41c268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_41c26c:
    // 0x41c26c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x41c26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_41c270:
    // 0x41c270: 0x669018  mult        $s2, $v1, $a2
    ctx->pc = 0x41c270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_41c274:
    // 0x41c274: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x41c274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_41c278:
    // 0x41c278: 0x2488021  addu        $s0, $s2, $t0
    ctx->pc = 0x41c278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_41c27c:
    // 0x41c27c: 0x40f809  jalr        $v0
label_41c280:
    if (ctx->pc == 0x41C280u) {
        ctx->pc = 0x41C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C27Cu;
        // 0x41c280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C284u;
        goto label_41c284;
    }
    ctx->pc = 0x41C27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41C284u);
        ctx->pc = 0x41C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C27Cu;
        // 0x41c280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C27Cu, 0x41C284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41C284u;
label_41c284:
    // 0x41c284: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_41c288:
    if (ctx->pc == 0x41C288u) {
        ctx->pc = 0x41C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C284u;
        // 0x41c288: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C28Cu;
        goto label_41c28c;
    }
    ctx->pc = 0x41C284u;
    {
        const bool branch_taken_0x41c284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C284u;
        // 0x41c288: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c284) {
            ctx->pc = 0x41C2B8u;
            goto label_41c2b8;
        }
    }
    ctx->pc = 0x41C28Cu;
label_41c28c:
    // 0x41c28c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41c290:
    // 0x41c290: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41c290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41c294:
    // 0x41c294: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x41c294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_41c298:
    // 0x41c298: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41c298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41c29c:
    // 0x41c29c: 0xc1035f6  jal         func_40D7D8
label_41c2a0:
    if (ctx->pc == 0x41C2A0u) {
        ctx->pc = 0x41C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C29Cu;
        // 0x41c2a0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C2A4u;
        goto label_41c2a4;
    }
    ctx->pc = 0x41C29Cu;
    SET_GPR_U32(ctx, 31, 0x41C2A4u);
    ctx->pc = 0x41C2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C29Cu;
    // 0x41c2a0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41C29Cu, 0x41C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C2A4u;
label_41c2a4:
    // 0x41c2a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41c2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41c2a8:
    // 0x41c2a8: 0xc103628  jal         func_40D8A0
label_41c2ac:
    if (ctx->pc == 0x41C2ACu) {
        ctx->pc = 0x41C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C2A8u;
        // 0x41c2ac: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C2B0u;
        goto label_41c2b0;
    }
    ctx->pc = 0x41C2A8u;
    SET_GPR_U32(ctx, 31, 0x41C2B0u);
    ctx->pc = 0x41C2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C2A8u;
    // 0x41c2ac: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41C2A8u, 0x41C2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C2B0u;
label_41c2b0:
    // 0x41c2b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_41c2b4:
    if (ctx->pc == 0x41C2B4u) {
        ctx->pc = 0x41C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C2B0u;
        // 0x41c2b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C2B8u;
        goto label_41c2b8;
    }
    ctx->pc = 0x41C2B0u;
    {
        const bool branch_taken_0x41c2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C2B0u;
        // 0x41c2b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c2b0) {
            ctx->pc = 0x41C2D4u;
            goto label_41c2d4;
        }
    }
    ctx->pc = 0x41C2B8u;
label_41c2b8:
    // 0x41c2b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x41c2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41c2bc:
    // 0x41c2bc: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x41c2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_41c2c0:
    // 0x41c2c0: 0x13180a  movz        $v1, $zero, $s3
    ctx->pc = 0x41c2c0u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_41c2c4:
    // 0x41c2c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41c2c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41c2c8:
    // 0x41c2c8: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x41c2c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_41c2cc:
    // 0x41c2cc: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x41c2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_41c2d0:
    // 0x41c2d0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x41c2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_41c2d4:
    // 0x41c2d4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x41c2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41c2d8:
    // 0x41c2d8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x41c2d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41c2dc:
    // 0x41c2dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x41c2dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41c2e0:
    // 0x41c2e0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x41c2e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41c2e4:
    // 0x41c2e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41c2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41c2e8:
    // 0x41c2e8: 0x3e00008  jr          $ra
label_41c2ec:
    if (ctx->pc == 0x41C2ECu) {
        ctx->pc = 0x41C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C2E8u;
        // 0x41c2ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41C2F0u;
        goto label_fallthrough_0x41c2e8;
    }
    ctx->pc = 0x41C2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C2E8u;
        // 0x41c2ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41c2e8:
    ctx->pc = 0x41C2F0u;
}
