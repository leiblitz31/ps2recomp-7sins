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

// Function: sub_00345268
// Address: 0x345268 - 0x3453f8
void sub_00345268_0x345268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345268_0x345268");
#endif

    switch (ctx->pc) {
        case 0x345268u: goto label_345268;
        case 0x34526cu: goto label_34526c;
        case 0x345270u: goto label_345270;
        case 0x345274u: goto label_345274;
        case 0x345278u: goto label_345278;
        case 0x34527cu: goto label_34527c;
        case 0x345280u: goto label_345280;
        case 0x345284u: goto label_345284;
        case 0x345288u: goto label_345288;
        case 0x34528cu: goto label_34528c;
        case 0x345290u: goto label_345290;
        case 0x345294u: goto label_345294;
        case 0x345298u: goto label_345298;
        case 0x34529cu: goto label_34529c;
        case 0x3452a0u: goto label_3452a0;
        case 0x3452a4u: goto label_3452a4;
        case 0x3452a8u: goto label_3452a8;
        case 0x3452acu: goto label_3452ac;
        case 0x3452b0u: goto label_3452b0;
        case 0x3452b4u: goto label_3452b4;
        case 0x3452b8u: goto label_3452b8;
        case 0x3452bcu: goto label_3452bc;
        case 0x3452c0u: goto label_3452c0;
        case 0x3452c4u: goto label_3452c4;
        case 0x3452c8u: goto label_3452c8;
        case 0x3452ccu: goto label_3452cc;
        case 0x3452d0u: goto label_3452d0;
        case 0x3452d4u: goto label_3452d4;
        case 0x3452d8u: goto label_3452d8;
        case 0x3452dcu: goto label_3452dc;
        case 0x3452e0u: goto label_3452e0;
        case 0x3452e4u: goto label_3452e4;
        case 0x3452e8u: goto label_3452e8;
        case 0x3452ecu: goto label_3452ec;
        case 0x3452f0u: goto label_3452f0;
        case 0x3452f4u: goto label_3452f4;
        case 0x3452f8u: goto label_3452f8;
        case 0x3452fcu: goto label_3452fc;
        case 0x345300u: goto label_345300;
        case 0x345304u: goto label_345304;
        case 0x345308u: goto label_345308;
        case 0x34530cu: goto label_34530c;
        case 0x345310u: goto label_345310;
        case 0x345314u: goto label_345314;
        case 0x345318u: goto label_345318;
        case 0x34531cu: goto label_34531c;
        case 0x345320u: goto label_345320;
        case 0x345324u: goto label_345324;
        case 0x345328u: goto label_345328;
        case 0x34532cu: goto label_34532c;
        case 0x345330u: goto label_345330;
        case 0x345334u: goto label_345334;
        case 0x345338u: goto label_345338;
        case 0x34533cu: goto label_34533c;
        case 0x345340u: goto label_345340;
        case 0x345344u: goto label_345344;
        case 0x345348u: goto label_345348;
        case 0x34534cu: goto label_34534c;
        case 0x345350u: goto label_345350;
        case 0x345354u: goto label_345354;
        case 0x345358u: goto label_345358;
        case 0x34535cu: goto label_34535c;
        case 0x345360u: goto label_345360;
        case 0x345364u: goto label_345364;
        case 0x345368u: goto label_345368;
        case 0x34536cu: goto label_34536c;
        case 0x345370u: goto label_345370;
        case 0x345374u: goto label_345374;
        case 0x345378u: goto label_345378;
        case 0x34537cu: goto label_34537c;
        case 0x345380u: goto label_345380;
        case 0x345384u: goto label_345384;
        case 0x345388u: goto label_345388;
        case 0x34538cu: goto label_34538c;
        case 0x345390u: goto label_345390;
        case 0x345394u: goto label_345394;
        case 0x345398u: goto label_345398;
        case 0x34539cu: goto label_34539c;
        case 0x3453a0u: goto label_3453a0;
        case 0x3453a4u: goto label_3453a4;
        case 0x3453a8u: goto label_3453a8;
        case 0x3453acu: goto label_3453ac;
        case 0x3453b0u: goto label_3453b0;
        case 0x3453b4u: goto label_3453b4;
        case 0x3453b8u: goto label_3453b8;
        case 0x3453bcu: goto label_3453bc;
        case 0x3453c0u: goto label_3453c0;
        case 0x3453c4u: goto label_3453c4;
        case 0x3453c8u: goto label_3453c8;
        case 0x3453ccu: goto label_3453cc;
        case 0x3453d0u: goto label_3453d0;
        case 0x3453d4u: goto label_3453d4;
        case 0x3453d8u: goto label_3453d8;
        case 0x3453dcu: goto label_3453dc;
        case 0x3453e0u: goto label_3453e0;
        case 0x3453e4u: goto label_3453e4;
        case 0x3453e8u: goto label_3453e8;
        case 0x3453ecu: goto label_3453ec;
        case 0x3453f0u: goto label_3453f0;
        case 0x3453f4u: goto label_3453f4;
        default: break;
    }

    ctx->pc = 0x345268u;

