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

// Function: sub_001863F0
// Address: 0x1863f0 - 0x1865a0
void sub_001863F0_0x1863f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001863F0_0x1863f0");
#endif

    switch (ctx->pc) {
        case 0x1863f0u: goto label_1863f0;
        case 0x1863f4u: goto label_1863f4;
        case 0x1863f8u: goto label_1863f8;
        case 0x1863fcu: goto label_1863fc;
        case 0x186400u: goto label_186400;
        case 0x186404u: goto label_186404;
        case 0x186408u: goto label_186408;
        case 0x18640cu: goto label_18640c;
        case 0x186410u: goto label_186410;
        case 0x186414u: goto label_186414;
        case 0x186418u: goto label_186418;
        case 0x18641cu: goto label_18641c;
        case 0x186420u: goto label_186420;
        case 0x186424u: goto label_186424;
        case 0x186428u: goto label_186428;
        case 0x18642cu: goto label_18642c;
        case 0x186430u: goto label_186430;
        case 0x186434u: goto label_186434;
        case 0x186438u: goto label_186438;
        case 0x18643cu: goto label_18643c;
        case 0x186440u: goto label_186440;
        case 0x186444u: goto label_186444;
        case 0x186448u: goto label_186448;
        case 0x18644cu: goto label_18644c;
        case 0x186450u: goto label_186450;
        case 0x186454u: goto label_186454;
        case 0x186458u: goto label_186458;
        case 0x18645cu: goto label_18645c;
        case 0x186460u: goto label_186460;
        case 0x186464u: goto label_186464;
        case 0x186468u: goto label_186468;
        case 0x18646cu: goto label_18646c;
        case 0x186470u: goto label_186470;
        case 0x186474u: goto label_186474;
        case 0x186478u: goto label_186478;
        case 0x18647cu: goto label_18647c;
        case 0x186480u: goto label_186480;
        case 0x186484u: goto label_186484;
        case 0x186488u: goto label_186488;
        case 0x18648cu: goto label_18648c;
        case 0x186490u: goto label_186490;
        case 0x186494u: goto label_186494;
        case 0x186498u: goto label_186498;
        case 0x18649cu: goto label_18649c;
        case 0x1864a0u: goto label_1864a0;
        case 0x1864a4u: goto label_1864a4;
        case 0x1864a8u: goto label_1864a8;
        case 0x1864acu: goto label_1864ac;
        case 0x1864b0u: goto label_1864b0;
        case 0x1864b4u: goto label_1864b4;
        case 0x1864b8u: goto label_1864b8;
        case 0x1864bcu: goto label_1864bc;
        case 0x1864c0u: goto label_1864c0;
        case 0x1864c4u: goto label_1864c4;
        case 0x1864c8u: goto label_1864c8;
        case 0x1864ccu: goto label_1864cc;
        case 0x1864d0u: goto label_1864d0;
        case 0x1864d4u: goto label_1864d4;
        case 0x1864d8u: goto label_1864d8;
        case 0x1864dcu: goto label_1864dc;
        case 0x1864e0u: goto label_1864e0;
        case 0x1864e4u: goto label_1864e4;
        case 0x1864e8u: goto label_1864e8;
        case 0x1864ecu: goto label_1864ec;
        case 0x1864f0u: goto label_1864f0;
        case 0x1864f4u: goto label_1864f4;
        case 0x1864f8u: goto label_1864f8;
        case 0x1864fcu: goto label_1864fc;
        case 0x186500u: goto label_186500;
        case 0x186504u: goto label_186504;
        case 0x186508u: goto label_186508;
        case 0x18650cu: goto label_18650c;
        case 0x186510u: goto label_186510;
        case 0x186514u: goto label_186514;
        case 0x186518u: goto label_186518;
        case 0x18651cu: goto label_18651c;
        case 0x186520u: goto label_186520;
        case 0x186524u: goto label_186524;
        case 0x186528u: goto label_186528;
        case 0x18652cu: goto label_18652c;
        case 0x186530u: goto label_186530;
        case 0x186534u: goto label_186534;
        case 0x186538u: goto label_186538;
        case 0x18653cu: goto label_18653c;
        case 0x186540u: goto label_186540;
        case 0x186544u: goto label_186544;
        case 0x186548u: goto label_186548;
        case 0x18654cu: goto label_18654c;
        case 0x186550u: goto label_186550;
        case 0x186554u: goto label_186554;
        case 0x186558u: goto label_186558;
        case 0x18655cu: goto label_18655c;
        case 0x186560u: goto label_186560;
        case 0x186564u: goto label_186564;
        case 0x186568u: goto label_186568;
        case 0x18656cu: goto label_18656c;
        case 0x186570u: goto label_186570;
        case 0x186574u: goto label_186574;
        case 0x186578u: goto label_186578;
        case 0x18657cu: goto label_18657c;
        case 0x186580u: goto label_186580;
        case 0x186584u: goto label_186584;
        case 0x186588u: goto label_186588;
        case 0x18658cu: goto label_18658c;
        case 0x186590u: goto label_186590;
        case 0x186594u: goto label_186594;
        case 0x186598u: goto label_186598;
        case 0x18659cu: goto label_18659c;
        default: break;
    }

    ctx->pc = 0x1863f0u;

