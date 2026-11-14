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

// Function: sub_001C4310
// Address: 0x1c4310 - 0x1c4550
void sub_001C4310_0x1c4310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4310_0x1c4310");
#endif

    switch (ctx->pc) {
        case 0x1c437cu: goto label_1c437c;
        case 0x1c43ecu: goto label_1c43ec;
        case 0x1c4438u: goto label_1c4438;
        case 0x1c4460u: goto label_1c4460;
        case 0x1c4484u: goto label_1c4484;
        case 0x1c44c8u: goto label_1c44c8;
        case 0x1c44f8u: goto label_1c44f8;
        case 0x1c4508u: goto label_1c4508;
        case 0x1c4534u: goto label_1c4534;
        default: break;
    }

    ctx->pc = 0x1c4310u;

    // 0x1c4310: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c4310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c4314: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c4314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c4318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c4318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c431c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c431cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c4320: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1c4320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1c4324: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1c4324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1c4328: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1c4328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1c432c: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x1c432cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x1c4330: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c4330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4334: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x1C4334u;
    {
        const bool branch_taken_0x1c4334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4334) {
            ctx->pc = 0x1C4534u;
            goto label_1c4534;
        }
    }
    ctx->pc = 0x1C433Cu;
    // 0x1c433c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c433cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4340: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c4340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c4344: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c4344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4348: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1c4348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c434c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c434cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c4350: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c4350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c4354: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c4354u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c4358: 0x1812  mflo        $v1
    ctx->pc = 0x1c4358u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1c435c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1c435cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4360: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1c4360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c4364: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1C4364u;
    {
        const bool branch_taken_0x1c4364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4364) {
            ctx->pc = 0x1C4510u;
            goto label_1c4510;
        }
    }
    ctx->pc = 0x1C436Cu;
    // 0x1c436c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c436cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c4370: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1c4370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c4374: 0xc07128c  jal         func_1C4A30
    ctx->pc = 0x1C4374u;
    SET_GPR_U32(ctx, 31, 0x1C437Cu);
    ctx->pc = 0x1C4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4A30u, 0x1C4374u, 0x1C437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C437Cu;
label_1c437c:
    // 0x1c437c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c437cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4380: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c4380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c4384: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1c4384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c4388: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c4388u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c438c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c4390: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c4390u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c4394: 0x8812  mflo        $s1
    ctx->pc = 0x1c4394u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x1c4398: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c4398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c439c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1c439cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c43a0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1c43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c43a4: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x1c43a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1c43a8: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x1C43A8u;
    {
        const bool branch_taken_0x1c43a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c43a8) {
            ctx->pc = 0x1C4468u;
            goto label_1c4468;
        }
    }
    ctx->pc = 0x1C43B0u;
    // 0x1c43b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c43b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c43b4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1c43b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c43b8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c43b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c43bc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c43c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c43c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c43c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c43c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c43c8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1c43c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c43cc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c43ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c43d0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c43d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c43d4: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x1c43d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c43d8: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1c43d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c43dc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1c43dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c43e0: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x1c43e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c43e4: 0xc07126c  jal         func_1C49B0
    ctx->pc = 0x1C43E4u;
    SET_GPR_U32(ctx, 31, 0x1C43ECu);
    ctx->pc = 0x1C49B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C49B0u, 0x1C43E4u, 0x1C43ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43ECu;
label_1c43ec:
    // 0x1c43ec: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c43ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c43f0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c43f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c43f4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c43f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c43f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c43fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c43fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c4400: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c4400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c4404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c4404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4408: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1c4408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1c440c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c440cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4410: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c4410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c4414: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c4414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4418: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c4418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c441c: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x1c441cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c4420: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1c4420u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4424: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1c4424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c4428: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c4428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c442c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1c442cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1c4430: 0xc07123c  jal         func_1C48F0
    ctx->pc = 0x1C4430u;
    SET_GPR_U32(ctx, 31, 0x1C4438u);
    ctx->pc = 0x1C48F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C48F0u, 0x1C4430u, 0x1C4438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4438u;
label_1c4438:
    // 0x1c4438: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1c4438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c443c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c443cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c4440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c4440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4444: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c4444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c4448: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1c4448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c444c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1c444cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4450: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1c4450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c4454: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1c4454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c4458: 0xc071224  jal         func_1C4890
    ctx->pc = 0x1C4458u;
    SET_GPR_U32(ctx, 31, 0x1C4460u);
    ctx->pc = 0x1C4890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4890u, 0x1C4458u, 0x1C4460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4460u;
label_1c4460:
    // 0x1c4460: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1C4460u;
    {
        const bool branch_taken_0x1c4460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4460) {
            ctx->pc = 0x1C44F8u;
            goto label_1c44f8;
        }
    }
    ctx->pc = 0x1C4468u;
label_1c4468:
    // 0x1c4468: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c4468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c446c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1c446cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4470: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1c4470u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c4474: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1c4474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c4478: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1c4478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c447c: 0xc071214  jal         func_1C4850
    ctx->pc = 0x1C447Cu;
    SET_GPR_U32(ctx, 31, 0x1C4484u);
    ctx->pc = 0x1C4850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4850u, 0x1C447Cu, 0x1C4484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4484u;
label_1c4484:
    // 0x1c4484: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1c4484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4488: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x1c4488u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c448c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c448cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c4490: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c4490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4494: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1c4494u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c4498: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c4498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c449c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c449cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c44a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c44a4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1c44a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1c44a8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c44a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c44ac: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1c44acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c44b0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1c44b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c44b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c44b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44b8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1c44b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c44bc: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1c44bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c44c0: 0xc07126c  jal         func_1C49B0
    ctx->pc = 0x1C44C0u;
    SET_GPR_U32(ctx, 31, 0x1C44C8u);
    ctx->pc = 0x1C49B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C49B0u, 0x1C44C0u, 0x1C44C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44C8u;
label_1c44c8:
    // 0x1c44c8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c44c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c44cc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1c44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c44d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c44d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c44d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c44d8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c44dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c44dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c44e0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1c44e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1c44e4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1c44e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c44e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c44e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44ec: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1c44ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c44f0: 0xc071224  jal         func_1C4890
    ctx->pc = 0x1C44F0u;
    SET_GPR_U32(ctx, 31, 0x1C44F8u);
    ctx->pc = 0x1C4890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4890u, 0x1C44F0u, 0x1C44F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44F8u;
label_1c44f8:
    // 0x1c44f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c44f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c44fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c44fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c4500: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x1C4500u;
    SET_GPR_U32(ctx, 31, 0x1C4508u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x1C4500u, 0x1C4508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4508u;
label_1c4508:
    // 0x1c4508: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C4508u;
    {
        const bool branch_taken_0x1c4508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4508) {
            ctx->pc = 0x1C4534u;
            goto label_1c4534;
        }
    }
    ctx->pc = 0x1C4510u;
label_1c4510:
    // 0x1c4510: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1c4510u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4514: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c4514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4518: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1c4518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c451c: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1c451cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c4520: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1c4520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c4524: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x1c4524u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4528: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c4528u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c452c: 0xc071154  jal         func_1C4550
    ctx->pc = 0x1C452Cu;
    SET_GPR_U32(ctx, 31, 0x1C4534u);
    ctx->pc = 0x1C4550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4550u, 0x1C452Cu, 0x1C4534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4534u;
label_1c4534:
    // 0x1c4534: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c4534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c4538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c453c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c453cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4540: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1c4540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c4544: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C454Cu;
    // 0x1c454c: 0x0  nop
    ctx->pc = 0x1c454cu;
    // NOP
    ctx->pc = 0x1c4550u;
}
