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

// Function: sub_003901A0
// Address: 0x3901a0 - 0x390308
void sub_003901A0_0x3901a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003901A0_0x3901a0");
#endif

    switch (ctx->pc) {
        case 0x3901a0u: goto label_3901a0;
        case 0x3901a4u: goto label_3901a4;
        case 0x3901a8u: goto label_3901a8;
        case 0x3901acu: goto label_3901ac;
        case 0x3901b0u: goto label_3901b0;
        case 0x3901b4u: goto label_3901b4;
        case 0x3901b8u: goto label_3901b8;
        case 0x3901bcu: goto label_3901bc;
        case 0x3901c0u: goto label_3901c0;
        case 0x3901c4u: goto label_3901c4;
        case 0x3901c8u: goto label_3901c8;
        case 0x3901ccu: goto label_3901cc;
        case 0x3901d0u: goto label_3901d0;
        case 0x3901d4u: goto label_3901d4;
        case 0x3901d8u: goto label_3901d8;
        case 0x3901dcu: goto label_3901dc;
        case 0x3901e0u: goto label_3901e0;
        case 0x3901e4u: goto label_3901e4;
        case 0x3901e8u: goto label_3901e8;
        case 0x3901ecu: goto label_3901ec;
        case 0x3901f0u: goto label_3901f0;
        case 0x3901f4u: goto label_3901f4;
        case 0x3901f8u: goto label_3901f8;
        case 0x3901fcu: goto label_3901fc;
        case 0x390200u: goto label_390200;
        case 0x390204u: goto label_390204;
        case 0x390208u: goto label_390208;
        case 0x39020cu: goto label_39020c;
        case 0x390210u: goto label_390210;
        case 0x390214u: goto label_390214;
        case 0x390218u: goto label_390218;
        case 0x39021cu: goto label_39021c;
        case 0x390220u: goto label_390220;
        case 0x390224u: goto label_390224;
        case 0x390228u: goto label_390228;
        case 0x39022cu: goto label_39022c;
        case 0x390230u: goto label_390230;
        case 0x390234u: goto label_390234;
        case 0x390238u: goto label_390238;
        case 0x39023cu: goto label_39023c;
        case 0x390240u: goto label_390240;
        case 0x390244u: goto label_390244;
        case 0x390248u: goto label_390248;
        case 0x39024cu: goto label_39024c;
        case 0x390250u: goto label_390250;
        case 0x390254u: goto label_390254;
        case 0x390258u: goto label_390258;
        case 0x39025cu: goto label_39025c;
        case 0x390260u: goto label_390260;
        case 0x390264u: goto label_390264;
        case 0x390268u: goto label_390268;
        case 0x39026cu: goto label_39026c;
        case 0x390270u: goto label_390270;
        case 0x390274u: goto label_390274;
        case 0x390278u: goto label_390278;
        case 0x39027cu: goto label_39027c;
        case 0x390280u: goto label_390280;
        case 0x390284u: goto label_390284;
        case 0x390288u: goto label_390288;
        case 0x39028cu: goto label_39028c;
        case 0x390290u: goto label_390290;
        case 0x390294u: goto label_390294;
        case 0x390298u: goto label_390298;
        case 0x39029cu: goto label_39029c;
        case 0x3902a0u: goto label_3902a0;
        case 0x3902a4u: goto label_3902a4;
        case 0x3902a8u: goto label_3902a8;
        case 0x3902acu: goto label_3902ac;
        case 0x3902b0u: goto label_3902b0;
        case 0x3902b4u: goto label_3902b4;
        case 0x3902b8u: goto label_3902b8;
        case 0x3902bcu: goto label_3902bc;
        case 0x3902c0u: goto label_3902c0;
        case 0x3902c4u: goto label_3902c4;
        case 0x3902c8u: goto label_3902c8;
        case 0x3902ccu: goto label_3902cc;
        case 0x3902d0u: goto label_3902d0;
        case 0x3902d4u: goto label_3902d4;
        case 0x3902d8u: goto label_3902d8;
        case 0x3902dcu: goto label_3902dc;
        case 0x3902e0u: goto label_3902e0;
        case 0x3902e4u: goto label_3902e4;
        case 0x3902e8u: goto label_3902e8;
        case 0x3902ecu: goto label_3902ec;
        case 0x3902f0u: goto label_3902f0;
        case 0x3902f4u: goto label_3902f4;
        case 0x3902f8u: goto label_3902f8;
        case 0x3902fcu: goto label_3902fc;
        case 0x390300u: goto label_390300;
        case 0x390304u: goto label_390304;
        default: break;
    }

    ctx->pc = 0x3901a0u;