label_345268:
    // 0x345268: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x345268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_34526c:
    // 0x34526c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x34526cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_345270:
    // 0x345270: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x345270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_345274:
    // 0x345274: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x345274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_345278:
    // 0x345278: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x345278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_34527c:
    // 0x34527c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x34527cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_345280:
    // 0x345280: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x345280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_345284:
    // 0x345284: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x345284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345288:
    // 0x345288: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x345288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_34528c:
    // 0x34528c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34528cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_345290:
    // 0x345290: 0xc0d434e  jal         func_350D38
label_345294:
    if (ctx->pc == 0x345294u) {
        ctx->pc = 0x345294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345290u;
        // 0x345294: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345298u;
        goto label_345298;
    }
    ctx->pc = 0x345290u;
    SET_GPR_U32(ctx, 31, 0x345298u);
    ctx->pc = 0x345294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345290u;
    // 0x345294: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350D38u, 0x345290u, 0x345298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345298u;
label_345298:
    // 0x345298: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x345298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_34529c:
    // 0x34529c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x34529cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3452a0:
    // 0x3452a0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3452a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3452a4:
    // 0x3452a4: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
label_3452a8:
    if (ctx->pc == 0x3452A8u) {
        ctx->pc = 0x3452A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3452A4u;
        // 0x3452a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3452ACu;
        goto label_3452ac;
    }
    ctx->pc = 0x3452A4u;
    {
        const bool branch_taken_0x3452a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3452A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3452A4u;
        // 0x3452a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3452a4) {
            ctx->pc = 0x345324u;
            goto label_345324;
        }
    }
    ctx->pc = 0x3452ACu;
label_3452ac:
    // 0x3452ac: 0x0  nop
    ctx->pc = 0x3452acu;
    // NOP
label_3452b0:
    // 0x3452b0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3452b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3452b4:
    // 0x3452b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3452b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3452b8:
    // 0x3452b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3452b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3452bc:
    // 0x3452bc: 0xc0d4298  jal         func_350A60
label_3452c0:
    if (ctx->pc == 0x3452C0u) {
        ctx->pc = 0x3452C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3452BCu;
        // 0x3452c0: 0x3c074000  lui         $a3, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3452C4u;
        goto label_3452c4;
    }
    ctx->pc = 0x3452BCu;
    SET_GPR_U32(ctx, 31, 0x3452C4u);
    ctx->pc = 0x3452C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3452BCu;
    // 0x3452c0: 0x3c074000  lui         $a3, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350A60u, 0x3452BCu, 0x3452C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3452C4u;
