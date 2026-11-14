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

// Function: sub_004705F0
// Address: 0x4705f0 - 0x470770
void sub_004705F0_0x4705f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004705F0_0x4705f0");
#endif

    switch (ctx->pc) {
        case 0x4705f0u: goto label_4705f0;
        case 0x4705f4u: goto label_4705f4;
        case 0x4705f8u: goto label_4705f8;
        case 0x4705fcu: goto label_4705fc;
        case 0x470600u: goto label_470600;
        case 0x470604u: goto label_470604;
        case 0x470608u: goto label_470608;
        case 0x47060cu: goto label_47060c;
        case 0x470610u: goto label_470610;
        case 0x470614u: goto label_470614;
        case 0x470618u: goto label_470618;
        case 0x47061cu: goto label_47061c;
        case 0x470620u: goto label_470620;
        case 0x470624u: goto label_470624;
        case 0x470628u: goto label_470628;
        case 0x47062cu: goto label_47062c;
        case 0x470630u: goto label_470630;
        case 0x470634u: goto label_470634;
        case 0x470638u: goto label_470638;
        case 0x47063cu: goto label_47063c;
        case 0x470640u: goto label_470640;
        case 0x470644u: goto label_470644;
        case 0x470648u: goto label_470648;
        case 0x47064cu: goto label_47064c;
        case 0x470650u: goto label_470650;
        case 0x470654u: goto label_470654;
        case 0x470658u: goto label_470658;
        case 0x47065cu: goto label_47065c;
        case 0x470660u: goto label_470660;
        case 0x470664u: goto label_470664;
        case 0x470668u: goto label_470668;
        case 0x47066cu: goto label_47066c;
        case 0x470670u: goto label_470670;
        case 0x470674u: goto label_470674;
        case 0x470678u: goto label_470678;
        case 0x47067cu: goto label_47067c;
        case 0x470680u: goto label_470680;
        case 0x470684u: goto label_470684;
        case 0x470688u: goto label_470688;
        case 0x47068cu: goto label_47068c;
        case 0x470690u: goto label_470690;
        case 0x470694u: goto label_470694;
        case 0x470698u: goto label_470698;
        case 0x47069cu: goto label_47069c;
        case 0x4706a0u: goto label_4706a0;
        case 0x4706a4u: goto label_4706a4;
        case 0x4706a8u: goto label_4706a8;
        case 0x4706acu: goto label_4706ac;
        case 0x4706b0u: goto label_4706b0;
        case 0x4706b4u: goto label_4706b4;
        case 0x4706b8u: goto label_4706b8;
        case 0x4706bcu: goto label_4706bc;
        case 0x4706c0u: goto label_4706c0;
        case 0x4706c4u: goto label_4706c4;
        case 0x4706c8u: goto label_4706c8;
        case 0x4706ccu: goto label_4706cc;
        case 0x4706d0u: goto label_4706d0;
        case 0x4706d4u: goto label_4706d4;
        case 0x4706d8u: goto label_4706d8;
        case 0x4706dcu: goto label_4706dc;
        case 0x4706e0u: goto label_4706e0;
        case 0x4706e4u: goto label_4706e4;
        case 0x4706e8u: goto label_4706e8;
        case 0x4706ecu: goto label_4706ec;
        case 0x4706f0u: goto label_4706f0;
        case 0x4706f4u: goto label_4706f4;
        case 0x4706f8u: goto label_4706f8;
        case 0x4706fcu: goto label_4706fc;
        case 0x470700u: goto label_470700;
        case 0x470704u: goto label_470704;
        case 0x470708u: goto label_470708;
        case 0x47070cu: goto label_47070c;
        case 0x470710u: goto label_470710;
        case 0x470714u: goto label_470714;
        case 0x470718u: goto label_470718;
        case 0x47071cu: goto label_47071c;
        case 0x470720u: goto label_470720;
        case 0x470724u: goto label_470724;
        case 0x470728u: goto label_470728;
        case 0x47072cu: goto label_47072c;
        case 0x470730u: goto label_470730;
        case 0x470734u: goto label_470734;
        case 0x470738u: goto label_470738;
        case 0x47073cu: goto label_47073c;
        case 0x470740u: goto label_470740;
        case 0x470744u: goto label_470744;
        case 0x470748u: goto label_470748;
        case 0x47074cu: goto label_47074c;
        case 0x470750u: goto label_470750;
        case 0x470754u: goto label_470754;
        case 0x470758u: goto label_470758;
        case 0x47075cu: goto label_47075c;
        case 0x470760u: goto label_470760;
        case 0x470764u: goto label_470764;
        case 0x470768u: goto label_470768;
        case 0x47076cu: goto label_47076c;
        default: break;
    }

    ctx->pc = 0x4705f0u;

