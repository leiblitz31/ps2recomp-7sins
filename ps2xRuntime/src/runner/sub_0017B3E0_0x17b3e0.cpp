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

// Function: sub_0017B3E0
// Address: 0x17b3e0 - 0x17b550
void sub_0017B3E0_0x17b3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B3E0_0x17b3e0");
#endif

    switch (ctx->pc) {
        case 0x17b3e0u: goto label_17b3e0;
        case 0x17b3e4u: goto label_17b3e4;
        case 0x17b3e8u: goto label_17b3e8;
        case 0x17b3ecu: goto label_17b3ec;
        case 0x17b3f0u: goto label_17b3f0;
        case 0x17b3f4u: goto label_17b3f4;
        case 0x17b3f8u: goto label_17b3f8;
        case 0x17b3fcu: goto label_17b3fc;
        case 0x17b400u: goto label_17b400;
        case 0x17b404u: goto label_17b404;
        case 0x17b408u: goto label_17b408;
        case 0x17b40cu: goto label_17b40c;
        case 0x17b410u: goto label_17b410;
        case 0x17b414u: goto label_17b414;
        case 0x17b418u: goto label_17b418;
        case 0x17b41cu: goto label_17b41c;
        case 0x17b420u: goto label_17b420;
        case 0x17b424u: goto label_17b424;
        case 0x17b428u: goto label_17b428;
        case 0x17b42cu: goto label_17b42c;
        case 0x17b430u: goto label_17b430;
        case 0x17b434u: goto label_17b434;
        case 0x17b438u: goto label_17b438;
        case 0x17b43cu: goto label_17b43c;
        case 0x17b440u: goto label_17b440;
        case 0x17b444u: goto label_17b444;
        case 0x17b448u: goto label_17b448;
        case 0x17b44cu: goto label_17b44c;
        case 0x17b450u: goto label_17b450;
        case 0x17b454u: goto label_17b454;
        case 0x17b458u: goto label_17b458;
        case 0x17b45cu: goto label_17b45c;
        case 0x17b460u: goto label_17b460;
        case 0x17b464u: goto label_17b464;
        case 0x17b468u: goto label_17b468;
        case 0x17b46cu: goto label_17b46c;
        case 0x17b470u: goto label_17b470;
        case 0x17b474u: goto label_17b474;
        case 0x17b478u: goto label_17b478;
        case 0x17b47cu: goto label_17b47c;
        case 0x17b480u: goto label_17b480;
        case 0x17b484u: goto label_17b484;
        case 0x17b488u: goto label_17b488;
        case 0x17b48cu: goto label_17b48c;
        case 0x17b490u: goto label_17b490;
        case 0x17b494u: goto label_17b494;
        case 0x17b498u: goto label_17b498;
        case 0x17b49cu: goto label_17b49c;
        case 0x17b4a0u: goto label_17b4a0;
        case 0x17b4a4u: goto label_17b4a4;
        case 0x17b4a8u: goto label_17b4a8;
        case 0x17b4acu: goto label_17b4ac;
        case 0x17b4b0u: goto label_17b4b0;
        case 0x17b4b4u: goto label_17b4b4;
        case 0x17b4b8u: goto label_17b4b8;
        case 0x17b4bcu: goto label_17b4bc;
        case 0x17b4c0u: goto label_17b4c0;
        case 0x17b4c4u: goto label_17b4c4;
        case 0x17b4c8u: goto label_17b4c8;
        case 0x17b4ccu: goto label_17b4cc;
        case 0x17b4d0u: goto label_17b4d0;
        case 0x17b4d4u: goto label_17b4d4;
        case 0x17b4d8u: goto label_17b4d8;
        case 0x17b4dcu: goto label_17b4dc;
        case 0x17b4e0u: goto label_17b4e0;
        case 0x17b4e4u: goto label_17b4e4;
        case 0x17b4e8u: goto label_17b4e8;
        case 0x17b4ecu: goto label_17b4ec;
        case 0x17b4f0u: goto label_17b4f0;
        case 0x17b4f4u: goto label_17b4f4;
        case 0x17b4f8u: goto label_17b4f8;
        case 0x17b4fcu: goto label_17b4fc;
        case 0x17b500u: goto label_17b500;
        case 0x17b504u: goto label_17b504;
        case 0x17b508u: goto label_17b508;
        case 0x17b50cu: goto label_17b50c;
        case 0x17b510u: goto label_17b510;
        case 0x17b514u: goto label_17b514;
        case 0x17b518u: goto label_17b518;
        case 0x17b51cu: goto label_17b51c;
        case 0x17b520u: goto label_17b520;
        case 0x17b524u: goto label_17b524;
        case 0x17b528u: goto label_17b528;
        case 0x17b52cu: goto label_17b52c;
        case 0x17b530u: goto label_17b530;
        case 0x17b534u: goto label_17b534;
        case 0x17b538u: goto label_17b538;
        case 0x17b53cu: goto label_17b53c;
        case 0x17b540u: goto label_17b540;
        case 0x17b544u: goto label_17b544;
        case 0x17b548u: goto label_17b548;
        case 0x17b54cu: goto label_17b54c;
        default: break;
    }

    ctx->pc = 0x17b3e0u;

