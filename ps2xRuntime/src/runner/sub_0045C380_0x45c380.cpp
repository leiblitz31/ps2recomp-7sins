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

// Function: sub_0045C380
// Address: 0x45c380 - 0x45c550
void sub_0045C380_0x45c380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045C380_0x45c380");
#endif

    switch (ctx->pc) {
        case 0x45c380u: goto label_45c380;
        case 0x45c384u: goto label_45c384;
        case 0x45c388u: goto label_45c388;
        case 0x45c38cu: goto label_45c38c;
        case 0x45c390u: goto label_45c390;
        case 0x45c394u: goto label_45c394;
        case 0x45c398u: goto label_45c398;
        case 0x45c39cu: goto label_45c39c;
        case 0x45c3a0u: goto label_45c3a0;
        case 0x45c3a4u: goto label_45c3a4;
        case 0x45c3a8u: goto label_45c3a8;
        case 0x45c3acu: goto label_45c3ac;
        case 0x45c3b0u: goto label_45c3b0;
        case 0x45c3b4u: goto label_45c3b4;
        case 0x45c3b8u: goto label_45c3b8;
        case 0x45c3bcu: goto label_45c3bc;
        case 0x45c3c0u: goto label_45c3c0;
        case 0x45c3c4u: goto label_45c3c4;
        case 0x45c3c8u: goto label_45c3c8;
        case 0x45c3ccu: goto label_45c3cc;
        case 0x45c3d0u: goto label_45c3d0;
        case 0x45c3d4u: goto label_45c3d4;
        case 0x45c3d8u: goto label_45c3d8;
        case 0x45c3dcu: goto label_45c3dc;
        case 0x45c3e0u: goto label_45c3e0;
        case 0x45c3e4u: goto label_45c3e4;
        case 0x45c3e8u: goto label_45c3e8;
        case 0x45c3ecu: goto label_45c3ec;
        case 0x45c3f0u: goto label_45c3f0;
        case 0x45c3f4u: goto label_45c3f4;
        case 0x45c3f8u: goto label_45c3f8;
        case 0x45c3fcu: goto label_45c3fc;
        case 0x45c400u: goto label_45c400;
        case 0x45c404u: goto label_45c404;
        case 0x45c408u: goto label_45c408;
        case 0x45c40cu: goto label_45c40c;
        case 0x45c410u: goto label_45c410;
        case 0x45c414u: goto label_45c414;
        case 0x45c418u: goto label_45c418;
        case 0x45c41cu: goto label_45c41c;
        case 0x45c420u: goto label_45c420;
        case 0x45c424u: goto label_45c424;
        case 0x45c428u: goto label_45c428;
        case 0x45c42cu: goto label_45c42c;
        case 0x45c430u: goto label_45c430;
        case 0x45c434u: goto label_45c434;
        case 0x45c438u: goto label_45c438;
        case 0x45c43cu: goto label_45c43c;
        case 0x45c440u: goto label_45c440;
        case 0x45c444u: goto label_45c444;
        case 0x45c448u: goto label_45c448;
        case 0x45c44cu: goto label_45c44c;
        case 0x45c450u: goto label_45c450;
        case 0x45c454u: goto label_45c454;
        case 0x45c458u: goto label_45c458;
        case 0x45c45cu: goto label_45c45c;
        case 0x45c460u: goto label_45c460;
        case 0x45c464u: goto label_45c464;
        case 0x45c468u: goto label_45c468;
        case 0x45c46cu: goto label_45c46c;
        case 0x45c470u: goto label_45c470;
        case 0x45c474u: goto label_45c474;
        case 0x45c478u: goto label_45c478;
        case 0x45c47cu: goto label_45c47c;
        case 0x45c480u: goto label_45c480;
        case 0x45c484u: goto label_45c484;
        case 0x45c488u: goto label_45c488;
        case 0x45c48cu: goto label_45c48c;
        case 0x45c490u: goto label_45c490;
        case 0x45c494u: goto label_45c494;
        case 0x45c498u: goto label_45c498;
        case 0x45c49cu: goto label_45c49c;
        case 0x45c4a0u: goto label_45c4a0;
        case 0x45c4a4u: goto label_45c4a4;
        case 0x45c4a8u: goto label_45c4a8;
        case 0x45c4acu: goto label_45c4ac;
        case 0x45c4b0u: goto label_45c4b0;
        case 0x45c4b4u: goto label_45c4b4;
        case 0x45c4b8u: goto label_45c4b8;
        case 0x45c4bcu: goto label_45c4bc;
        case 0x45c4c0u: goto label_45c4c0;
        case 0x45c4c4u: goto label_45c4c4;
        case 0x45c4c8u: goto label_45c4c8;
        case 0x45c4ccu: goto label_45c4cc;
        case 0x45c4d0u: goto label_45c4d0;
        case 0x45c4d4u: goto label_45c4d4;
        case 0x45c4d8u: goto label_45c4d8;
        case 0x45c4dcu: goto label_45c4dc;
        case 0x45c4e0u: goto label_45c4e0;
        case 0x45c4e4u: goto label_45c4e4;
        case 0x45c4e8u: goto label_45c4e8;
        case 0x45c4ecu: goto label_45c4ec;
        case 0x45c4f0u: goto label_45c4f0;
        case 0x45c4f4u: goto label_45c4f4;
        case 0x45c4f8u: goto label_45c4f8;
        case 0x45c4fcu: goto label_45c4fc;
        case 0x45c500u: goto label_45c500;
        case 0x45c504u: goto label_45c504;
        case 0x45c508u: goto label_45c508;
        case 0x45c50cu: goto label_45c50c;
        case 0x45c510u: goto label_45c510;
        case 0x45c514u: goto label_45c514;
        case 0x45c518u: goto label_45c518;
        case 0x45c51cu: goto label_45c51c;
        case 0x45c520u: goto label_45c520;
        case 0x45c524u: goto label_45c524;
        case 0x45c528u: goto label_45c528;
        case 0x45c52cu: goto label_45c52c;
        case 0x45c530u: goto label_45c530;
        case 0x45c534u: goto label_45c534;
        case 0x45c538u: goto label_45c538;
        case 0x45c53cu: goto label_45c53c;
        case 0x45c540u: goto label_45c540;
        case 0x45c544u: goto label_45c544;
        case 0x45c548u: goto label_45c548;
        case 0x45c54cu: goto label_45c54c;
        default: break;
    }

    ctx->pc = 0x45c380u;

