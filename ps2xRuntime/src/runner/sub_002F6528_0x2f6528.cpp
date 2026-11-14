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

// Function: sub_002F6528
// Address: 0x2f6528 - 0x2f6750
void sub_002F6528_0x2f6528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6528_0x2f6528");
#endif

    switch (ctx->pc) {
        case 0x2f6528u: goto label_2f6528;
        case 0x2f652cu: goto label_2f652c;
        case 0x2f6530u: goto label_2f6530;
        case 0x2f6534u: goto label_2f6534;
        case 0x2f6538u: goto label_2f6538;
        case 0x2f653cu: goto label_2f653c;
        case 0x2f6540u: goto label_2f6540;
        case 0x2f6544u: goto label_2f6544;
        case 0x2f6548u: goto label_2f6548;
        case 0x2f654cu: goto label_2f654c;
        case 0x2f6550u: goto label_2f6550;
        case 0x2f6554u: goto label_2f6554;
        case 0x2f6558u: goto label_2f6558;
        case 0x2f655cu: goto label_2f655c;
        case 0x2f6560u: goto label_2f6560;
        case 0x2f6564u: goto label_2f6564;
        case 0x2f6568u: goto label_2f6568;
        case 0x2f656cu: goto label_2f656c;
        case 0x2f6570u: goto label_2f6570;
        case 0x2f6574u: goto label_2f6574;
        case 0x2f6578u: goto label_2f6578;
        case 0x2f657cu: goto label_2f657c;
        case 0x2f6580u: goto label_2f6580;
        case 0x2f6584u: goto label_2f6584;
        case 0x2f6588u: goto label_2f6588;
        case 0x2f658cu: goto label_2f658c;
        case 0x2f6590u: goto label_2f6590;
        case 0x2f6594u: goto label_2f6594;
        case 0x2f6598u: goto label_2f6598;
        case 0x2f659cu: goto label_2f659c;
        case 0x2f65a0u: goto label_2f65a0;
        case 0x2f65a4u: goto label_2f65a4;
        case 0x2f65a8u: goto label_2f65a8;
        case 0x2f65acu: goto label_2f65ac;
        case 0x2f65b0u: goto label_2f65b0;
        case 0x2f65b4u: goto label_2f65b4;
        case 0x2f65b8u: goto label_2f65b8;
        case 0x2f65bcu: goto label_2f65bc;
        case 0x2f65c0u: goto label_2f65c0;
        case 0x2f65c4u: goto label_2f65c4;
        case 0x2f65c8u: goto label_2f65c8;
        case 0x2f65ccu: goto label_2f65cc;
        case 0x2f65d0u: goto label_2f65d0;
        case 0x2f65d4u: goto label_2f65d4;
        case 0x2f65d8u: goto label_2f65d8;
        case 0x2f65dcu: goto label_2f65dc;
        case 0x2f65e0u: goto label_2f65e0;
        case 0x2f65e4u: goto label_2f65e4;
        case 0x2f65e8u: goto label_2f65e8;
        case 0x2f65ecu: goto label_2f65ec;
        case 0x2f65f0u: goto label_2f65f0;
        case 0x2f65f4u: goto label_2f65f4;
        case 0x2f65f8u: goto label_2f65f8;
        case 0x2f65fcu: goto label_2f65fc;
        case 0x2f6600u: goto label_2f6600;
        case 0x2f6604u: goto label_2f6604;
        case 0x2f6608u: goto label_2f6608;
        case 0x2f660cu: goto label_2f660c;
        case 0x2f6610u: goto label_2f6610;
        case 0x2f6614u: goto label_2f6614;
        case 0x2f6618u: goto label_2f6618;
        case 0x2f661cu: goto label_2f661c;
        case 0x2f6620u: goto label_2f6620;
        case 0x2f6624u: goto label_2f6624;
        case 0x2f6628u: goto label_2f6628;
        case 0x2f662cu: goto label_2f662c;
        case 0x2f6630u: goto label_2f6630;
        case 0x2f6634u: goto label_2f6634;
        case 0x2f6638u: goto label_2f6638;
        case 0x2f663cu: goto label_2f663c;
        case 0x2f6640u: goto label_2f6640;
        case 0x2f6644u: goto label_2f6644;
        case 0x2f6648u: goto label_2f6648;
        case 0x2f664cu: goto label_2f664c;
        case 0x2f6650u: goto label_2f6650;
        case 0x2f6654u: goto label_2f6654;
        case 0x2f6658u: goto label_2f6658;
        case 0x2f665cu: goto label_2f665c;
        case 0x2f6660u: goto label_2f6660;
        case 0x2f6664u: goto label_2f6664;
        case 0x2f6668u: goto label_2f6668;
        case 0x2f666cu: goto label_2f666c;
        case 0x2f6670u: goto label_2f6670;
        case 0x2f6674u: goto label_2f6674;
        case 0x2f6678u: goto label_2f6678;
        case 0x2f667cu: goto label_2f667c;
        case 0x2f6680u: goto label_2f6680;
        case 0x2f6684u: goto label_2f6684;
        case 0x2f6688u: goto label_2f6688;
        case 0x2f668cu: goto label_2f668c;
        case 0x2f6690u: goto label_2f6690;
        case 0x2f6694u: goto label_2f6694;
        case 0x2f6698u: goto label_2f6698;
        case 0x2f669cu: goto label_2f669c;
        case 0x2f66a0u: goto label_2f66a0;
        case 0x2f66a4u: goto label_2f66a4;
        case 0x2f66a8u: goto label_2f66a8;
        case 0x2f66acu: goto label_2f66ac;
        case 0x2f66b0u: goto label_2f66b0;
        case 0x2f66b4u: goto label_2f66b4;
        case 0x2f66b8u: goto label_2f66b8;
        case 0x2f66bcu: goto label_2f66bc;
        case 0x2f66c0u: goto label_2f66c0;
        case 0x2f66c4u: goto label_2f66c4;
        case 0x2f66c8u: goto label_2f66c8;
        case 0x2f66ccu: goto label_2f66cc;
        case 0x2f66d0u: goto label_2f66d0;
        case 0x2f66d4u: goto label_2f66d4;
        case 0x2f66d8u: goto label_2f66d8;
        case 0x2f66dcu: goto label_2f66dc;
        case 0x2f66e0u: goto label_2f66e0;
        case 0x2f66e4u: goto label_2f66e4;
        case 0x2f66e8u: goto label_2f66e8;
        case 0x2f66ecu: goto label_2f66ec;
        case 0x2f66f0u: goto label_2f66f0;
        case 0x2f66f4u: goto label_2f66f4;
        case 0x2f66f8u: goto label_2f66f8;
        case 0x2f66fcu: goto label_2f66fc;
        case 0x2f6700u: goto label_2f6700;
        case 0x2f6704u: goto label_2f6704;
        case 0x2f6708u: goto label_2f6708;
        case 0x2f670cu: goto label_2f670c;
        case 0x2f6710u: goto label_2f6710;
        case 0x2f6714u: goto label_2f6714;
        case 0x2f6718u: goto label_2f6718;
        case 0x2f671cu: goto label_2f671c;
        case 0x2f6720u: goto label_2f6720;
        case 0x2f6724u: goto label_2f6724;
        case 0x2f6728u: goto label_2f6728;
        case 0x2f672cu: goto label_2f672c;
        case 0x2f6730u: goto label_2f6730;
        case 0x2f6734u: goto label_2f6734;
        case 0x2f6738u: goto label_2f6738;
        case 0x2f673cu: goto label_2f673c;
        case 0x2f6740u: goto label_2f6740;
        case 0x2f6744u: goto label_2f6744;
        case 0x2f6748u: goto label_2f6748;
        case 0x2f674cu: goto label_2f674c;
        default: break;
    }

    ctx->pc = 0x2f6528u;

