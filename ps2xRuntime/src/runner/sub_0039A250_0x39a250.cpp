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

// Function: sub_0039A250
// Address: 0x39a250 - 0x39a368
void sub_0039A250_0x39a250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A250_0x39a250");
#endif

    switch (ctx->pc) {
        case 0x39a250u: goto label_39a250;
        case 0x39a254u: goto label_39a254;
        case 0x39a258u: goto label_39a258;
        case 0x39a25cu: goto label_39a25c;
        case 0x39a260u: goto label_39a260;
        case 0x39a264u: goto label_39a264;
        case 0x39a268u: goto label_39a268;
        case 0x39a26cu: goto label_39a26c;
        case 0x39a270u: goto label_39a270;
        case 0x39a274u: goto label_39a274;
        case 0x39a278u: goto label_39a278;
        case 0x39a27cu: goto label_39a27c;
        case 0x39a280u: goto label_39a280;
        case 0x39a284u: goto label_39a284;
        case 0x39a288u: goto label_39a288;
        case 0x39a28cu: goto label_39a28c;
        case 0x39a290u: goto label_39a290;
        case 0x39a294u: goto label_39a294;
        case 0x39a298u: goto label_39a298;
        case 0x39a29cu: goto label_39a29c;
        case 0x39a2a0u: goto label_39a2a0;
        case 0x39a2a4u: goto label_39a2a4;
        case 0x39a2a8u: goto label_39a2a8;
        case 0x39a2acu: goto label_39a2ac;
        case 0x39a2b0u: goto label_39a2b0;
        case 0x39a2b4u: goto label_39a2b4;
        case 0x39a2b8u: goto label_39a2b8;
        case 0x39a2bcu: goto label_39a2bc;
        case 0x39a2c0u: goto label_39a2c0;
        case 0x39a2c4u: goto label_39a2c4;
        case 0x39a2c8u: goto label_39a2c8;
        case 0x39a2ccu: goto label_39a2cc;
        case 0x39a2d0u: goto label_39a2d0;
        case 0x39a2d4u: goto label_39a2d4;
        case 0x39a2d8u: goto label_39a2d8;
        case 0x39a2dcu: goto label_39a2dc;
        case 0x39a2e0u: goto label_39a2e0;
        case 0x39a2e4u: goto label_39a2e4;
        case 0x39a2e8u: goto label_39a2e8;
        case 0x39a2ecu: goto label_39a2ec;
        case 0x39a2f0u: goto label_39a2f0;
        case 0x39a2f4u: goto label_39a2f4;
        case 0x39a2f8u: goto label_39a2f8;
        case 0x39a2fcu: goto label_39a2fc;
        case 0x39a300u: goto label_39a300;
        case 0x39a304u: goto label_39a304;
        case 0x39a308u: goto label_39a308;
        case 0x39a30cu: goto label_39a30c;
        case 0x39a310u: goto label_39a310;
        case 0x39a314u: goto label_39a314;
        case 0x39a318u: goto label_39a318;
        case 0x39a31cu: goto label_39a31c;
        case 0x39a320u: goto label_39a320;
        case 0x39a324u: goto label_39a324;
        case 0x39a328u: goto label_39a328;
        case 0x39a32cu: goto label_39a32c;
        case 0x39a330u: goto label_39a330;
        case 0x39a334u: goto label_39a334;
        case 0x39a338u: goto label_39a338;
        case 0x39a33cu: goto label_39a33c;
        case 0x39a340u: goto label_39a340;
        case 0x39a344u: goto label_39a344;
        case 0x39a348u: goto label_39a348;
        case 0x39a34cu: goto label_39a34c;
        case 0x39a350u: goto label_39a350;
        case 0x39a354u: goto label_39a354;
        case 0x39a358u: goto label_39a358;
        case 0x39a35cu: goto label_39a35c;
        case 0x39a360u: goto label_39a360;
        case 0x39a364u: goto label_39a364;
        default: break;
    }

    ctx->pc = 0x39a250u;

label_39a250:
    // 0x39a250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39a250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_39a254:
    // 0x39a254: 0x8f82bd60  lw          $v0, -0x42A0($gp)
    ctx->pc = 0x39a254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950240)));
