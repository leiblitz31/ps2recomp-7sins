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

// Function: sub_0045F430
// Address: 0x45f430 - 0x45f550
void sub_0045F430_0x45f430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045F430_0x45f430");
#endif

    switch (ctx->pc) {
        case 0x45f430u: goto label_45f430;
        case 0x45f434u: goto label_45f434;
        case 0x45f438u: goto label_45f438;
        case 0x45f43cu: goto label_45f43c;
        case 0x45f440u: goto label_45f440;
        case 0x45f444u: goto label_45f444;
        case 0x45f448u: goto label_45f448;
        case 0x45f44cu: goto label_45f44c;
        case 0x45f450u: goto label_45f450;
        case 0x45f454u: goto label_45f454;
        case 0x45f458u: goto label_45f458;
        case 0x45f45cu: goto label_45f45c;
        case 0x45f460u: goto label_45f460;
        case 0x45f464u: goto label_45f464;
        case 0x45f468u: goto label_45f468;
        case 0x45f46cu: goto label_45f46c;
        case 0x45f470u: goto label_45f470;
        case 0x45f474u: goto label_45f474;
        case 0x45f478u: goto label_45f478;
        case 0x45f47cu: goto label_45f47c;
        case 0x45f480u: goto label_45f480;
        case 0x45f484u: goto label_45f484;
        case 0x45f488u: goto label_45f488;
        case 0x45f48cu: goto label_45f48c;
        case 0x45f490u: goto label_45f490;
        case 0x45f494u: goto label_45f494;
        case 0x45f498u: goto label_45f498;
        case 0x45f49cu: goto label_45f49c;
        case 0x45f4a0u: goto label_45f4a0;
        case 0x45f4a4u: goto label_45f4a4;
        case 0x45f4a8u: goto label_45f4a8;
        case 0x45f4acu: goto label_45f4ac;
        case 0x45f4b0u: goto label_45f4b0;
        case 0x45f4b4u: goto label_45f4b4;
        case 0x45f4b8u: goto label_45f4b8;
        case 0x45f4bcu: goto label_45f4bc;
        case 0x45f4c0u: goto label_45f4c0;
        case 0x45f4c4u: goto label_45f4c4;
        case 0x45f4c8u: goto label_45f4c8;
        case 0x45f4ccu: goto label_45f4cc;
        case 0x45f4d0u: goto label_45f4d0;
        case 0x45f4d4u: goto label_45f4d4;
        case 0x45f4d8u: goto label_45f4d8;
        case 0x45f4dcu: goto label_45f4dc;
        case 0x45f4e0u: goto label_45f4e0;
        case 0x45f4e4u: goto label_45f4e4;
        case 0x45f4e8u: goto label_45f4e8;
        case 0x45f4ecu: goto label_45f4ec;
        case 0x45f4f0u: goto label_45f4f0;
        case 0x45f4f4u: goto label_45f4f4;
        case 0x45f4f8u: goto label_45f4f8;
        case 0x45f4fcu: goto label_45f4fc;
        case 0x45f500u: goto label_45f500;
        case 0x45f504u: goto label_45f504;
        case 0x45f508u: goto label_45f508;
        case 0x45f50cu: goto label_45f50c;
        case 0x45f510u: goto label_45f510;
        case 0x45f514u: goto label_45f514;
        case 0x45f518u: goto label_45f518;
        case 0x45f51cu: goto label_45f51c;
        case 0x45f520u: goto label_45f520;
        case 0x45f524u: goto label_45f524;
        case 0x45f528u: goto label_45f528;
        case 0x45f52cu: goto label_45f52c;
        case 0x45f530u: goto label_45f530;
        case 0x45f534u: goto label_45f534;
        case 0x45f538u: goto label_45f538;
        case 0x45f53cu: goto label_45f53c;
        case 0x45f540u: goto label_45f540;
        case 0x45f544u: goto label_45f544;
        case 0x45f548u: goto label_45f548;
        case 0x45f54cu: goto label_45f54c;
        default: break;
    }

    ctx->pc = 0x45f430u;

label_45f430:
    // 0x45f430: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x45f430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_45f434:
    // 0x45f434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45f434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_45f438:
    // 0x45f438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45f438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45f43c:
    // 0x45f43c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45f43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45f440:
    // 0x45f440: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x45f440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_45f444:
    // 0x45f444: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x45f444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