label_2f6528:
    // 0x2f6528: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2f6528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2f652c:
    // 0x2f652c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2f652cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_2f6530:
    // 0x2f6530: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2f6530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_2f6534:
    // 0x2f6534: 0x3c1e0061  lui         $fp, 0x61
    ctx->pc = 0x2f6534u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)97 << 16));
label_2f6538:
    // 0x2f6538: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2f6538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2f653c:
    // 0x2f653c: 0x3c17004f  lui         $s7, 0x4F
    ctx->pc = 0x2f653cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)79 << 16));
label_2f6540:
    // 0x2f6540: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2f6540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2f6544:
    // 0x2f6544: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x2f6544u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
label_2f6548:
    // 0x2f6548: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f6548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2f654c:
    // 0x2f654c: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x2f654cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
label_2f6550:
    // 0x2f6550: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f6550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2f6554:
    // 0x2f6554: 0x3c14004f  lui         $s4, 0x4F
    ctx->pc = 0x2f6554u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)79 << 16));
label_2f6558:
    // 0x2f6558: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f6558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2f655c:
    // 0x2f655c: 0x3c13004f  lui         $s3, 0x4F
    ctx->pc = 0x2f655cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)79 << 16));
label_2f6560:
    // 0x2f6560: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f6560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2f6564:
    // 0x2f6564: 0x3c120061  lui         $s2, 0x61
    ctx->pc = 0x2f6564u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)97 << 16));
