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

// Function: sub_003BB3E8
// Address: 0x3bb3e8 - 0x3bb528
void sub_003BB3E8_0x3bb3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB3E8_0x3bb3e8");
#endif

    switch (ctx->pc) {
        case 0x3bb3e8u: goto label_3bb3e8;
        case 0x3bb3ecu: goto label_3bb3ec;
        case 0x3bb3f0u: goto label_3bb3f0;
        case 0x3bb3f4u: goto label_3bb3f4;
        case 0x3bb3f8u: goto label_3bb3f8;
        case 0x3bb3fcu: goto label_3bb3fc;
        case 0x3bb400u: goto label_3bb400;
        case 0x3bb404u: goto label_3bb404;
        case 0x3bb408u: goto label_3bb408;
        case 0x3bb40cu: goto label_3bb40c;
        case 0x3bb410u: goto label_3bb410;
        case 0x3bb414u: goto label_3bb414;
        case 0x3bb418u: goto label_3bb418;
        case 0x3bb41cu: goto label_3bb41c;
        case 0x3bb420u: goto label_3bb420;
        case 0x3bb424u: goto label_3bb424;
        case 0x3bb428u: goto label_3bb428;
        case 0x3bb42cu: goto label_3bb42c;
        case 0x3bb430u: goto label_3bb430;
        case 0x3bb434u: goto label_3bb434;
        case 0x3bb438u: goto label_3bb438;
        case 0x3bb43cu: goto label_3bb43c;
        case 0x3bb440u: goto label_3bb440;
        case 0x3bb444u: goto label_3bb444;
        case 0x3bb448u: goto label_3bb448;
        case 0x3bb44cu: goto label_3bb44c;
        case 0x3bb450u: goto label_3bb450;
        case 0x3bb454u: goto label_3bb454;
        case 0x3bb458u: goto label_3bb458;
        case 0x3bb45cu: goto label_3bb45c;
        case 0x3bb460u: goto label_3bb460;
        case 0x3bb464u: goto label_3bb464;
        case 0x3bb468u: goto label_3bb468;
        case 0x3bb46cu: goto label_3bb46c;
        case 0x3bb470u: goto label_3bb470;
        case 0x3bb474u: goto label_3bb474;
        case 0x3bb478u: goto label_3bb478;
        case 0x3bb47cu: goto label_3bb47c;
        case 0x3bb480u: goto label_3bb480;
        case 0x3bb484u: goto label_3bb484;
        case 0x3bb488u: goto label_3bb488;
        case 0x3bb48cu: goto label_3bb48c;
        case 0x3bb490u: goto label_3bb490;
        case 0x3bb494u: goto label_3bb494;
        case 0x3bb498u: goto label_3bb498;
        case 0x3bb49cu: goto label_3bb49c;
        case 0x3bb4a0u: goto label_3bb4a0;
        case 0x3bb4a4u: goto label_3bb4a4;
        case 0x3bb4a8u: goto label_3bb4a8;
        case 0x3bb4acu: goto label_3bb4ac;
        case 0x3bb4b0u: goto label_3bb4b0;
        case 0x3bb4b4u: goto label_3bb4b4;
        case 0x3bb4b8u: goto label_3bb4b8;
        case 0x3bb4bcu: goto label_3bb4bc;
        case 0x3bb4c0u: goto label_3bb4c0;
        case 0x3bb4c4u: goto label_3bb4c4;
        case 0x3bb4c8u: goto label_3bb4c8;
        case 0x3bb4ccu: goto label_3bb4cc;
        case 0x3bb4d0u: goto label_3bb4d0;
        case 0x3bb4d4u: goto label_3bb4d4;
        case 0x3bb4d8u: goto label_3bb4d8;
        case 0x3bb4dcu: goto label_3bb4dc;
        case 0x3bb4e0u: goto label_3bb4e0;
        case 0x3bb4e4u: goto label_3bb4e4;
        case 0x3bb4e8u: goto label_3bb4e8;
        case 0x3bb4ecu: goto label_3bb4ec;
        case 0x3bb4f0u: goto label_3bb4f0;
        case 0x3bb4f4u: goto label_3bb4f4;
        case 0x3bb4f8u: goto label_3bb4f8;
        case 0x3bb4fcu: goto label_3bb4fc;
        case 0x3bb500u: goto label_3bb500;
        case 0x3bb504u: goto label_3bb504;
        case 0x3bb508u: goto label_3bb508;
        case 0x3bb50cu: goto label_3bb50c;
        case 0x3bb510u: goto label_3bb510;
        case 0x3bb514u: goto label_3bb514;
        case 0x3bb518u: goto label_3bb518;
        case 0x3bb51cu: goto label_3bb51c;
        case 0x3bb520u: goto label_3bb520;
        case 0x3bb524u: goto label_3bb524;
        default: break;
    }

    ctx->pc = 0x3bb3e8u;