label_1863f0:
    // 0x1863f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1863f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1863f4:
    // 0x1863f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1863f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1863f8:
    // 0x1863f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1863f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1863fc:
    // 0x1863fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1863fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_186400:
    // 0x186400: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x186400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_186404:
    // 0x186404: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x186404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_186408:
    // 0x186408: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x186408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_18640c:
    // 0x18640c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x18640cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_186410:
    // 0x186410: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x186410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_186414:
    // 0x186414: 0x3e00008  jr          $ra
label_186418:
    if (ctx->pc == 0x186418u) {
        ctx->pc = 0x18641Cu;
        goto label_18641c;
    }
    ctx->pc = 0x186414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18641Cu;
label_18641c:
    // 0x18641c: 0x0  nop
    ctx->pc = 0x18641cu;
    // NOP
label_186420:
    // 0x186420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x186420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_186424:
    // 0x186424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_186428:
    // 0x186428: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x186428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_18642c:
    // 0x18642c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18642cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_186430:
    // 0x186430: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x186430u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
label_186434:
    // 0x186434: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x186434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_186438:
    // 0x186438: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x186438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_18643c:
    // 0x18643c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_186440:
    if (ctx->pc == 0x186440u) {
        ctx->pc = 0x186444u;
        goto label_186444;
    }
    ctx->pc = 0x18643Cu;
    {
        const bool branch_taken_0x18643c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18643c) {
            ctx->pc = 0x186460u;
            goto label_186460;
        }
    }
    ctx->pc = 0x186444u;
label_186444:
    // 0x186444: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x186444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_186448:
    // 0x186448: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x186448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_18644c:
    // 0x18644c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_186450:
    if (ctx->pc == 0x186450u) {
        ctx->pc = 0x186454u;
        goto label_186454;
    }
    ctx->pc = 0x18644Cu;
    {
        const bool branch_taken_0x18644c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18644c) {
            ctx->pc = 0x186460u;
            goto label_186460;
        }
    }
    ctx->pc = 0x186454u;
label_186454:
    // 0x186454: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x186454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_186458:
    // 0x186458: 0xc061c50  jal         func_187140
label_18645c:
    if (ctx->pc == 0x18645Cu) {
        ctx->pc = 0x186460u;
        goto label_186460;
    }
    ctx->pc = 0x186458u;
    SET_GPR_U32(ctx, 31, 0x186460u);
    ctx->pc = 0x187140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187140u, 0x186458u, 0x186460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186460u;
label_186460:
    // 0x186460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186464:
    // 0x186464: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x186464u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_186468:
    // 0x186468: 0x3e00008  jr          $ra
label_18646c:
    if (ctx->pc == 0x18646Cu) {
        ctx->pc = 0x186470u;
        goto label_186470;
    }
    ctx->pc = 0x186468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186470u;