label_2f6568:
    // 0x2f6568: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f6568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2f656c:
    // 0x2f656c: 0x3c11004f  lui         $s1, 0x4F
    ctx->pc = 0x2f656cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)79 << 16));
label_2f6570:
    // 0x2f6570: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f6570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f6574:
    // 0x2f6574: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f6574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2f6578:
    // 0x2f6578: 0xc0bf6e8  jal         func_2FDBA0
label_2f657c:
    if (ctx->pc == 0x2F657Cu) {
        ctx->pc = 0x2F657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6578u;
        // 0x2f657c: 0x8c44ef20  lw          $a0, -0x10E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962976)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6580u;
        goto label_2f6580;
    }
    ctx->pc = 0x2F6578u;
    SET_GPR_U32(ctx, 31, 0x2F6580u);
    ctx->pc = 0x2F657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6578u;
    // 0x2f657c: 0x8c44ef20  lw          $a0, -0x10E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962976)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x2F6578u, 0x2F6580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6580u;
label_2f6580:
    // 0x2f6580: 0x8e83ef60  lw          $v1, -0x10A0($s4)
    ctx->pc = 0x2f6580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294963040)));
label_2f6584:
    // 0x2f6584: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f6584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f6588:
    // 0x2f6588: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_2f658c:
    if (ctx->pc == 0x2F658Cu) {
        ctx->pc = 0x2F658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6588u;
        // 0x2f658c: 0x8ee2ef10  lw          $v0, -0x10F0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294962960)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6590u;
        goto label_2f6590;
    }
    ctx->pc = 0x2F6588u;
    {
        const bool branch_taken_0x2f6588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6588u;
        // 0x2f658c: 0x8ee2ef10  lw          $v0, -0x10F0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294962960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6588) {
            ctx->pc = 0x2F65ACu;
            goto label_2f65ac;
        }
    }
    ctx->pc = 0x2F6590u;
label_2f6590:
    // 0x2f6590: 0xae60ef34  sw          $zero, -0x10CC($s3)
    ctx->pc = 0x2f6590u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294962996), GPR_U32(ctx, 0));
label_2f6594:
    // 0x2f6594: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f6594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2f6598:
    // 0x2f6598: 0xae80ef60  sw          $zero, -0x10A0($s4)
    ctx->pc = 0x2f6598u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294963040), GPR_U32(ctx, 0));
label_2f659c:
    // 0x2f659c: 0x0  nop
    ctx->pc = 0x2f659cu;
    // NOP
label_2f65a0:
    // 0x2f65a0: 0xc0bf668  jal         func_2FD9A0
label_2f65a4:
    if (ctx->pc == 0x2F65A4u) {
        ctx->pc = 0x2F65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65A0u;
        // 0x2f65a4: 0xafc0c394  sw          $zero, -0x3C6C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294951828), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F65A8u;
        goto label_2f65a8;
    }
    ctx->pc = 0x2F65A0u;
    SET_GPR_U32(ctx, 31, 0x2F65A8u);
    ctx->pc = 0x2F65A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F65A0u;
    // 0x2f65a4: 0xafc0c394  sw          $zero, -0x3C6C($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294951828), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD9A0u, 0x2F65A0u, 0x2F65A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F65A8u;
label_2f65a8:
    // 0x2f65a8: 0x8ee2ef10  lw          $v0, -0x10F0($s7)
    ctx->pc = 0x2f65a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294962960)));