label_45c380:
    // 0x45c380: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x45c380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_45c384:
    // 0x45c384: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x45c384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_45c388:
    // 0x45c388: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x45c388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_45c38c:
    // 0x45c38c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45c38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_45c390:
    // 0x45c390: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45c390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45c394:
    // 0x45c394: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45c394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45c398:
    // 0x45c398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45c398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45c39c:
    // 0x45c39c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x45c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_45c3a0:
    // 0x45c3a0: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x45c3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_45c3a4:
    // 0x45c3a4: 0xa3a60080  sb          $a2, 0x80($sp)
    ctx->pc = 0x45c3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 6));
label_45c3a8:
    // 0x45c3a8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x45c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_45c3ac:
    // 0x45c3ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_45c3b0:
    if (ctx->pc == 0x45C3B0u) {
        ctx->pc = 0x45C3B4u;
        goto label_45c3b4;
    }
    ctx->pc = 0x45C3ACu;
    {
        const bool branch_taken_0x45c3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c3ac) {
            ctx->pc = 0x45C3D4u;
            goto label_45c3d4;
        }
    }
    ctx->pc = 0x45C3B4u;
label_45c3b4:
    // 0x45c3b4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x45c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_45c3b8:
    // 0x45c3b8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x45c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45c3bc:
    // 0x45c3bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_45c3c0:
    if (ctx->pc == 0x45C3C0u) {
        ctx->pc = 0x45C3C4u;
        goto label_45c3c4;
    }
    ctx->pc = 0x45C3BCu;
    {
        const bool branch_taken_0x45c3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c3bc) {
            ctx->pc = 0x45C3D4u;
            goto label_45c3d4;
        }
    }
    ctx->pc = 0x45C3C4u;