label_3bb3e8:
    // 0x3bb3e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3bb3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3bb3ec:
    // 0x3bb3ec: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3bb3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_3bb3f0:
    // 0x3bb3f0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3bb3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3bb3f4:
    // 0x3bb3f4: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x3bb3f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bb3f8:
    // 0x3bb3f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3bb3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3bb3fc:
    // 0x3bb3fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3bb3fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3bb400:
    // 0x3bb400: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3bb400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3bb404:
    // 0x3bb404: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3bb404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3bb408:
    // 0x3bb408: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3bb408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3bb40c:
    // 0x3bb40c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3bb40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3bb410:
    // 0x3bb410: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3bb410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_3bb414:
    // 0x3bb414: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3bb414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_3bb418:
    // 0x3bb418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bb418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bb41c:
    // 0x3bb41c: 0xc0eec4c  jal         func_3BB130
label_3bb420:
    if (ctx->pc == 0x3BB420u) {
        ctx->pc = 0x3BB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB41Cu;
        // 0x3bb420: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB424u;
        goto label_3bb424;
    }
    ctx->pc = 0x3BB41Cu;
    SET_GPR_U32(ctx, 31, 0x3BB424u);
    ctx->pc = 0x3BB420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB41Cu;
    // 0x3bb420: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB130u, 0x3BB41Cu, 0x3BB424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB424u;
label_3bb424:
    // 0x3bb424: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3bb424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bb428:
    // 0x3bb428: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_3bb42c:
    if (ctx->pc == 0x3BB42Cu) {
        ctx->pc = 0x3BB42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB428u;
        // 0x3bb42c: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB430u;
        goto label_3bb430;
    }
    ctx->pc = 0x3BB428u;
    {
        const bool branch_taken_0x3bb428 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB428u;
        // 0x3bb42c: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb428) {
            ctx->pc = 0x3BB4F0u;
            goto label_3bb4f0;
        }
    }
    ctx->pc = 0x3BB430u;
label_3bb430:
    // 0x3bb430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bb430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bb434:
    // 0x3bb434: 0x2613d3bc  addiu       $s3, $s0, -0x2C44
    ctx->pc = 0x3bb434u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955964));
label_3bb438:
    // 0x3bb438: 0xae00d3bc  sw          $zero, -0x2C44($s0)
    ctx->pc = 0x3bb438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294955964), GPR_U32(ctx, 0));
label_3bb43c:
    // 0x3bb43c: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x3bb43cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
label_3bb440:
    // 0x3bb440: 0x3c160062  lui         $s6, 0x62
    ctx->pc = 0x3bb440u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)98 << 16));
label_3bb444:
    // 0x3bb444: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3bb444u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_3bb448:
    // 0x3bb448: 0xc0eebd6  jal         func_3BAF58
label_3bb44c:
    if (ctx->pc == 0x3BB44Cu) {
        ctx->pc = 0x3BB44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB448u;
        // 0x3bb44c: 0x3c170062  lui         $s7, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB450u;
        goto label_3bb450;
    }
    ctx->pc = 0x3BB448u;
    SET_GPR_U32(ctx, 31, 0x3BB450u);
    ctx->pc = 0x3BB44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB448u;
    // 0x3bb44c: 0x3c170062  lui         $s7, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)98 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BAF58u, 0x3BB448u, 0x3BB450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB450u;