label_2f65ac:
    // 0x2f65ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_2f65b0:
    if (ctx->pc == 0x2F65B0u) {
        ctx->pc = 0x2F65B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65ACu;
        // 0x2f65b0: 0x26c499f0  addiu       $a0, $s6, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F65B4u;
        goto label_2f65b4;
    }
    ctx->pc = 0x2F65ACu;
    {
        const bool branch_taken_0x2f65ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F65B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65ACu;
        // 0x2f65b0: 0x26c499f0  addiu       $a0, $s6, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f65ac) {
            ctx->pc = 0x2F65C0u;
            goto label_2f65c0;
        }
    }
    ctx->pc = 0x2F65B4u;
label_2f65b4:
    // 0x2f65b4: 0x8e45c380  lw          $a1, -0x3C80($s2)
    ctx->pc = 0x2f65b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951808)));
label_2f65b8:
    // 0x2f65b8: 0xc0c0212  jal         func_300848
label_2f65bc:
    if (ctx->pc == 0x2F65BCu) {
        ctx->pc = 0x2F65BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65B8u;
        // 0x2f65bc: 0x8e26ef64  lw          $a2, -0x109C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963044)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F65C0u;
        goto label_2f65c0;
    }
    ctx->pc = 0x2F65B8u;
    SET_GPR_U32(ctx, 31, 0x2F65C0u);
    ctx->pc = 0x2F65BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F65B8u;
    // 0x2f65bc: 0x8e26ef64  lw          $a2, -0x109C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963044)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x2F65B8u, 0x2F65C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F65C0u;
label_2f65c0:
    // 0x2f65c0: 0x8e43c380  lw          $v1, -0x3C80($s2)
    ctx->pc = 0x2f65c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951808)));
label_2f65c4:
    // 0x2f65c4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2f65c8:
    if (ctx->pc == 0x2F65C8u) {
        ctx->pc = 0x2F65CCu;
        goto label_2f65cc;
    }
    ctx->pc = 0x2F65C4u;
    {
        const bool branch_taken_0x2f65c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f65c4) {
            ctx->pc = 0x2F65ECu;
            goto label_2f65ec;
        }
    }
    ctx->pc = 0x2F65CCu;
label_2f65cc:
    // 0x2f65cc: 0x8e22ef64  lw          $v0, -0x109C($s1)
    ctx->pc = 0x2f65ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963044)));
label_2f65d0:
    // 0x2f65d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2f65d4:
    if (ctx->pc == 0x2F65D4u) {
        ctx->pc = 0x2F65D8u;
        goto label_2f65d8;
    }
    ctx->pc = 0x2F65D0u;
    {
        const bool branch_taken_0x2f65d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f65d0) {
            ctx->pc = 0x2F65ECu;
            goto label_2f65ec;
        }
    }
    ctx->pc = 0x2F65D8u;
label_2f65d8:
    // 0x2f65d8: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f65d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f65dc:
    // 0x2f65dc: 0x8ebcc384  lw          $gp, -0x3C7C($s5)
    ctx->pc = 0x2f65dcu;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951812)));
label_2f65e0:
    // 0x2f65e0: 0x60f809  jalr        $v1
label_2f65e4:
    if (ctx->pc == 0x2F65E4u) {
        ctx->pc = 0x2F65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65E0u;
        // 0x2f65e4: 0x8e24ef64  lw          $a0, -0x109C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963044)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F65E8u;
        goto label_2f65e8;
    }
    ctx->pc = 0x2F65E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F65E8u);
        ctx->pc = 0x2F65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65E0u;
        // 0x2f65e4: 0x8e24ef64  lw          $a0, -0x109C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963044)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F65E0u, 0x2F65E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F65E8u;
label_2f65e8:
    // 0x2f65e8: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f65e8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f65ec:
    // 0x2f65ec: 0xae60ef34  sw          $zero, -0x10CC($s3)
    ctx->pc = 0x2f65ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294962996), GPR_U32(ctx, 0));
label_2f65f0:
    // 0x2f65f0: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
label_2f65f4:
    if (ctx->pc == 0x2F65F4u) {
        ctx->pc = 0x2F65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65F0u;
        // 0x2f65f4: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F65F8u;
        goto label_2f65f8;
    }
    ctx->pc = 0x2F65F0u;
    {
        const bool branch_taken_0x2f65f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65F0u;
        // 0x2f65f4: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f65f0) {
            ctx->pc = 0x2F6578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6578;
        }
    }
    ctx->pc = 0x2F65F8u;