label_39a258:
    // 0x39a258: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x39a258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_39a25c:
    // 0x39a25c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x39a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_39a260:
    // 0x39a260: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x39a260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_39a264:
    // 0x39a264: 0x2470e880  addiu       $s0, $v1, -0x1780
    ctx->pc = 0x39a264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_39a268:
    // 0x39a268: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x39a268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_39a26c:
    // 0x39a26c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x39a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_39a270:
    // 0x39a270: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39a274:
    // 0x39a274: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39a274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39a278:
    // 0x39a278: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39a278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39a27c:
    // 0x39a27c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x39a27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39a280:
    // 0x39a280: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x39a280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_39a284:
    // 0x39a284: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x39a284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_39a288:
    // 0x39a288: 0x40f809  jalr        $v0
label_39a28c:
    if (ctx->pc == 0x39A28Cu) {
        ctx->pc = 0x39A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A288u;
        // 0x39a28c: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A290u;
        goto label_39a290;
    }
    ctx->pc = 0x39A288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39A290u);
        ctx->pc = 0x39A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A288u;
        // 0x39a28c: 0x34a50507  ori         $a1, $a1, 0x507 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A288u, 0x39A290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A290u;
label_39a290:
    // 0x39a290: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x39a290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39a294:
    // 0x39a294: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_39a298:
    if (ctx->pc == 0x39A298u) {
        ctx->pc = 0x39A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A294u;
        // 0x39a298: 0x26030004  addiu       $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A29Cu;
        goto label_39a29c;
    }
    ctx->pc = 0x39A294u;
    {
        const bool branch_taken_0x39a294 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A294u;
        // 0x39a298: 0x26030004  addiu       $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a294) {
            ctx->pc = 0x39A2C8u;
            goto label_39a2c8;
        }
    }
    ctx->pc = 0x39A29Cu;
label_39a29c:
    // 0x39a29c: 0xacd10004  sw          $s1, 0x4($a2)
    ctx->pc = 0x39a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 17));
label_39a2a0:
    // 0x39a2a0: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x39a2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_39a2a4:
    // 0x39a2a4: 0xacd20000  sw          $s2, 0x0($a2)
    ctx->pc = 0x39a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 18));
label_39a2a8:
    // 0x39a2a8: 0x8f82bd60  lw          $v0, -0x42A0($gp)
    ctx->pc = 0x39a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950240)));
label_39a2ac:
    // 0x39a2ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39a2b0:
    // 0x39a2b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x39a2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39a2b4:
    // 0x39a2b4: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x39a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_39a2b8:
    // 0x39a2b8: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x39a2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_39a2bc:
    // 0x39a2bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39a2c0:
    // 0x39a2c0: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x39a2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_39a2c4:
    // 0x39a2c4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x39a2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_39a2c8:
    // 0x39a2c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x39a2c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39a2cc:
    // 0x39a2cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39a2ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39a2d0:
    // 0x39a2d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x39a2d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39a2d4:
    // 0x39a2d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39a2d8:
    // 0x39a2d8: 0x3e00008  jr          $ra
label_39a2dc:
    if (ctx->pc == 0x39A2DCu) {
        ctx->pc = 0x39A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2D8u;
        // 0x39a2dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A2E0u;
        goto label_39a2e0;
    }
    ctx->pc = 0x39A2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2D8u;
        // 0x39a2dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A2E0u;
label_39a2e0:
    // 0x39a2e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39a2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_39a2e4:
    // 0x39a2e4: 0x8f83bd60  lw          $v1, -0x42A0($gp)
    ctx->pc = 0x39a2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950240)));
label_39a2e8:
    // 0x39a2e8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_39a2ec:
    // 0x39a2ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39a2f0:
    // 0x39a2f0: 0x2442e884  addiu       $v0, $v0, -0x177C
    ctx->pc = 0x39a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961284));
label_39a2f4:
    // 0x39a2f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39a2f8:
    // 0x39a2f8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x39a2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39a2fc:
    // 0x39a2fc: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_39a300:
    if (ctx->pc == 0x39A300u) {
        ctx->pc = 0x39A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2FCu;
        // 0x39a300: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A304u;
        goto label_39a304;
    }
    ctx->pc = 0x39A2FCu;
    {
        const bool branch_taken_0x39a2fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x39A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2FCu;
        // 0x39a300: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a2fc) {
            ctx->pc = 0x39A360u;
            goto label_39a360;
        }
    }
    ctx->pc = 0x39A304u;