label_4705f0:
    // 0x4705f0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x4705f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_4705f4:
    // 0x4705f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4705f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4705f8:
    // 0x4705f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4705f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4705fc:
    // 0x4705fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4705fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_470600:
    // 0x470600: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x470600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_470604:
    // 0x470604: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x470604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
label_470608:
    // 0x470608: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x470608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_47060c:
    // 0x47060c: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x47060cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_470610:
    // 0x470610: 0x8f82c050  lw          $v0, -0x3FB0($gp)
    ctx->pc = 0x470610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950992)));
label_470614:
    // 0x470614: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x470614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
label_470618:
    // 0x470618: 0x2792c050  addiu       $s2, $gp, -0x3FB0
    ctx->pc = 0x470618u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950992));
label_47061c:
    // 0x47061c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x47061cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_470620:
    // 0x470620: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x470620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_470624:
    // 0x470624: 0x8f82c050  lw          $v0, -0x3FB0($gp)
    ctx->pc = 0x470624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950992)));
label_470628:
    // 0x470628: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x470628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
label_47062c:
    // 0x47062c: 0x2791c050  addiu       $s1, $gp, -0x3FB0
    ctx->pc = 0x47062cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950992));
label_470630:
    // 0x470630: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x470630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_470634:
    // 0x470634: 0x8f84c050  lw          $a0, -0x3FB0($gp)
    ctx->pc = 0x470634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950992)));
label_470638:
    // 0x470638: 0xc44c0080  lwc1        $f12, 0x80($v0)
    ctx->pc = 0x470638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_47063c:
    // 0x47063c: 0xc10604c  jal         func_418130
label_470640:
    if (ctx->pc == 0x470640u) {
        ctx->pc = 0x470644u;
        goto label_470644;
    }
    ctx->pc = 0x47063Cu;
    SET_GPR_U32(ctx, 31, 0x470644u);
    ctx->pc = 0x418130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418130u, 0x47063Cu, 0x470644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470644u;
label_470644:
    // 0x470644: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x470644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_470648:
    // 0x470648: 0x8f84c050  lw          $a0, -0x3FB0($gp)
    ctx->pc = 0x470648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950992)));
label_47064c:
    // 0x47064c: 0xc44c0084  lwc1        $f12, 0x84($v0)
    ctx->pc = 0x47064cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_470650:
    // 0x470650: 0xc106080  jal         func_418200
label_470654:
    if (ctx->pc == 0x470654u) {
        ctx->pc = 0x470658u;
        goto label_470658;
    }
    ctx->pc = 0x470650u;
    SET_GPR_U32(ctx, 31, 0x470658u);
    ctx->pc = 0x418200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418200u, 0x470650u, 0x470658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470658u;
label_470658:
    // 0x470658: 0x8f84c050  lw          $a0, -0x3FB0($gp)
    ctx->pc = 0x470658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950992)));
label_47065c:
    // 0x47065c: 0xc0eb8bc  jal         func_3AE2F0
label_470660:
    if (ctx->pc == 0x470660u) {
        ctx->pc = 0x470664u;
        goto label_470664;
    }
    ctx->pc = 0x47065Cu;
    SET_GPR_U32(ctx, 31, 0x470664u);
    ctx->pc = 0x3AE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE2F0u, 0x47065Cu, 0x470664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470664u;