label_45f448:
    // 0x45f448: 0xafa60180  sw          $a2, 0x180($sp)
    ctx->pc = 0x45f448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 6));
label_45f44c:
    // 0x45f44c: 0x8fb10160  lw          $s1, 0x160($sp)
    ctx->pc = 0x45f44cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45f450:
    // 0x45f450: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x45f450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45f454:
    // 0x45f454: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x45f454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_45f458:
    // 0x45f458: 0xafb10170  sw          $s1, 0x170($sp)
    ctx->pc = 0x45f458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 17));
label_45f45c:
    // 0x45f45c: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x45f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45f460:
    // 0x45f460: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x45f460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_45f464:
    // 0x45f464: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x45f464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45f468:
    // 0x45f468: 0xc11818c  jal         func_460630
label_45f46c:
    if (ctx->pc == 0x45F46Cu) {
        ctx->pc = 0x45F470u;
        goto label_45f470;
    }
    ctx->pc = 0x45F468u;
    SET_GPR_U32(ctx, 31, 0x45F470u);
    ctx->pc = 0x460630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460630u, 0x45F468u, 0x45F470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F470u;
label_45f470:
    // 0x45f470: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45f470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45f474:
    // 0x45f474: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x45f474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_45f478:
    // 0x45f478: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_45f47c:
    if (ctx->pc == 0x45F47Cu) {
        ctx->pc = 0x45F480u;
        goto label_45f480;
    }
    ctx->pc = 0x45F478u;
    {
        const bool branch_taken_0x45f478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45f478) {
            ctx->pc = 0x45F528u;
            goto label_45f528;
        }
    }
    ctx->pc = 0x45F480u;
label_45f480:
    // 0x45f480: 0x8f82b1a0  lw          $v0, -0x4E60($gp)
    ctx->pc = 0x45f480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947232)));
label_45f484:
    // 0x45f484: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_45f488:
    if (ctx->pc == 0x45F488u) {
        ctx->pc = 0x45F48Cu;
        goto label_45f48c;
    }
    ctx->pc = 0x45F484u;
    {
        const bool branch_taken_0x45f484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f484) {
            ctx->pc = 0x45F528u;
            goto label_45f528;
        }
    }
    ctx->pc = 0x45F48Cu;
label_45f48c:
    // 0x45f48c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45f48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45f490:
    // 0x45f490: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45f490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45f494:
    // 0x45f494: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x45f494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_45f498:
    // 0x45f498: 0xc115ee8  jal         func_457BA0
label_45f49c:
    if (ctx->pc == 0x45F49Cu) {
        ctx->pc = 0x45F4A0u;
        goto label_45f4a0;
    }
    ctx->pc = 0x45F498u;
    SET_GPR_U32(ctx, 31, 0x45F4A0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45F498u, 0x45F4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F4A0u;
label_45f4a0:
    // 0x45f4a0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_45f4a4:
    if (ctx->pc == 0x45F4A4u) {
        ctx->pc = 0x45F4A8u;
        goto label_45f4a8;
    }
    ctx->pc = 0x45F4A0u;
    {
        const bool branch_taken_0x45f4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f4a0) {
            ctx->pc = 0x45F528u;
            goto label_45f528;
        }
    }
    ctx->pc = 0x45F4A8u;
label_45f4a8:
    // 0x45f4a8: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x45f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_45f4ac:
    // 0x45f4ac: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_45f4b0:
    if (ctx->pc == 0x45F4B0u) {
        ctx->pc = 0x45F4B4u;
        goto label_45f4b4;
    }
    ctx->pc = 0x45F4ACu;
    {
        const bool branch_taken_0x45f4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f4ac) {
            ctx->pc = 0x45F528u;
            goto label_45f528;
        }
    }
    ctx->pc = 0x45F4B4u;
label_45f4b4:
    // 0x45f4b4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45f4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45f4b8:
    // 0x45f4b8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45f4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45f4bc:
    // 0x45f4bc: 0x8fa60154  lw          $a2, 0x154($sp)
    ctx->pc = 0x45f4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_45f4c0:
    // 0x45f4c0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45f4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_45f4c4:
    // 0x45f4c4: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x45f4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_45f4c8:
    // 0x45f4c8: 0x2408024c  addiu       $t0, $zero, 0x24C
    ctx->pc = 0x45f4c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 588));