label_3901a0:
    // 0x3901a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3901a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3901a4:
    // 0x3901a4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3901a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3901a8:
    // 0x3901a8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3901a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3901ac:
    // 0x3901ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3901acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3901b0:
    // 0x3901b0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3901b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3901b4:
    // 0x3901b4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3901b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3901b8:
    // 0x3901b8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3901b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3901bc:
    // 0x3901bc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3901bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3901c0:
    // 0x3901c0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x3901c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3901c4:
    // 0x3901c4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3901c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3901c8:
    // 0x3901c8: 0x3135ffff  andi        $s5, $t1, 0xFFFF
    ctx->pc = 0x3901c8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
label_3901cc:
    // 0x3901cc: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3901ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_3901d0:
    // 0x3901d0: 0x3156ffff  andi        $s6, $t2, 0xFFFF
    ctx->pc = 0x3901d0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
label_3901d4:
    // 0x3901d4: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3901d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_3901d8:
    // 0x3901d8: 0x3177ffff  andi        $s7, $t3, 0xFFFF
    ctx->pc = 0x3901d8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_3901dc:
    // 0x3901dc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3901dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3901e0:
    // 0x3901e0: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x3901e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3901e4:
    // 0x3901e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3901e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3901e8:
    // 0x3901e8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x3901e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_3901ec:
    // 0x3901ec: 0x8e0c0004  lw          $t4, 0x4($s0)
    ctx->pc = 0x3901ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3901f0:
    // 0x3901f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3901f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3901f4:
    // 0x3901f4: 0x182102b  sltu        $v0, $t4, $v0
    ctx->pc = 0x3901f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3901f8:
    // 0x3901f8: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_3901fc:
    if (ctx->pc == 0x3901FCu) {
        ctx->pc = 0x3901FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3901F8u;
        // 0x3901fc: 0x97b200c0  lhu         $s2, 0xC0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390200u;
        goto label_390200;
    }
    ctx->pc = 0x3901F8u;
    {
        const bool branch_taken_0x3901f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3901FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3901F8u;
        // 0x3901fc: 0x97b200c0  lhu         $s2, 0xC0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3901f8) {
            ctx->pc = 0x390294u;
            goto label_390294;
        }
    }
    ctx->pc = 0x390200u;
label_390200:
    // 0x390200: 0x25830001  addiu       $v1, $t4, 0x1
    ctx->pc = 0x390200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_390204:
    // 0x390204: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x390204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_390208:
    // 0x390208: 0x1180000a  beqz        $t4, . + 4 + (0xA << 2)
label_39020c:
    if (ctx->pc == 0x39020Cu) {
        ctx->pc = 0x39020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390208u;
        // 0x39020c: 0x628818  mult        $s1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x390210u;
        goto label_390210;
    }
    ctx->pc = 0x390208u;
    {
        const bool branch_taken_0x390208 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x39020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390208u;
        // 0x39020c: 0x628818  mult        $s1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x390208) {
            ctx->pc = 0x390234u;
            goto label_390234;
        }
    }
    ctx->pc = 0x390210u;
label_390210:
    // 0x390210: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x390210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_390214:
    // 0x390214: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x390214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_390218:
    // 0x390218: 0x8c62e990  lw          $v0, -0x1670($v1)
    ctx->pc = 0x390218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961552)));
label_39021c:
    // 0x39021c: 0x3c060103  lui         $a2, 0x103
    ctx->pc = 0x39021cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)259 << 16));
label_390220:
    // 0x390220: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x390220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_390224:
    // 0x390224: 0x40f809  jalr        $v0
label_390228:
    if (ctx->pc == 0x390228u) {
        ctx->pc = 0x390228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390224u;
        // 0x390228: 0x34c60502  ori         $a2, $a2, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39022Cu;
        goto label_39022c;
    }
    ctx->pc = 0x390224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39022Cu);
        ctx->pc = 0x390228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390224u;
        // 0x390228: 0x34c60502  ori         $a2, $a2, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390224u, 0x39022Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39022Cu;
label_39022c:
    // 0x39022c: 0x10000008  b           . + 4 + (0x8 << 2)
label_390230:
    if (ctx->pc == 0x390230u) {
        ctx->pc = 0x390230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39022Cu;
        // 0x390230: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390234u;
        goto label_390234;
    }
    ctx->pc = 0x39022Cu;
    {
        const bool branch_taken_0x39022c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39022Cu;
        // 0x390230: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39022c) {
            ctx->pc = 0x390250u;
            goto label_390250;
        }
    }
    ctx->pc = 0x390234u;
label_390234:
    // 0x390234: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x390234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_390238:
    // 0x390238: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x390238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_39023c:
    // 0x39023c: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x39023cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_390240:
    // 0x390240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x390240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_390244:
    // 0x390244: 0x40f809  jalr        $v0
label_390248:
    if (ctx->pc == 0x390248u) {
        ctx->pc = 0x390248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390244u;
        // 0x390248: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39024Cu;
        goto label_39024c;
    }
    ctx->pc = 0x390244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39024Cu);
        ctx->pc = 0x390248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390244u;
        // 0x390248: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390244u, 0x39024Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39024Cu;
label_39024c:
    // 0x39024c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x39024cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_390250:
    // 0x390250: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