label_470664:
    // 0x470664: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x470664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_470668:
    // 0x470668: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x470668u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_47066c:
    // 0x47066c: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x47066cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_470670:
    // 0x470670: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x470670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_470674:
    // 0x470674: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_470678:
    if (ctx->pc == 0x470678u) {
        ctx->pc = 0x47067Cu;
        goto label_47067c;
    }
    ctx->pc = 0x470674u;
    {
        const bool branch_taken_0x470674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470674) {
            ctx->pc = 0x470720u;
            goto label_470720;
        }
    }
    ctx->pc = 0x47067Cu;
label_47067c:
    // 0x47067c: 0x8f82b34c  lw          $v0, -0x4CB4($gp)
    ctx->pc = 0x47067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947660)));
label_470680:
    // 0x470680: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_470684:
    if (ctx->pc == 0x470684u) {
        ctx->pc = 0x470688u;
        goto label_470688;
    }
    ctx->pc = 0x470680u;
    {
        const bool branch_taken_0x470680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470680) {
            ctx->pc = 0x470720u;
            goto label_470720;
        }
    }
    ctx->pc = 0x470688u;
label_470688:
    // 0x470688: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x470688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47068c:
    // 0x47068c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47068cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470690:
    // 0x470690: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x470690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_470694:
    // 0x470694: 0xc115ee8  jal         func_457BA0
label_470698:
    if (ctx->pc == 0x470698u) {
        ctx->pc = 0x47069Cu;
        goto label_47069c;
    }
    ctx->pc = 0x470694u;
    SET_GPR_U32(ctx, 31, 0x47069Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x470694u, 0x47069Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47069Cu;
label_47069c:
    // 0x47069c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_4706a0:
    if (ctx->pc == 0x4706A0u) {
        ctx->pc = 0x4706A4u;
        goto label_4706a4;
    }
    ctx->pc = 0x47069Cu;
    {
        const bool branch_taken_0x47069c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47069c) {
            ctx->pc = 0x470720u;
            goto label_470720;
        }
    }
    ctx->pc = 0x4706A4u;
label_4706a4:
    // 0x4706a4: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x4706a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_4706a8:
    // 0x4706a8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4706ac:
    if (ctx->pc == 0x4706ACu) {
        ctx->pc = 0x4706B0u;
        goto label_4706b0;
    }
    ctx->pc = 0x4706A8u;
    {
        const bool branch_taken_0x4706a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4706a8) {
            ctx->pc = 0x470720u;
            goto label_470720;
        }
    }
    ctx->pc = 0x4706B0u;
label_4706b0:
    // 0x4706b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4706b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4706b4:
    // 0x4706b4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4706b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4706b8:
    // 0x4706b8: 0x8fa60164  lw          $a2, 0x164($sp)
    ctx->pc = 0x4706b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_4706bc:
    // 0x4706bc: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4706bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4706c0:
    // 0x4706c0: 0x24e7fe30  addiu       $a3, $a3, -0x1D0
    ctx->pc = 0x4706c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966832));
label_4706c4:
    // 0x4706c4: 0x2408009d  addiu       $t0, $zero, 0x9D
    ctx->pc = 0x4706c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
label_4706c8:
    // 0x4706c8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4706c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4706cc:
    // 0x4706cc: 0x2529ff80  addiu       $t1, $t1, -0x80
    ctx->pc = 0x4706ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967168));
label_4706d0:
    // 0x4706d0: 0xc113940  jal         func_44E500
label_4706d4:
    if (ctx->pc == 0x4706D4u) {
        ctx->pc = 0x4706D8u;
        goto label_4706d8;
    }
    ctx->pc = 0x4706D0u;
    SET_GPR_U32(ctx, 31, 0x4706D8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4706D0u, 0x4706D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4706D8u;
label_4706d8:
    // 0x4706d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4706d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4706dc:
    // 0x4706dc: 0x2785b350  addiu       $a1, $gp, -0x4CB0
    ctx->pc = 0x4706dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947664));