label_2f65f8:
    // 0x2f65f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f65f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2f65fc:
    // 0x2f65fc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2f65fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f6600:
    // 0x2f6600: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f6600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2f6604:
    // 0x2f6604: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2f6604u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f6608:
    // 0x2f6608: 0x3c11004f  lui         $s1, 0x4F
    ctx->pc = 0x2f6608u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)79 << 16));
label_2f660c:
    // 0x2f660c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f660cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f6610:
    // 0x2f6610: 0x8e24ef14  lw          $a0, -0x10EC($s1)
    ctx->pc = 0x2f6610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962964)));
label_2f6614:
    // 0x2f6614: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2f6614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f6618:
    // 0x2f6618: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
label_2f661c:
    if (ctx->pc == 0x2F661Cu) {
        ctx->pc = 0x2F661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6618u;
        // 0x2f661c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6620u;
        goto label_2f6620;
    }
    ctx->pc = 0x2F6618u;
    {
        const bool branch_taken_0x2f6618 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6618u;
        // 0x2f661c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6618) {
            ctx->pc = 0x2F6670u;
            goto label_2f6670;
        }
    }
    ctx->pc = 0x2F6620u;
label_2f6620:
    // 0x2f6620: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2f6620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2f6624:
    // 0x2f6624: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2f6624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_2f6628:
    // 0x2f6628: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2f6628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2f662c:
    // 0x2f662c: 0x2442c398  addiu       $v0, $v0, -0x3C68
    ctx->pc = 0x2f662cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951832));
label_2f6630:
    // 0x2f6630: 0x24636528  addiu       $v1, $v1, 0x6528
    ctx->pc = 0x2f6630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25896));
label_2f6634:
    // 0x2f6634: 0x24a59a18  addiu       $a1, $a1, -0x65E8
    ctx->pc = 0x2f6634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941208));
label_2f6638:
    // 0x2f6638: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x2f6638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
label_2f663c:
    // 0x2f663c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f663cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f6640:
    // 0x2f6640: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2f6640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_2f6644:
    // 0x2f6644: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x2f6644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
label_2f6648:
    // 0x2f6648: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x2f6648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
label_2f664c:
    // 0x2f664c: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x2f664cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
label_2f6650:
    // 0x2f6650: 0xc0bf658  jal         func_2FD960
label_2f6654:
    if (ctx->pc == 0x2F6654u) {
        ctx->pc = 0x2F6654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6650u;
        // 0x2f6654: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6658u;
        goto label_2f6658;
    }
    ctx->pc = 0x2F6650u;
    SET_GPR_U32(ctx, 31, 0x2F6658u);
    ctx->pc = 0x2F6654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6650u;
    // 0x2f6654: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD960u, 0x2F6650u, 0x2F6658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6658u;
label_2f6658:
    // 0x2f6658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f665c:
    // 0x2f665c: 0xae22ef14  sw          $v0, -0x10EC($s1)
    ctx->pc = 0x2f665cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294962964), GPR_U32(ctx, 2));
label_2f6660:
    // 0x2f6660: 0xc0bfb28  jal         func_2FECA0
label_2f6664:
    if (ctx->pc == 0x2F6664u) {
        ctx->pc = 0x2F6664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6660u;
        // 0x2f6664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6668u;
        goto label_2f6668;
    }
    ctx->pc = 0x2F6660u;
    SET_GPR_U32(ctx, 31, 0x2F6668u);
    ctx->pc = 0x2F6664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6660u;
    // 0x2f6664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FECA0u, 0x2F6660u, 0x2F6668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6668u;
label_2f6668:
    // 0x2f6668: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f666c:
    if (ctx->pc == 0x2F666Cu) {
        ctx->pc = 0x2F666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6668u;
        // 0x2f666c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6670u;
        goto label_2f6670;
    }
    ctx->pc = 0x2F6668u;
    {
        const bool branch_taken_0x2f6668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6668u;
        // 0x2f666c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6668) {
            ctx->pc = 0x2F6680u;
            goto label_2f6680;
        }
    }
    ctx->pc = 0x2F6670u;
label_2f6670:
    // 0x2f6670: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2f6670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2f6674:
    // 0x2f6674: 0xc0bf67c  jal         func_2FD9F0