label_39a304:
    // 0x39a304: 0x2447fffc  addiu       $a3, $v0, -0x4
    ctx->pc = 0x39a304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_39a308:
    // 0x39a308: 0x8ca2fff8  lw          $v0, -0x8($a1)
    ctx->pc = 0x39a308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_39a30c:
    // 0x39a30c: 0x0  nop
    ctx->pc = 0x39a30cu;
    // NOP
label_39a310:
    // 0x39a310: 0x1444000f  bne         $v0, $a0, . + 4 + (0xF << 2)
label_39a314:
    if (ctx->pc == 0x39A314u) {
        ctx->pc = 0x39A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A310u;
        // 0x39a314: 0x24a6fff8  addiu       $a2, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A318u;
        goto label_39a318;
    }
    ctx->pc = 0x39A310u;
    {
        const bool branch_taken_0x39a310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x39A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A310u;
        // 0x39a314: 0x24a6fff8  addiu       $a2, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a310) {
            ctx->pc = 0x39A350u;
            goto label_39a350;
        }
    }
    ctx->pc = 0x39A318u;
label_39a318:
    // 0x39a318: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x39a318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_39a31c:
    // 0x39a31c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x39a31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39a320:
    // 0x39a320: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x39a320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_39a324:
    // 0x39a324: 0x8f83bd60  lw          $v1, -0x42A0($gp)
    ctx->pc = 0x39a324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950240)));
label_39a328:
    // 0x39a328: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x39a328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_39a32c:
    // 0x39a32c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x39a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_39a330:
    // 0x39a330: 0x8ce2011c  lw          $v0, 0x11C($a3)
    ctx->pc = 0x39a330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 284)));
label_39a334:
    // 0x39a334: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x39a334u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_39a338:
    // 0x39a338: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x39a338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_39a33c:
    // 0x39a33c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39a33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39a340:
    // 0x39a340: 0x40f809  jalr        $v0
label_39a344:
    if (ctx->pc == 0x39A344u) {
        ctx->pc = 0x39A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A340u;
        // 0x39a344: 0xace60004  sw          $a2, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A348u;
        goto label_39a348;
    }
    ctx->pc = 0x39A340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39A348u);
        ctx->pc = 0x39A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A340u;
        // 0x39a344: 0xace60004  sw          $a2, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A340u, 0x39A348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A348u;
label_39a348:
    // 0x39a348: 0x10000005  b           . + 4 + (0x5 << 2)
label_39a34c:
    if (ctx->pc == 0x39A34Cu) {
        ctx->pc = 0x39A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A348u;
        // 0x39a34c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A350u;
        goto label_39a350;
    }
    ctx->pc = 0x39A348u;
    {
        const bool branch_taken_0x39a348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A348u;
        // 0x39a34c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a348) {
            ctx->pc = 0x39A360u;
            goto label_39a360;
        }
    }
    ctx->pc = 0x39A350u;
label_39a350:
    // 0x39a350: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x39a350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39a354:
    // 0x39a354: 0x54a3ffee  bnel        $a1, $v1, . + 4 + (-0x12 << 2)
label_39a358:
    if (ctx->pc == 0x39A358u) {
        ctx->pc = 0x39A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A354u;
        // 0x39a358: 0x8ca2fff8  lw          $v0, -0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A35Cu;
        goto label_39a35c;
    }
    ctx->pc = 0x39A354u;
    {
        const bool branch_taken_0x39a354 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x39a354) {
            ctx->pc = 0x39A358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A354u;
            // 0x39a358: 0x8ca2fff8  lw          $v0, -0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a310;
        }
    }
    ctx->pc = 0x39A35Cu;
label_39a35c:
    // 0x39a35c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39a360:
    // 0x39a360: 0x3e00008  jr          $ra
label_39a364:
    if (ctx->pc == 0x39A364u) {
        ctx->pc = 0x39A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A360u;
        // 0x39a364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A368u;
        goto label_fallthrough_0x39a360;
    }
    ctx->pc = 0x39A360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A360u;
        // 0x39a364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39a360:
    ctx->pc = 0x39A368u;
}