label_3452c4:
    // 0x3452c4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_3452c8:
    if (ctx->pc == 0x3452C8u) {
        ctx->pc = 0x3452C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3452C4u;
        // 0x3452c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3452CCu;
        goto label_3452cc;
    }
    ctx->pc = 0x3452C4u;
    {
        const bool branch_taken_0x3452c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3452C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3452C4u;
        // 0x3452c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3452c4) {
            ctx->pc = 0x345314u;
            goto label_345314;
        }
    }
    ctx->pc = 0x3452CCu;
label_3452cc:
    // 0x3452cc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3452ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3452d0:
    // 0x3452d0: 0xc0d50c0  jal         func_354300
label_3452d4:
    if (ctx->pc == 0x3452D4u) {
        ctx->pc = 0x3452D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3452D0u;
        // 0x3452d4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3452D8u;
        goto label_3452d8;
    }
    ctx->pc = 0x3452D0u;
    SET_GPR_U32(ctx, 31, 0x3452D8u);
    ctx->pc = 0x3452D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3452D0u;
    // 0x3452d4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354300u, 0x3452D0u, 0x3452D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3452D8u;
label_3452d8:
    // 0x3452d8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3452d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3452dc:
    // 0x3452dc: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3452dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3452e0:
    // 0x3452e0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3452e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_3452e4:
    // 0x3452e4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3452e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3452e8:
    // 0x3452e8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x3452e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_3452ec:
    // 0x3452ec: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x3452ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3452f0:
    // 0x3452f0: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3452f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_3452f4:
    // 0x3452f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3452f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3452f8:
    // 0x3452f8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3452f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3452fc:
    // 0x3452fc: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3452fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_345300:
    // 0x345300: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x345300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_345304:
    // 0x345304: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x345304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_345308:
    // 0x345308: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x345308u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_34530c:
    // 0x34530c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x34530cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_345310:
    // 0x345310: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x345310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_345314:
    // 0x345314: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x345314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_345318:
    // 0x345318: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x345318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_34531c:
    // 0x34531c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_345320:
    if (ctx->pc == 0x345320u) {
        ctx->pc = 0x345320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34531Cu;
        // 0x345320: 0x129040  sll         $s2, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345324u;
        goto label_345324;
    }
    ctx->pc = 0x34531Cu;
    {
        const bool branch_taken_0x34531c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34531Cu;
        // 0x345320: 0x129040  sll         $s2, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34531c) {
            ctx->pc = 0x3452B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3452b0;
        }
    }
    ctx->pc = 0x345324u;
label_345324:
    // 0x345324: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x345324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_345328:
    // 0x345328: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x345328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_34532c:
    // 0x34532c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x34532cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_345330:
    // 0x345330: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x345330u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_345334:
    // 0x345334: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x345334u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_345338:
    // 0x345338: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x345338u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34533c:
    // 0x34533c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34533cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_345340:
    // 0x345340: 0x3e00008  jr          $ra
label_345344:
    if (ctx->pc == 0x345344u) {
        ctx->pc = 0x345344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345340u;
        // 0x345344: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345348u;
        goto label_345348;
    }
    ctx->pc = 0x345340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345340u;
        // 0x345344: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345348u;
label_345348:
    // 0x345348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x345348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34534c:
    // 0x34534c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x34534cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_345350:
    // 0x345350: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x345350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_345354:
    // 0x345354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x345354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_345358:
    // 0x345358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_34535c:
    // 0x34535c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x34535cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_345360:
    // 0x345360: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_345364:
    if (ctx->pc == 0x345364u) {
        ctx->pc = 0x345364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345360u;
        // 0x345364: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345368u;
        goto label_345368;
    }
    ctx->pc = 0x345360u;
    {
        const bool branch_taken_0x345360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x345364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345360u;
        // 0x345364: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345360) {
            ctx->pc = 0x345374u;
            goto label_345374;
        }
    }
    ctx->pc = 0x345368u;
label_345368:
    // 0x345368: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x345368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_34536c:
    // 0x34536c: 0x40f809  jalr        $v0