label_3bb450:
    // 0x3bb450: 0x8e03d3bc  lw          $v1, -0x2C44($s0)
    ctx->pc = 0x3bb450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294955964)));
label_3bb454:
    // 0x3bb454: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3bb454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3bb458:
    // 0x3bb458: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3bb45c:
    if (ctx->pc == 0x3BB45Cu) {
        ctx->pc = 0x3BB45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB458u;
        // 0x3bb45c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB460u;
        goto label_3bb460;
    }
    ctx->pc = 0x3BB458u;
    {
        const bool branch_taken_0x3bb458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb458) {
            ctx->pc = 0x3BB45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB458u;
            // 0x3bb45c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB460u;
            goto label_3bb460;
        }
    }
    ctx->pc = 0x3BB460u;
label_3bb460:
    // 0x3bb460: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3bb460u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3bb464:
    // 0x3bb464: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x3bb464u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3bb468:
    // 0x3bb468: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3bb468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3bb46c:
    // 0x3bb46c: 0x1812  mflo        $v1
    ctx->pc = 0x3bb46cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_3bb470:
    // 0x3bb470: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
label_3bb474:
    if (ctx->pc == 0x3BB474u) {
        ctx->pc = 0x3BB474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB470u;
        // 0x3bb474: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB478u;
        goto label_3bb478;
    }
    ctx->pc = 0x3BB470u;
    {
        const bool branch_taken_0x3bb470 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB470u;
        // 0x3bb474: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb470) {
            ctx->pc = 0x3BB4B4u;
            goto label_3bb4b4;
        }
    }
    ctx->pc = 0x3BB478u;
label_3bb478:
    // 0x3bb478: 0x2675fac4  addiu       $s5, $s3, -0x53C
    ctx->pc = 0x3bb478u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965956));
label_3bb47c:
    // 0x3bb47c: 0x26d4e880  addiu       $s4, $s6, -0x1780
    ctx->pc = 0x3bb47cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
label_3bb480:
    // 0x3bb480: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x3bb480u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bb484:
    // 0x3bb484: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x3bb484u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3bb488:
    // 0x3bb488: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3bb48c:
    if (ctx->pc == 0x3BB48Cu) {
        ctx->pc = 0x3BB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB488u;
        // 0x3bb48c: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB490u;
        goto label_3bb490;
    }
    ctx->pc = 0x3BB488u;
    {
        const bool branch_taken_0x3bb488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB488u;
        // 0x3bb48c: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb488) {
            ctx->pc = 0x3BB4A8u;
            goto label_3bb4a8;
        }
    }
    ctx->pc = 0x3BB490u;
label_3bb490:
    // 0x3bb490: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x3bb490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_3bb494:
    // 0x3bb494: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3bb494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3bb498:
    // 0x3bb498: 0x8ea40534  lw          $a0, 0x534($s5)
    ctx->pc = 0x3bb498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1332)));
label_3bb49c:
    // 0x3bb49c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3bb49cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3bb4a0:
    // 0x3bb4a0: 0x40f809  jalr        $v0
label_3bb4a4:
    if (ctx->pc == 0x3BB4A4u) {
        ctx->pc = 0x3BB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB4A0u;
        // 0x3bb4a4: 0xac730004  sw          $s3, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB4A8u;
        goto label_3bb4a8;
    }
    ctx->pc = 0x3BB4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BB4A8u);
        ctx->pc = 0x3BB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB4A0u;
        // 0x3bb4a4: 0xac730004  sw          $s3, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB4A0u, 0x3BB4A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BB4A8u;
label_3bb4a8:
    // 0x3bb4a8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3bb4a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bb4ac:
    // 0x3bb4ac: 0x1472fff6  bne         $v1, $s2, . + 4 + (-0xA << 2)