label_45f4cc:
    // 0x45f4cc: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x45f4ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_45f4d0:
    // 0x45f4d0: 0x2529edf0  addiu       $t1, $t1, -0x1210
    ctx->pc = 0x45f4d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962672));
label_45f4d4:
    // 0x45f4d4: 0xc113940  jal         func_44E500
label_45f4d8:
    if (ctx->pc == 0x45F4D8u) {
        ctx->pc = 0x45F4DCu;
        goto label_45f4dc;
    }
    ctx->pc = 0x45F4D4u;
    SET_GPR_U32(ctx, 31, 0x45F4DCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x45F4D4u, 0x45F4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F4DCu;
label_45f4dc:
    // 0x45f4dc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45f4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45f4e0:
    // 0x45f4e0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x45f4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_45f4e4:
    // 0x45f4e4: 0x24a5ee00  addiu       $a1, $a1, -0x1200
    ctx->pc = 0x45f4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962688));
label_45f4e8:
    // 0x45f4e8: 0xc115c24  jal         func_457090
label_45f4ec:
    if (ctx->pc == 0x45F4ECu) {
        ctx->pc = 0x45F4F0u;
        goto label_45f4f0;
    }
    ctx->pc = 0x45F4E8u;
    SET_GPR_U32(ctx, 31, 0x45F4F0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x45F4E8u, 0x45F4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F4F0u;
label_45f4f0:
    // 0x45f4f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45f4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45f4f4:
    // 0x45f4f4: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x45f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_45f4f8:
    // 0x45f4f8: 0x40f809  jalr        $v0
label_45f4fc:
    if (ctx->pc == 0x45F4FCu) {
        ctx->pc = 0x45F500u;
        goto label_45f500;
    }
    ctx->pc = 0x45F4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45F500u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F4F8u, 0x45F500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45F500u;
label_45f500:
    // 0x45f500: 0xaf82b1a0  sw          $v0, -0x4E60($gp)
    ctx->pc = 0x45f500u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947232), GPR_U32(ctx, 2));
label_45f504:
    // 0x45f504: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45f504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_45f508:
    // 0x45f508: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_45f50c:
    if (ctx->pc == 0x45F50Cu) {
        ctx->pc = 0x45F510u;
        goto label_45f510;
    }
    ctx->pc = 0x45F508u;
    {
        const bool branch_taken_0x45f508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f508) {
            ctx->pc = 0x45F518u;
            goto label_45f518;
        }
    }
    ctx->pc = 0x45F510u;
label_45f510:
    // 0x45f510: 0xd  break       0
    ctx->pc = 0x45f510u;
    runtime->handleBreak(rdram, ctx);
label_45f514:
    // 0x45f514: 0x0  nop
    ctx->pc = 0x45f514u;
    // NOP
label_45f518:
    // 0x45f518: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x45f518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45f51c:
    // 0x45f51c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45f51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45f520:
    // 0x45f520: 0xc11392c  jal         func_44E4B0
label_45f524:
    if (ctx->pc == 0x45F524u) {
        ctx->pc = 0x45F528u;
        goto label_45f528;
    }
    ctx->pc = 0x45F520u;
    SET_GPR_U32(ctx, 31, 0x45F528u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45F520u, 0x45F528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F528u;
label_45f528:
    // 0x45f528: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x45f528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_45f52c:
    // 0x45f52c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45f530:
    // 0x45f530: 0xac434e10  sw          $v1, 0x4E10($v0)
    ctx->pc = 0x45f530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 19984), GPR_U32(ctx, 3));
label_45f534:
    // 0x45f534: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x45f534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45f538:
    // 0x45f538: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45f538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_45f53c:
    // 0x45f53c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45f53cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45f540:
    // 0x45f540: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45f540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45f544:
    // 0x45f544: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x45f544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_45f548:
    // 0x45f548: 0x3e00008  jr          $ra
label_45f54c:
    if (ctx->pc == 0x45F54Cu) {
        ctx->pc = 0x45F550u;
        goto label_fallthrough_0x45f548;
    }
    ctx->pc = 0x45F548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x45f548:
    ctx->pc = 0x45F550u;
}