label_17b3e0:
    // 0x17b3e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17b3e4:
    // 0x17b3e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17b3e8:
    // 0x17b3e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_17b3ec:
    // 0x17b3ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17b3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b3f0:
    // 0x17b3f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b3f4:
    // 0x17b3f4: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x17b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_17b3f8:
    // 0x17b3f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17b3fc:
    // 0x17b3fc: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x17b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_17b400:
    // 0x17b400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17b404:
    // 0x17b404: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17b404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17b408:
    // 0x17b408: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17b408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17b40c:
    // 0x17b40c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17b40cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17b410:
    // 0x17b410: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x17b410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_17b414:
    // 0x17b414: 0x320f809  jalr        $t9
label_17b418:
    if (ctx->pc == 0x17B418u) {
        ctx->pc = 0x17B41Cu;
        goto label_17b41c;
    }
    ctx->pc = 0x17B414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17B41Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B414u, 0x17B41Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B41Cu;
label_17b41c:
    // 0x17b41c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b420:
    // 0x17b420: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x17b420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_17b424:
    // 0x17b424: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17b424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b428:
    // 0x17b428: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x17b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_17b42c:
    // 0x17b42c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_17b430:
    if (ctx->pc == 0x17B430u) {
        ctx->pc = 0x17B434u;
        goto label_17b434;
    }
    ctx->pc = 0x17B42Cu;
    {
        const bool branch_taken_0x17b42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b42c) {
            ctx->pc = 0x17B464u;
            goto label_17b464;
        }
    }
    ctx->pc = 0x17B434u;
label_17b434:
    // 0x17b434: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17b434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b438:
    // 0x17b438: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17b438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b43c:
    // 0x17b43c: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x17b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_17b440:
    // 0x17b440: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17b440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17b444:
    // 0x17b444: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x17b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_17b448:
    // 0x17b448: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17b44c:
    // 0x17b44c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17b450:
    // 0x17b450: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b454:
    // 0x17b454: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17b454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17b458:
    // 0x17b458: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x17b458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_17b45c:
    // 0x17b45c: 0x320f809  jalr        $t9
label_17b460:
    if (ctx->pc == 0x17B460u) {
        ctx->pc = 0x17B464u;
        goto label_17b464;
    }
    ctx->pc = 0x17B45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17B464u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B45Cu, 0x17B464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B464u;
label_17b464:
    // 0x17b464: 0xc78080ac  lwc1        $f0, -0x7F54($gp)
    ctx->pc = 0x17b464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b468:
    // 0x17b468: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x17b468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_17b46c:
    // 0x17b46c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17b46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b470:
    // 0x17b470: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17b470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b474:
    // 0x17b474: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x17b474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_17b478:
    // 0x17b478: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17b478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17b47c:
    // 0x17b47c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b480:
    // 0x17b480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17b484:
    // 0x17b484: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x17b484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_17b488:
    // 0x17b488: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x17b488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_17b48c:
    // 0x17b48c: 0xc08c910  jal         func_232440