label_4706e0:
    // 0x4706e0: 0xc115c24  jal         func_457090
label_4706e4:
    if (ctx->pc == 0x4706E4u) {
        ctx->pc = 0x4706E8u;
        goto label_4706e8;
    }
    ctx->pc = 0x4706E0u;
    SET_GPR_U32(ctx, 31, 0x4706E8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4706E0u, 0x4706E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4706E8u;
label_4706e8:
    // 0x4706e8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4706e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4706ec:
    // 0x4706ec: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x4706ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_4706f0:
    // 0x4706f0: 0x40f809  jalr        $v0
label_4706f4:
    if (ctx->pc == 0x4706F4u) {
        ctx->pc = 0x4706F8u;
        goto label_4706f8;
    }
    ctx->pc = 0x4706F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4706F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4706F0u, 0x4706F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4706F8u;
label_4706f8:
    // 0x4706f8: 0xaf82b34c  sw          $v0, -0x4CB4($gp)
    ctx->pc = 0x4706f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947660), GPR_U32(ctx, 2));
label_4706fc:
    // 0x4706fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4706fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_470700:
    // 0x470700: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_470704:
    if (ctx->pc == 0x470704u) {
        ctx->pc = 0x470708u;
        goto label_470708;
    }
    ctx->pc = 0x470700u;
    {
        const bool branch_taken_0x470700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470700) {
            ctx->pc = 0x470710u;
            goto label_470710;
        }
    }
    ctx->pc = 0x470708u;
label_470708:
    // 0x470708: 0xd  break       0
    ctx->pc = 0x470708u;
    runtime->handleBreak(rdram, ctx);
label_47070c:
    // 0x47070c: 0x0  nop
    ctx->pc = 0x47070cu;
    // NOP
label_470710:
    // 0x470710: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x470710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_470714:
    // 0x470714: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x470714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_470718:
    // 0x470718: 0xc11392c  jal         func_44E4B0
label_47071c:
    if (ctx->pc == 0x47071Cu) {
        ctx->pc = 0x470720u;
        goto label_470720;
    }
    ctx->pc = 0x470718u;
    SET_GPR_U32(ctx, 31, 0x470720u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x470718u, 0x470720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470720u;
label_470720:
    // 0x470720: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x470720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_470724:
    // 0x470724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x470724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_470728:
    // 0x470728: 0x0  nop
    ctx->pc = 0x470728u;
    // NOP
label_47072c:
    // 0x47072c: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x47072cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_470730:
    // 0x470730: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x470730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_470734:
    // 0x470734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x470734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_470738:
    // 0x470738: 0x0  nop
    ctx->pc = 0x470738u;
    // NOP
label_47073c:
    // 0x47073c: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x47073cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_470740:
    // 0x470740: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x470740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_470744:
    // 0x470744: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x470744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_470748:
    // 0x470748: 0xc0eb5ce  jal         func_3AD738
label_47074c:
    if (ctx->pc == 0x47074Cu) {
        ctx->pc = 0x470750u;
        goto label_470750;
    }
    ctx->pc = 0x470748u;
    SET_GPR_U32(ctx, 31, 0x470750u);
    ctx->pc = 0x3AD738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD738u, 0x470748u, 0x470750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470750u;
label_470750:
    // 0x470750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x470750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_470754:
    // 0x470754: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x470754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_470758:
    // 0x470758: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x470758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47075c:
    // 0x47075c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47075cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_470760:
    // 0x470760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x470760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_470764:
    // 0x470764: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x470764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_470768:
    // 0x470768: 0x3e00008  jr          $ra
label_47076c:
    if (ctx->pc == 0x47076Cu) {
        ctx->pc = 0x470770u;
        goto label_fallthrough_0x470768;
    }
    ctx->pc = 0x470768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x470768:
    ctx->pc = 0x470770u;
}