label_2f6678:
    if (ctx->pc == 0x2F6678u) {
        ctx->pc = 0x2F6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6674u;
        // 0x2f6678: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F667Cu;
        goto label_2f667c;
    }
    ctx->pc = 0x2F6674u;
    SET_GPR_U32(ctx, 31, 0x2F667Cu);
    ctx->pc = 0x2F6678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6674u;
    // 0x2f6678: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD9F0u, 0x2F6674u, 0x2F667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F667Cu;
label_2f667c:
    // 0x2f667c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f667cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f6680:
    // 0x2f6680: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f6680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f6684:
    // 0x2f6684: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f6684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f6688:
    // 0x2f6688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f6688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f668c:
    // 0x2f668c: 0x3e00008  jr          $ra
label_2f6690:
    if (ctx->pc == 0x2F6690u) {
        ctx->pc = 0x2F6690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F668Cu;
        // 0x2f6690: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6694u;
        goto label_2f6694;
    }
    ctx->pc = 0x2F668Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F668Cu;
        // 0x2f6690: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F668Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6694u;
label_2f6694:
    // 0x2f6694: 0x0  nop
    ctx->pc = 0x2f6694u;
    // NOP
label_2f6698:
    // 0x2f6698: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x2f6698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_2f669c:
    // 0x2f669c: 0x853825  or          $a3, $a0, $a1
    ctx->pc = 0x2f669cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_2f66a0:
    // 0x2f66a0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2f66a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2f66a4:
    // 0x2f66a4: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_2f66a8:
    if (ctx->pc == 0x2F66A8u) {
        ctx->pc = 0x2F66A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66A4u;
        // 0x2f66a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F66ACu;
        goto label_2f66ac;
    }
    ctx->pc = 0x2F66A4u;
    {
        const bool branch_taken_0x2f66a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F66A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66A4u;
        // 0x2f66a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f66a4) {
            ctx->pc = 0x2F66F8u;
            goto label_2f66f8;
        }
    }
    ctx->pc = 0x2F66ACu;
label_2f66ac:
    // 0x2f66ac: 0x8ce90008  lw          $t1, 0x8($a3)
    ctx->pc = 0x2f66acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_2f66b0:
    // 0x2f66b0: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_2f66b4:
    if (ctx->pc == 0x2F66B4u) {
        ctx->pc = 0x2F66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66B0u;
        // 0x2f66b4: 0x1255025  or          $t2, $t1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F66B8u;
        goto label_2f66b8;
    }
    ctx->pc = 0x2F66B0u;
    {
        const bool branch_taken_0x2f66b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66B0u;
        // 0x2f66b4: 0x1255025  or          $t2, $t1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f66b0) {
            ctx->pc = 0x2F66F8u;
            goto label_2f66f8;
        }
    }
    ctx->pc = 0x2F66B8u;
label_2f66b8:
    // 0x2f66b8: 0x24e80010  addiu       $t0, $a3, 0x10
    ctx->pc = 0x2f66b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_2f66bc:
    // 0x2f66bc: 0x3c0b004f  lui         $t3, 0x4F
    ctx->pc = 0x2f66bcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)79 << 16));
label_2f66c0:
    // 0x2f66c0: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x2f66c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_2f66c4:
    // 0x2f66c4: 0x0  nop
    ctx->pc = 0x2f66c4u;
    // NOP
label_2f66c8:
    // 0x2f66c8: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x2f66c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_2f66cc:
    // 0x2f66cc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2f66ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2f66d0:
    // 0x2f66d0: 0x1262021  addu        $a0, $t1, $a2
    ctx->pc = 0x2f66d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_2f66d4:
    // 0x2f66d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2f66d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2f66d8:
    // 0x2f66d8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2f66d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_2f66dc:
    // 0x2f66dc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2f66dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_2f66e0:
    // 0x2f66e0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2f66e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2f66e4:
    // 0x2f66e4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2f66e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f66e8:
    // 0x2f66e8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2f66ec:
    if (ctx->pc == 0x2F66ECu) {
        ctx->pc = 0x2F66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66E8u;
        // 0x2f66ec: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F66F0u;
        goto label_2f66f0;
    }
    ctx->pc = 0x2F66E8u;
    {
        const bool branch_taken_0x2f66e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F66ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66E8u;
        // 0x2f66ec: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f66e8) {
            ctx->pc = 0x2F66C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f66c8;
        }
    }
    ctx->pc = 0x2F66F0u;