label_345370:
    if (ctx->pc == 0x345370u) {
        ctx->pc = 0x345374u;
        goto label_345374;
    }
    ctx->pc = 0x34536Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x345374u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34536Cu, 0x345374u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x345374u;
label_345374:
    // 0x345374: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x345374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_345378:
    // 0x345378: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x345378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_34537c:
    // 0x34537c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x34537cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_345380:
    // 0x345380: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_345384:
    if (ctx->pc == 0x345384u) {
        ctx->pc = 0x345384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345380u;
        // 0x345384: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345388u;
        goto label_345388;
    }
    ctx->pc = 0x345380u;
    {
        const bool branch_taken_0x345380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x345384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345380u;
        // 0x345384: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345380) {
            ctx->pc = 0x3453E0u;
            goto label_3453e0;
        }
    }
    ctx->pc = 0x345388u;
label_345388:
    // 0x345388: 0xc0d434e  jal         func_350D38
label_34538c:
    if (ctx->pc == 0x34538Cu) {
        ctx->pc = 0x345390u;
        goto label_345390;
    }
    ctx->pc = 0x345388u;
    SET_GPR_U32(ctx, 31, 0x345390u);
    ctx->pc = 0x350D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350D38u, 0x345388u, 0x345390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345390u;
label_345390:
    // 0x345390: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x345390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_345394:
    // 0x345394: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x345394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_345398:
    // 0x345398: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x345398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_34539c:
    // 0x34539c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x34539cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3453a0:
    // 0x3453a0: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3453a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3453a4:
    // 0x3453a4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3453a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3453a8:
    // 0x3453a8: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x3453a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3453ac:
    // 0x3453ac: 0x2012  mflo        $a0
    ctx->pc = 0x3453acu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3453b0:
    // 0x3453b0: 0x40f809  jalr        $v0
label_3453b4:
    if (ctx->pc == 0x3453B4u) {
        ctx->pc = 0x3453B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3453B0u;
        // 0x3453b4: 0x34a50130  ori         $a1, $a1, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3453B8u;
        goto label_3453b8;
    }
    ctx->pc = 0x3453B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3453B8u);
        ctx->pc = 0x3453B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3453B0u;
        // 0x3453b4: 0x34a50130  ori         $a1, $a1, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3453B0u, 0x3453B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3453B8u;
label_3453b8:
    // 0x3453b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3453b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3453bc:
    // 0x3453bc: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x3453bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_3453c0:
    // 0x3453c0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3453c4:
    if (ctx->pc == 0x3453C4u) {
        ctx->pc = 0x3453C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3453C0u;
        // 0x3453c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3453C8u;
        goto label_3453c8;
    }
    ctx->pc = 0x3453C0u;
    {
        const bool branch_taken_0x3453c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3453C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3453C0u;
        // 0x3453c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3453c0) {
            ctx->pc = 0x3453E4u;
            goto label_3453e4;
        }
    }
    ctx->pc = 0x3453C8u;
label_3453c8:
    // 0x3453c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3453c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3453cc:
    // 0x3453cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3453ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3453d0:
    // 0x3453d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3453d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3453d4:
    // 0x3453d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3453d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3453d8:
    // 0x3453d8: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x3453d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_3453dc:
    // 0x3453dc: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x3453dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_3453e0:
    // 0x3453e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3453e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3453e4:
    // 0x3453e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3453e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3453e8:
    // 0x3453e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3453e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3453ec:
    // 0x3453ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3453ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3453f0:
    // 0x3453f0: 0x3e00008  jr          $ra
label_3453f4:
    if (ctx->pc == 0x3453F4u) {
        ctx->pc = 0x3453F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3453F0u;
        // 0x3453f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3453F8u;
        goto label_fallthrough_0x3453f0;
    }
    ctx->pc = 0x3453F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3453F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3453F0u;
        // 0x3453f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3453F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3453f0:
    ctx->pc = 0x3453F8u;
}