label_390254:
    if (ctx->pc == 0x390254u) {
        ctx->pc = 0x390254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390250u;
        // 0x390254: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390258u;
        goto label_390258;
    }
    ctx->pc = 0x390250u;
    {
        const bool branch_taken_0x390250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x390250) {
            ctx->pc = 0x390254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390250u;
            // 0x390254: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390288u;
            goto label_390288;
        }
    }
    ctx->pc = 0x390258u;
label_390258:
    // 0x390258: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x390258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39025c:
    // 0x39025c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x39025cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_390260:
    // 0x390260: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x390260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_390264:
    // 0x390264: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x390264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_390268:
    // 0x390268: 0xc1035f6  jal         func_40D7D8
label_39026c:
    if (ctx->pc == 0x39026Cu) {
        ctx->pc = 0x39026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390268u;
        // 0x39026c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x390270u;
        goto label_390270;
    }
    ctx->pc = 0x390268u;
    SET_GPR_U32(ctx, 31, 0x390270u);
    ctx->pc = 0x39026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390268u;
    // 0x39026c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x390268u, 0x390270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390270u;
label_390270:
    // 0x390270: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x390270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_390274:
    // 0x390274: 0xc103628  jal         func_40D8A0
label_390278:
    if (ctx->pc == 0x390278u) {
        ctx->pc = 0x390278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390274u;
        // 0x390278: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39027Cu;
        goto label_39027c;
    }
    ctx->pc = 0x390274u;
    SET_GPR_U32(ctx, 31, 0x39027Cu);
    ctx->pc = 0x390278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390274u;
    // 0x390278: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x390274u, 0x39027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39027Cu;
label_39027c:
    // 0x39027c: 0x10000016  b           . + 4 + (0x16 << 2)
label_390280:
    if (ctx->pc == 0x390280u) {
        ctx->pc = 0x390280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39027Cu;
        // 0x390280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390284u;
        goto label_390284;
    }
    ctx->pc = 0x39027Cu;
    {
        const bool branch_taken_0x39027c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39027Cu;
        // 0x390280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39027c) {
            ctx->pc = 0x3902D8u;
            goto label_3902d8;
        }
    }
    ctx->pc = 0x390284u;
label_390284:
    // 0x390284: 0x0  nop
    ctx->pc = 0x390284u;
    // NOP
label_390288:
    // 0x390288: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x390288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_39028c:
    // 0x39028c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39028cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_390290:
    // 0x390290: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x390290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_390294:
    // 0x390294: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x390294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_390298:
    // 0x390298: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x390298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_39029c:
    // 0x39029c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x39029cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3902a0:
    // 0x3902a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3902a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3902a4:
    // 0x3902a4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3902a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3902a8:
    // 0x3902a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3902a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3902ac:
    // 0x3902ac: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x3902acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_3902b0:
    // 0x3902b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3902b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3902b4:
    // 0x3902b4: 0xa4720012  sh          $s2, 0x12($v1)
    ctx->pc = 0x3902b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 18));
label_3902b8:
    // 0x3902b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3902b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3902bc:
    // 0x3902bc: 0xa47e0000  sh          $fp, 0x0($v1)
    ctx->pc = 0x3902bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 30));
label_3902c0:
    // 0x3902c0: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x3902c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_3902c4:
    // 0x3902c4: 0xa4730002  sh          $s3, 0x2($v1)
    ctx->pc = 0x3902c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 19));
label_3902c8:
    // 0x3902c8: 0xa4740004  sh          $s4, 0x4($v1)
    ctx->pc = 0x3902c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 20));
label_3902cc:
    // 0x3902cc: 0xa475000c  sh          $s5, 0xC($v1)
    ctx->pc = 0x3902ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 21));
label_3902d0:
    // 0x3902d0: 0xa476000e  sh          $s6, 0xE($v1)
    ctx->pc = 0x3902d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 22));
label_3902d4:
    // 0x3902d4: 0xa4770010  sh          $s7, 0x10($v1)
    ctx->pc = 0x3902d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 23));
label_3902d8:
    // 0x3902d8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3902d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3902dc:
    // 0x3902dc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3902dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3902e0:
    // 0x3902e0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3902e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3902e4:
    // 0x3902e4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3902e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3902e8:
    // 0x3902e8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3902e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3902ec:
    // 0x3902ec: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3902ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3902f0:
    // 0x3902f0: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3902f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3902f4:
    // 0x3902f4: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3902f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3902f8:
    // 0x3902f8: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x3902f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3902fc:
    // 0x3902fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3902fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_390300:
    // 0x390300: 0x3e00008  jr          $ra
label_390304:
    if (ctx->pc == 0x390304u) {
        ctx->pc = 0x390304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390300u;
        // 0x390304: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390308u;
        goto label_fallthrough_0x390300;
    }
    ctx->pc = 0x390300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390300u;
        // 0x390304: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x390300:
    ctx->pc = 0x390308u;
}