label_2f66f0:
    // 0x2f66f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f66f4:
    if (ctx->pc == 0x2F66F4u) {
        ctx->pc = 0x2F66F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66F0u;
        // 0x2f66f4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F66F8u;
        goto label_2f66f8;
    }
    ctx->pc = 0x2F66F0u;
    {
        const bool branch_taken_0x2f66f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F66F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F66F0u;
        // 0x2f66f4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f66f0) {
            ctx->pc = 0x2F6700u;
            goto label_2f6700;
        }
    }
    ctx->pc = 0x2F66F8u;
label_2f66f8:
    // 0x2f66f8: 0x3c0b004f  lui         $t3, 0x4F
    ctx->pc = 0x2f66f8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)79 << 16));
label_2f66fc:
    // 0x2f66fc: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2f66fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_2f6700:
    // 0x2f6700: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
label_2f6704:
    if (ctx->pc == 0x2F6704u) {
        ctx->pc = 0x2F6704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6700u;
        // 0x2f6704: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6708u;
        goto label_2f6708;
    }
    ctx->pc = 0x2F6700u;
    {
        const bool branch_taken_0x2f6700 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F6704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6700u;
        // 0x2f6704: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6700) {
            ctx->pc = 0x2F6748u;
            goto label_2f6748;
        }
    }
    ctx->pc = 0x2F6708u;
label_2f6708:
    // 0x2f6708: 0x8ce9000c  lw          $t1, 0xC($a3)
    ctx->pc = 0x2f6708u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_2f670c:
    // 0x2f670c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f670cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6710:
    // 0x2f6710: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_2f6714:
    if (ctx->pc == 0x2F6714u) {
        ctx->pc = 0x2F6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6710u;
        // 0x2f6714: 0x1225025  or          $t2, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6718u;
        goto label_2f6718;
    }
    ctx->pc = 0x2F6710u;
    {
        const bool branch_taken_0x2f6710 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6710u;
        // 0x2f6714: 0x1225025  or          $t2, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6710) {
            ctx->pc = 0x2F6748u;
            goto label_2f6748;
        }
    }
    ctx->pc = 0x2F6718u;
label_2f6718:
    // 0x2f6718: 0x24e80050  addiu       $t0, $a3, 0x50
    ctx->pc = 0x2f6718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
label_2f671c:
    // 0x2f671c: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x2f671cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_2f6720:
    // 0x2f6720: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x2f6720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_2f6724:
    // 0x2f6724: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2f6724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2f6728:
    // 0x2f6728: 0x1262021  addu        $a0, $t1, $a2
    ctx->pc = 0x2f6728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_2f672c:
    // 0x2f672c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2f672cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2f6730:
    // 0x2f6730: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2f6730u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_2f6734:
    // 0x2f6734: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2f6734u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_2f6738:
    // 0x2f6738: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2f6738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_2f673c:
    // 0x2f673c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2f673cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f6740:
    // 0x2f6740: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2f6744:
    if (ctx->pc == 0x2F6744u) {
        ctx->pc = 0x2F6744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6740u;
        // 0x2f6744: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6748u;
        goto label_2f6748;
    }
    ctx->pc = 0x2F6740u;
    {
        const bool branch_taken_0x2f6740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6740u;
        // 0x2f6744: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6740) {
            ctx->pc = 0x2F6720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6720;
        }
    }
    ctx->pc = 0x2F6748u;
label_2f6748:
    // 0x2f6748: 0x80bd922  j           func_2F6488
label_2f674c:
    if (ctx->pc == 0x2F674Cu) {
        ctx->pc = 0x2F674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6748u;
        // 0x2f674c: 0x2564ef60  addiu       $a0, $t3, -0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294963040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6750u;
        goto label_fallthrough_0x2f6748;
    }
    ctx->pc = 0x2F6748u;
    ctx->pc = 0x2F674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6748u;
    // 0x2f674c: 0x2564ef60  addiu       $a0, $t3, -0x10A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294963040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6488u, 0x2F6748u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x2f6748:
    ctx->pc = 0x2F6750u;
}