label_45c3c4:
    // 0x45c3c4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x45c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_45c3c8:
    // 0x45c3c8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x45c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_45c3cc:
    // 0x45c3cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_45c3d0:
    if (ctx->pc == 0x45C3D0u) {
        ctx->pc = 0x45C3D4u;
        goto label_45c3d4;
    }
    ctx->pc = 0x45C3CCu;
    {
        const bool branch_taken_0x45c3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45c3cc) {
            ctx->pc = 0x45C3E0u;
            goto label_45c3e0;
        }
    }
    ctx->pc = 0x45C3D4u;
label_45c3d4:
    // 0x45c3d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45c3d8:
    // 0x45c3d8: 0x10000054  b           . + 4 + (0x54 << 2)
label_45c3dc:
    if (ctx->pc == 0x45C3DCu) {
        ctx->pc = 0x45C3E0u;
        goto label_45c3e0;
    }
    ctx->pc = 0x45C3D8u;
    {
        const bool branch_taken_0x45c3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c3d8) {
            ctx->pc = 0x45C52Cu;
            goto label_45c52c;
        }
    }
    ctx->pc = 0x45C3E0u;
label_45c3e0:
    // 0x45c3e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x45c3e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45c3e4:
    // 0x45c3e4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x45c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_45c3e8:
    // 0x45c3e8: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x45c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_45c3ec:
    // 0x45c3ec: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x45c3ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_45c3f0:
    // 0x45c3f0: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x45c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_45c3f4:
    // 0x45c3f4: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x45c3f4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_45c3f8:
    // 0x45c3f8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x45c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_45c3fc:
    // 0x45c3fc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x45c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_45c400:
    // 0x45c400: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x45c400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_45c404:
    // 0x45c404: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x45c404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45c408:
    // 0x45c408: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x45c408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_45c40c:
    // 0x45c40c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x45c40cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c410:
    // 0x45c410: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x45c410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_45c414:
    // 0x45c414: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x45c414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45c418:
    // 0x45c418: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c41c:
    // 0x45c41c: 0x8c42e970  lw          $v0, -0x1690($v0)
    ctx->pc = 0x45c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961520)));
label_45c420:
    // 0x45c420: 0x40f809  jalr        $v0
label_45c424:
    if (ctx->pc == 0x45C424u) {
        ctx->pc = 0x45C428u;
        goto label_45c428;
    }
    ctx->pc = 0x45C420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45C428u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45C420u, 0x45C428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45C428u;
label_45c428:
    // 0x45c428: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x45c428u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c42c:
    // 0x45c42c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_45c430:
    if (ctx->pc == 0x45C430u) {
        ctx->pc = 0x45C434u;
        goto label_45c434;
    }
    ctx->pc = 0x45C42Cu;
    {
        const bool branch_taken_0x45c42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c42c) {
            ctx->pc = 0x45C4A4u;
            goto label_45c4a4;
        }
    }
    ctx->pc = 0x45C434u;
label_45c434:
    // 0x45c434: 0x6810004  bgez        $s4, . + 4 + (0x4 << 2)
label_45c438:
    if (ctx->pc == 0x45C438u) {
        ctx->pc = 0x45C43Cu;
        goto label_45c43c;
    }
    ctx->pc = 0x45C434u;
    {
        const bool branch_taken_0x45c434 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x45c434) {
            ctx->pc = 0x45C448u;
            goto label_45c448;
        }
    }
    ctx->pc = 0x45C43Cu;
label_45c43c:
    // 0x45c43c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x45c43cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45c440:
    // 0x45c440: 0x10000009  b           . + 4 + (0x9 << 2)
label_45c444:
    if (ctx->pc == 0x45C444u) {
        ctx->pc = 0x45C448u;
        goto label_45c448;
    }
    ctx->pc = 0x45C440u;
    {
        const bool branch_taken_0x45c440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c440) {
            ctx->pc = 0x45C468u;
            goto label_45c468;
        }
    }
    ctx->pc = 0x45C448u;