label_17b490:
    if (ctx->pc == 0x17B490u) {
        ctx->pc = 0x17B494u;
        goto label_17b494;
    }
    ctx->pc = 0x17B48Cu;
    SET_GPR_U32(ctx, 31, 0x17B494u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x17B48Cu, 0x17B494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B494u;
label_17b494:
    // 0x17b494: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17b494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b498:
    // 0x17b498: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17b498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b49c:
    // 0x17b49c: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x17b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_17b4a0:
    // 0x17b4a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17b4a4:
    // 0x17b4a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b4a8:
    // 0x17b4a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17b4ac:
    // 0x17b4ac: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x17b4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_17b4b0:
    // 0x17b4b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17b4b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17b4b4:
    // 0x17b4b4: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x17b4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_17b4b8:
    // 0x17b4b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17b4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17b4bc:
    // 0x17b4bc: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x17b4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_17b4c0:
    // 0x17b4c0: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x17b4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_17b4c4:
    // 0x17b4c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17b4c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b4c8:
    // 0x17b4c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17b4c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b4cc:
    // 0x17b4cc: 0xc08b9fc  jal         func_22E7F0
label_17b4d0:
    if (ctx->pc == 0x17B4D0u) {
        ctx->pc = 0x17B4D4u;
        goto label_17b4d4;
    }
    ctx->pc = 0x17B4CCu;
    SET_GPR_U32(ctx, 31, 0x17B4D4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17B4CCu, 0x17B4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B4D4u;
label_17b4d4:
    // 0x17b4d4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b4d8:
    // 0x17b4d8: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x17b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_17b4dc:
    // 0x17b4dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b4e0:
    // 0x17b4e0: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x17b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_17b4e4:
    // 0x17b4e4: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
label_17b4e8:
    if (ctx->pc == 0x17B4E8u) {
        ctx->pc = 0x17B4ECu;
        goto label_17b4ec;
    }
    ctx->pc = 0x17B4E4u;
    {
        const bool branch_taken_0x17b4e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17b4e4) {
            ctx->pc = 0x17B534u;
            goto label_17b534;
        }
    }
    ctx->pc = 0x17B4ECu;
label_17b4ec:
    // 0x17b4ec: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x17b4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b4f0:
    // 0x17b4f0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x17b4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_17b4f4:
    // 0x17b4f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17b4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b4f8:
    // 0x17b4f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b4fc:
    // 0x17b4fc: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x17b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_17b500:
    // 0x17b500: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17b500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17b504:
    // 0x17b504: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17b504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17b508:
    // 0x17b508: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17b50c:
    // 0x17b50c: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x17b50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_17b510:
    // 0x17b510: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x17b510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_17b514:
    // 0x17b514: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17b514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17b518:
    // 0x17b518: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x17b518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_17b51c:
    // 0x17b51c: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x17b51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_17b520:
    // 0x17b520: 0xc78d81b8  lwc1        $f13, -0x7E48($gp)
    ctx->pc = 0x17b520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_17b524:
    // 0x17b524: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17b524u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b528:
    // 0x17b528: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17b528u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b52c:
    // 0x17b52c: 0xc08b9fc  jal         func_22E7F0
label_17b530:
    if (ctx->pc == 0x17B530u) {
        ctx->pc = 0x17B534u;
        goto label_17b534;
    }
    ctx->pc = 0x17B52Cu;
    SET_GPR_U32(ctx, 31, 0x17B534u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17B52Cu, 0x17B534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B534u;
label_17b534:
    // 0x17b534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17b538:
    // 0x17b538: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17b538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17b53c:
    // 0x17b53c: 0x3e00008  jr          $ra
label_17b540:
    if (ctx->pc == 0x17B540u) {
        ctx->pc = 0x17B544u;
        goto label_17b544;
    }
    ctx->pc = 0x17B53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B544u;
label_17b544:
    // 0x17b544: 0x0  nop
    ctx->pc = 0x17b544u;
    // NOP
label_17b548:
    // 0x17b548: 0x0  nop
    ctx->pc = 0x17b548u;
    // NOP
label_17b54c:
    // 0x17b54c: 0x0  nop
    ctx->pc = 0x17b54cu;
    // NOP
    ctx->pc = 0x17b550u;
}