label_3bb4b0:
    if (ctx->pc == 0x3BB4B0u) {
        ctx->pc = 0x3BB4B4u;
        goto label_3bb4b4;
    }
    ctx->pc = 0x3BB4ACu;
    {
        const bool branch_taken_0x3bb4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x3bb4ac) {
            ctx->pc = 0x3BB488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bb488;
        }
    }
    ctx->pc = 0x3BB4B4u;
label_3bb4b4:
    // 0x3bb4b4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3bb4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3bb4b8:
    // 0x3bb4b8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3bb4bc:
    if (ctx->pc == 0x3BB4BCu) {
        ctx->pc = 0x3BB4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB4B8u;
        // 0x3bb4bc: 0x26c3e880  addiu       $v1, $s6, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB4C0u;
        goto label_3bb4c0;
    }
    ctx->pc = 0x3BB4B8u;
    {
        const bool branch_taken_0x3bb4b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB4B8u;
        // 0x3bb4bc: 0x26c3e880  addiu       $v1, $s6, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb4b8) {
            ctx->pc = 0x3BB4CCu;
            goto label_3bb4cc;
        }
    }
    ctx->pc = 0x3BB4C0u;
label_3bb4c0:
    // 0x3bb4c0: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3bb4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3bb4c4:
    // 0x3bb4c4: 0x40f809  jalr        $v0
label_3bb4c8:
    if (ctx->pc == 0x3BB4C8u) {
        ctx->pc = 0x3BB4CCu;
        goto label_3bb4cc;
    }
    ctx->pc = 0x3BB4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BB4CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB4C4u, 0x3BB4CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BB4CCu;
label_3bb4cc:
    // 0x3bb4cc: 0x26c3e880  addiu       $v1, $s6, -0x1780
    ctx->pc = 0x3bb4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
label_3bb4d0:
    // 0x3bb4d0: 0x26e6ce80  addiu       $a2, $s7, -0x3180
    ctx->pc = 0x3bb4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294954624));
label_3bb4d4:
    // 0x3bb4d4: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x3bb4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_3bb4d8:
    // 0x3bb4d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bb4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3bb4dc:
    // 0x3bb4dc: 0x8cc40538  lw          $a0, 0x538($a2)
    ctx->pc = 0x3bb4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1336)));
label_3bb4e0:
    // 0x3bb4e0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3bb4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3bb4e4:
    // 0x3bb4e4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3bb4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_3bb4e8:
    // 0x3bb4e8: 0x40f809  jalr        $v0
label_3bb4ec:
    if (ctx->pc == 0x3BB4ECu) {
        ctx->pc = 0x3BB4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB4E8u;
        // 0x3bb4ec: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB4F0u;
        goto label_3bb4f0;
    }
    ctx->pc = 0x3BB4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BB4F0u);
        ctx->pc = 0x3BB4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB4E8u;
        // 0x3bb4ec: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB4E8u, 0x3BB4F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BB4F0u;
label_3bb4f0:
    // 0x3bb4f0: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x3bb4f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3bb4f4:
    // 0x3bb4f4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3bb4f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3bb4f8:
    // 0x3bb4f8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3bb4f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3bb4fc:
    // 0x3bb4fc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3bb4fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3bb500:
    // 0x3bb500: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3bb500u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3bb504:
    // 0x3bb504: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3bb504u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3bb508:
    // 0x3bb508: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3bb508u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bb50c:
    // 0x3bb50c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3bb50cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bb510:
    // 0x3bb510: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3bb510u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bb514:
    // 0x3bb514: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3bb514u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bb518:
    // 0x3bb518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bb518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bb51c:
    // 0x3bb51c: 0x3e00008  jr          $ra
label_3bb520:
    if (ctx->pc == 0x3BB520u) {
        ctx->pc = 0x3BB520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB51Cu;
        // 0x3bb520: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BB524u;
        goto label_3bb524;
    }
    ctx->pc = 0x3BB51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB51Cu;
        // 0x3bb520: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB524u;
label_3bb524:
    // 0x3bb524: 0x0  nop
    ctx->pc = 0x3bb524u;
    // NOP
    ctx->pc = 0x3bb528u;
}