label_45c448:
    // 0x45c448: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x45c448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_45c44c:
    // 0x45c44c: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x45c44cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_45c450:
    // 0x45c450: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_45c454:
    if (ctx->pc == 0x45C454u) {
        ctx->pc = 0x45C458u;
        goto label_45c458;
    }
    ctx->pc = 0x45C450u;
    {
        const bool branch_taken_0x45c450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c450) {
            ctx->pc = 0x45C464u;
            goto label_45c464;
        }
    }
    ctx->pc = 0x45C458u;
label_45c458:
    // 0x45c458: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x45c458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45c45c:
    // 0x45c45c: 0x10000002  b           . + 4 + (0x2 << 2)
label_45c460:
    if (ctx->pc == 0x45C460u) {
        ctx->pc = 0x45C464u;
        goto label_45c464;
    }
    ctx->pc = 0x45C45Cu;
    {
        const bool branch_taken_0x45c45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c45c) {
            ctx->pc = 0x45C468u;
            goto label_45c468;
        }
    }
    ctx->pc = 0x45C464u;
label_45c464:
    // 0x45c464: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x45c464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45c468:
    // 0x45c468: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x45c468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_45c46c:
    // 0x45c46c: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x45c46cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_45c470:
    // 0x45c470: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x45c470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_45c474:
    // 0x45c474: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x45c474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_45c478:
    // 0x45c478: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x45c478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_45c47c:
    // 0x45c47c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x45c47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45c480:
    // 0x45c480: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x45c480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_45c484:
    // 0x45c484: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x45c484u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c488:
    // 0x45c488: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x45c488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_45c48c:
    // 0x45c48c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x45c48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45c490:
    // 0x45c490: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c494:
    // 0x45c494: 0x8c42e970  lw          $v0, -0x1690($v0)
    ctx->pc = 0x45c494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961520)));
label_45c498:
    // 0x45c498: 0x40f809  jalr        $v0
label_45c49c:
    if (ctx->pc == 0x45C49Cu) {
        ctx->pc = 0x45C4A0u;
        goto label_45c4a0;
    }
    ctx->pc = 0x45C498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45C4A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45C498u, 0x45C4A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45C4A0u;
label_45c4a0:
    // 0x45c4a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x45c4a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c4a4:
    // 0x45c4a4: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_45c4a8:
    if (ctx->pc == 0x45C4A8u) {
        ctx->pc = 0x45C4ACu;
        goto label_45c4ac;
    }
    ctx->pc = 0x45C4A4u;
    {
        const bool branch_taken_0x45c4a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c4a4) {
            ctx->pc = 0x45C4B4u;
            goto label_45c4b4;
        }
    }
    ctx->pc = 0x45C4ACu;
label_45c4ac:
    // 0x45c4ac: 0x1651ffe1  bne         $s2, $s1, . + 4 + (-0x1F << 2)
label_45c4b0:
    if (ctx->pc == 0x45C4B0u) {
        ctx->pc = 0x45C4B4u;
        goto label_45c4b4;
    }
    ctx->pc = 0x45C4ACu;
    {
        const bool branch_taken_0x45c4ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x45c4ac) {
            ctx->pc = 0x45C434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45c434;
        }
    }
    ctx->pc = 0x45C4B4u;
label_45c4b4:
    // 0x45c4b4: 0x1280001c  beqz        $s4, . + 4 + (0x1C << 2)
label_45c4b8:
    if (ctx->pc == 0x45C4B8u) {
        ctx->pc = 0x45C4BCu;
        goto label_45c4bc;
    }
    ctx->pc = 0x45C4B4u;
    {
        const bool branch_taken_0x45c4b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c4b4) {
            ctx->pc = 0x45C528u;
            goto label_45c528;
        }
    }
    ctx->pc = 0x45C4BCu;
label_45c4bc:
    // 0x45c4bc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x45c4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_45c4c0:
    // 0x45c4c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x45c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_45c4c4:
    // 0x45c4c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x45c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_45c4c8:
    // 0x45c4c8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x45c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_45c4cc:
    // 0x45c4cc: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x45c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_45c4d0:
    // 0x45c4d0: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x45c4d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c4d4:
    // 0x45c4d4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x45c4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_45c4d8:
    // 0x45c4d8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45c4dc:
    // 0x45c4dc: 0x8c42e974  lw          $v0, -0x168C($v0)
    ctx->pc = 0x45c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961524)));