label_186470:
    // 0x186470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x186470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_186474:
    // 0x186474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_186478:
    // 0x186478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18647c:
    // 0x18647c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18647cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_186480:
    // 0x186480: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x186480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_186484:
    // 0x186484: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x186484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_186488:
    // 0x186488: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x186488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_18648c:
    // 0x18648c: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x18648cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_186490:
    // 0x186490: 0x40f809  jalr        $v0
label_186494:
    if (ctx->pc == 0x186494u) {
        ctx->pc = 0x186498u;
        goto label_186498;
    }
    ctx->pc = 0x186490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186498u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186490u, 0x186498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186498u;
label_186498:
    // 0x186498: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x186498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_18649c:
    // 0x18649c: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x18649cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1864a0:
    // 0x1864a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1864a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1864a4:
    // 0x1864a4: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x1864a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_1864a8:
    // 0x1864a8: 0x40f809  jalr        $v0
label_1864ac:
    if (ctx->pc == 0x1864ACu) {
        ctx->pc = 0x1864B0u;
        goto label_1864b0;
    }
    ctx->pc = 0x1864A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1864B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1864A8u, 0x1864B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1864B0u;
label_1864b0:
    // 0x1864b0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1864b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1864b4:
    // 0x1864b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1864b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1864b8:
    // 0x1864b8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1864b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1864bc:
    // 0x1864bc: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x1864bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_1864c0:
    // 0x1864c0: 0x40f809  jalr        $v0
label_1864c4:
    if (ctx->pc == 0x1864C4u) {
        ctx->pc = 0x1864C8u;
        goto label_1864c8;
    }
    ctx->pc = 0x1864C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1864C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1864C0u, 0x1864C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1864C8u;
label_1864c8:
    // 0x1864c8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1864c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1864cc:
    // 0x1864cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1864ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1864d0:
    // 0x1864d0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1864d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1864d4:
    // 0x1864d4: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x1864d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_1864d8:
    // 0x1864d8: 0x40f809  jalr        $v0
label_1864dc:
    if (ctx->pc == 0x1864DCu) {
        ctx->pc = 0x1864E0u;
        goto label_1864e0;
    }
    ctx->pc = 0x1864D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1864E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1864D8u, 0x1864E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1864E0u;
label_1864e0:
    // 0x1864e0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1864e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1864e4:
    // 0x1864e4: 0xc055a84  jal         func_156A10
label_1864e8:
    if (ctx->pc == 0x1864E8u) {
        ctx->pc = 0x1864ECu;
        goto label_1864ec;
    }
    ctx->pc = 0x1864E4u;
    SET_GPR_U32(ctx, 31, 0x1864ECu);
    ctx->pc = 0x156A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A10u, 0x1864E4u, 0x1864ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1864ECu;
label_1864ec:
    // 0x1864ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1864ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1864f0:
    // 0x1864f0: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x1864f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1864f4:
    // 0x1864f4: 0xc0618fc  jal         func_1863F0
label_1864f8:
    if (ctx->pc == 0x1864F8u) {
        ctx->pc = 0x1864FCu;
        goto label_1864fc;
    }
    ctx->pc = 0x1864F4u;
    SET_GPR_U32(ctx, 31, 0x1864FCu);
    ctx->pc = 0x1863F0u;
    goto label_1863f0;
    ctx->pc = 0x1864FCu;
label_1864fc:
    // 0x1864fc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_186500:
    if (ctx->pc == 0x186500u) {
        ctx->pc = 0x186504u;
        goto label_186504;
    }
    ctx->pc = 0x1864FCu;
    {
        const bool branch_taken_0x1864fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1864fc) {
            ctx->pc = 0x186550u;
            goto label_186550;
        }
    }
    ctx->pc = 0x186504u;
label_186504:
    // 0x186504: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x186504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_186508:
    // 0x186508: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x186508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_18650c:
    // 0x18650c: 0xc061284  jal         func_184A10