label_45c4e0:
    // 0x45c4e0: 0x40f809  jalr        $v0
label_45c4e4:
    if (ctx->pc == 0x45C4E4u) {
        ctx->pc = 0x45C4E8u;
        goto label_45c4e8;
    }
    ctx->pc = 0x45C4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45C4E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45C4E0u, 0x45C4E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45C4E8u;
label_45c4e8:
    // 0x45c4e8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x45c4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_45c4ec:
    // 0x45c4ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x45c4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45c4f0:
    // 0x45c4f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x45c4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c4f4:
    // 0x45c4f4: 0xc0bc66e  jal         func_2F19B8
label_45c4f8:
    if (ctx->pc == 0x45C4F8u) {
        ctx->pc = 0x45C4FCu;
        goto label_45c4fc;
    }
    ctx->pc = 0x45C4F4u;
    SET_GPR_U32(ctx, 31, 0x45C4FCu);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x45C4F4u, 0x45C4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45C4FCu;
label_45c4fc:
    // 0x45c4fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_45c500:
    if (ctx->pc == 0x45C500u) {
        ctx->pc = 0x45C504u;
        goto label_45c504;
    }
    ctx->pc = 0x45C4FCu;
    {
        const bool branch_taken_0x45c4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c4fc) {
            ctx->pc = 0x45C528u;
            goto label_45c528;
        }
    }
    ctx->pc = 0x45C504u;
label_45c504:
    // 0x45c504: 0x93a20080  lbu         $v0, 0x80($sp)
    ctx->pc = 0x45c504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
label_45c508:
    // 0x45c508: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_45c50c:
    if (ctx->pc == 0x45C50Cu) {
        ctx->pc = 0x45C510u;
        goto label_45c510;
    }
    ctx->pc = 0x45C508u;
    {
        const bool branch_taken_0x45c508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c508) {
            ctx->pc = 0x45C51Cu;
            goto label_45c51c;
        }
    }
    ctx->pc = 0x45C510u;
label_45c510:
    // 0x45c510: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x45c510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45c514:
    // 0x45c514: 0x10000005  b           . + 4 + (0x5 << 2)
label_45c518:
    if (ctx->pc == 0x45C518u) {
        ctx->pc = 0x45C51Cu;
        goto label_45c51c;
    }
    ctx->pc = 0x45C514u;
    {
        const bool branch_taken_0x45c514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c514) {
            ctx->pc = 0x45C52Cu;
            goto label_45c52c;
        }
    }
    ctx->pc = 0x45C51Cu;
label_45c51c:
    // 0x45c51c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45c520:
    // 0x45c520: 0x10000002  b           . + 4 + (0x2 << 2)
label_45c524:
    if (ctx->pc == 0x45C524u) {
        ctx->pc = 0x45C528u;
        goto label_45c528;
    }
    ctx->pc = 0x45C520u;
    {
        const bool branch_taken_0x45c520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c520) {
            ctx->pc = 0x45C52Cu;
            goto label_45c52c;
        }
    }
    ctx->pc = 0x45C528u;
label_45c528:
    // 0x45c528: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x45c528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45c52c:
    // 0x45c52c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x45c52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_45c530:
    // 0x45c530: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x45c530u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_45c534:
    // 0x45c534: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45c534u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45c538:
    // 0x45c538: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45c538u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45c53c:
    // 0x45c53c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45c53cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45c540:
    // 0x45c540: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45c540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45c544:
    // 0x45c544: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x45c544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_45c548:
    // 0x45c548: 0x3e00008  jr          $ra
label_45c54c:
    if (ctx->pc == 0x45C54Cu) {
        ctx->pc = 0x45C550u;
        goto label_fallthrough_0x45c548;
    }
    ctx->pc = 0x45C548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45C548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x45c548:
    ctx->pc = 0x45C550u;
}