label_186510:
    if (ctx->pc == 0x186510u) {
        ctx->pc = 0x186514u;
        goto label_186514;
    }
    ctx->pc = 0x18650Cu;
    SET_GPR_U32(ctx, 31, 0x186514u);
    ctx->pc = 0x184A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A10u, 0x18650Cu, 0x186514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186514u;
label_186514:
    // 0x186514: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x186514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_186518:
    // 0x186518: 0x10000007  b           . + 4 + (0x7 << 2)
label_18651c:
    if (ctx->pc == 0x18651Cu) {
        ctx->pc = 0x186520u;
        goto label_186520;
    }
    ctx->pc = 0x186518u;
    {
        const bool branch_taken_0x186518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186518) {
            ctx->pc = 0x186538u;
            goto label_186538;
        }
    }
    ctx->pc = 0x186520u;
label_186520:
    // 0x186520: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x186520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_186524:
    // 0x186524: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x186524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_186528:
    // 0x186528: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x186528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18652c:
    // 0x18652c: 0xc08c258  jal         func_230960
label_186530:
    if (ctx->pc == 0x186530u) {
        ctx->pc = 0x186534u;
        goto label_186534;
    }
    ctx->pc = 0x18652Cu;
    SET_GPR_U32(ctx, 31, 0x186534u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x18652Cu, 0x186534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186534u;
label_186534:
    // 0x186534: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x186534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_186538:
    // 0x186538: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x186538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_18653c:
    // 0x18653c: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x18653cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_186540:
    // 0x186540: 0xc06127c  jal         func_1849F0
label_186544:
    if (ctx->pc == 0x186544u) {
        ctx->pc = 0x186548u;
        goto label_186548;
    }
    ctx->pc = 0x186540u;
    SET_GPR_U32(ctx, 31, 0x186548u);
    ctx->pc = 0x1849F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1849F0u, 0x186540u, 0x186548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186548u;
label_186548:
    // 0x186548: 0x1602fff5  bne         $s0, $v0, . + 4 + (-0xB << 2)
label_18654c:
    if (ctx->pc == 0x18654Cu) {
        ctx->pc = 0x186550u;
        goto label_186550;
    }
    ctx->pc = 0x186548u;
    {
        const bool branch_taken_0x186548 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x186548) {
            ctx->pc = 0x186520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186520;
        }
    }
    ctx->pc = 0x186550u;
label_186550:
    // 0x186550: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x186550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_186554:
    // 0x186554: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x186554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_186558:
    // 0x186558: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x186558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_18655c:
    // 0x18655c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x18655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_186560:
    // 0x186560: 0x40f809  jalr        $v0
label_186564:
    if (ctx->pc == 0x186564u) {
        ctx->pc = 0x186568u;
        goto label_186568;
    }
    ctx->pc = 0x186560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186568u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186560u, 0x186568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186568u;
label_186568:
    // 0x186568: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x186568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_18656c:
    // 0x18656c: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x18656cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_186570:
    // 0x186570: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x186570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_186574:
    // 0x186574: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x186574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_186578:
    // 0x186578: 0x40f809  jalr        $v0
label_18657c:
    if (ctx->pc == 0x18657Cu) {
        ctx->pc = 0x186580u;
        goto label_186580;
    }
    ctx->pc = 0x186578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186580u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186578u, 0x186580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186580u;
label_186580:
    // 0x186580: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_186584:
    // 0x186584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_186588:
    // 0x186588: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x186588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18658c:
    // 0x18658c: 0x3e00008  jr          $ra
label_186590:
    if (ctx->pc == 0x186590u) {
        ctx->pc = 0x186594u;
        goto label_186594;
    }
    ctx->pc = 0x18658Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18658Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186594u;
label_186594:
    // 0x186594: 0x0  nop
    ctx->pc = 0x186594u;
    // NOP
label_186598:
    // 0x186598: 0x0  nop
    ctx->pc = 0x186598u;
    // NOP
label_18659c:
    // 0x18659c: 0x0  nop
    ctx->pc = 0x18659cu;
    // NOP
    ctx->pc = 0x1865a0u;
}
